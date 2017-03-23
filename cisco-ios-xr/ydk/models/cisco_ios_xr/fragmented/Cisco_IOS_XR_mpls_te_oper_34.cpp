
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_34.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_35.hpp"

namespace ydk {
namespace Cisco_IOS_XR_mpls_te_oper {

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::GmplsLabels::PathEgressLabel::Otn::Otn()
    :
    bit_map{YType::uint8, "bit-map"},
    bit_map_length{YType::uint16, "bit-map-length"},
    tpn{YType::uint16, "tpn"}
{
    yang_name = "otn"; yang_parent_name = "path-egress-label";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::GmplsLabels::PathEgressLabel::Otn::~Otn()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::GmplsLabels::PathEgressLabel::Otn::has_data() const
{
    for (auto const & leaf : bit_map.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return bit_map_length.is_set
	|| tpn.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::GmplsLabels::PathEgressLabel::Otn::has_operation() const
{
    for (auto const & leaf : bit_map.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(bit_map.operation)
	|| is_set(bit_map_length.operation)
	|| is_set(tpn.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::GmplsLabels::PathEgressLabel::Otn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otn";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::GmplsLabels::PathEgressLabel::Otn::get_entity_path(Entity* ancestor) const
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

    if (bit_map_length.is_set || is_set(bit_map_length.operation)) leaf_name_data.push_back(bit_map_length.get_name_leafdata());
    if (tpn.is_set || is_set(tpn.operation)) leaf_name_data.push_back(tpn.get_name_leafdata());

    auto bit_map_name_datas = bit_map.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), bit_map_name_datas.begin(), bit_map_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::GmplsLabels::PathEgressLabel::Otn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::GmplsLabels::PathEgressLabel::Otn::get_children()
{
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::GmplsLabels::PathEgressLabel::Otn::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bit-map")
    {
        bit_map.append(value);
    }
    if(value_path == "bit-map-length")
    {
        bit_map_length = value;
    }
    if(value_path == "tpn")
    {
        tpn = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::GmplsLabels::ResvIngressLabel::ResvIngressLabel()
    :
    label_type{YType::enumeration, "label-type"}
    	,
    otn(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::GmplsLabels::ResvIngressLabel::Otn>())
	,wdm(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::GmplsLabels::ResvIngressLabel::Wdm>())
{
    otn->parent = this;
    children["otn"] = otn;

    wdm->parent = this;
    children["wdm"] = wdm;

    yang_name = "resv-ingress-label"; yang_parent_name = "gmpls-labels";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::GmplsLabels::ResvIngressLabel::~ResvIngressLabel()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::GmplsLabels::ResvIngressLabel::has_data() const
{
    return label_type.is_set
	|| (otn !=  nullptr && otn->has_data())
	|| (wdm !=  nullptr && wdm->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::GmplsLabels::ResvIngressLabel::has_operation() const
{
    return is_set(operation)
	|| is_set(label_type.operation)
	|| (otn !=  nullptr && otn->has_operation())
	|| (wdm !=  nullptr && wdm->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::GmplsLabels::ResvIngressLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "resv-ingress-label";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::GmplsLabels::ResvIngressLabel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ResvIngressLabel' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_type.is_set || is_set(label_type.operation)) leaf_name_data.push_back(label_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::GmplsLabels::ResvIngressLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "otn")
    {
        if(otn != nullptr)
        {
            children["otn"] = otn;
        }
        else
        {
            otn = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::GmplsLabels::ResvIngressLabel::Otn>();
            otn->parent = this;
            children["otn"] = otn;
        }
        return children.at("otn");
    }

    if(child_yang_name == "wdm")
    {
        if(wdm != nullptr)
        {
            children["wdm"] = wdm;
        }
        else
        {
            wdm = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::GmplsLabels::ResvIngressLabel::Wdm>();
            wdm->parent = this;
            children["wdm"] = wdm;
        }
        return children.at("wdm");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::GmplsLabels::ResvIngressLabel::get_children()
{
    if(children.find("otn") == children.end())
    {
        if(otn != nullptr)
        {
            children["otn"] = otn;
        }
    }

    if(children.find("wdm") == children.end())
    {
        if(wdm != nullptr)
        {
            children["wdm"] = wdm;
        }
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::GmplsLabels::ResvIngressLabel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "label-type")
    {
        label_type = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::GmplsLabels::ResvIngressLabel::Wdm::Wdm()
    :
    channel{YType::int16, "channel"},
    channel_spacing{YType::enumeration, "channel-spacing"},
    grid{YType::enumeration, "grid"},
    identifier{YType::uint16, "identifier"},
    label_set{YType::boolean, "label-set"}
{
    yang_name = "wdm"; yang_parent_name = "resv-ingress-label";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::GmplsLabels::ResvIngressLabel::Wdm::~Wdm()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::GmplsLabels::ResvIngressLabel::Wdm::has_data() const
{
    return channel.is_set
	|| channel_spacing.is_set
	|| grid.is_set
	|| identifier.is_set
	|| label_set.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::GmplsLabels::ResvIngressLabel::Wdm::has_operation() const
{
    return is_set(operation)
	|| is_set(channel.operation)
	|| is_set(channel_spacing.operation)
	|| is_set(grid.operation)
	|| is_set(identifier.operation)
	|| is_set(label_set.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::GmplsLabels::ResvIngressLabel::Wdm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wdm";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::GmplsLabels::ResvIngressLabel::Wdm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Wdm' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (channel.is_set || is_set(channel.operation)) leaf_name_data.push_back(channel.get_name_leafdata());
    if (channel_spacing.is_set || is_set(channel_spacing.operation)) leaf_name_data.push_back(channel_spacing.get_name_leafdata());
    if (grid.is_set || is_set(grid.operation)) leaf_name_data.push_back(grid.get_name_leafdata());
    if (identifier.is_set || is_set(identifier.operation)) leaf_name_data.push_back(identifier.get_name_leafdata());
    if (label_set.is_set || is_set(label_set.operation)) leaf_name_data.push_back(label_set.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::GmplsLabels::ResvIngressLabel::Wdm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::GmplsLabels::ResvIngressLabel::Wdm::get_children()
{
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::GmplsLabels::ResvIngressLabel::Wdm::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "channel")
    {
        channel = value;
    }
    if(value_path == "channel-spacing")
    {
        channel_spacing = value;
    }
    if(value_path == "grid")
    {
        grid = value;
    }
    if(value_path == "identifier")
    {
        identifier = value;
    }
    if(value_path == "label-set")
    {
        label_set = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::GmplsLabels::ResvIngressLabel::Otn::Otn()
    :
    bit_map{YType::uint8, "bit-map"},
    bit_map_length{YType::uint16, "bit-map-length"},
    tpn{YType::uint16, "tpn"}
{
    yang_name = "otn"; yang_parent_name = "resv-ingress-label";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::GmplsLabels::ResvIngressLabel::Otn::~Otn()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::GmplsLabels::ResvIngressLabel::Otn::has_data() const
{
    for (auto const & leaf : bit_map.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return bit_map_length.is_set
	|| tpn.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::GmplsLabels::ResvIngressLabel::Otn::has_operation() const
{
    for (auto const & leaf : bit_map.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(bit_map.operation)
	|| is_set(bit_map_length.operation)
	|| is_set(tpn.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::GmplsLabels::ResvIngressLabel::Otn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otn";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::GmplsLabels::ResvIngressLabel::Otn::get_entity_path(Entity* ancestor) const
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

    if (bit_map_length.is_set || is_set(bit_map_length.operation)) leaf_name_data.push_back(bit_map_length.get_name_leafdata());
    if (tpn.is_set || is_set(tpn.operation)) leaf_name_data.push_back(tpn.get_name_leafdata());

    auto bit_map_name_datas = bit_map.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), bit_map_name_datas.begin(), bit_map_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::GmplsLabels::ResvIngressLabel::Otn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::GmplsLabels::ResvIngressLabel::Otn::get_children()
{
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::GmplsLabels::ResvIngressLabel::Otn::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bit-map")
    {
        bit_map.append(value);
    }
    if(value_path == "bit-map-length")
    {
        bit_map_length = value;
    }
    if(value_path == "tpn")
    {
        tpn = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::GmplsLabels::ResvEgressLabel::ResvEgressLabel()
    :
    label_type{YType::enumeration, "label-type"}
    	,
    otn(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::GmplsLabels::ResvEgressLabel::Otn>())
	,wdm(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::GmplsLabels::ResvEgressLabel::Wdm>())
{
    otn->parent = this;
    children["otn"] = otn;

    wdm->parent = this;
    children["wdm"] = wdm;

    yang_name = "resv-egress-label"; yang_parent_name = "gmpls-labels";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::GmplsLabels::ResvEgressLabel::~ResvEgressLabel()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::GmplsLabels::ResvEgressLabel::has_data() const
{
    return label_type.is_set
	|| (otn !=  nullptr && otn->has_data())
	|| (wdm !=  nullptr && wdm->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::GmplsLabels::ResvEgressLabel::has_operation() const
{
    return is_set(operation)
	|| is_set(label_type.operation)
	|| (otn !=  nullptr && otn->has_operation())
	|| (wdm !=  nullptr && wdm->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::GmplsLabels::ResvEgressLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "resv-egress-label";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::GmplsLabels::ResvEgressLabel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ResvEgressLabel' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_type.is_set || is_set(label_type.operation)) leaf_name_data.push_back(label_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::GmplsLabels::ResvEgressLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "otn")
    {
        if(otn != nullptr)
        {
            children["otn"] = otn;
        }
        else
        {
            otn = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::GmplsLabels::ResvEgressLabel::Otn>();
            otn->parent = this;
            children["otn"] = otn;
        }
        return children.at("otn");
    }

    if(child_yang_name == "wdm")
    {
        if(wdm != nullptr)
        {
            children["wdm"] = wdm;
        }
        else
        {
            wdm = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::GmplsLabels::ResvEgressLabel::Wdm>();
            wdm->parent = this;
            children["wdm"] = wdm;
        }
        return children.at("wdm");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::GmplsLabels::ResvEgressLabel::get_children()
{
    if(children.find("otn") == children.end())
    {
        if(otn != nullptr)
        {
            children["otn"] = otn;
        }
    }

    if(children.find("wdm") == children.end())
    {
        if(wdm != nullptr)
        {
            children["wdm"] = wdm;
        }
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::GmplsLabels::ResvEgressLabel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "label-type")
    {
        label_type = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::GmplsLabels::ResvEgressLabel::Wdm::Wdm()
    :
    channel{YType::int16, "channel"},
    channel_spacing{YType::enumeration, "channel-spacing"},
    grid{YType::enumeration, "grid"},
    identifier{YType::uint16, "identifier"},
    label_set{YType::boolean, "label-set"}
{
    yang_name = "wdm"; yang_parent_name = "resv-egress-label";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::GmplsLabels::ResvEgressLabel::Wdm::~Wdm()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::GmplsLabels::ResvEgressLabel::Wdm::has_data() const
{
    return channel.is_set
	|| channel_spacing.is_set
	|| grid.is_set
	|| identifier.is_set
	|| label_set.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::GmplsLabels::ResvEgressLabel::Wdm::has_operation() const
{
    return is_set(operation)
	|| is_set(channel.operation)
	|| is_set(channel_spacing.operation)
	|| is_set(grid.operation)
	|| is_set(identifier.operation)
	|| is_set(label_set.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::GmplsLabels::ResvEgressLabel::Wdm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wdm";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::GmplsLabels::ResvEgressLabel::Wdm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Wdm' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (channel.is_set || is_set(channel.operation)) leaf_name_data.push_back(channel.get_name_leafdata());
    if (channel_spacing.is_set || is_set(channel_spacing.operation)) leaf_name_data.push_back(channel_spacing.get_name_leafdata());
    if (grid.is_set || is_set(grid.operation)) leaf_name_data.push_back(grid.get_name_leafdata());
    if (identifier.is_set || is_set(identifier.operation)) leaf_name_data.push_back(identifier.get_name_leafdata());
    if (label_set.is_set || is_set(label_set.operation)) leaf_name_data.push_back(label_set.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::GmplsLabels::ResvEgressLabel::Wdm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::GmplsLabels::ResvEgressLabel::Wdm::get_children()
{
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::GmplsLabels::ResvEgressLabel::Wdm::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "channel")
    {
        channel = value;
    }
    if(value_path == "channel-spacing")
    {
        channel_spacing = value;
    }
    if(value_path == "grid")
    {
        grid = value;
    }
    if(value_path == "identifier")
    {
        identifier = value;
    }
    if(value_path == "label-set")
    {
        label_set = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::GmplsLabels::ResvEgressLabel::Otn::Otn()
    :
    bit_map{YType::uint8, "bit-map"},
    bit_map_length{YType::uint16, "bit-map-length"},
    tpn{YType::uint16, "tpn"}
{
    yang_name = "otn"; yang_parent_name = "resv-egress-label";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::GmplsLabels::ResvEgressLabel::Otn::~Otn()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::GmplsLabels::ResvEgressLabel::Otn::has_data() const
{
    for (auto const & leaf : bit_map.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return bit_map_length.is_set
	|| tpn.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::GmplsLabels::ResvEgressLabel::Otn::has_operation() const
{
    for (auto const & leaf : bit_map.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(bit_map.operation)
	|| is_set(bit_map_length.operation)
	|| is_set(tpn.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::GmplsLabels::ResvEgressLabel::Otn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otn";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::GmplsLabels::ResvEgressLabel::Otn::get_entity_path(Entity* ancestor) const
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

    if (bit_map_length.is_set || is_set(bit_map_length.operation)) leaf_name_data.push_back(bit_map_length.get_name_leafdata());
    if (tpn.is_set || is_set(tpn.operation)) leaf_name_data.push_back(tpn.get_name_leafdata());

    auto bit_map_name_datas = bit_map.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), bit_map_name_datas.begin(), bit_map_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::GmplsLabels::ResvEgressLabel::Otn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::GmplsLabels::ResvEgressLabel::Otn::get_children()
{
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::GmplsLabels::ResvEgressLabel::Otn::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bit-map")
    {
        bit_map.append(value);
    }
    if(value_path == "bit-map-length")
    {
        bit_map_length = value;
    }
    if(value_path == "tpn")
    {
        tpn = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::OtnS2L()
    :
    aps(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Aps>())
	,otn(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn>())
{
    aps->parent = this;
    children["aps"] = aps;

    otn->parent = this;
    children["otn"] = otn;

    yang_name = "otn-s2l"; yang_parent_name = "s2l";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::~OtnS2L()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::has_data() const
{
    return (aps !=  nullptr && aps->has_data())
	|| (otn !=  nullptr && otn->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::has_operation() const
{
    return is_set(operation)
	|| (aps !=  nullptr && aps->has_operation())
	|| (otn !=  nullptr && otn->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otn-s2l";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OtnS2L' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "aps")
    {
        if(aps != nullptr)
        {
            children["aps"] = aps;
        }
        else
        {
            aps = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Aps>();
            aps->parent = this;
            children["aps"] = aps;
        }
        return children.at("aps");
    }

    if(child_yang_name == "otn")
    {
        if(otn != nullptr)
        {
            children["otn"] = otn;
        }
        else
        {
            otn = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn>();
            otn->parent = this;
            children["otn"] = otn;
        }
        return children.at("otn");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::get_children()
{
    if(children.find("aps") == children.end())
    {
        if(aps != nullptr)
        {
            children["aps"] = aps;
        }
    }

    if(children.find("otn") == children.end())
    {
        if(otn != nullptr)
        {
            children["otn"] = otn;
        }
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::set_value(const std::string & value_path, std::string value)
{
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Otn()
    :
    cross_connect_id{YType::uint32, "cross-connect-id"},
    gpid{YType::uint16, "gpid"},
    incoming_controller{YType::str, "incoming-controller"},
    incoming_controller_ifhandle{YType::str, "incoming-controller-ifhandle"},
    incoming_controller_state{YType::enumeration, "incoming-controller-state"},
    incoming_sub_controller{YType::str, "incoming-sub-controller"},
    incoming_sub_controller_ifhandle{YType::str, "incoming-sub-controller-ifhandle"},
    incoming_sub_controller_state{YType::enumeration, "incoming-sub-controller-state"},
    is_connected{YType::boolean, "is-connected"},
    outgoing_controller{YType::str, "outgoing-controller"},
    outgoing_controller_ifhandle{YType::str, "outgoing-controller-ifhandle"},
    outgoing_controller_state{YType::enumeration, "outgoing-controller-state"},
    outgoing_sub_controller{YType::str, "outgoing-sub-controller"},
    outgoing_sub_controller_ifhandle{YType::str, "outgoing-sub-controller-ifhandle"},
    outgoing_sub_controller_state{YType::enumeration, "outgoing-sub-controller-state"},
    uptime{YType::uint32, "uptime"}
    	,
    bandwidth(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Bandwidth>())
	,labels(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels>())
{
    bandwidth->parent = this;
    children["bandwidth"] = bandwidth;

    labels->parent = this;
    children["labels"] = labels;

    yang_name = "otn"; yang_parent_name = "otn-s2l";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::~Otn()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::has_data() const
{
    return cross_connect_id.is_set
	|| gpid.is_set
	|| incoming_controller.is_set
	|| incoming_controller_ifhandle.is_set
	|| incoming_controller_state.is_set
	|| incoming_sub_controller.is_set
	|| incoming_sub_controller_ifhandle.is_set
	|| incoming_sub_controller_state.is_set
	|| is_connected.is_set
	|| outgoing_controller.is_set
	|| outgoing_controller_ifhandle.is_set
	|| outgoing_controller_state.is_set
	|| outgoing_sub_controller.is_set
	|| outgoing_sub_controller_ifhandle.is_set
	|| outgoing_sub_controller_state.is_set
	|| uptime.is_set
	|| (bandwidth !=  nullptr && bandwidth->has_data())
	|| (labels !=  nullptr && labels->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::has_operation() const
{
    return is_set(operation)
	|| is_set(cross_connect_id.operation)
	|| is_set(gpid.operation)
	|| is_set(incoming_controller.operation)
	|| is_set(incoming_controller_ifhandle.operation)
	|| is_set(incoming_controller_state.operation)
	|| is_set(incoming_sub_controller.operation)
	|| is_set(incoming_sub_controller_ifhandle.operation)
	|| is_set(incoming_sub_controller_state.operation)
	|| is_set(is_connected.operation)
	|| is_set(outgoing_controller.operation)
	|| is_set(outgoing_controller_ifhandle.operation)
	|| is_set(outgoing_controller_state.operation)
	|| is_set(outgoing_sub_controller.operation)
	|| is_set(outgoing_sub_controller_ifhandle.operation)
	|| is_set(outgoing_sub_controller_state.operation)
	|| is_set(uptime.operation)
	|| (bandwidth !=  nullptr && bandwidth->has_operation())
	|| (labels !=  nullptr && labels->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otn";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::get_entity_path(Entity* ancestor) const
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

    if (cross_connect_id.is_set || is_set(cross_connect_id.operation)) leaf_name_data.push_back(cross_connect_id.get_name_leafdata());
    if (gpid.is_set || is_set(gpid.operation)) leaf_name_data.push_back(gpid.get_name_leafdata());
    if (incoming_controller.is_set || is_set(incoming_controller.operation)) leaf_name_data.push_back(incoming_controller.get_name_leafdata());
    if (incoming_controller_ifhandle.is_set || is_set(incoming_controller_ifhandle.operation)) leaf_name_data.push_back(incoming_controller_ifhandle.get_name_leafdata());
    if (incoming_controller_state.is_set || is_set(incoming_controller_state.operation)) leaf_name_data.push_back(incoming_controller_state.get_name_leafdata());
    if (incoming_sub_controller.is_set || is_set(incoming_sub_controller.operation)) leaf_name_data.push_back(incoming_sub_controller.get_name_leafdata());
    if (incoming_sub_controller_ifhandle.is_set || is_set(incoming_sub_controller_ifhandle.operation)) leaf_name_data.push_back(incoming_sub_controller_ifhandle.get_name_leafdata());
    if (incoming_sub_controller_state.is_set || is_set(incoming_sub_controller_state.operation)) leaf_name_data.push_back(incoming_sub_controller_state.get_name_leafdata());
    if (is_connected.is_set || is_set(is_connected.operation)) leaf_name_data.push_back(is_connected.get_name_leafdata());
    if (outgoing_controller.is_set || is_set(outgoing_controller.operation)) leaf_name_data.push_back(outgoing_controller.get_name_leafdata());
    if (outgoing_controller_ifhandle.is_set || is_set(outgoing_controller_ifhandle.operation)) leaf_name_data.push_back(outgoing_controller_ifhandle.get_name_leafdata());
    if (outgoing_controller_state.is_set || is_set(outgoing_controller_state.operation)) leaf_name_data.push_back(outgoing_controller_state.get_name_leafdata());
    if (outgoing_sub_controller.is_set || is_set(outgoing_sub_controller.operation)) leaf_name_data.push_back(outgoing_sub_controller.get_name_leafdata());
    if (outgoing_sub_controller_ifhandle.is_set || is_set(outgoing_sub_controller_ifhandle.operation)) leaf_name_data.push_back(outgoing_sub_controller_ifhandle.get_name_leafdata());
    if (outgoing_sub_controller_state.is_set || is_set(outgoing_sub_controller_state.operation)) leaf_name_data.push_back(outgoing_sub_controller_state.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.operation)) leaf_name_data.push_back(uptime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bandwidth")
    {
        if(bandwidth != nullptr)
        {
            children["bandwidth"] = bandwidth;
        }
        else
        {
            bandwidth = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Bandwidth>();
            bandwidth->parent = this;
            children["bandwidth"] = bandwidth;
        }
        return children.at("bandwidth");
    }

    if(child_yang_name == "labels")
    {
        if(labels != nullptr)
        {
            children["labels"] = labels;
        }
        else
        {
            labels = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels>();
            labels->parent = this;
            children["labels"] = labels;
        }
        return children.at("labels");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::get_children()
{
    if(children.find("bandwidth") == children.end())
    {
        if(bandwidth != nullptr)
        {
            children["bandwidth"] = bandwidth;
        }
    }

    if(children.find("labels") == children.end())
    {
        if(labels != nullptr)
        {
            children["labels"] = labels;
        }
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cross-connect-id")
    {
        cross_connect_id = value;
    }
    if(value_path == "gpid")
    {
        gpid = value;
    }
    if(value_path == "incoming-controller")
    {
        incoming_controller = value;
    }
    if(value_path == "incoming-controller-ifhandle")
    {
        incoming_controller_ifhandle = value;
    }
    if(value_path == "incoming-controller-state")
    {
        incoming_controller_state = value;
    }
    if(value_path == "incoming-sub-controller")
    {
        incoming_sub_controller = value;
    }
    if(value_path == "incoming-sub-controller-ifhandle")
    {
        incoming_sub_controller_ifhandle = value;
    }
    if(value_path == "incoming-sub-controller-state")
    {
        incoming_sub_controller_state = value;
    }
    if(value_path == "is-connected")
    {
        is_connected = value;
    }
    if(value_path == "outgoing-controller")
    {
        outgoing_controller = value;
    }
    if(value_path == "outgoing-controller-ifhandle")
    {
        outgoing_controller_ifhandle = value;
    }
    if(value_path == "outgoing-controller-state")
    {
        outgoing_controller_state = value;
    }
    if(value_path == "outgoing-sub-controller")
    {
        outgoing_sub_controller = value;
    }
    if(value_path == "outgoing-sub-controller-ifhandle")
    {
        outgoing_sub_controller_ifhandle = value;
    }
    if(value_path == "outgoing-sub-controller-state")
    {
        outgoing_sub_controller_state = value;
    }
    if(value_path == "uptime")
    {
        uptime = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Bandwidth::Bandwidth()
    :
    odu_level{YType::enumeration, "odu-level"}
    	,
    odu_flex_cbr(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Bandwidth::OduFlexCbr>())
	,odu_flex_gfp_f_non_res(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Bandwidth::OduFlexGfpFNonRes>())
	,odu_flex_gfp_f_res(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Bandwidth::OduFlexGfpFRes>())
{
    odu_flex_cbr->parent = this;
    children["odu-flex-cbr"] = odu_flex_cbr;

    odu_flex_gfp_f_non_res->parent = this;
    children["odu-flex-gfp-f-non-res"] = odu_flex_gfp_f_non_res;

    odu_flex_gfp_f_res->parent = this;
    children["odu-flex-gfp-f-res"] = odu_flex_gfp_f_res;

    yang_name = "bandwidth"; yang_parent_name = "otn";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Bandwidth::~Bandwidth()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Bandwidth::has_data() const
{
    return odu_level.is_set
	|| (odu_flex_cbr !=  nullptr && odu_flex_cbr->has_data())
	|| (odu_flex_gfp_f_non_res !=  nullptr && odu_flex_gfp_f_non_res->has_data())
	|| (odu_flex_gfp_f_res !=  nullptr && odu_flex_gfp_f_res->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Bandwidth::has_operation() const
{
    return is_set(operation)
	|| is_set(odu_level.operation)
	|| (odu_flex_cbr !=  nullptr && odu_flex_cbr->has_operation())
	|| (odu_flex_gfp_f_non_res !=  nullptr && odu_flex_gfp_f_non_res->has_operation())
	|| (odu_flex_gfp_f_res !=  nullptr && odu_flex_gfp_f_res->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Bandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Bandwidth::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bandwidth' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Bandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "odu-flex-cbr")
    {
        if(odu_flex_cbr != nullptr)
        {
            children["odu-flex-cbr"] = odu_flex_cbr;
        }
        else
        {
            odu_flex_cbr = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Bandwidth::OduFlexCbr>();
            odu_flex_cbr->parent = this;
            children["odu-flex-cbr"] = odu_flex_cbr;
        }
        return children.at("odu-flex-cbr");
    }

    if(child_yang_name == "odu-flex-gfp-f-non-res")
    {
        if(odu_flex_gfp_f_non_res != nullptr)
        {
            children["odu-flex-gfp-f-non-res"] = odu_flex_gfp_f_non_res;
        }
        else
        {
            odu_flex_gfp_f_non_res = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Bandwidth::OduFlexGfpFNonRes>();
            odu_flex_gfp_f_non_res->parent = this;
            children["odu-flex-gfp-f-non-res"] = odu_flex_gfp_f_non_res;
        }
        return children.at("odu-flex-gfp-f-non-res");
    }

    if(child_yang_name == "odu-flex-gfp-f-res")
    {
        if(odu_flex_gfp_f_res != nullptr)
        {
            children["odu-flex-gfp-f-res"] = odu_flex_gfp_f_res;
        }
        else
        {
            odu_flex_gfp_f_res = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Bandwidth::OduFlexGfpFRes>();
            odu_flex_gfp_f_res->parent = this;
            children["odu-flex-gfp-f-res"] = odu_flex_gfp_f_res;
        }
        return children.at("odu-flex-gfp-f-res");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Bandwidth::get_children()
{
    if(children.find("odu-flex-cbr") == children.end())
    {
        if(odu_flex_cbr != nullptr)
        {
            children["odu-flex-cbr"] = odu_flex_cbr;
        }
    }

    if(children.find("odu-flex-gfp-f-non-res") == children.end())
    {
        if(odu_flex_gfp_f_non_res != nullptr)
        {
            children["odu-flex-gfp-f-non-res"] = odu_flex_gfp_f_non_res;
        }
    }

    if(children.find("odu-flex-gfp-f-res") == children.end())
    {
        if(odu_flex_gfp_f_res != nullptr)
        {
            children["odu-flex-gfp-f-res"] = odu_flex_gfp_f_res;
        }
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Bandwidth::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "odu-level")
    {
        odu_level = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Bandwidth::OduFlexCbr::OduFlexCbr()
    :
    bit_rate{YType::uint32, "bit-rate"},
    tolerance{YType::uint16, "tolerance"}
{
    yang_name = "odu-flex-cbr"; yang_parent_name = "bandwidth";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Bandwidth::OduFlexCbr::~OduFlexCbr()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Bandwidth::OduFlexCbr::has_data() const
{
    return bit_rate.is_set
	|| tolerance.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Bandwidth::OduFlexCbr::has_operation() const
{
    return is_set(operation)
	|| is_set(bit_rate.operation)
	|| is_set(tolerance.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Bandwidth::OduFlexCbr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-flex-cbr";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Bandwidth::OduFlexCbr::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Bandwidth::OduFlexCbr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Bandwidth::OduFlexCbr::get_children()
{
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Bandwidth::OduFlexCbr::set_value(const std::string & value_path, std::string value)
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

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Bandwidth::OduFlexGfpFRes::OduFlexGfpFRes()
    :
    bit_rate{YType::uint32, "bit-rate"}
{
    yang_name = "odu-flex-gfp-f-res"; yang_parent_name = "bandwidth";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Bandwidth::OduFlexGfpFRes::~OduFlexGfpFRes()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Bandwidth::OduFlexGfpFRes::has_data() const
{
    return bit_rate.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Bandwidth::OduFlexGfpFRes::has_operation() const
{
    return is_set(operation)
	|| is_set(bit_rate.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Bandwidth::OduFlexGfpFRes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-flex-gfp-f-res";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Bandwidth::OduFlexGfpFRes::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Bandwidth::OduFlexGfpFRes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Bandwidth::OduFlexGfpFRes::get_children()
{
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Bandwidth::OduFlexGfpFRes::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bit-rate")
    {
        bit_rate = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Bandwidth::OduFlexGfpFNonRes::OduFlexGfpFNonRes()
    :
    bit_rate{YType::uint32, "bit-rate"}
{
    yang_name = "odu-flex-gfp-f-non-res"; yang_parent_name = "bandwidth";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Bandwidth::OduFlexGfpFNonRes::~OduFlexGfpFNonRes()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Bandwidth::OduFlexGfpFNonRes::has_data() const
{
    return bit_rate.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Bandwidth::OduFlexGfpFNonRes::has_operation() const
{
    return is_set(operation)
	|| is_set(bit_rate.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Bandwidth::OduFlexGfpFNonRes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-flex-gfp-f-non-res";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Bandwidth::OduFlexGfpFNonRes::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Bandwidth::OduFlexGfpFNonRes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Bandwidth::OduFlexGfpFNonRes::get_children()
{
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Bandwidth::OduFlexGfpFNonRes::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bit-rate")
    {
        bit_rate = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::Labels()
    :
    path_egress_label(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel>())
	,path_ingress_label(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel>())
	,resv_egress_label(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel>())
	,resv_ingress_label(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel>())
{
    path_egress_label->parent = this;
    children["path-egress-label"] = path_egress_label;

    path_ingress_label->parent = this;
    children["path-ingress-label"] = path_ingress_label;

    resv_egress_label->parent = this;
    children["resv-egress-label"] = resv_egress_label;

    resv_ingress_label->parent = this;
    children["resv-ingress-label"] = resv_ingress_label;

    yang_name = "labels"; yang_parent_name = "otn";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::~Labels()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::has_data() const
{
    return (path_egress_label !=  nullptr && path_egress_label->has_data())
	|| (path_ingress_label !=  nullptr && path_ingress_label->has_data())
	|| (resv_egress_label !=  nullptr && resv_egress_label->has_data())
	|| (resv_ingress_label !=  nullptr && resv_ingress_label->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::has_operation() const
{
    return is_set(operation)
	|| (path_egress_label !=  nullptr && path_egress_label->has_operation())
	|| (path_ingress_label !=  nullptr && path_ingress_label->has_operation())
	|| (resv_egress_label !=  nullptr && resv_egress_label->has_operation())
	|| (resv_ingress_label !=  nullptr && resv_ingress_label->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "labels";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Labels' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "path-egress-label")
    {
        if(path_egress_label != nullptr)
        {
            children["path-egress-label"] = path_egress_label;
        }
        else
        {
            path_egress_label = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel>();
            path_egress_label->parent = this;
            children["path-egress-label"] = path_egress_label;
        }
        return children.at("path-egress-label");
    }

    if(child_yang_name == "path-ingress-label")
    {
        if(path_ingress_label != nullptr)
        {
            children["path-ingress-label"] = path_ingress_label;
        }
        else
        {
            path_ingress_label = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel>();
            path_ingress_label->parent = this;
            children["path-ingress-label"] = path_ingress_label;
        }
        return children.at("path-ingress-label");
    }

    if(child_yang_name == "resv-egress-label")
    {
        if(resv_egress_label != nullptr)
        {
            children["resv-egress-label"] = resv_egress_label;
        }
        else
        {
            resv_egress_label = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel>();
            resv_egress_label->parent = this;
            children["resv-egress-label"] = resv_egress_label;
        }
        return children.at("resv-egress-label");
    }

    if(child_yang_name == "resv-ingress-label")
    {
        if(resv_ingress_label != nullptr)
        {
            children["resv-ingress-label"] = resv_ingress_label;
        }
        else
        {
            resv_ingress_label = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel>();
            resv_ingress_label->parent = this;
            children["resv-ingress-label"] = resv_ingress_label;
        }
        return children.at("resv-ingress-label");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::get_children()
{
    if(children.find("path-egress-label") == children.end())
    {
        if(path_egress_label != nullptr)
        {
            children["path-egress-label"] = path_egress_label;
        }
    }

    if(children.find("path-ingress-label") == children.end())
    {
        if(path_ingress_label != nullptr)
        {
            children["path-ingress-label"] = path_ingress_label;
        }
    }

    if(children.find("resv-egress-label") == children.end())
    {
        if(resv_egress_label != nullptr)
        {
            children["resv-egress-label"] = resv_egress_label;
        }
    }

    if(children.find("resv-ingress-label") == children.end())
    {
        if(resv_ingress_label != nullptr)
        {
            children["resv-ingress-label"] = resv_ingress_label;
        }
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::set_value(const std::string & value_path, std::string value)
{
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel::PathIngressLabel()
    :
    label_type{YType::enumeration, "label-type"}
    	,
    otn(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel::Otn_>())
	,wdm(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel::Wdm>())
{
    otn->parent = this;
    children["otn"] = otn;

    wdm->parent = this;
    children["wdm"] = wdm;

    yang_name = "path-ingress-label"; yang_parent_name = "labels";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel::~PathIngressLabel()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel::has_data() const
{
    return label_type.is_set
	|| (otn !=  nullptr && otn->has_data())
	|| (wdm !=  nullptr && wdm->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel::has_operation() const
{
    return is_set(operation)
	|| is_set(label_type.operation)
	|| (otn !=  nullptr && otn->has_operation())
	|| (wdm !=  nullptr && wdm->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-ingress-label";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PathIngressLabel' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_type.is_set || is_set(label_type.operation)) leaf_name_data.push_back(label_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "otn")
    {
        if(otn != nullptr)
        {
            children["otn"] = otn;
        }
        else
        {
            otn = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel::Otn_>();
            otn->parent = this;
            children["otn"] = otn;
        }
        return children.at("otn");
    }

    if(child_yang_name == "wdm")
    {
        if(wdm != nullptr)
        {
            children["wdm"] = wdm;
        }
        else
        {
            wdm = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel::Wdm>();
            wdm->parent = this;
            children["wdm"] = wdm;
        }
        return children.at("wdm");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel::get_children()
{
    if(children.find("otn") == children.end())
    {
        if(otn != nullptr)
        {
            children["otn"] = otn;
        }
    }

    if(children.find("wdm") == children.end())
    {
        if(wdm != nullptr)
        {
            children["wdm"] = wdm;
        }
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "label-type")
    {
        label_type = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel::Wdm::Wdm()
    :
    channel{YType::int16, "channel"},
    channel_spacing{YType::enumeration, "channel-spacing"},
    grid{YType::enumeration, "grid"},
    identifier{YType::uint16, "identifier"},
    label_set{YType::boolean, "label-set"}
{
    yang_name = "wdm"; yang_parent_name = "path-ingress-label";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel::Wdm::~Wdm()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel::Wdm::has_data() const
{
    return channel.is_set
	|| channel_spacing.is_set
	|| grid.is_set
	|| identifier.is_set
	|| label_set.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel::Wdm::has_operation() const
{
    return is_set(operation)
	|| is_set(channel.operation)
	|| is_set(channel_spacing.operation)
	|| is_set(grid.operation)
	|| is_set(identifier.operation)
	|| is_set(label_set.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel::Wdm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wdm";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel::Wdm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Wdm' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (channel.is_set || is_set(channel.operation)) leaf_name_data.push_back(channel.get_name_leafdata());
    if (channel_spacing.is_set || is_set(channel_spacing.operation)) leaf_name_data.push_back(channel_spacing.get_name_leafdata());
    if (grid.is_set || is_set(grid.operation)) leaf_name_data.push_back(grid.get_name_leafdata());
    if (identifier.is_set || is_set(identifier.operation)) leaf_name_data.push_back(identifier.get_name_leafdata());
    if (label_set.is_set || is_set(label_set.operation)) leaf_name_data.push_back(label_set.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel::Wdm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel::Wdm::get_children()
{
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel::Wdm::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "channel")
    {
        channel = value;
    }
    if(value_path == "channel-spacing")
    {
        channel_spacing = value;
    }
    if(value_path == "grid")
    {
        grid = value;
    }
    if(value_path == "identifier")
    {
        identifier = value;
    }
    if(value_path == "label-set")
    {
        label_set = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel::Otn_::Otn_()
    :
    bit_map{YType::uint8, "bit-map"},
    bit_map_length{YType::uint16, "bit-map-length"},
    tpn{YType::uint16, "tpn"}
{
    yang_name = "otn"; yang_parent_name = "path-ingress-label";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel::Otn_::~Otn_()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel::Otn_::has_data() const
{
    for (auto const & leaf : bit_map.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return bit_map_length.is_set
	|| tpn.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel::Otn_::has_operation() const
{
    for (auto const & leaf : bit_map.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(bit_map.operation)
	|| is_set(bit_map_length.operation)
	|| is_set(tpn.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel::Otn_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otn";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel::Otn_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Otn_' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bit_map_length.is_set || is_set(bit_map_length.operation)) leaf_name_data.push_back(bit_map_length.get_name_leafdata());
    if (tpn.is_set || is_set(tpn.operation)) leaf_name_data.push_back(tpn.get_name_leafdata());

    auto bit_map_name_datas = bit_map.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), bit_map_name_datas.begin(), bit_map_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel::Otn_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel::Otn_::get_children()
{
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel::Otn_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bit-map")
    {
        bit_map.append(value);
    }
    if(value_path == "bit-map-length")
    {
        bit_map_length = value;
    }
    if(value_path == "tpn")
    {
        tpn = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel::PathEgressLabel()
    :
    label_type{YType::enumeration, "label-type"}
    	,
    otn(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel::Otn_>())
	,wdm(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel::Wdm>())
{
    otn->parent = this;
    children["otn"] = otn;

    wdm->parent = this;
    children["wdm"] = wdm;

    yang_name = "path-egress-label"; yang_parent_name = "labels";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel::~PathEgressLabel()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel::has_data() const
{
    return label_type.is_set
	|| (otn !=  nullptr && otn->has_data())
	|| (wdm !=  nullptr && wdm->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel::has_operation() const
{
    return is_set(operation)
	|| is_set(label_type.operation)
	|| (otn !=  nullptr && otn->has_operation())
	|| (wdm !=  nullptr && wdm->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-egress-label";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PathEgressLabel' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_type.is_set || is_set(label_type.operation)) leaf_name_data.push_back(label_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "otn")
    {
        if(otn != nullptr)
        {
            children["otn"] = otn;
        }
        else
        {
            otn = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel::Otn_>();
            otn->parent = this;
            children["otn"] = otn;
        }
        return children.at("otn");
    }

    if(child_yang_name == "wdm")
    {
        if(wdm != nullptr)
        {
            children["wdm"] = wdm;
        }
        else
        {
            wdm = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel::Wdm>();
            wdm->parent = this;
            children["wdm"] = wdm;
        }
        return children.at("wdm");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel::get_children()
{
    if(children.find("otn") == children.end())
    {
        if(otn != nullptr)
        {
            children["otn"] = otn;
        }
    }

    if(children.find("wdm") == children.end())
    {
        if(wdm != nullptr)
        {
            children["wdm"] = wdm;
        }
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "label-type")
    {
        label_type = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel::Wdm::Wdm()
    :
    channel{YType::int16, "channel"},
    channel_spacing{YType::enumeration, "channel-spacing"},
    grid{YType::enumeration, "grid"},
    identifier{YType::uint16, "identifier"},
    label_set{YType::boolean, "label-set"}
{
    yang_name = "wdm"; yang_parent_name = "path-egress-label";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel::Wdm::~Wdm()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel::Wdm::has_data() const
{
    return channel.is_set
	|| channel_spacing.is_set
	|| grid.is_set
	|| identifier.is_set
	|| label_set.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel::Wdm::has_operation() const
{
    return is_set(operation)
	|| is_set(channel.operation)
	|| is_set(channel_spacing.operation)
	|| is_set(grid.operation)
	|| is_set(identifier.operation)
	|| is_set(label_set.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel::Wdm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wdm";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel::Wdm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Wdm' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (channel.is_set || is_set(channel.operation)) leaf_name_data.push_back(channel.get_name_leafdata());
    if (channel_spacing.is_set || is_set(channel_spacing.operation)) leaf_name_data.push_back(channel_spacing.get_name_leafdata());
    if (grid.is_set || is_set(grid.operation)) leaf_name_data.push_back(grid.get_name_leafdata());
    if (identifier.is_set || is_set(identifier.operation)) leaf_name_data.push_back(identifier.get_name_leafdata());
    if (label_set.is_set || is_set(label_set.operation)) leaf_name_data.push_back(label_set.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel::Wdm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel::Wdm::get_children()
{
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel::Wdm::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "channel")
    {
        channel = value;
    }
    if(value_path == "channel-spacing")
    {
        channel_spacing = value;
    }
    if(value_path == "grid")
    {
        grid = value;
    }
    if(value_path == "identifier")
    {
        identifier = value;
    }
    if(value_path == "label-set")
    {
        label_set = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel::Otn_::Otn_()
    :
    bit_map{YType::uint8, "bit-map"},
    bit_map_length{YType::uint16, "bit-map-length"},
    tpn{YType::uint16, "tpn"}
{
    yang_name = "otn"; yang_parent_name = "path-egress-label";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel::Otn_::~Otn_()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel::Otn_::has_data() const
{
    for (auto const & leaf : bit_map.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return bit_map_length.is_set
	|| tpn.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel::Otn_::has_operation() const
{
    for (auto const & leaf : bit_map.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(bit_map.operation)
	|| is_set(bit_map_length.operation)
	|| is_set(tpn.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel::Otn_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otn";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel::Otn_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Otn_' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bit_map_length.is_set || is_set(bit_map_length.operation)) leaf_name_data.push_back(bit_map_length.get_name_leafdata());
    if (tpn.is_set || is_set(tpn.operation)) leaf_name_data.push_back(tpn.get_name_leafdata());

    auto bit_map_name_datas = bit_map.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), bit_map_name_datas.begin(), bit_map_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel::Otn_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel::Otn_::get_children()
{
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel::Otn_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bit-map")
    {
        bit_map.append(value);
    }
    if(value_path == "bit-map-length")
    {
        bit_map_length = value;
    }
    if(value_path == "tpn")
    {
        tpn = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::ResvIngressLabel()
    :
    label_type{YType::enumeration, "label-type"}
    	,
    otn(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Otn_>())
	,wdm(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Wdm>())
{
    otn->parent = this;
    children["otn"] = otn;

    wdm->parent = this;
    children["wdm"] = wdm;

    yang_name = "resv-ingress-label"; yang_parent_name = "labels";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::~ResvIngressLabel()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::has_data() const
{
    return label_type.is_set
	|| (otn !=  nullptr && otn->has_data())
	|| (wdm !=  nullptr && wdm->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::has_operation() const
{
    return is_set(operation)
	|| is_set(label_type.operation)
	|| (otn !=  nullptr && otn->has_operation())
	|| (wdm !=  nullptr && wdm->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "resv-ingress-label";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ResvIngressLabel' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_type.is_set || is_set(label_type.operation)) leaf_name_data.push_back(label_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "otn")
    {
        if(otn != nullptr)
        {
            children["otn"] = otn;
        }
        else
        {
            otn = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Otn_>();
            otn->parent = this;
            children["otn"] = otn;
        }
        return children.at("otn");
    }

    if(child_yang_name == "wdm")
    {
        if(wdm != nullptr)
        {
            children["wdm"] = wdm;
        }
        else
        {
            wdm = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Wdm>();
            wdm->parent = this;
            children["wdm"] = wdm;
        }
        return children.at("wdm");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::get_children()
{
    if(children.find("otn") == children.end())
    {
        if(otn != nullptr)
        {
            children["otn"] = otn;
        }
    }

    if(children.find("wdm") == children.end())
    {
        if(wdm != nullptr)
        {
            children["wdm"] = wdm;
        }
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "label-type")
    {
        label_type = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Wdm::Wdm()
    :
    channel{YType::int16, "channel"},
    channel_spacing{YType::enumeration, "channel-spacing"},
    grid{YType::enumeration, "grid"},
    identifier{YType::uint16, "identifier"},
    label_set{YType::boolean, "label-set"}
{
    yang_name = "wdm"; yang_parent_name = "resv-ingress-label";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Wdm::~Wdm()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Wdm::has_data() const
{
    return channel.is_set
	|| channel_spacing.is_set
	|| grid.is_set
	|| identifier.is_set
	|| label_set.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Wdm::has_operation() const
{
    return is_set(operation)
	|| is_set(channel.operation)
	|| is_set(channel_spacing.operation)
	|| is_set(grid.operation)
	|| is_set(identifier.operation)
	|| is_set(label_set.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Wdm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wdm";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Wdm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Wdm' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (channel.is_set || is_set(channel.operation)) leaf_name_data.push_back(channel.get_name_leafdata());
    if (channel_spacing.is_set || is_set(channel_spacing.operation)) leaf_name_data.push_back(channel_spacing.get_name_leafdata());
    if (grid.is_set || is_set(grid.operation)) leaf_name_data.push_back(grid.get_name_leafdata());
    if (identifier.is_set || is_set(identifier.operation)) leaf_name_data.push_back(identifier.get_name_leafdata());
    if (label_set.is_set || is_set(label_set.operation)) leaf_name_data.push_back(label_set.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Wdm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Wdm::get_children()
{
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Wdm::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "channel")
    {
        channel = value;
    }
    if(value_path == "channel-spacing")
    {
        channel_spacing = value;
    }
    if(value_path == "grid")
    {
        grid = value;
    }
    if(value_path == "identifier")
    {
        identifier = value;
    }
    if(value_path == "label-set")
    {
        label_set = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Otn_::Otn_()
    :
    bit_map{YType::uint8, "bit-map"},
    bit_map_length{YType::uint16, "bit-map-length"},
    tpn{YType::uint16, "tpn"}
{
    yang_name = "otn"; yang_parent_name = "resv-ingress-label";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Otn_::~Otn_()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Otn_::has_data() const
{
    for (auto const & leaf : bit_map.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return bit_map_length.is_set
	|| tpn.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Otn_::has_operation() const
{
    for (auto const & leaf : bit_map.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(bit_map.operation)
	|| is_set(bit_map_length.operation)
	|| is_set(tpn.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Otn_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otn";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Otn_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Otn_' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bit_map_length.is_set || is_set(bit_map_length.operation)) leaf_name_data.push_back(bit_map_length.get_name_leafdata());
    if (tpn.is_set || is_set(tpn.operation)) leaf_name_data.push_back(tpn.get_name_leafdata());

    auto bit_map_name_datas = bit_map.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), bit_map_name_datas.begin(), bit_map_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Otn_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Otn_::get_children()
{
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Otn_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bit-map")
    {
        bit_map.append(value);
    }
    if(value_path == "bit-map-length")
    {
        bit_map_length = value;
    }
    if(value_path == "tpn")
    {
        tpn = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::ResvEgressLabel()
    :
    label_type{YType::enumeration, "label-type"}
    	,
    otn(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::Otn_>())
	,wdm(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::Wdm>())
{
    otn->parent = this;
    children["otn"] = otn;

    wdm->parent = this;
    children["wdm"] = wdm;

    yang_name = "resv-egress-label"; yang_parent_name = "labels";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::~ResvEgressLabel()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::has_data() const
{
    return label_type.is_set
	|| (otn !=  nullptr && otn->has_data())
	|| (wdm !=  nullptr && wdm->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::has_operation() const
{
    return is_set(operation)
	|| is_set(label_type.operation)
	|| (otn !=  nullptr && otn->has_operation())
	|| (wdm !=  nullptr && wdm->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "resv-egress-label";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ResvEgressLabel' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_type.is_set || is_set(label_type.operation)) leaf_name_data.push_back(label_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "otn")
    {
        if(otn != nullptr)
        {
            children["otn"] = otn;
        }
        else
        {
            otn = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::Otn_>();
            otn->parent = this;
            children["otn"] = otn;
        }
        return children.at("otn");
    }

    if(child_yang_name == "wdm")
    {
        if(wdm != nullptr)
        {
            children["wdm"] = wdm;
        }
        else
        {
            wdm = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::Wdm>();
            wdm->parent = this;
            children["wdm"] = wdm;
        }
        return children.at("wdm");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::get_children()
{
    if(children.find("otn") == children.end())
    {
        if(otn != nullptr)
        {
            children["otn"] = otn;
        }
    }

    if(children.find("wdm") == children.end())
    {
        if(wdm != nullptr)
        {
            children["wdm"] = wdm;
        }
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "label-type")
    {
        label_type = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::Wdm::Wdm()
    :
    channel{YType::int16, "channel"},
    channel_spacing{YType::enumeration, "channel-spacing"},
    grid{YType::enumeration, "grid"},
    identifier{YType::uint16, "identifier"},
    label_set{YType::boolean, "label-set"}
{
    yang_name = "wdm"; yang_parent_name = "resv-egress-label";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::Wdm::~Wdm()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::Wdm::has_data() const
{
    return channel.is_set
	|| channel_spacing.is_set
	|| grid.is_set
	|| identifier.is_set
	|| label_set.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::Wdm::has_operation() const
{
    return is_set(operation)
	|| is_set(channel.operation)
	|| is_set(channel_spacing.operation)
	|| is_set(grid.operation)
	|| is_set(identifier.operation)
	|| is_set(label_set.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::Wdm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wdm";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::Wdm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Wdm' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (channel.is_set || is_set(channel.operation)) leaf_name_data.push_back(channel.get_name_leafdata());
    if (channel_spacing.is_set || is_set(channel_spacing.operation)) leaf_name_data.push_back(channel_spacing.get_name_leafdata());
    if (grid.is_set || is_set(grid.operation)) leaf_name_data.push_back(grid.get_name_leafdata());
    if (identifier.is_set || is_set(identifier.operation)) leaf_name_data.push_back(identifier.get_name_leafdata());
    if (label_set.is_set || is_set(label_set.operation)) leaf_name_data.push_back(label_set.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::Wdm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::Wdm::get_children()
{
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::Wdm::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "channel")
    {
        channel = value;
    }
    if(value_path == "channel-spacing")
    {
        channel_spacing = value;
    }
    if(value_path == "grid")
    {
        grid = value;
    }
    if(value_path == "identifier")
    {
        identifier = value;
    }
    if(value_path == "label-set")
    {
        label_set = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::Otn_::Otn_()
    :
    bit_map{YType::uint8, "bit-map"},
    bit_map_length{YType::uint16, "bit-map-length"},
    tpn{YType::uint16, "tpn"}
{
    yang_name = "otn"; yang_parent_name = "resv-egress-label";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::Otn_::~Otn_()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::Otn_::has_data() const
{
    for (auto const & leaf : bit_map.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return bit_map_length.is_set
	|| tpn.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::Otn_::has_operation() const
{
    for (auto const & leaf : bit_map.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(bit_map.operation)
	|| is_set(bit_map_length.operation)
	|| is_set(tpn.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::Otn_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otn";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::Otn_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Otn_' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bit_map_length.is_set || is_set(bit_map_length.operation)) leaf_name_data.push_back(bit_map_length.get_name_leafdata());
    if (tpn.is_set || is_set(tpn.operation)) leaf_name_data.push_back(tpn.get_name_leafdata());

    auto bit_map_name_datas = bit_map.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), bit_map_name_datas.begin(), bit_map_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::Otn_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::Otn_::get_children()
{
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::Otn_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bit-map")
    {
        bit_map.append(value);
    }
    if(value_path == "bit-map-length")
    {
        bit_map_length = value;
    }
    if(value_path == "tpn")
    {
        tpn = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Aps::Aps()
    :
    protection_info(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Aps::ProtectionInfo>())
{
    protection_info->parent = this;
    children["protection-info"] = protection_info;

    yang_name = "aps"; yang_parent_name = "otn-s2l";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Aps::~Aps()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Aps::has_data() const
{
    return (protection_info !=  nullptr && protection_info->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Aps::has_operation() const
{
    return is_set(operation)
	|| (protection_info !=  nullptr && protection_info->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Aps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aps";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Aps::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Aps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "protection-info")
    {
        if(protection_info != nullptr)
        {
            children["protection-info"] = protection_info;
        }
        else
        {
            protection_info = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Aps::ProtectionInfo>();
            protection_info->parent = this;
            children["protection-info"] = protection_info;
        }
        return children.at("protection-info");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Aps::get_children()
{
    if(children.find("protection-info") == children.end())
    {
        if(protection_info != nullptr)
        {
            children["protection-info"] = protection_info;
        }
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Aps::set_value(const std::string & value_path, std::string value)
{
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Aps::ProtectionInfo::ProtectionInfo()
    :
    ho_timeout{YType::uint32, "ho-timeout"},
    is_hopresent{YType::boolean, "is-hopresent"},
    is_snc_mode_present{YType::boolean, "is-snc-mode-present"},
    is_wtr_present{YType::boolean, "is-wtr-present"},
    nbit{YType::boolean, "nbit"},
    obit{YType::boolean, "obit"},
    path_prot_profile_type{YType::enumeration, "path-prot-profile-type"},
    pbit{YType::boolean, "pbit"},
    protect_type{YType::enumeration, "protect-type"},
    sbit{YType::boolean, "sbit"},
    snc_mode{YType::enumeration, "snc-mode"},
    tcm_id{YType::uint32, "tcm-id"},
    wtr_timeout{YType::uint32, "wtr-timeout"}
{
    yang_name = "protection-info"; yang_parent_name = "aps";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Aps::ProtectionInfo::~ProtectionInfo()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Aps::ProtectionInfo::has_data() const
{
    return ho_timeout.is_set
	|| is_hopresent.is_set
	|| is_snc_mode_present.is_set
	|| is_wtr_present.is_set
	|| nbit.is_set
	|| obit.is_set
	|| path_prot_profile_type.is_set
	|| pbit.is_set
	|| protect_type.is_set
	|| sbit.is_set
	|| snc_mode.is_set
	|| tcm_id.is_set
	|| wtr_timeout.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Aps::ProtectionInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(ho_timeout.operation)
	|| is_set(is_hopresent.operation)
	|| is_set(is_snc_mode_present.operation)
	|| is_set(is_wtr_present.operation)
	|| is_set(nbit.operation)
	|| is_set(obit.operation)
	|| is_set(path_prot_profile_type.operation)
	|| is_set(pbit.operation)
	|| is_set(protect_type.operation)
	|| is_set(sbit.operation)
	|| is_set(snc_mode.operation)
	|| is_set(tcm_id.operation)
	|| is_set(wtr_timeout.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Aps::ProtectionInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protection-info";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Aps::ProtectionInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProtectionInfo' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ho_timeout.is_set || is_set(ho_timeout.operation)) leaf_name_data.push_back(ho_timeout.get_name_leafdata());
    if (is_hopresent.is_set || is_set(is_hopresent.operation)) leaf_name_data.push_back(is_hopresent.get_name_leafdata());
    if (is_snc_mode_present.is_set || is_set(is_snc_mode_present.operation)) leaf_name_data.push_back(is_snc_mode_present.get_name_leafdata());
    if (is_wtr_present.is_set || is_set(is_wtr_present.operation)) leaf_name_data.push_back(is_wtr_present.get_name_leafdata());
    if (nbit.is_set || is_set(nbit.operation)) leaf_name_data.push_back(nbit.get_name_leafdata());
    if (obit.is_set || is_set(obit.operation)) leaf_name_data.push_back(obit.get_name_leafdata());
    if (path_prot_profile_type.is_set || is_set(path_prot_profile_type.operation)) leaf_name_data.push_back(path_prot_profile_type.get_name_leafdata());
    if (pbit.is_set || is_set(pbit.operation)) leaf_name_data.push_back(pbit.get_name_leafdata());
    if (protect_type.is_set || is_set(protect_type.operation)) leaf_name_data.push_back(protect_type.get_name_leafdata());
    if (sbit.is_set || is_set(sbit.operation)) leaf_name_data.push_back(sbit.get_name_leafdata());
    if (snc_mode.is_set || is_set(snc_mode.operation)) leaf_name_data.push_back(snc_mode.get_name_leafdata());
    if (tcm_id.is_set || is_set(tcm_id.operation)) leaf_name_data.push_back(tcm_id.get_name_leafdata());
    if (wtr_timeout.is_set || is_set(wtr_timeout.operation)) leaf_name_data.push_back(wtr_timeout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Aps::ProtectionInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Aps::ProtectionInfo::get_children()
{
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OtnS2L::Aps::ProtectionInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ho-timeout")
    {
        ho_timeout = value;
    }
    if(value_path == "is-hopresent")
    {
        is_hopresent = value;
    }
    if(value_path == "is-snc-mode-present")
    {
        is_snc_mode_present = value;
    }
    if(value_path == "is-wtr-present")
    {
        is_wtr_present = value;
    }
    if(value_path == "nbit")
    {
        nbit = value;
    }
    if(value_path == "obit")
    {
        obit = value;
    }
    if(value_path == "path-prot-profile-type")
    {
        path_prot_profile_type = value;
    }
    if(value_path == "pbit")
    {
        pbit = value;
    }
    if(value_path == "protect-type")
    {
        protect_type = value;
    }
    if(value_path == "sbit")
    {
        sbit = value;
    }
    if(value_path == "snc-mode")
    {
        snc_mode = value;
    }
    if(value_path == "tcm-id")
    {
        tcm_id = value;
    }
    if(value_path == "wtr-timeout")
    {
        wtr_timeout = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::HeadEndBfdInfo::HeadEndBfdInfo()
    :
    bfd_reverse_path_label{YType::uint32, "bfd-reverse-path-label"},
    bfd_reverse_path_stale{YType::boolean, "bfd-reverse-path-stale"},
    creation_time{YType::uint32, "creation-time"},
    is_redundant{YType::boolean, "is-redundant"},
    lspbfd_type{YType::enumeration, "lspbfd-type"}
    	,
    deletion_history(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::HeadEndBfdInfo::DeletionHistory>())
	,session_info(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::HeadEndBfdInfo::SessionInfo>())
{
    deletion_history->parent = this;
    children["deletion-history"] = deletion_history;

    session_info->parent = this;
    children["session-info"] = session_info;

    yang_name = "head-end-bfd-info"; yang_parent_name = "s2l";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::HeadEndBfdInfo::~HeadEndBfdInfo()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::HeadEndBfdInfo::has_data() const
{
    for (auto const & leaf : bfd_reverse_path_label.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return bfd_reverse_path_stale.is_set
	|| creation_time.is_set
	|| is_redundant.is_set
	|| lspbfd_type.is_set
	|| (deletion_history !=  nullptr && deletion_history->has_data())
	|| (session_info !=  nullptr && session_info->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::HeadEndBfdInfo::has_operation() const
{
    for (auto const & leaf : bfd_reverse_path_label.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(bfd_reverse_path_label.operation)
	|| is_set(bfd_reverse_path_stale.operation)
	|| is_set(creation_time.operation)
	|| is_set(is_redundant.operation)
	|| is_set(lspbfd_type.operation)
	|| (deletion_history !=  nullptr && deletion_history->has_operation())
	|| (session_info !=  nullptr && session_info->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::HeadEndBfdInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "head-end-bfd-info";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::HeadEndBfdInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HeadEndBfdInfo' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfd_reverse_path_stale.is_set || is_set(bfd_reverse_path_stale.operation)) leaf_name_data.push_back(bfd_reverse_path_stale.get_name_leafdata());
    if (creation_time.is_set || is_set(creation_time.operation)) leaf_name_data.push_back(creation_time.get_name_leafdata());
    if (is_redundant.is_set || is_set(is_redundant.operation)) leaf_name_data.push_back(is_redundant.get_name_leafdata());
    if (lspbfd_type.is_set || is_set(lspbfd_type.operation)) leaf_name_data.push_back(lspbfd_type.get_name_leafdata());

    auto bfd_reverse_path_label_name_datas = bfd_reverse_path_label.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), bfd_reverse_path_label_name_datas.begin(), bfd_reverse_path_label_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::HeadEndBfdInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "deletion-history")
    {
        if(deletion_history != nullptr)
        {
            children["deletion-history"] = deletion_history;
        }
        else
        {
            deletion_history = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::HeadEndBfdInfo::DeletionHistory>();
            deletion_history->parent = this;
            children["deletion-history"] = deletion_history;
        }
        return children.at("deletion-history");
    }

    if(child_yang_name == "session-info")
    {
        if(session_info != nullptr)
        {
            children["session-info"] = session_info;
        }
        else
        {
            session_info = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::HeadEndBfdInfo::SessionInfo>();
            session_info->parent = this;
            children["session-info"] = session_info;
        }
        return children.at("session-info");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::HeadEndBfdInfo::get_children()
{
    if(children.find("deletion-history") == children.end())
    {
        if(deletion_history != nullptr)
        {
            children["deletion-history"] = deletion_history;
        }
    }

    if(children.find("session-info") == children.end())
    {
        if(session_info != nullptr)
        {
            children["session-info"] = session_info;
        }
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::HeadEndBfdInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bfd-reverse-path-label")
    {
        bfd_reverse_path_label.append(value);
    }
    if(value_path == "bfd-reverse-path-stale")
    {
        bfd_reverse_path_stale = value;
    }
    if(value_path == "creation-time")
    {
        creation_time = value;
    }
    if(value_path == "is-redundant")
    {
        is_redundant = value;
    }
    if(value_path == "lspbfd-type")
    {
        lspbfd_type = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::HeadEndBfdInfo::SessionInfo::SessionInfo()
    :
    state{YType::enumeration, "state"},
    state_change_time{YType::uint32, "state-change-time"}
{
    yang_name = "session-info"; yang_parent_name = "head-end-bfd-info";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::HeadEndBfdInfo::SessionInfo::~SessionInfo()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::HeadEndBfdInfo::SessionInfo::has_data() const
{
    return state.is_set
	|| state_change_time.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::HeadEndBfdInfo::SessionInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(state.operation)
	|| is_set(state_change_time.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::HeadEndBfdInfo::SessionInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-info";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::HeadEndBfdInfo::SessionInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SessionInfo' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (state_change_time.is_set || is_set(state_change_time.operation)) leaf_name_data.push_back(state_change_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::HeadEndBfdInfo::SessionInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::HeadEndBfdInfo::SessionInfo::get_children()
{
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::HeadEndBfdInfo::SessionInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "state-change-time")
    {
        state_change_time = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::HeadEndBfdInfo::DeletionHistory::DeletionHistory()
    :
    deletion_diagnostic_code{YType::uint32, "deletion-diagnostic-code"},
    deletion_reason{YType::str, "deletion-reason"},
    deletion_time{YType::uint32, "deletion-time"},
    lsp_id{YType::uint16, "lsp-id"}
{
    yang_name = "deletion-history"; yang_parent_name = "head-end-bfd-info";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::HeadEndBfdInfo::DeletionHistory::~DeletionHistory()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::HeadEndBfdInfo::DeletionHistory::has_data() const
{
    return deletion_diagnostic_code.is_set
	|| deletion_reason.is_set
	|| deletion_time.is_set
	|| lsp_id.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::HeadEndBfdInfo::DeletionHistory::has_operation() const
{
    return is_set(operation)
	|| is_set(deletion_diagnostic_code.operation)
	|| is_set(deletion_reason.operation)
	|| is_set(deletion_time.operation)
	|| is_set(lsp_id.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::HeadEndBfdInfo::DeletionHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "deletion-history";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::HeadEndBfdInfo::DeletionHistory::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DeletionHistory' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (deletion_diagnostic_code.is_set || is_set(deletion_diagnostic_code.operation)) leaf_name_data.push_back(deletion_diagnostic_code.get_name_leafdata());
    if (deletion_reason.is_set || is_set(deletion_reason.operation)) leaf_name_data.push_back(deletion_reason.get_name_leafdata());
    if (deletion_time.is_set || is_set(deletion_time.operation)) leaf_name_data.push_back(deletion_time.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.operation)) leaf_name_data.push_back(lsp_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::HeadEndBfdInfo::DeletionHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::HeadEndBfdInfo::DeletionHistory::get_children()
{
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::HeadEndBfdInfo::DeletionHistory::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "deletion-diagnostic-code")
    {
        deletion_diagnostic_code = value;
    }
    if(value_path == "deletion-reason")
    {
        deletion_reason = value;
    }
    if(value_path == "deletion-time")
    {
        deletion_time = value;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::TailEndBfdInfo::TailEndBfdInfo()
    :
    failure_diagnostic_code{YType::uint32, "failure-diagnostic-code"},
    failure_reason{YType::str, "failure-reason"},
    local_discriminator{YType::uint32, "local-discriminator"},
    min_interval{YType::uint32, "min-interval"},
    min_interval_default{YType::boolean, "min-interval-default"},
    multiplier{YType::uint8, "multiplier"},
    multiplier_default{YType::boolean, "multiplier-default"},
    remote_discriminator{YType::uint32, "remote-discriminator"}
    	,
    session_info(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::TailEndBfdInfo::SessionInfo>())
{
    session_info->parent = this;
    children["session-info"] = session_info;

    yang_name = "tail-end-bfd-info"; yang_parent_name = "s2l";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::TailEndBfdInfo::~TailEndBfdInfo()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::TailEndBfdInfo::has_data() const
{
    return failure_diagnostic_code.is_set
	|| failure_reason.is_set
	|| local_discriminator.is_set
	|| min_interval.is_set
	|| min_interval_default.is_set
	|| multiplier.is_set
	|| multiplier_default.is_set
	|| remote_discriminator.is_set
	|| (session_info !=  nullptr && session_info->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::TailEndBfdInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(failure_diagnostic_code.operation)
	|| is_set(failure_reason.operation)
	|| is_set(local_discriminator.operation)
	|| is_set(min_interval.operation)
	|| is_set(min_interval_default.operation)
	|| is_set(multiplier.operation)
	|| is_set(multiplier_default.operation)
	|| is_set(remote_discriminator.operation)
	|| (session_info !=  nullptr && session_info->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::TailEndBfdInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tail-end-bfd-info";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::TailEndBfdInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TailEndBfdInfo' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (failure_diagnostic_code.is_set || is_set(failure_diagnostic_code.operation)) leaf_name_data.push_back(failure_diagnostic_code.get_name_leafdata());
    if (failure_reason.is_set || is_set(failure_reason.operation)) leaf_name_data.push_back(failure_reason.get_name_leafdata());
    if (local_discriminator.is_set || is_set(local_discriminator.operation)) leaf_name_data.push_back(local_discriminator.get_name_leafdata());
    if (min_interval.is_set || is_set(min_interval.operation)) leaf_name_data.push_back(min_interval.get_name_leafdata());
    if (min_interval_default.is_set || is_set(min_interval_default.operation)) leaf_name_data.push_back(min_interval_default.get_name_leafdata());
    if (multiplier.is_set || is_set(multiplier.operation)) leaf_name_data.push_back(multiplier.get_name_leafdata());
    if (multiplier_default.is_set || is_set(multiplier_default.operation)) leaf_name_data.push_back(multiplier_default.get_name_leafdata());
    if (remote_discriminator.is_set || is_set(remote_discriminator.operation)) leaf_name_data.push_back(remote_discriminator.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::TailEndBfdInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "session-info")
    {
        if(session_info != nullptr)
        {
            children["session-info"] = session_info;
        }
        else
        {
            session_info = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::TailEndBfdInfo::SessionInfo>();
            session_info->parent = this;
            children["session-info"] = session_info;
        }
        return children.at("session-info");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::TailEndBfdInfo::get_children()
{
    if(children.find("session-info") == children.end())
    {
        if(session_info != nullptr)
        {
            children["session-info"] = session_info;
        }
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::TailEndBfdInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "failure-diagnostic-code")
    {
        failure_diagnostic_code = value;
    }
    if(value_path == "failure-reason")
    {
        failure_reason = value;
    }
    if(value_path == "local-discriminator")
    {
        local_discriminator = value;
    }
    if(value_path == "min-interval")
    {
        min_interval = value;
    }
    if(value_path == "min-interval-default")
    {
        min_interval_default = value;
    }
    if(value_path == "multiplier")
    {
        multiplier = value;
    }
    if(value_path == "multiplier-default")
    {
        multiplier_default = value;
    }
    if(value_path == "remote-discriminator")
    {
        remote_discriminator = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::TailEndBfdInfo::SessionInfo::SessionInfo()
    :
    state{YType::enumeration, "state"},
    state_change_time{YType::uint32, "state-change-time"}
{
    yang_name = "session-info"; yang_parent_name = "tail-end-bfd-info";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::TailEndBfdInfo::SessionInfo::~SessionInfo()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::TailEndBfdInfo::SessionInfo::has_data() const
{
    return state.is_set
	|| state_change_time.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::TailEndBfdInfo::SessionInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(state.operation)
	|| is_set(state_change_time.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::TailEndBfdInfo::SessionInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-info";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::TailEndBfdInfo::SessionInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SessionInfo' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (state_change_time.is_set || is_set(state_change_time.operation)) leaf_name_data.push_back(state_change_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::TailEndBfdInfo::SessionInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::TailEndBfdInfo::SessionInfo::get_children()
{
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::TailEndBfdInfo::SessionInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "state-change-time")
    {
        state_change_time = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::SrlgCollection::SrlgCollection()
    :
    discovered_srlg{YType::uint32, "discovered-srlg"},
    srlg_collect_type{YType::enumeration, "srlg-collect-type"}
{
    yang_name = "srlg-collection"; yang_parent_name = "s2l";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::SrlgCollection::~SrlgCollection()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::SrlgCollection::has_data() const
{
    for (auto const & leaf : discovered_srlg.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return srlg_collect_type.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::SrlgCollection::has_operation() const
{
    for (auto const & leaf : discovered_srlg.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(discovered_srlg.operation)
	|| is_set(srlg_collect_type.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::SrlgCollection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg-collection";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::SrlgCollection::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrlgCollection' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srlg_collect_type.is_set || is_set(srlg_collect_type.operation)) leaf_name_data.push_back(srlg_collect_type.get_name_leafdata());

    auto discovered_srlg_name_datas = discovered_srlg.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), discovered_srlg_name_datas.begin(), discovered_srlg_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::SrlgCollection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::SrlgCollection::get_children()
{
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::SrlgCollection::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "discovered-srlg")
    {
        discovered_srlg.append(value);
    }
    if(value_path == "srlg-collect-type")
    {
        srlg_collect_type = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::Association::Association()
    :
    s2l_association_id{YType::uint16, "s2l-association-id"},
    s2l_association_source{YType::str, "s2l-association-source"},
    s2l_association_tie_role{YType::enumeration, "s2l-association-tie-role"},
    s2l_association_type{YType::uint16, "s2l-association-type"},
    s2l_extended_id{YType::uint32, "s2l-extended-id"},
    s2l_global_source{YType::uint32, "s2l-global-source"}
{
    yang_name = "association"; yang_parent_name = "s2l";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::Association::~Association()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::Association::has_data() const
{
    for (auto const & leaf : s2l_extended_id.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return s2l_association_id.is_set
	|| s2l_association_source.is_set
	|| s2l_association_tie_role.is_set
	|| s2l_association_type.is_set
	|| s2l_global_source.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::Association::has_operation() const
{
    for (auto const & leaf : s2l_extended_id.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(s2l_association_id.operation)
	|| is_set(s2l_association_source.operation)
	|| is_set(s2l_association_tie_role.operation)
	|| is_set(s2l_association_type.operation)
	|| is_set(s2l_extended_id.operation)
	|| is_set(s2l_global_source.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::Association::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "association";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::Association::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Association' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (s2l_association_id.is_set || is_set(s2l_association_id.operation)) leaf_name_data.push_back(s2l_association_id.get_name_leafdata());
    if (s2l_association_source.is_set || is_set(s2l_association_source.operation)) leaf_name_data.push_back(s2l_association_source.get_name_leafdata());
    if (s2l_association_tie_role.is_set || is_set(s2l_association_tie_role.operation)) leaf_name_data.push_back(s2l_association_tie_role.get_name_leafdata());
    if (s2l_association_type.is_set || is_set(s2l_association_type.operation)) leaf_name_data.push_back(s2l_association_type.get_name_leafdata());
    if (s2l_global_source.is_set || is_set(s2l_global_source.operation)) leaf_name_data.push_back(s2l_global_source.get_name_leafdata());

    auto s2l_extended_id_name_datas = s2l_extended_id.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), s2l_extended_id_name_datas.begin(), s2l_extended_id_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::Association::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::Association::get_children()
{
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::Association::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "s2l-association-id")
    {
        s2l_association_id = value;
    }
    if(value_path == "s2l-association-source")
    {
        s2l_association_source = value;
    }
    if(value_path == "s2l-association-tie-role")
    {
        s2l_association_tie_role = value;
    }
    if(value_path == "s2l-association-type")
    {
        s2l_association_type = value;
    }
    if(value_path == "s2l-extended-id")
    {
        s2l_extended_id.append(value);
    }
    if(value_path == "s2l-global-source")
    {
        s2l_global_source = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::Protection::Protection()
    :
    any{YType::boolean, "any"},
    ded1_plus1{YType::boolean, "ded1-plus1"},
    ded1_to1{YType::boolean, "ded1-to1"},
    enhanced{YType::boolean, "enhanced"},
    extra_traffic{YType::boolean, "extra-traffic"},
    link_unprotected{YType::boolean, "link-unprotected"},
    lsp_unprotected{YType::boolean, "lsp-unprotected"},
    one_plus_one_bi{YType::boolean, "one-plus-one-bi"},
    one_plus_one_uni{YType::boolean, "one-plus-one-uni"},
    one_to_n_protection_et{YType::boolean, "one-to-n-protection-et"},
    rerouting{YType::boolean, "rerouting"},
    rerouting_no_et{YType::boolean, "rerouting-no-et"},
    s2l_notification{YType::boolean, "s2l-notification"},
    s2l_operational{YType::boolean, "s2l-operational"},
    s2l_protecting{YType::boolean, "s2l-protecting"},
    s2l_secondary{YType::boolean, "s2l-secondary"},
    shared{YType::boolean, "shared"}
{
    yang_name = "protection"; yang_parent_name = "s2l";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::Protection::~Protection()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::Protection::has_data() const
{
    return any.is_set
	|| ded1_plus1.is_set
	|| ded1_to1.is_set
	|| enhanced.is_set
	|| extra_traffic.is_set
	|| link_unprotected.is_set
	|| lsp_unprotected.is_set
	|| one_plus_one_bi.is_set
	|| one_plus_one_uni.is_set
	|| one_to_n_protection_et.is_set
	|| rerouting.is_set
	|| rerouting_no_et.is_set
	|| s2l_notification.is_set
	|| s2l_operational.is_set
	|| s2l_protecting.is_set
	|| s2l_secondary.is_set
	|| shared.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::Protection::has_operation() const
{
    return is_set(operation)
	|| is_set(any.operation)
	|| is_set(ded1_plus1.operation)
	|| is_set(ded1_to1.operation)
	|| is_set(enhanced.operation)
	|| is_set(extra_traffic.operation)
	|| is_set(link_unprotected.operation)
	|| is_set(lsp_unprotected.operation)
	|| is_set(one_plus_one_bi.operation)
	|| is_set(one_plus_one_uni.operation)
	|| is_set(one_to_n_protection_et.operation)
	|| is_set(rerouting.operation)
	|| is_set(rerouting_no_et.operation)
	|| is_set(s2l_notification.operation)
	|| is_set(s2l_operational.operation)
	|| is_set(s2l_protecting.operation)
	|| is_set(s2l_secondary.operation)
	|| is_set(shared.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::Protection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protection";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::Protection::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Protection' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (any.is_set || is_set(any.operation)) leaf_name_data.push_back(any.get_name_leafdata());
    if (ded1_plus1.is_set || is_set(ded1_plus1.operation)) leaf_name_data.push_back(ded1_plus1.get_name_leafdata());
    if (ded1_to1.is_set || is_set(ded1_to1.operation)) leaf_name_data.push_back(ded1_to1.get_name_leafdata());
    if (enhanced.is_set || is_set(enhanced.operation)) leaf_name_data.push_back(enhanced.get_name_leafdata());
    if (extra_traffic.is_set || is_set(extra_traffic.operation)) leaf_name_data.push_back(extra_traffic.get_name_leafdata());
    if (link_unprotected.is_set || is_set(link_unprotected.operation)) leaf_name_data.push_back(link_unprotected.get_name_leafdata());
    if (lsp_unprotected.is_set || is_set(lsp_unprotected.operation)) leaf_name_data.push_back(lsp_unprotected.get_name_leafdata());
    if (one_plus_one_bi.is_set || is_set(one_plus_one_bi.operation)) leaf_name_data.push_back(one_plus_one_bi.get_name_leafdata());
    if (one_plus_one_uni.is_set || is_set(one_plus_one_uni.operation)) leaf_name_data.push_back(one_plus_one_uni.get_name_leafdata());
    if (one_to_n_protection_et.is_set || is_set(one_to_n_protection_et.operation)) leaf_name_data.push_back(one_to_n_protection_et.get_name_leafdata());
    if (rerouting.is_set || is_set(rerouting.operation)) leaf_name_data.push_back(rerouting.get_name_leafdata());
    if (rerouting_no_et.is_set || is_set(rerouting_no_et.operation)) leaf_name_data.push_back(rerouting_no_et.get_name_leafdata());
    if (s2l_notification.is_set || is_set(s2l_notification.operation)) leaf_name_data.push_back(s2l_notification.get_name_leafdata());
    if (s2l_operational.is_set || is_set(s2l_operational.operation)) leaf_name_data.push_back(s2l_operational.get_name_leafdata());
    if (s2l_protecting.is_set || is_set(s2l_protecting.operation)) leaf_name_data.push_back(s2l_protecting.get_name_leafdata());
    if (s2l_secondary.is_set || is_set(s2l_secondary.operation)) leaf_name_data.push_back(s2l_secondary.get_name_leafdata());
    if (shared.is_set || is_set(shared.operation)) leaf_name_data.push_back(shared.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::Protection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::Protection::get_children()
{
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::Protection::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "any")
    {
        any = value;
    }
    if(value_path == "ded1-plus1")
    {
        ded1_plus1 = value;
    }
    if(value_path == "ded1-to1")
    {
        ded1_to1 = value;
    }
    if(value_path == "enhanced")
    {
        enhanced = value;
    }
    if(value_path == "extra-traffic")
    {
        extra_traffic = value;
    }
    if(value_path == "link-unprotected")
    {
        link_unprotected = value;
    }
    if(value_path == "lsp-unprotected")
    {
        lsp_unprotected = value;
    }
    if(value_path == "one-plus-one-bi")
    {
        one_plus_one_bi = value;
    }
    if(value_path == "one-plus-one-uni")
    {
        one_plus_one_uni = value;
    }
    if(value_path == "one-to-n-protection-et")
    {
        one_to_n_protection_et = value;
    }
    if(value_path == "rerouting")
    {
        rerouting = value;
    }
    if(value_path == "rerouting-no-et")
    {
        rerouting_no_et = value;
    }
    if(value_path == "s2l-notification")
    {
        s2l_notification = value;
    }
    if(value_path == "s2l-operational")
    {
        s2l_operational = value;
    }
    if(value_path == "s2l-protecting")
    {
        s2l_protecting = value;
    }
    if(value_path == "s2l-secondary")
    {
        s2l_secondary = value;
    }
    if(value_path == "shared")
    {
        shared = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ReverseLspFec::ReverseLspFec()
    :
    fec_extended_tunnel_id{YType::str, "fec-extended-tunnel-id"},
    fec_lsp_id{YType::uint16, "fec-lsp-id"},
    fec_source{YType::str, "fec-source"},
    fec_tunnel_id{YType::uint16, "fec-tunnel-id"},
    fec_vrf{YType::str, "fec-vrf"}
    	,
    fec_destination_info(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ReverseLspFec::FecDestinationInfo>())
{
    fec_destination_info->parent = this;
    children["fec-destination-info"] = fec_destination_info;

    yang_name = "reverse-lsp-fec"; yang_parent_name = "s2l";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ReverseLspFec::~ReverseLspFec()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ReverseLspFec::has_data() const
{
    return fec_extended_tunnel_id.is_set
	|| fec_lsp_id.is_set
	|| fec_source.is_set
	|| fec_tunnel_id.is_set
	|| fec_vrf.is_set
	|| (fec_destination_info !=  nullptr && fec_destination_info->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ReverseLspFec::has_operation() const
{
    return is_set(operation)
	|| is_set(fec_extended_tunnel_id.operation)
	|| is_set(fec_lsp_id.operation)
	|| is_set(fec_source.operation)
	|| is_set(fec_tunnel_id.operation)
	|| is_set(fec_vrf.operation)
	|| (fec_destination_info !=  nullptr && fec_destination_info->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ReverseLspFec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reverse-lsp-fec";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ReverseLspFec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ReverseLspFec' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ReverseLspFec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "fec-destination-info")
    {
        if(fec_destination_info != nullptr)
        {
            children["fec-destination-info"] = fec_destination_info;
        }
        else
        {
            fec_destination_info = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ReverseLspFec::FecDestinationInfo>();
            fec_destination_info->parent = this;
            children["fec-destination-info"] = fec_destination_info;
        }
        return children.at("fec-destination-info");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ReverseLspFec::get_children()
{
    if(children.find("fec-destination-info") == children.end())
    {
        if(fec_destination_info != nullptr)
        {
            children["fec-destination-info"] = fec_destination_info;
        }
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ReverseLspFec::set_value(const std::string & value_path, std::string value)
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

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ReverseLspFec::FecDestinationInfo::FecDestinationInfo()
    :
    fec_ctype{YType::enumeration, "fec-ctype"},
    fec_destination_p2mp_id{YType::uint32, "fec-destination-p2mp-id"},
    p2p_lsp_destination{YType::str, "p2p-lsp-destination"}
{
    yang_name = "fec-destination-info"; yang_parent_name = "reverse-lsp-fec";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ReverseLspFec::FecDestinationInfo::~FecDestinationInfo()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ReverseLspFec::FecDestinationInfo::has_data() const
{
    return fec_ctype.is_set
	|| fec_destination_p2mp_id.is_set
	|| p2p_lsp_destination.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ReverseLspFec::FecDestinationInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(fec_ctype.operation)
	|| is_set(fec_destination_p2mp_id.operation)
	|| is_set(p2p_lsp_destination.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ReverseLspFec::FecDestinationInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fec-destination-info";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ReverseLspFec::FecDestinationInfo::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ReverseLspFec::FecDestinationInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ReverseLspFec::FecDestinationInfo::get_children()
{
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ReverseLspFec::FecDestinationInfo::set_value(const std::string & value_path, std::string value)
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

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ReverseTspec::ReverseTspec()
    :
    average_rate{YType::uint64, "average-rate"},
    maximum_burst{YType::uint64, "maximum-burst"},
    peak_rate{YType::uint64, "peak-rate"}
{
    yang_name = "reverse-tspec"; yang_parent_name = "s2l";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ReverseTspec::~ReverseTspec()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ReverseTspec::has_data() const
{
    return average_rate.is_set
	|| maximum_burst.is_set
	|| peak_rate.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ReverseTspec::has_operation() const
{
    return is_set(operation)
	|| is_set(average_rate.operation)
	|| is_set(maximum_burst.operation)
	|| is_set(peak_rate.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ReverseTspec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reverse-tspec";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ReverseTspec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ReverseTspec' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average_rate.is_set || is_set(average_rate.operation)) leaf_name_data.push_back(average_rate.get_name_leafdata());
    if (maximum_burst.is_set || is_set(maximum_burst.operation)) leaf_name_data.push_back(maximum_burst.get_name_leafdata());
    if (peak_rate.is_set || is_set(peak_rate.operation)) leaf_name_data.push_back(peak_rate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ReverseTspec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ReverseTspec::get_children()
{
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ReverseTspec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average-rate")
    {
        average_rate = value;
    }
    if(value_path == "maximum-burst")
    {
        maximum_burst = value;
    }
    if(value_path == "peak-rate")
    {
        peak_rate = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::FlexInfo::FlexInfo()
    :
    bfd_created{YType::boolean, "bfd-created"},
    bfd_egress_label{YType::uint32, "bfd-egress-label"},
    bfd_int_label{YType::uint32, "bfd-int-label"},
    bfd_next_hop{YType::str, "bfd-next-hop"},
    bfd_out_ifh{YType::str, "bfd-out-ifh"},
    bfd_tun_ifh{YType::str, "bfd-tun-ifh"},
    bfd_up{YType::boolean, "bfd-up"},
    entry_exists{YType::boolean, "entry-exists"},
    fault_ais{YType::boolean, "fault-ais"},
    fault_ldi{YType::boolean, "fault-ldi"},
    fault_ldi_lockout{YType::boolean, "fault-ldi-lockout"},
    fault_lkr{YType::boolean, "fault-lkr"},
    fault_time{YType::uint32, "fault-time"},
    in_label{YType::uint32, "in-label"},
    oam_created{YType::boolean, "oam-created"}
    	,
    flex_fec(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::FlexInfo::FlexFec>())
{
    flex_fec->parent = this;
    children["flex-fec"] = flex_fec;

    yang_name = "flex-info"; yang_parent_name = "s2l";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::FlexInfo::~FlexInfo()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::FlexInfo::has_data() const
{
    return bfd_created.is_set
	|| bfd_egress_label.is_set
	|| bfd_int_label.is_set
	|| bfd_next_hop.is_set
	|| bfd_out_ifh.is_set
	|| bfd_tun_ifh.is_set
	|| bfd_up.is_set
	|| entry_exists.is_set
	|| fault_ais.is_set
	|| fault_ldi.is_set
	|| fault_ldi_lockout.is_set
	|| fault_lkr.is_set
	|| fault_time.is_set
	|| in_label.is_set
	|| oam_created.is_set
	|| (flex_fec !=  nullptr && flex_fec->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::FlexInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(bfd_created.operation)
	|| is_set(bfd_egress_label.operation)
	|| is_set(bfd_int_label.operation)
	|| is_set(bfd_next_hop.operation)
	|| is_set(bfd_out_ifh.operation)
	|| is_set(bfd_tun_ifh.operation)
	|| is_set(bfd_up.operation)
	|| is_set(entry_exists.operation)
	|| is_set(fault_ais.operation)
	|| is_set(fault_ldi.operation)
	|| is_set(fault_ldi_lockout.operation)
	|| is_set(fault_lkr.operation)
	|| is_set(fault_time.operation)
	|| is_set(in_label.operation)
	|| is_set(oam_created.operation)
	|| (flex_fec !=  nullptr && flex_fec->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::FlexInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flex-info";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::FlexInfo::get_entity_path(Entity* ancestor) const
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

    if (bfd_created.is_set || is_set(bfd_created.operation)) leaf_name_data.push_back(bfd_created.get_name_leafdata());
    if (bfd_egress_label.is_set || is_set(bfd_egress_label.operation)) leaf_name_data.push_back(bfd_egress_label.get_name_leafdata());
    if (bfd_int_label.is_set || is_set(bfd_int_label.operation)) leaf_name_data.push_back(bfd_int_label.get_name_leafdata());
    if (bfd_next_hop.is_set || is_set(bfd_next_hop.operation)) leaf_name_data.push_back(bfd_next_hop.get_name_leafdata());
    if (bfd_out_ifh.is_set || is_set(bfd_out_ifh.operation)) leaf_name_data.push_back(bfd_out_ifh.get_name_leafdata());
    if (bfd_tun_ifh.is_set || is_set(bfd_tun_ifh.operation)) leaf_name_data.push_back(bfd_tun_ifh.get_name_leafdata());
    if (bfd_up.is_set || is_set(bfd_up.operation)) leaf_name_data.push_back(bfd_up.get_name_leafdata());
    if (entry_exists.is_set || is_set(entry_exists.operation)) leaf_name_data.push_back(entry_exists.get_name_leafdata());
    if (fault_ais.is_set || is_set(fault_ais.operation)) leaf_name_data.push_back(fault_ais.get_name_leafdata());
    if (fault_ldi.is_set || is_set(fault_ldi.operation)) leaf_name_data.push_back(fault_ldi.get_name_leafdata());
    if (fault_ldi_lockout.is_set || is_set(fault_ldi_lockout.operation)) leaf_name_data.push_back(fault_ldi_lockout.get_name_leafdata());
    if (fault_lkr.is_set || is_set(fault_lkr.operation)) leaf_name_data.push_back(fault_lkr.get_name_leafdata());
    if (fault_time.is_set || is_set(fault_time.operation)) leaf_name_data.push_back(fault_time.get_name_leafdata());
    if (in_label.is_set || is_set(in_label.operation)) leaf_name_data.push_back(in_label.get_name_leafdata());
    if (oam_created.is_set || is_set(oam_created.operation)) leaf_name_data.push_back(oam_created.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::FlexInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "flex-fec")
    {
        if(flex_fec != nullptr)
        {
            children["flex-fec"] = flex_fec;
        }
        else
        {
            flex_fec = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::FlexInfo::FlexFec>();
            flex_fec->parent = this;
            children["flex-fec"] = flex_fec;
        }
        return children.at("flex-fec");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::FlexInfo::get_children()
{
    if(children.find("flex-fec") == children.end())
    {
        if(flex_fec != nullptr)
        {
            children["flex-fec"] = flex_fec;
        }
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::FlexInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bfd-created")
    {
        bfd_created = value;
    }
    if(value_path == "bfd-egress-label")
    {
        bfd_egress_label = value;
    }
    if(value_path == "bfd-int-label")
    {
        bfd_int_label = value;
    }
    if(value_path == "bfd-next-hop")
    {
        bfd_next_hop = value;
    }
    if(value_path == "bfd-out-ifh")
    {
        bfd_out_ifh = value;
    }
    if(value_path == "bfd-tun-ifh")
    {
        bfd_tun_ifh = value;
    }
    if(value_path == "bfd-up")
    {
        bfd_up = value;
    }
    if(value_path == "entry-exists")
    {
        entry_exists = value;
    }
    if(value_path == "fault-ais")
    {
        fault_ais = value;
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
    if(value_path == "in-label")
    {
        in_label = value;
    }
    if(value_path == "oam-created")
    {
        oam_created = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::FlexInfo::FlexFec::FlexFec()
    :
    s2l_fec_ctype{YType::enumeration, "s2l-fec-ctype"},
    s2l_fec_dest{YType::str, "s2l-fec-dest"},
    s2l_fec_extended_tunnel_id{YType::str, "s2l-fec-extended-tunnel-id"},
    s2l_fec_lsp_id{YType::uint16, "s2l-fec-lsp-id"},
    s2l_fec_p2mp_id{YType::uint32, "s2l-fec-p2mp-id"},
    s2l_fec_source{YType::str, "s2l-fec-source"},
    s2l_fec_subgroup_id{YType::uint16, "s2l-fec-subgroup-id"},
    s2l_fec_subgroup_originator{YType::str, "s2l-fec-subgroup-originator"},
    s2l_fec_tunnel_id{YType::uint16, "s2l-fec-tunnel-id"},
    s2l_fec_vrf{YType::str, "s2l-fec-vrf"}
{
    yang_name = "flex-fec"; yang_parent_name = "flex-info";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::FlexInfo::FlexFec::~FlexFec()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::FlexInfo::FlexFec::has_data() const
{
    return s2l_fec_ctype.is_set
	|| s2l_fec_dest.is_set
	|| s2l_fec_extended_tunnel_id.is_set
	|| s2l_fec_lsp_id.is_set
	|| s2l_fec_p2mp_id.is_set
	|| s2l_fec_source.is_set
	|| s2l_fec_subgroup_id.is_set
	|| s2l_fec_subgroup_originator.is_set
	|| s2l_fec_tunnel_id.is_set
	|| s2l_fec_vrf.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::FlexInfo::FlexFec::has_operation() const
{
    return is_set(operation)
	|| is_set(s2l_fec_ctype.operation)
	|| is_set(s2l_fec_dest.operation)
	|| is_set(s2l_fec_extended_tunnel_id.operation)
	|| is_set(s2l_fec_lsp_id.operation)
	|| is_set(s2l_fec_p2mp_id.operation)
	|| is_set(s2l_fec_source.operation)
	|| is_set(s2l_fec_subgroup_id.operation)
	|| is_set(s2l_fec_subgroup_originator.operation)
	|| is_set(s2l_fec_tunnel_id.operation)
	|| is_set(s2l_fec_vrf.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::FlexInfo::FlexFec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flex-fec";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::FlexInfo::FlexFec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FlexFec' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (s2l_fec_ctype.is_set || is_set(s2l_fec_ctype.operation)) leaf_name_data.push_back(s2l_fec_ctype.get_name_leafdata());
    if (s2l_fec_dest.is_set || is_set(s2l_fec_dest.operation)) leaf_name_data.push_back(s2l_fec_dest.get_name_leafdata());
    if (s2l_fec_extended_tunnel_id.is_set || is_set(s2l_fec_extended_tunnel_id.operation)) leaf_name_data.push_back(s2l_fec_extended_tunnel_id.get_name_leafdata());
    if (s2l_fec_lsp_id.is_set || is_set(s2l_fec_lsp_id.operation)) leaf_name_data.push_back(s2l_fec_lsp_id.get_name_leafdata());
    if (s2l_fec_p2mp_id.is_set || is_set(s2l_fec_p2mp_id.operation)) leaf_name_data.push_back(s2l_fec_p2mp_id.get_name_leafdata());
    if (s2l_fec_source.is_set || is_set(s2l_fec_source.operation)) leaf_name_data.push_back(s2l_fec_source.get_name_leafdata());
    if (s2l_fec_subgroup_id.is_set || is_set(s2l_fec_subgroup_id.operation)) leaf_name_data.push_back(s2l_fec_subgroup_id.get_name_leafdata());
    if (s2l_fec_subgroup_originator.is_set || is_set(s2l_fec_subgroup_originator.operation)) leaf_name_data.push_back(s2l_fec_subgroup_originator.get_name_leafdata());
    if (s2l_fec_tunnel_id.is_set || is_set(s2l_fec_tunnel_id.operation)) leaf_name_data.push_back(s2l_fec_tunnel_id.get_name_leafdata());
    if (s2l_fec_vrf.is_set || is_set(s2l_fec_vrf.operation)) leaf_name_data.push_back(s2l_fec_vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::FlexInfo::FlexFec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::FlexInfo::FlexFec::get_children()
{
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::FlexInfo::FlexFec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "s2l-fec-ctype")
    {
        s2l_fec_ctype = value;
    }
    if(value_path == "s2l-fec-dest")
    {
        s2l_fec_dest = value;
    }
    if(value_path == "s2l-fec-extended-tunnel-id")
    {
        s2l_fec_extended_tunnel_id = value;
    }
    if(value_path == "s2l-fec-lsp-id")
    {
        s2l_fec_lsp_id = value;
    }
    if(value_path == "s2l-fec-p2mp-id")
    {
        s2l_fec_p2mp_id = value;
    }
    if(value_path == "s2l-fec-source")
    {
        s2l_fec_source = value;
    }
    if(value_path == "s2l-fec-subgroup-id")
    {
        s2l_fec_subgroup_id = value;
    }
    if(value_path == "s2l-fec-subgroup-originator")
    {
        s2l_fec_subgroup_originator = value;
    }
    if(value_path == "s2l-fec-tunnel-id")
    {
        s2l_fec_tunnel_id = value;
    }
    if(value_path == "s2l-fec-vrf")
    {
        s2l_fec_vrf = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::LspWrapInfo::LspWrapInfo()
    :
    lsp_wrap_protection_enable{YType::boolean, "lsp-wrap-protection-enable"},
    lsp_wrap_protection_label{YType::uint32, "lsp-wrap-protection-label"},
    lsp_wrap_protection_state{YType::enumeration, "lsp-wrap-protection-state"},
    reverse_egress_interface{YType::str, "reverse-egress-interface"},
    reverse_lsp_label{YType::uint32, "reverse-lsp-label"}
{
    yang_name = "lsp-wrap-info"; yang_parent_name = "s2l";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::LspWrapInfo::~LspWrapInfo()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::LspWrapInfo::has_data() const
{
    return lsp_wrap_protection_enable.is_set
	|| lsp_wrap_protection_label.is_set
	|| lsp_wrap_protection_state.is_set
	|| reverse_egress_interface.is_set
	|| reverse_lsp_label.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::LspWrapInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(lsp_wrap_protection_enable.operation)
	|| is_set(lsp_wrap_protection_label.operation)
	|| is_set(lsp_wrap_protection_state.operation)
	|| is_set(reverse_egress_interface.operation)
	|| is_set(reverse_lsp_label.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::LspWrapInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-wrap-info";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::LspWrapInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LspWrapInfo' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_wrap_protection_enable.is_set || is_set(lsp_wrap_protection_enable.operation)) leaf_name_data.push_back(lsp_wrap_protection_enable.get_name_leafdata());
    if (lsp_wrap_protection_label.is_set || is_set(lsp_wrap_protection_label.operation)) leaf_name_data.push_back(lsp_wrap_protection_label.get_name_leafdata());
    if (lsp_wrap_protection_state.is_set || is_set(lsp_wrap_protection_state.operation)) leaf_name_data.push_back(lsp_wrap_protection_state.get_name_leafdata());
    if (reverse_egress_interface.is_set || is_set(reverse_egress_interface.operation)) leaf_name_data.push_back(reverse_egress_interface.get_name_leafdata());
    if (reverse_lsp_label.is_set || is_set(reverse_lsp_label.operation)) leaf_name_data.push_back(reverse_lsp_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::LspWrapInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::LspWrapInfo::get_children()
{
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::LspWrapInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lsp-wrap-protection-enable")
    {
        lsp_wrap_protection_enable = value;
    }
    if(value_path == "lsp-wrap-protection-label")
    {
        lsp_wrap_protection_label = value;
    }
    if(value_path == "lsp-wrap-protection-state")
    {
        lsp_wrap_protection_state = value;
    }
    if(value_path == "reverse-egress-interface")
    {
        reverse_egress_interface = value;
    }
    if(value_path == "reverse-lsp-label")
    {
        reverse_lsp_label = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::DiversityInfo::DiversityInfo()
    :
    diversity_type{YType::enumeration, "diversity-type"}
{
    yang_name = "diversity-info"; yang_parent_name = "s2l";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::DiversityInfo::~DiversityInfo()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::DiversityInfo::has_data() const
{
    return diversity_type.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::DiversityInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(diversity_type.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::DiversityInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diversity-info";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::DiversityInfo::get_entity_path(Entity* ancestor) const
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

    if (diversity_type.is_set || is_set(diversity_type.operation)) leaf_name_data.push_back(diversity_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::DiversityInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::DiversityInfo::get_children()
{
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::DiversityInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "diversity-type")
    {
        diversity_type = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::SharedRiskLinkGroup::SharedRiskLinkGroup()
    :
    shared_risk_group{YType::uint32, "shared-risk-group"},
    srlg_name{YType::str, "srlg-name"}
{
    yang_name = "shared-risk-link-group"; yang_parent_name = "s2l";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::SharedRiskLinkGroup::~SharedRiskLinkGroup()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::SharedRiskLinkGroup::has_data() const
{
    return shared_risk_group.is_set
	|| srlg_name.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::SharedRiskLinkGroup::has_operation() const
{
    return is_set(operation)
	|| is_set(shared_risk_group.operation)
	|| is_set(srlg_name.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::SharedRiskLinkGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shared-risk-link-group";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::SharedRiskLinkGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SharedRiskLinkGroup' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (shared_risk_group.is_set || is_set(shared_risk_group.operation)) leaf_name_data.push_back(shared_risk_group.get_name_leafdata());
    if (srlg_name.is_set || is_set(srlg_name.operation)) leaf_name_data.push_back(srlg_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::SharedRiskLinkGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::SharedRiskLinkGroup::get_children()
{
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::SharedRiskLinkGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "shared-risk-group")
    {
        shared_risk_group = value;
    }
    if(value_path == "srlg-name")
    {
        srlg_name = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OutEro::OutEro()
    :
    ero_type{YType::enumeration, "ero-type"}
    	,
    ipv4ero_sub_object(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OutEro::Ipv4EroSubObject>())
	,unnumbered_ero_sub_object(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OutEro::UnnumberedEroSubObject>())
{
    ipv4ero_sub_object->parent = this;
    children["ipv4ero-sub-object"] = ipv4ero_sub_object;

    unnumbered_ero_sub_object->parent = this;
    children["unnumbered-ero-sub-object"] = unnumbered_ero_sub_object;

    yang_name = "out-ero"; yang_parent_name = "s2l";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OutEro::~OutEro()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OutEro::has_data() const
{
    return ero_type.is_set
	|| (ipv4ero_sub_object !=  nullptr && ipv4ero_sub_object->has_data())
	|| (unnumbered_ero_sub_object !=  nullptr && unnumbered_ero_sub_object->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OutEro::has_operation() const
{
    return is_set(operation)
	|| is_set(ero_type.operation)
	|| (ipv4ero_sub_object !=  nullptr && ipv4ero_sub_object->has_operation())
	|| (unnumbered_ero_sub_object !=  nullptr && unnumbered_ero_sub_object->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OutEro::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-ero";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OutEro::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutEro' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OutEro::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4ero-sub-object")
    {
        if(ipv4ero_sub_object != nullptr)
        {
            children["ipv4ero-sub-object"] = ipv4ero_sub_object;
        }
        else
        {
            ipv4ero_sub_object = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OutEro::Ipv4EroSubObject>();
            ipv4ero_sub_object->parent = this;
            children["ipv4ero-sub-object"] = ipv4ero_sub_object;
        }
        return children.at("ipv4ero-sub-object");
    }

    if(child_yang_name == "unnumbered-ero-sub-object")
    {
        if(unnumbered_ero_sub_object != nullptr)
        {
            children["unnumbered-ero-sub-object"] = unnumbered_ero_sub_object;
        }
        else
        {
            unnumbered_ero_sub_object = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OutEro::UnnumberedEroSubObject>();
            unnumbered_ero_sub_object->parent = this;
            children["unnumbered-ero-sub-object"] = unnumbered_ero_sub_object;
        }
        return children.at("unnumbered-ero-sub-object");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OutEro::get_children()
{
    if(children.find("ipv4ero-sub-object") == children.end())
    {
        if(ipv4ero_sub_object != nullptr)
        {
            children["ipv4ero-sub-object"] = ipv4ero_sub_object;
        }
    }

    if(children.find("unnumbered-ero-sub-object") == children.end())
    {
        if(unnumbered_ero_sub_object != nullptr)
        {
            children["unnumbered-ero-sub-object"] = unnumbered_ero_sub_object;
        }
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OutEro::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ero-type")
    {
        ero_type = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OutEro::Ipv4EroSubObject::Ipv4EroSubObject()
    :
    ero_address{YType::str, "ero-address"},
    is_strict_route{YType::boolean, "is-strict-route"},
    prefix_length{YType::uint8, "prefix-length"}
{
    yang_name = "ipv4ero-sub-object"; yang_parent_name = "out-ero";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OutEro::Ipv4EroSubObject::~Ipv4EroSubObject()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OutEro::Ipv4EroSubObject::has_data() const
{
    return ero_address.is_set
	|| is_strict_route.is_set
	|| prefix_length.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OutEro::Ipv4EroSubObject::has_operation() const
{
    return is_set(operation)
	|| is_set(ero_address.operation)
	|| is_set(is_strict_route.operation)
	|| is_set(prefix_length.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OutEro::Ipv4EroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4ero-sub-object";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OutEro::Ipv4EroSubObject::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OutEro::Ipv4EroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OutEro::Ipv4EroSubObject::get_children()
{
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OutEro::Ipv4EroSubObject::set_value(const std::string & value_path, std::string value)
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

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OutEro::UnnumberedEroSubObject::UnnumberedEroSubObject()
    :
    ero_interface_id{YType::uint32, "ero-interface-id"},
    ero_router_id{YType::str, "ero-router-id"},
    is_strict_route{YType::boolean, "is-strict-route"},
    status{YType::enumeration, "status"}
{
    yang_name = "unnumbered-ero-sub-object"; yang_parent_name = "out-ero";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OutEro::UnnumberedEroSubObject::~UnnumberedEroSubObject()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OutEro::UnnumberedEroSubObject::has_data() const
{
    return ero_interface_id.is_set
	|| ero_router_id.is_set
	|| is_strict_route.is_set
	|| status.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OutEro::UnnumberedEroSubObject::has_operation() const
{
    return is_set(operation)
	|| is_set(ero_interface_id.operation)
	|| is_set(ero_router_id.operation)
	|| is_set(is_strict_route.operation)
	|| is_set(status.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OutEro::UnnumberedEroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unnumbered-ero-sub-object";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OutEro::UnnumberedEroSubObject::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OutEro::UnnumberedEroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OutEro::UnnumberedEroSubObject::get_children()
{
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::OutEro::UnnumberedEroSubObject::set_value(const std::string & value_path, std::string value)
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

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::InEro::InEro()
    :
    ero_type{YType::enumeration, "ero-type"}
    	,
    ipv4ero_sub_object(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::InEro::Ipv4EroSubObject>())
	,unnumbered_ero_sub_object(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::InEro::UnnumberedEroSubObject>())
{
    ipv4ero_sub_object->parent = this;
    children["ipv4ero-sub-object"] = ipv4ero_sub_object;

    unnumbered_ero_sub_object->parent = this;
    children["unnumbered-ero-sub-object"] = unnumbered_ero_sub_object;

    yang_name = "in-ero"; yang_parent_name = "s2l";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::InEro::~InEro()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::InEro::has_data() const
{
    return ero_type.is_set
	|| (ipv4ero_sub_object !=  nullptr && ipv4ero_sub_object->has_data())
	|| (unnumbered_ero_sub_object !=  nullptr && unnumbered_ero_sub_object->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::InEro::has_operation() const
{
    return is_set(operation)
	|| is_set(ero_type.operation)
	|| (ipv4ero_sub_object !=  nullptr && ipv4ero_sub_object->has_operation())
	|| (unnumbered_ero_sub_object !=  nullptr && unnumbered_ero_sub_object->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::InEro::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-ero";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::InEro::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InEro' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::InEro::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4ero-sub-object")
    {
        if(ipv4ero_sub_object != nullptr)
        {
            children["ipv4ero-sub-object"] = ipv4ero_sub_object;
        }
        else
        {
            ipv4ero_sub_object = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::InEro::Ipv4EroSubObject>();
            ipv4ero_sub_object->parent = this;
            children["ipv4ero-sub-object"] = ipv4ero_sub_object;
        }
        return children.at("ipv4ero-sub-object");
    }

    if(child_yang_name == "unnumbered-ero-sub-object")
    {
        if(unnumbered_ero_sub_object != nullptr)
        {
            children["unnumbered-ero-sub-object"] = unnumbered_ero_sub_object;
        }
        else
        {
            unnumbered_ero_sub_object = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::InEro::UnnumberedEroSubObject>();
            unnumbered_ero_sub_object->parent = this;
            children["unnumbered-ero-sub-object"] = unnumbered_ero_sub_object;
        }
        return children.at("unnumbered-ero-sub-object");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::InEro::get_children()
{
    if(children.find("ipv4ero-sub-object") == children.end())
    {
        if(ipv4ero_sub_object != nullptr)
        {
            children["ipv4ero-sub-object"] = ipv4ero_sub_object;
        }
    }

    if(children.find("unnumbered-ero-sub-object") == children.end())
    {
        if(unnumbered_ero_sub_object != nullptr)
        {
            children["unnumbered-ero-sub-object"] = unnumbered_ero_sub_object;
        }
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::InEro::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ero-type")
    {
        ero_type = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::InEro::Ipv4EroSubObject::Ipv4EroSubObject()
    :
    ero_address{YType::str, "ero-address"},
    is_strict_route{YType::boolean, "is-strict-route"},
    prefix_length{YType::uint8, "prefix-length"}
{
    yang_name = "ipv4ero-sub-object"; yang_parent_name = "in-ero";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::InEro::Ipv4EroSubObject::~Ipv4EroSubObject()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::InEro::Ipv4EroSubObject::has_data() const
{
    return ero_address.is_set
	|| is_strict_route.is_set
	|| prefix_length.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::InEro::Ipv4EroSubObject::has_operation() const
{
    return is_set(operation)
	|| is_set(ero_address.operation)
	|| is_set(is_strict_route.operation)
	|| is_set(prefix_length.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::InEro::Ipv4EroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4ero-sub-object";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::InEro::Ipv4EroSubObject::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::InEro::Ipv4EroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::InEro::Ipv4EroSubObject::get_children()
{
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::InEro::Ipv4EroSubObject::set_value(const std::string & value_path, std::string value)
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

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::InEro::UnnumberedEroSubObject::UnnumberedEroSubObject()
    :
    ero_interface_id{YType::uint32, "ero-interface-id"},
    ero_router_id{YType::str, "ero-router-id"},
    is_strict_route{YType::boolean, "is-strict-route"},
    status{YType::enumeration, "status"}
{
    yang_name = "unnumbered-ero-sub-object"; yang_parent_name = "in-ero";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::InEro::UnnumberedEroSubObject::~UnnumberedEroSubObject()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::InEro::UnnumberedEroSubObject::has_data() const
{
    return ero_interface_id.is_set
	|| ero_router_id.is_set
	|| is_strict_route.is_set
	|| status.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::InEro::UnnumberedEroSubObject::has_operation() const
{
    return is_set(operation)
	|| is_set(ero_interface_id.operation)
	|| is_set(ero_router_id.operation)
	|| is_set(is_strict_route.operation)
	|| is_set(status.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::InEro::UnnumberedEroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unnumbered-ero-sub-object";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::InEro::UnnumberedEroSubObject::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::InEro::UnnumberedEroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::InEro::UnnumberedEroSubObject::get_children()
{
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::InEro::UnnumberedEroSubObject::set_value(const std::string & value_path, std::string value)
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

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::PathRro::PathRro()
    :
    rro_type{YType::enumeration, "rro-type"}
    	,
    ipv4rro_sub_object(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::PathRro::Ipv4RroSubObject>())
	,label_rro_sub_object(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::PathRro::LabelRroSubObject>())
	,srlg_rro_sub_object(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::PathRro::SrlgRroSubObject>())
	,unnumbered_rro_sub_object(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::PathRro::UnnumberedRroSubObject>())
{
    ipv4rro_sub_object->parent = this;
    children["ipv4rro-sub-object"] = ipv4rro_sub_object;

    label_rro_sub_object->parent = this;
    children["label-rro-sub-object"] = label_rro_sub_object;

    srlg_rro_sub_object->parent = this;
    children["srlg-rro-sub-object"] = srlg_rro_sub_object;

    unnumbered_rro_sub_object->parent = this;
    children["unnumbered-rro-sub-object"] = unnumbered_rro_sub_object;

    yang_name = "path-rro"; yang_parent_name = "s2l";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::PathRro::~PathRro()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::PathRro::has_data() const
{
    return rro_type.is_set
	|| (ipv4rro_sub_object !=  nullptr && ipv4rro_sub_object->has_data())
	|| (label_rro_sub_object !=  nullptr && label_rro_sub_object->has_data())
	|| (srlg_rro_sub_object !=  nullptr && srlg_rro_sub_object->has_data())
	|| (unnumbered_rro_sub_object !=  nullptr && unnumbered_rro_sub_object->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::PathRro::has_operation() const
{
    return is_set(operation)
	|| is_set(rro_type.operation)
	|| (ipv4rro_sub_object !=  nullptr && ipv4rro_sub_object->has_operation())
	|| (label_rro_sub_object !=  nullptr && label_rro_sub_object->has_operation())
	|| (srlg_rro_sub_object !=  nullptr && srlg_rro_sub_object->has_operation())
	|| (unnumbered_rro_sub_object !=  nullptr && unnumbered_rro_sub_object->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::PathRro::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-rro";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::PathRro::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PathRro' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::PathRro::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4rro-sub-object")
    {
        if(ipv4rro_sub_object != nullptr)
        {
            children["ipv4rro-sub-object"] = ipv4rro_sub_object;
        }
        else
        {
            ipv4rro_sub_object = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::PathRro::Ipv4RroSubObject>();
            ipv4rro_sub_object->parent = this;
            children["ipv4rro-sub-object"] = ipv4rro_sub_object;
        }
        return children.at("ipv4rro-sub-object");
    }

    if(child_yang_name == "label-rro-sub-object")
    {
        if(label_rro_sub_object != nullptr)
        {
            children["label-rro-sub-object"] = label_rro_sub_object;
        }
        else
        {
            label_rro_sub_object = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::PathRro::LabelRroSubObject>();
            label_rro_sub_object->parent = this;
            children["label-rro-sub-object"] = label_rro_sub_object;
        }
        return children.at("label-rro-sub-object");
    }

    if(child_yang_name == "srlg-rro-sub-object")
    {
        if(srlg_rro_sub_object != nullptr)
        {
            children["srlg-rro-sub-object"] = srlg_rro_sub_object;
        }
        else
        {
            srlg_rro_sub_object = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::PathRro::SrlgRroSubObject>();
            srlg_rro_sub_object->parent = this;
            children["srlg-rro-sub-object"] = srlg_rro_sub_object;
        }
        return children.at("srlg-rro-sub-object");
    }

    if(child_yang_name == "unnumbered-rro-sub-object")
    {
        if(unnumbered_rro_sub_object != nullptr)
        {
            children["unnumbered-rro-sub-object"] = unnumbered_rro_sub_object;
        }
        else
        {
            unnumbered_rro_sub_object = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::PathRro::UnnumberedRroSubObject>();
            unnumbered_rro_sub_object->parent = this;
            children["unnumbered-rro-sub-object"] = unnumbered_rro_sub_object;
        }
        return children.at("unnumbered-rro-sub-object");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::PathRro::get_children()
{
    if(children.find("ipv4rro-sub-object") == children.end())
    {
        if(ipv4rro_sub_object != nullptr)
        {
            children["ipv4rro-sub-object"] = ipv4rro_sub_object;
        }
    }

    if(children.find("label-rro-sub-object") == children.end())
    {
        if(label_rro_sub_object != nullptr)
        {
            children["label-rro-sub-object"] = label_rro_sub_object;
        }
    }

    if(children.find("srlg-rro-sub-object") == children.end())
    {
        if(srlg_rro_sub_object != nullptr)
        {
            children["srlg-rro-sub-object"] = srlg_rro_sub_object;
        }
    }

    if(children.find("unnumbered-rro-sub-object") == children.end())
    {
        if(unnumbered_rro_sub_object != nullptr)
        {
            children["unnumbered-rro-sub-object"] = unnumbered_rro_sub_object;
        }
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::PathRro::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rro-type")
    {
        rro_type = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::PathRro::Ipv4RroSubObject::Ipv4RroSubObject()
    :
    rro_address{YType::str, "rro-address"}
    	,
    flags(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::PathRro::Ipv4RroSubObject::Flags>())
{
    flags->parent = this;
    children["flags"] = flags;

    yang_name = "ipv4rro-sub-object"; yang_parent_name = "path-rro";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::PathRro::Ipv4RroSubObject::~Ipv4RroSubObject()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::PathRro::Ipv4RroSubObject::has_data() const
{
    return rro_address.is_set
	|| (flags !=  nullptr && flags->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::PathRro::Ipv4RroSubObject::has_operation() const
{
    return is_set(operation)
	|| is_set(rro_address.operation)
	|| (flags !=  nullptr && flags->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::PathRro::Ipv4RroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4rro-sub-object";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::PathRro::Ipv4RroSubObject::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::PathRro::Ipv4RroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "flags")
    {
        if(flags != nullptr)
        {
            children["flags"] = flags;
        }
        else
        {
            flags = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::PathRro::Ipv4RroSubObject::Flags>();
            flags->parent = this;
            children["flags"] = flags;
        }
        return children.at("flags");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::PathRro::Ipv4RroSubObject::get_children()
{
    if(children.find("flags") == children.end())
    {
        if(flags != nullptr)
        {
            children["flags"] = flags;
        }
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::PathRro::Ipv4RroSubObject::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rro-address")
    {
        rro_address = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::PathRro::Ipv4RroSubObject::Flags::Flags()
    :
    is_bandwidth_protected{YType::boolean, "is-bandwidth-protected"},
    is_node_id{YType::boolean, "is-node-id"},
    is_node_protection_available{YType::boolean, "is-node-protection-available"},
    is_protection_available{YType::boolean, "is-protection-available"},
    is_protection_in_use{YType::boolean, "is-protection-in-use"}
{
    yang_name = "flags"; yang_parent_name = "ipv4rro-sub-object";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::PathRro::Ipv4RroSubObject::Flags::~Flags()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::PathRro::Ipv4RroSubObject::Flags::has_data() const
{
    return is_bandwidth_protected.is_set
	|| is_node_id.is_set
	|| is_node_protection_available.is_set
	|| is_protection_available.is_set
	|| is_protection_in_use.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::PathRro::Ipv4RroSubObject::Flags::has_operation() const
{
    return is_set(operation)
	|| is_set(is_bandwidth_protected.operation)
	|| is_set(is_node_id.operation)
	|| is_set(is_node_protection_available.operation)
	|| is_set(is_protection_available.operation)
	|| is_set(is_protection_in_use.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::PathRro::Ipv4RroSubObject::Flags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flags";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::PathRro::Ipv4RroSubObject::Flags::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::PathRro::Ipv4RroSubObject::Flags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::PathRro::Ipv4RroSubObject::Flags::get_children()
{
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::PathRro::Ipv4RroSubObject::Flags::set_value(const std::string & value_path, std::string value)
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

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::PathRro::LabelRroSubObject::LabelRroSubObject()
    :
    is_label_variable_length{YType::boolean, "is-label-variable-length"},
    label{YType::uint32, "label"},
    variable_length_label{YType::uint32, "variable-length-label"}
    	,
    flags(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::PathRro::LabelRroSubObject::Flags>())
{
    flags->parent = this;
    children["flags"] = flags;

    yang_name = "label-rro-sub-object"; yang_parent_name = "path-rro";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::PathRro::LabelRroSubObject::~LabelRroSubObject()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::PathRro::LabelRroSubObject::has_data() const
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::PathRro::LabelRroSubObject::has_operation() const
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

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::PathRro::LabelRroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-rro-sub-object";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::PathRro::LabelRroSubObject::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::PathRro::LabelRroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "flags")
    {
        if(flags != nullptr)
        {
            children["flags"] = flags;
        }
        else
        {
            flags = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::PathRro::LabelRroSubObject::Flags>();
            flags->parent = this;
            children["flags"] = flags;
        }
        return children.at("flags");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::PathRro::LabelRroSubObject::get_children()
{
    if(children.find("flags") == children.end())
    {
        if(flags != nullptr)
        {
            children["flags"] = flags;
        }
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::PathRro::LabelRroSubObject::set_value(const std::string & value_path, std::string value)
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

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::PathRro::LabelRroSubObject::Flags::Flags()
    :
    is_global_label{YType::boolean, "is-global-label"}
{
    yang_name = "flags"; yang_parent_name = "label-rro-sub-object";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::PathRro::LabelRroSubObject::Flags::~Flags()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::PathRro::LabelRroSubObject::Flags::has_data() const
{
    return is_global_label.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::PathRro::LabelRroSubObject::Flags::has_operation() const
{
    return is_set(operation)
	|| is_set(is_global_label.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::PathRro::LabelRroSubObject::Flags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flags";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::PathRro::LabelRroSubObject::Flags::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::PathRro::LabelRroSubObject::Flags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::PathRro::LabelRroSubObject::Flags::get_children()
{
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::PathRro::LabelRroSubObject::Flags::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-global-label")
    {
        is_global_label = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::PathRro::UnnumberedRroSubObject::UnnumberedRroSubObject()
    :
    interface_address{YType::str, "interface-address"},
    interface_id{YType::uint32, "interface-id"}
    	,
    flags(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::PathRro::UnnumberedRroSubObject::Flags>())
{
    flags->parent = this;
    children["flags"] = flags;

    yang_name = "unnumbered-rro-sub-object"; yang_parent_name = "path-rro";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::PathRro::UnnumberedRroSubObject::~UnnumberedRroSubObject()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::PathRro::UnnumberedRroSubObject::has_data() const
{
    return interface_address.is_set
	|| interface_id.is_set
	|| (flags !=  nullptr && flags->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::PathRro::UnnumberedRroSubObject::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_address.operation)
	|| is_set(interface_id.operation)
	|| (flags !=  nullptr && flags->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::PathRro::UnnumberedRroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unnumbered-rro-sub-object";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::PathRro::UnnumberedRroSubObject::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::PathRro::UnnumberedRroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "flags")
    {
        if(flags != nullptr)
        {
            children["flags"] = flags;
        }
        else
        {
            flags = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::PathRro::UnnumberedRroSubObject::Flags>();
            flags->parent = this;
            children["flags"] = flags;
        }
        return children.at("flags");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::PathRro::UnnumberedRroSubObject::get_children()
{
    if(children.find("flags") == children.end())
    {
        if(flags != nullptr)
        {
            children["flags"] = flags;
        }
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::PathRro::UnnumberedRroSubObject::set_value(const std::string & value_path, std::string value)
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

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::PathRro::UnnumberedRroSubObject::Flags::Flags()
    :
    is_bandwidth_protected{YType::boolean, "is-bandwidth-protected"},
    is_node_id{YType::boolean, "is-node-id"},
    is_node_protection_available{YType::boolean, "is-node-protection-available"},
    is_protection_available{YType::boolean, "is-protection-available"},
    is_protection_in_use{YType::boolean, "is-protection-in-use"}
{
    yang_name = "flags"; yang_parent_name = "unnumbered-rro-sub-object";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::PathRro::UnnumberedRroSubObject::Flags::~Flags()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::PathRro::UnnumberedRroSubObject::Flags::has_data() const
{
    return is_bandwidth_protected.is_set
	|| is_node_id.is_set
	|| is_node_protection_available.is_set
	|| is_protection_available.is_set
	|| is_protection_in_use.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::PathRro::UnnumberedRroSubObject::Flags::has_operation() const
{
    return is_set(operation)
	|| is_set(is_bandwidth_protected.operation)
	|| is_set(is_node_id.operation)
	|| is_set(is_node_protection_available.operation)
	|| is_set(is_protection_available.operation)
	|| is_set(is_protection_in_use.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::PathRro::UnnumberedRroSubObject::Flags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flags";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::PathRro::UnnumberedRroSubObject::Flags::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::PathRro::UnnumberedRroSubObject::Flags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::PathRro::UnnumberedRroSubObject::Flags::get_children()
{
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::PathRro::UnnumberedRroSubObject::Flags::set_value(const std::string & value_path, std::string value)
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

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::PathRro::SrlgRroSubObject::SrlgRroSubObject()
    :
    srl_gs{YType::uint32, "srl-gs"}
{
    yang_name = "srlg-rro-sub-object"; yang_parent_name = "path-rro";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::PathRro::SrlgRroSubObject::~SrlgRroSubObject()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::PathRro::SrlgRroSubObject::has_data() const
{
    for (auto const & leaf : srl_gs.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::PathRro::SrlgRroSubObject::has_operation() const
{
    for (auto const & leaf : srl_gs.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(srl_gs.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::PathRro::SrlgRroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg-rro-sub-object";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::PathRro::SrlgRroSubObject::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::PathRro::SrlgRroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::PathRro::SrlgRroSubObject::get_children()
{
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::PathRro::SrlgRroSubObject::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "srl-gs")
    {
        srl_gs.append(value);
    }
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ResvRro::ResvRro()
    :
    rro_type{YType::enumeration, "rro-type"}
    	,
    ipv4rro_sub_object(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ResvRro::Ipv4RroSubObject>())
	,label_rro_sub_object(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ResvRro::LabelRroSubObject>())
	,srlg_rro_sub_object(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ResvRro::SrlgRroSubObject>())
	,unnumbered_rro_sub_object(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ResvRro::UnnumberedRroSubObject>())
{
    ipv4rro_sub_object->parent = this;
    children["ipv4rro-sub-object"] = ipv4rro_sub_object;

    label_rro_sub_object->parent = this;
    children["label-rro-sub-object"] = label_rro_sub_object;

    srlg_rro_sub_object->parent = this;
    children["srlg-rro-sub-object"] = srlg_rro_sub_object;

    unnumbered_rro_sub_object->parent = this;
    children["unnumbered-rro-sub-object"] = unnumbered_rro_sub_object;

    yang_name = "resv-rro"; yang_parent_name = "s2l";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ResvRro::~ResvRro()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ResvRro::has_data() const
{
    return rro_type.is_set
	|| (ipv4rro_sub_object !=  nullptr && ipv4rro_sub_object->has_data())
	|| (label_rro_sub_object !=  nullptr && label_rro_sub_object->has_data())
	|| (srlg_rro_sub_object !=  nullptr && srlg_rro_sub_object->has_data())
	|| (unnumbered_rro_sub_object !=  nullptr && unnumbered_rro_sub_object->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ResvRro::has_operation() const
{
    return is_set(operation)
	|| is_set(rro_type.operation)
	|| (ipv4rro_sub_object !=  nullptr && ipv4rro_sub_object->has_operation())
	|| (label_rro_sub_object !=  nullptr && label_rro_sub_object->has_operation())
	|| (srlg_rro_sub_object !=  nullptr && srlg_rro_sub_object->has_operation())
	|| (unnumbered_rro_sub_object !=  nullptr && unnumbered_rro_sub_object->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ResvRro::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "resv-rro";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ResvRro::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ResvRro::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4rro-sub-object")
    {
        if(ipv4rro_sub_object != nullptr)
        {
            children["ipv4rro-sub-object"] = ipv4rro_sub_object;
        }
        else
        {
            ipv4rro_sub_object = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ResvRro::Ipv4RroSubObject>();
            ipv4rro_sub_object->parent = this;
            children["ipv4rro-sub-object"] = ipv4rro_sub_object;
        }
        return children.at("ipv4rro-sub-object");
    }

    if(child_yang_name == "label-rro-sub-object")
    {
        if(label_rro_sub_object != nullptr)
        {
            children["label-rro-sub-object"] = label_rro_sub_object;
        }
        else
        {
            label_rro_sub_object = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ResvRro::LabelRroSubObject>();
            label_rro_sub_object->parent = this;
            children["label-rro-sub-object"] = label_rro_sub_object;
        }
        return children.at("label-rro-sub-object");
    }

    if(child_yang_name == "srlg-rro-sub-object")
    {
        if(srlg_rro_sub_object != nullptr)
        {
            children["srlg-rro-sub-object"] = srlg_rro_sub_object;
        }
        else
        {
            srlg_rro_sub_object = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ResvRro::SrlgRroSubObject>();
            srlg_rro_sub_object->parent = this;
            children["srlg-rro-sub-object"] = srlg_rro_sub_object;
        }
        return children.at("srlg-rro-sub-object");
    }

    if(child_yang_name == "unnumbered-rro-sub-object")
    {
        if(unnumbered_rro_sub_object != nullptr)
        {
            children["unnumbered-rro-sub-object"] = unnumbered_rro_sub_object;
        }
        else
        {
            unnumbered_rro_sub_object = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ResvRro::UnnumberedRroSubObject>();
            unnumbered_rro_sub_object->parent = this;
            children["unnumbered-rro-sub-object"] = unnumbered_rro_sub_object;
        }
        return children.at("unnumbered-rro-sub-object");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ResvRro::get_children()
{
    if(children.find("ipv4rro-sub-object") == children.end())
    {
        if(ipv4rro_sub_object != nullptr)
        {
            children["ipv4rro-sub-object"] = ipv4rro_sub_object;
        }
    }

    if(children.find("label-rro-sub-object") == children.end())
    {
        if(label_rro_sub_object != nullptr)
        {
            children["label-rro-sub-object"] = label_rro_sub_object;
        }
    }

    if(children.find("srlg-rro-sub-object") == children.end())
    {
        if(srlg_rro_sub_object != nullptr)
        {
            children["srlg-rro-sub-object"] = srlg_rro_sub_object;
        }
    }

    if(children.find("unnumbered-rro-sub-object") == children.end())
    {
        if(unnumbered_rro_sub_object != nullptr)
        {
            children["unnumbered-rro-sub-object"] = unnumbered_rro_sub_object;
        }
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ResvRro::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rro-type")
    {
        rro_type = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ResvRro::Ipv4RroSubObject::Ipv4RroSubObject()
    :
    rro_address{YType::str, "rro-address"}
    	,
    flags(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ResvRro::Ipv4RroSubObject::Flags>())
{
    flags->parent = this;
    children["flags"] = flags;

    yang_name = "ipv4rro-sub-object"; yang_parent_name = "resv-rro";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ResvRro::Ipv4RroSubObject::~Ipv4RroSubObject()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ResvRro::Ipv4RroSubObject::has_data() const
{
    return rro_address.is_set
	|| (flags !=  nullptr && flags->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ResvRro::Ipv4RroSubObject::has_operation() const
{
    return is_set(operation)
	|| is_set(rro_address.operation)
	|| (flags !=  nullptr && flags->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ResvRro::Ipv4RroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4rro-sub-object";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ResvRro::Ipv4RroSubObject::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ResvRro::Ipv4RroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "flags")
    {
        if(flags != nullptr)
        {
            children["flags"] = flags;
        }
        else
        {
            flags = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ResvRro::Ipv4RroSubObject::Flags>();
            flags->parent = this;
            children["flags"] = flags;
        }
        return children.at("flags");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ResvRro::Ipv4RroSubObject::get_children()
{
    if(children.find("flags") == children.end())
    {
        if(flags != nullptr)
        {
            children["flags"] = flags;
        }
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ResvRro::Ipv4RroSubObject::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rro-address")
    {
        rro_address = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ResvRro::Ipv4RroSubObject::Flags::Flags()
    :
    is_bandwidth_protected{YType::boolean, "is-bandwidth-protected"},
    is_node_id{YType::boolean, "is-node-id"},
    is_node_protection_available{YType::boolean, "is-node-protection-available"},
    is_protection_available{YType::boolean, "is-protection-available"},
    is_protection_in_use{YType::boolean, "is-protection-in-use"}
{
    yang_name = "flags"; yang_parent_name = "ipv4rro-sub-object";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ResvRro::Ipv4RroSubObject::Flags::~Flags()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ResvRro::Ipv4RroSubObject::Flags::has_data() const
{
    return is_bandwidth_protected.is_set
	|| is_node_id.is_set
	|| is_node_protection_available.is_set
	|| is_protection_available.is_set
	|| is_protection_in_use.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ResvRro::Ipv4RroSubObject::Flags::has_operation() const
{
    return is_set(operation)
	|| is_set(is_bandwidth_protected.operation)
	|| is_set(is_node_id.operation)
	|| is_set(is_node_protection_available.operation)
	|| is_set(is_protection_available.operation)
	|| is_set(is_protection_in_use.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ResvRro::Ipv4RroSubObject::Flags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flags";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ResvRro::Ipv4RroSubObject::Flags::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ResvRro::Ipv4RroSubObject::Flags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ResvRro::Ipv4RroSubObject::Flags::get_children()
{
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ResvRro::Ipv4RroSubObject::Flags::set_value(const std::string & value_path, std::string value)
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

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ResvRro::LabelRroSubObject::LabelRroSubObject()
    :
    is_label_variable_length{YType::boolean, "is-label-variable-length"},
    label{YType::uint32, "label"},
    variable_length_label{YType::uint32, "variable-length-label"}
    	,
    flags(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ResvRro::LabelRroSubObject::Flags>())
{
    flags->parent = this;
    children["flags"] = flags;

    yang_name = "label-rro-sub-object"; yang_parent_name = "resv-rro";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ResvRro::LabelRroSubObject::~LabelRroSubObject()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ResvRro::LabelRroSubObject::has_data() const
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ResvRro::LabelRroSubObject::has_operation() const
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

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ResvRro::LabelRroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-rro-sub-object";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ResvRro::LabelRroSubObject::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ResvRro::LabelRroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "flags")
    {
        if(flags != nullptr)
        {
            children["flags"] = flags;
        }
        else
        {
            flags = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ResvRro::LabelRroSubObject::Flags>();
            flags->parent = this;
            children["flags"] = flags;
        }
        return children.at("flags");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ResvRro::LabelRroSubObject::get_children()
{
    if(children.find("flags") == children.end())
    {
        if(flags != nullptr)
        {
            children["flags"] = flags;
        }
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ResvRro::LabelRroSubObject::set_value(const std::string & value_path, std::string value)
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

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ResvRro::LabelRroSubObject::Flags::Flags()
    :
    is_global_label{YType::boolean, "is-global-label"}
{
    yang_name = "flags"; yang_parent_name = "label-rro-sub-object";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ResvRro::LabelRroSubObject::Flags::~Flags()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ResvRro::LabelRroSubObject::Flags::has_data() const
{
    return is_global_label.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ResvRro::LabelRroSubObject::Flags::has_operation() const
{
    return is_set(operation)
	|| is_set(is_global_label.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ResvRro::LabelRroSubObject::Flags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flags";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ResvRro::LabelRroSubObject::Flags::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ResvRro::LabelRroSubObject::Flags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ResvRro::LabelRroSubObject::Flags::get_children()
{
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ResvRro::LabelRroSubObject::Flags::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-global-label")
    {
        is_global_label = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ResvRro::UnnumberedRroSubObject::UnnumberedRroSubObject()
    :
    interface_address{YType::str, "interface-address"},
    interface_id{YType::uint32, "interface-id"}
    	,
    flags(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ResvRro::UnnumberedRroSubObject::Flags>())
{
    flags->parent = this;
    children["flags"] = flags;

    yang_name = "unnumbered-rro-sub-object"; yang_parent_name = "resv-rro";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ResvRro::UnnumberedRroSubObject::~UnnumberedRroSubObject()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ResvRro::UnnumberedRroSubObject::has_data() const
{
    return interface_address.is_set
	|| interface_id.is_set
	|| (flags !=  nullptr && flags->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ResvRro::UnnumberedRroSubObject::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_address.operation)
	|| is_set(interface_id.operation)
	|| (flags !=  nullptr && flags->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ResvRro::UnnumberedRroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unnumbered-rro-sub-object";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ResvRro::UnnumberedRroSubObject::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ResvRro::UnnumberedRroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "flags")
    {
        if(flags != nullptr)
        {
            children["flags"] = flags;
        }
        else
        {
            flags = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ResvRro::UnnumberedRroSubObject::Flags>();
            flags->parent = this;
            children["flags"] = flags;
        }
        return children.at("flags");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ResvRro::UnnumberedRroSubObject::get_children()
{
    if(children.find("flags") == children.end())
    {
        if(flags != nullptr)
        {
            children["flags"] = flags;
        }
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ResvRro::UnnumberedRroSubObject::set_value(const std::string & value_path, std::string value)
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

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ResvRro::UnnumberedRroSubObject::Flags::Flags()
    :
    is_bandwidth_protected{YType::boolean, "is-bandwidth-protected"},
    is_node_id{YType::boolean, "is-node-id"},
    is_node_protection_available{YType::boolean, "is-node-protection-available"},
    is_protection_available{YType::boolean, "is-protection-available"},
    is_protection_in_use{YType::boolean, "is-protection-in-use"}
{
    yang_name = "flags"; yang_parent_name = "unnumbered-rro-sub-object";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ResvRro::UnnumberedRroSubObject::Flags::~Flags()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ResvRro::UnnumberedRroSubObject::Flags::has_data() const
{
    return is_bandwidth_protected.is_set
	|| is_node_id.is_set
	|| is_node_protection_available.is_set
	|| is_protection_available.is_set
	|| is_protection_in_use.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ResvRro::UnnumberedRroSubObject::Flags::has_operation() const
{
    return is_set(operation)
	|| is_set(is_bandwidth_protected.operation)
	|| is_set(is_node_id.operation)
	|| is_set(is_node_protection_available.operation)
	|| is_set(is_protection_available.operation)
	|| is_set(is_protection_in_use.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ResvRro::UnnumberedRroSubObject::Flags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flags";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ResvRro::UnnumberedRroSubObject::Flags::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ResvRro::UnnumberedRroSubObject::Flags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ResvRro::UnnumberedRroSubObject::Flags::get_children()
{
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ResvRro::UnnumberedRroSubObject::Flags::set_value(const std::string & value_path, std::string value)
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

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ResvRro::SrlgRroSubObject::SrlgRroSubObject()
    :
    srl_gs{YType::uint32, "srl-gs"}
{
    yang_name = "srlg-rro-sub-object"; yang_parent_name = "resv-rro";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ResvRro::SrlgRroSubObject::~SrlgRroSubObject()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ResvRro::SrlgRroSubObject::has_data() const
{
    for (auto const & leaf : srl_gs.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ResvRro::SrlgRroSubObject::has_operation() const
{
    for (auto const & leaf : srl_gs.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(srl_gs.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ResvRro::SrlgRroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg-rro-sub-object";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ResvRro::SrlgRroSubObject::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ResvRro::SrlgRroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ResvRro::SrlgRroSubObject::get_children()
{
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ResvRro::SrlgRroSubObject::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "srl-gs")
    {
        srl_gs.append(value);
    }
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::PathAffinityArray::PathAffinityArray()
    :
    hop_address{YType::str, "hop-address"},
    hop_affinity{YType::uint32, "hop-affinity"},
    hop_extended_affinity{YType::uint32, "hop-extended-affinity"}
{
    yang_name = "path-affinity-array"; yang_parent_name = "s2l";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::PathAffinityArray::~PathAffinityArray()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::PathAffinityArray::has_data() const
{
    for (auto const & leaf : hop_extended_affinity.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return hop_address.is_set
	|| hop_affinity.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::PathAffinityArray::has_operation() const
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

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::PathAffinityArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-affinity-array";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::PathAffinityArray::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::PathAffinityArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::PathAffinityArray::get_children()
{
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::PathAffinityArray::set_value(const std::string & value_path, std::string value)
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

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ReverseEroIn::ReverseEroIn()
    :
    ero_type{YType::enumeration, "ero-type"}
    	,
    ipv4ero_sub_object(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ReverseEroIn::Ipv4EroSubObject>())
	,unnumbered_ero_sub_object(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ReverseEroIn::UnnumberedEroSubObject>())
{
    ipv4ero_sub_object->parent = this;
    children["ipv4ero-sub-object"] = ipv4ero_sub_object;

    unnumbered_ero_sub_object->parent = this;
    children["unnumbered-ero-sub-object"] = unnumbered_ero_sub_object;

    yang_name = "reverse-ero-in"; yang_parent_name = "s2l";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ReverseEroIn::~ReverseEroIn()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ReverseEroIn::has_data() const
{
    return ero_type.is_set
	|| (ipv4ero_sub_object !=  nullptr && ipv4ero_sub_object->has_data())
	|| (unnumbered_ero_sub_object !=  nullptr && unnumbered_ero_sub_object->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ReverseEroIn::has_operation() const
{
    return is_set(operation)
	|| is_set(ero_type.operation)
	|| (ipv4ero_sub_object !=  nullptr && ipv4ero_sub_object->has_operation())
	|| (unnumbered_ero_sub_object !=  nullptr && unnumbered_ero_sub_object->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ReverseEroIn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reverse-ero-in";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ReverseEroIn::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ReverseEroIn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4ero-sub-object")
    {
        if(ipv4ero_sub_object != nullptr)
        {
            children["ipv4ero-sub-object"] = ipv4ero_sub_object;
        }
        else
        {
            ipv4ero_sub_object = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ReverseEroIn::Ipv4EroSubObject>();
            ipv4ero_sub_object->parent = this;
            children["ipv4ero-sub-object"] = ipv4ero_sub_object;
        }
        return children.at("ipv4ero-sub-object");
    }

    if(child_yang_name == "unnumbered-ero-sub-object")
    {
        if(unnumbered_ero_sub_object != nullptr)
        {
            children["unnumbered-ero-sub-object"] = unnumbered_ero_sub_object;
        }
        else
        {
            unnumbered_ero_sub_object = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ReverseEroIn::UnnumberedEroSubObject>();
            unnumbered_ero_sub_object->parent = this;
            children["unnumbered-ero-sub-object"] = unnumbered_ero_sub_object;
        }
        return children.at("unnumbered-ero-sub-object");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ReverseEroIn::get_children()
{
    if(children.find("ipv4ero-sub-object") == children.end())
    {
        if(ipv4ero_sub_object != nullptr)
        {
            children["ipv4ero-sub-object"] = ipv4ero_sub_object;
        }
    }

    if(children.find("unnumbered-ero-sub-object") == children.end())
    {
        if(unnumbered_ero_sub_object != nullptr)
        {
            children["unnumbered-ero-sub-object"] = unnumbered_ero_sub_object;
        }
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ReverseEroIn::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ero-type")
    {
        ero_type = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ReverseEroIn::Ipv4EroSubObject::Ipv4EroSubObject()
    :
    ero_address{YType::str, "ero-address"},
    is_strict_route{YType::boolean, "is-strict-route"},
    prefix_length{YType::uint8, "prefix-length"}
{
    yang_name = "ipv4ero-sub-object"; yang_parent_name = "reverse-ero-in";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ReverseEroIn::Ipv4EroSubObject::~Ipv4EroSubObject()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ReverseEroIn::Ipv4EroSubObject::has_data() const
{
    return ero_address.is_set
	|| is_strict_route.is_set
	|| prefix_length.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ReverseEroIn::Ipv4EroSubObject::has_operation() const
{
    return is_set(operation)
	|| is_set(ero_address.operation)
	|| is_set(is_strict_route.operation)
	|| is_set(prefix_length.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ReverseEroIn::Ipv4EroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4ero-sub-object";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ReverseEroIn::Ipv4EroSubObject::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ReverseEroIn::Ipv4EroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ReverseEroIn::Ipv4EroSubObject::get_children()
{
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ReverseEroIn::Ipv4EroSubObject::set_value(const std::string & value_path, std::string value)
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

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ReverseEroIn::UnnumberedEroSubObject::UnnumberedEroSubObject()
    :
    ero_interface_id{YType::uint32, "ero-interface-id"},
    ero_router_id{YType::str, "ero-router-id"},
    is_strict_route{YType::boolean, "is-strict-route"},
    status{YType::enumeration, "status"}
{
    yang_name = "unnumbered-ero-sub-object"; yang_parent_name = "reverse-ero-in";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ReverseEroIn::UnnumberedEroSubObject::~UnnumberedEroSubObject()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ReverseEroIn::UnnumberedEroSubObject::has_data() const
{
    return ero_interface_id.is_set
	|| ero_router_id.is_set
	|| is_strict_route.is_set
	|| status.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ReverseEroIn::UnnumberedEroSubObject::has_operation() const
{
    return is_set(operation)
	|| is_set(ero_interface_id.operation)
	|| is_set(ero_router_id.operation)
	|| is_set(is_strict_route.operation)
	|| is_set(status.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ReverseEroIn::UnnumberedEroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unnumbered-ero-sub-object";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ReverseEroIn::UnnumberedEroSubObject::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ReverseEroIn::UnnumberedEroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ReverseEroIn::UnnumberedEroSubObject::get_children()
{
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::ReverseEroIn::UnnumberedEroSubObject::set_value(const std::string & value_path, std::string value)
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

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::S2LSegmentRoutingPath::S2LSegmentRoutingPath()
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

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::S2LSegmentRoutingPath::~S2LSegmentRoutingPath()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::S2LSegmentRoutingPath::has_data() const
{
    return has_entropy_label.is_set
	|| has_ip_addresses.is_set
	|| has_mpls_label.is_set
	|| local_addr.is_set
	|| mpls_label_value.is_set
	|| remote_addr.is_set
	|| sid_type.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::S2LSegmentRoutingPath::has_operation() const
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

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::S2LSegmentRoutingPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-segment-routing-path";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::S2LSegmentRoutingPath::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::S2LSegmentRoutingPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::S2LSegmentRoutingPath::get_children()
{
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp::S2L::S2LSegmentRoutingPath::set_value(const std::string & value_path, std::string value)
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

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::ReoptimizedStandbyP2MpLsp()
    :
    dste_class_index{YType::uint8, "dste-class-index"},
    dste_class_match{YType::boolean, "dste-class-match"},
    frr_active_reason{YType::uint32, "frr-active-reason"},
    is_frr_failed{YType::boolean, "is-frr-failed"},
    is_interface{YType::boolean, "is-interface"},
    is_passive{YType::boolean, "is-passive"},
    last_path_change{YType::uint32, "last-path-change"},
    lsp_bandwidth{YType::uint32, "lsp-bandwidth"},
    lsp_bandwidth_type{YType::enumeration, "lsp-bandwidth-type"},
    lsp_hold_priority{YType::uint8, "lsp-hold-priority"},
    lsp_setup_priority{YType::uint8, "lsp-setup-priority"},
    persistent_bytes{YType::uint64, "persistent-bytes"},
    persistent_packets{YType::uint64, "persistent-packets"},
    reoptimize_reason{YType::enumeration, "reoptimize-reason"},
    reoptimize_trigger{YType::enumeration, "reoptimize-trigger"},
    s2_ls_down{YType::uint32, "s2-ls-down"},
    s2_ls_proceeding{YType::uint32, "s2-ls-proceeding"},
    s2_ls_up{YType::uint32, "s2-ls-up"},
    signaled_name{YType::str, "signaled-name"},
    timer_left{YType::uint32, "timer-left"},
    type{YType::enumeration, "type"},
    uptime{YType::uint32, "uptime"}
    	,
    lsp_fec(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::LspFec>())
{
    lsp_fec->parent = this;
    children["lsp-fec"] = lsp_fec;

    yang_name = "reoptimized-standby-p2mp-lsp"; yang_parent_name = "nni-tunnel";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::~ReoptimizedStandbyP2MpLsp()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::has_data() const
{
    for (std::size_t index=0; index<s2l.size(); index++)
    {
        if(s2l[index]->has_data())
            return true;
    }
    return dste_class_index.is_set
	|| dste_class_match.is_set
	|| frr_active_reason.is_set
	|| is_frr_failed.is_set
	|| is_interface.is_set
	|| is_passive.is_set
	|| last_path_change.is_set
	|| lsp_bandwidth.is_set
	|| lsp_bandwidth_type.is_set
	|| lsp_hold_priority.is_set
	|| lsp_setup_priority.is_set
	|| persistent_bytes.is_set
	|| persistent_packets.is_set
	|| reoptimize_reason.is_set
	|| reoptimize_trigger.is_set
	|| s2_ls_down.is_set
	|| s2_ls_proceeding.is_set
	|| s2_ls_up.is_set
	|| signaled_name.is_set
	|| timer_left.is_set
	|| type.is_set
	|| uptime.is_set
	|| (lsp_fec !=  nullptr && lsp_fec->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::has_operation() const
{
    for (std::size_t index=0; index<s2l.size(); index++)
    {
        if(s2l[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(dste_class_index.operation)
	|| is_set(dste_class_match.operation)
	|| is_set(frr_active_reason.operation)
	|| is_set(is_frr_failed.operation)
	|| is_set(is_interface.operation)
	|| is_set(is_passive.operation)
	|| is_set(last_path_change.operation)
	|| is_set(lsp_bandwidth.operation)
	|| is_set(lsp_bandwidth_type.operation)
	|| is_set(lsp_hold_priority.operation)
	|| is_set(lsp_setup_priority.operation)
	|| is_set(persistent_bytes.operation)
	|| is_set(persistent_packets.operation)
	|| is_set(reoptimize_reason.operation)
	|| is_set(reoptimize_trigger.operation)
	|| is_set(s2_ls_down.operation)
	|| is_set(s2_ls_proceeding.operation)
	|| is_set(s2_ls_up.operation)
	|| is_set(signaled_name.operation)
	|| is_set(timer_left.operation)
	|| is_set(type.operation)
	|| is_set(uptime.operation)
	|| (lsp_fec !=  nullptr && lsp_fec->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reoptimized-standby-p2mp-lsp";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ReoptimizedStandbyP2MpLsp' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dste_class_index.is_set || is_set(dste_class_index.operation)) leaf_name_data.push_back(dste_class_index.get_name_leafdata());
    if (dste_class_match.is_set || is_set(dste_class_match.operation)) leaf_name_data.push_back(dste_class_match.get_name_leafdata());
    if (frr_active_reason.is_set || is_set(frr_active_reason.operation)) leaf_name_data.push_back(frr_active_reason.get_name_leafdata());
    if (is_frr_failed.is_set || is_set(is_frr_failed.operation)) leaf_name_data.push_back(is_frr_failed.get_name_leafdata());
    if (is_interface.is_set || is_set(is_interface.operation)) leaf_name_data.push_back(is_interface.get_name_leafdata());
    if (is_passive.is_set || is_set(is_passive.operation)) leaf_name_data.push_back(is_passive.get_name_leafdata());
    if (last_path_change.is_set || is_set(last_path_change.operation)) leaf_name_data.push_back(last_path_change.get_name_leafdata());
    if (lsp_bandwidth.is_set || is_set(lsp_bandwidth.operation)) leaf_name_data.push_back(lsp_bandwidth.get_name_leafdata());
    if (lsp_bandwidth_type.is_set || is_set(lsp_bandwidth_type.operation)) leaf_name_data.push_back(lsp_bandwidth_type.get_name_leafdata());
    if (lsp_hold_priority.is_set || is_set(lsp_hold_priority.operation)) leaf_name_data.push_back(lsp_hold_priority.get_name_leafdata());
    if (lsp_setup_priority.is_set || is_set(lsp_setup_priority.operation)) leaf_name_data.push_back(lsp_setup_priority.get_name_leafdata());
    if (persistent_bytes.is_set || is_set(persistent_bytes.operation)) leaf_name_data.push_back(persistent_bytes.get_name_leafdata());
    if (persistent_packets.is_set || is_set(persistent_packets.operation)) leaf_name_data.push_back(persistent_packets.get_name_leafdata());
    if (reoptimize_reason.is_set || is_set(reoptimize_reason.operation)) leaf_name_data.push_back(reoptimize_reason.get_name_leafdata());
    if (reoptimize_trigger.is_set || is_set(reoptimize_trigger.operation)) leaf_name_data.push_back(reoptimize_trigger.get_name_leafdata());
    if (s2_ls_down.is_set || is_set(s2_ls_down.operation)) leaf_name_data.push_back(s2_ls_down.get_name_leafdata());
    if (s2_ls_proceeding.is_set || is_set(s2_ls_proceeding.operation)) leaf_name_data.push_back(s2_ls_proceeding.get_name_leafdata());
    if (s2_ls_up.is_set || is_set(s2_ls_up.operation)) leaf_name_data.push_back(s2_ls_up.get_name_leafdata());
    if (signaled_name.is_set || is_set(signaled_name.operation)) leaf_name_data.push_back(signaled_name.get_name_leafdata());
    if (timer_left.is_set || is_set(timer_left.operation)) leaf_name_data.push_back(timer_left.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.operation)) leaf_name_data.push_back(uptime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "lsp-fec")
    {
        if(lsp_fec != nullptr)
        {
            children["lsp-fec"] = lsp_fec;
        }
        else
        {
            lsp_fec = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::LspFec>();
            lsp_fec->parent = this;
            children["lsp-fec"] = lsp_fec;
        }
        return children.at("lsp-fec");
    }

    if(child_yang_name == "s2l")
    {
        for(auto const & c : s2l)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L>();
        c->parent = this;
        s2l.push_back(std::move(c));
        children[segment_path] = s2l.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::get_children()
{
    if(children.find("lsp-fec") == children.end())
    {
        if(lsp_fec != nullptr)
        {
            children["lsp-fec"] = lsp_fec;
        }
    }

    for (auto const & c : s2l)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dste-class-index")
    {
        dste_class_index = value;
    }
    if(value_path == "dste-class-match")
    {
        dste_class_match = value;
    }
    if(value_path == "frr-active-reason")
    {
        frr_active_reason = value;
    }
    if(value_path == "is-frr-failed")
    {
        is_frr_failed = value;
    }
    if(value_path == "is-interface")
    {
        is_interface = value;
    }
    if(value_path == "is-passive")
    {
        is_passive = value;
    }
    if(value_path == "last-path-change")
    {
        last_path_change = value;
    }
    if(value_path == "lsp-bandwidth")
    {
        lsp_bandwidth = value;
    }
    if(value_path == "lsp-bandwidth-type")
    {
        lsp_bandwidth_type = value;
    }
    if(value_path == "lsp-hold-priority")
    {
        lsp_hold_priority = value;
    }
    if(value_path == "lsp-setup-priority")
    {
        lsp_setup_priority = value;
    }
    if(value_path == "persistent-bytes")
    {
        persistent_bytes = value;
    }
    if(value_path == "persistent-packets")
    {
        persistent_packets = value;
    }
    if(value_path == "reoptimize-reason")
    {
        reoptimize_reason = value;
    }
    if(value_path == "reoptimize-trigger")
    {
        reoptimize_trigger = value;
    }
    if(value_path == "s2-ls-down")
    {
        s2_ls_down = value;
    }
    if(value_path == "s2-ls-proceeding")
    {
        s2_ls_proceeding = value;
    }
    if(value_path == "s2-ls-up")
    {
        s2_ls_up = value;
    }
    if(value_path == "signaled-name")
    {
        signaled_name = value;
    }
    if(value_path == "timer-left")
    {
        timer_left = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
    if(value_path == "uptime")
    {
        uptime = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::LspFec::LspFec()
    :
    fec_extended_tunnel_id{YType::str, "fec-extended-tunnel-id"},
    fec_lsp_id{YType::uint16, "fec-lsp-id"},
    fec_source{YType::str, "fec-source"},
    fec_tunnel_id{YType::uint16, "fec-tunnel-id"},
    fec_vrf{YType::str, "fec-vrf"}
    	,
    fec_destination_info(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::LspFec::FecDestinationInfo>())
{
    fec_destination_info->parent = this;
    children["fec-destination-info"] = fec_destination_info;

    yang_name = "lsp-fec"; yang_parent_name = "reoptimized-standby-p2mp-lsp";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::LspFec::~LspFec()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::LspFec::has_data() const
{
    return fec_extended_tunnel_id.is_set
	|| fec_lsp_id.is_set
	|| fec_source.is_set
	|| fec_tunnel_id.is_set
	|| fec_vrf.is_set
	|| (fec_destination_info !=  nullptr && fec_destination_info->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::LspFec::has_operation() const
{
    return is_set(operation)
	|| is_set(fec_extended_tunnel_id.operation)
	|| is_set(fec_lsp_id.operation)
	|| is_set(fec_source.operation)
	|| is_set(fec_tunnel_id.operation)
	|| is_set(fec_vrf.operation)
	|| (fec_destination_info !=  nullptr && fec_destination_info->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::LspFec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-fec";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::LspFec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LspFec' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::LspFec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "fec-destination-info")
    {
        if(fec_destination_info != nullptr)
        {
            children["fec-destination-info"] = fec_destination_info;
        }
        else
        {
            fec_destination_info = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::LspFec::FecDestinationInfo>();
            fec_destination_info->parent = this;
            children["fec-destination-info"] = fec_destination_info;
        }
        return children.at("fec-destination-info");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::LspFec::get_children()
{
    if(children.find("fec-destination-info") == children.end())
    {
        if(fec_destination_info != nullptr)
        {
            children["fec-destination-info"] = fec_destination_info;
        }
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::LspFec::set_value(const std::string & value_path, std::string value)
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

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::LspFec::FecDestinationInfo::FecDestinationInfo()
    :
    fec_ctype{YType::enumeration, "fec-ctype"},
    fec_destination_p2mp_id{YType::uint32, "fec-destination-p2mp-id"},
    p2p_lsp_destination{YType::str, "p2p-lsp-destination"}
{
    yang_name = "fec-destination-info"; yang_parent_name = "lsp-fec";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::LspFec::FecDestinationInfo::~FecDestinationInfo()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::LspFec::FecDestinationInfo::has_data() const
{
    return fec_ctype.is_set
	|| fec_destination_p2mp_id.is_set
	|| p2p_lsp_destination.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::LspFec::FecDestinationInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(fec_ctype.operation)
	|| is_set(fec_destination_p2mp_id.operation)
	|| is_set(p2p_lsp_destination.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::LspFec::FecDestinationInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fec-destination-info";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::LspFec::FecDestinationInfo::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::LspFec::FecDestinationInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::LspFec::FecDestinationInfo::get_children()
{
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::LspFec::FecDestinationInfo::set_value(const std::string & value_path, std::string value)
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

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::S2L()
    :
    abr_auto_discovered{YType::str, "abr-auto-discovered"},
    backup_tunnel_interface{YType::str, "backup-tunnel-interface"},
    downstream_router_id{YType::str, "downstream-router-id"},
    egress_interface{YType::str, "egress-interface"},
    egress_interface_brief{YType::str, "egress-interface-brief"},
    egress_interface_state{YType::enumeration, "egress-interface-state"},
    expanded_ero_affinity_bits{YType::uint32, "expanded-ero-affinity-bits"},
    expanded_ero_affinity_mask{YType::uint32, "expanded-ero-affinity-mask"},
    expanded_ero_area_id{YType::str, "expanded-ero-area-id"},
    expanded_ero_metric{YType::uint32, "expanded-ero-metric"},
    expanded_ero_metric_type{YType::enumeration, "expanded-ero-metric-type"},
    frr_out_tunnel_interface{YType::str, "frr-out-tunnel-interface"},
    incoming_address{YType::str, "incoming-address"},
    ingress_interface{YType::str, "ingress-interface"},
    ingress_interface_brief{YType::str, "ingress-interface-brief"},
    ingress_interface_state{YType::enumeration, "ingress-interface-state"},
    is_bandwidth_protect{YType::boolean, "is-bandwidth-protect"},
    is_expanded_ero{YType::boolean, "is-expanded-ero"},
    is_frr_enabled{YType::boolean, "is-frr-enabled"},
    is_node_protected{YType::boolean, "is-node-protected"},
    is_optical{YType::boolean, "is-optical"},
    local_router_id{YType::str, "local-router-id"},
    next_hop_address{YType::str, "next-hop-address"},
    node_hop_count{YType::uint8, "node-hop-count"},
    outbound_frr_state{YType::enumeration, "outbound-frr-state"},
    path_reeval_query_mid{YType::uint32, "path-reeval-query-mid"},
    path_rro_enabled{YType::boolean, "path-rro-enabled"},
    path_using_strict_spf{YType::boolean, "path-using-strict-spf"},
    pcalc_area{YType::str, "pcalc-area"},
    previous_hop_address{YType::str, "previous-hop-address"},
    reverse_lsp_connected{YType::boolean, "reverse-lsp-connected"},
    reverse_lsp_name{YType::str, "reverse-lsp-name"},
    reverse_lsp_present{YType::boolean, "reverse-lsp-present"},
    reverse_weight{YType::uint64, "reverse-weight"},
    role{YType::enumeration, "role"},
    s2l_local_label{YType::uint32, "s2l-local-label"},
    s2l_out_label{YType::uint32, "s2l-out-label"},
    s2l_reverse_ero_obj_present{YType::boolean, "s2l-reverse-ero-obj-present"},
    s2l_reverse_lsp_sub_obj{YType::uint8, "s2l-reverse-lsp-sub-obj"},
    s2l_reverse_tspec_obj_present{YType::boolean, "s2l-reverse-tspec-obj-present"},
    signalling_status{YType::enumeration, "signalling-status"},
    time_since_last_preferred_path_exists_send_mid{YType::uint32, "time-since-last-preferred-path-exists-send-mid"},
    time_since_last_preferred_tree_exists_send_mid{YType::uint32, "time-since-last-preferred-tree-exists-send-mid"},
    time_since_last_query_received_mid{YType::uint32, "time-since-last-query-received-mid"},
    upstream_router_id{YType::str, "upstream-router-id"},
    uptime{YType::uint32, "uptime"},
    weight{YType::uint64, "weight"}
    	,
    active_path_option(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption>())
	,association(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::Association>())
	,diversity_info(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::DiversityInfo>())
	,flex_info(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::FlexInfo>())
	,fspec(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::Fspec>())
	,generic_fspec(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::GenericFspec>())
	,generic_tspec(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::GenericTspec>())
	,gmpls_labels(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::GmplsLabels>())
	,head_end_bfd_info(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::HeadEndBfdInfo>())
	,in_xro(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::InXro>())
	,incoming_address_generic(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::IncomingAddressGeneric>())
	,lsp_wrap_info(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::LspWrapInfo>())
	,next_hop_address_generic(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::NextHopAddressGeneric>())
	,otn_s2l(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::OtnS2L>())
	,out_xro(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::OutXro>())
	,previous_hop_address_generic(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::PreviousHopAddressGeneric>())
	,protection(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::Protection>())
	,reverse_lsp_fec(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ReverseLspFec>())
	,reverse_tspec(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ReverseTspec>())
	,s2l_convergence(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::S2LConvergence>())
	,s2l_fec(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::S2LFec>())
	,soft_preemption(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::SoftPreemption>())
	,srlg_collection(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::SrlgCollection>())
	,tail_end_bfd_info(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::TailEndBfdInfo>())
	,tspec(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::Tspec>())
{
    active_path_option->parent = this;
    children["active-path-option"] = active_path_option;

    association->parent = this;
    children["association"] = association;

    diversity_info->parent = this;
    children["diversity-info"] = diversity_info;

    flex_info->parent = this;
    children["flex-info"] = flex_info;

    fspec->parent = this;
    children["fspec"] = fspec;

    generic_fspec->parent = this;
    children["generic-fspec"] = generic_fspec;

    generic_tspec->parent = this;
    children["generic-tspec"] = generic_tspec;

    gmpls_labels->parent = this;
    children["gmpls-labels"] = gmpls_labels;

    head_end_bfd_info->parent = this;
    children["head-end-bfd-info"] = head_end_bfd_info;

    in_xro->parent = this;
    children["in-xro"] = in_xro;

    incoming_address_generic->parent = this;
    children["incoming-address-generic"] = incoming_address_generic;

    lsp_wrap_info->parent = this;
    children["lsp-wrap-info"] = lsp_wrap_info;

    next_hop_address_generic->parent = this;
    children["next-hop-address-generic"] = next_hop_address_generic;

    otn_s2l->parent = this;
    children["otn-s2l"] = otn_s2l;

    out_xro->parent = this;
    children["out-xro"] = out_xro;

    previous_hop_address_generic->parent = this;
    children["previous-hop-address-generic"] = previous_hop_address_generic;

    protection->parent = this;
    children["protection"] = protection;

    reverse_lsp_fec->parent = this;
    children["reverse-lsp-fec"] = reverse_lsp_fec;

    reverse_tspec->parent = this;
    children["reverse-tspec"] = reverse_tspec;

    s2l_convergence->parent = this;
    children["s2l-convergence"] = s2l_convergence;

    s2l_fec->parent = this;
    children["s2l-fec"] = s2l_fec;

    soft_preemption->parent = this;
    children["soft-preemption"] = soft_preemption;

    srlg_collection->parent = this;
    children["srlg-collection"] = srlg_collection;

    tail_end_bfd_info->parent = this;
    children["tail-end-bfd-info"] = tail_end_bfd_info;

    tspec->parent = this;
    children["tspec"] = tspec;

    yang_name = "s2l"; yang_parent_name = "reoptimized-standby-p2mp-lsp";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::~S2L()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::has_data() const
{
    for (std::size_t index=0; index<in_ero.size(); index++)
    {
        if(in_ero[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<out_ero.size(); index++)
    {
        if(out_ero[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<path_affinity_array.size(); index++)
    {
        if(path_affinity_array[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<path_rro.size(); index++)
    {
        if(path_rro[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<resv_rro.size(); index++)
    {
        if(resv_rro[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<reverse_ero_in.size(); index++)
    {
        if(reverse_ero_in[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<s2l_segment_routing_path.size(); index++)
    {
        if(s2l_segment_routing_path[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<shared_risk_link_group.size(); index++)
    {
        if(shared_risk_link_group[index]->has_data())
            return true;
    }
    for (auto const & leaf : s2l_reverse_lsp_sub_obj.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return abr_auto_discovered.is_set
	|| backup_tunnel_interface.is_set
	|| downstream_router_id.is_set
	|| egress_interface.is_set
	|| egress_interface_brief.is_set
	|| egress_interface_state.is_set
	|| expanded_ero_affinity_bits.is_set
	|| expanded_ero_affinity_mask.is_set
	|| expanded_ero_area_id.is_set
	|| expanded_ero_metric.is_set
	|| expanded_ero_metric_type.is_set
	|| frr_out_tunnel_interface.is_set
	|| incoming_address.is_set
	|| ingress_interface.is_set
	|| ingress_interface_brief.is_set
	|| ingress_interface_state.is_set
	|| is_bandwidth_protect.is_set
	|| is_expanded_ero.is_set
	|| is_frr_enabled.is_set
	|| is_node_protected.is_set
	|| is_optical.is_set
	|| local_router_id.is_set
	|| next_hop_address.is_set
	|| node_hop_count.is_set
	|| outbound_frr_state.is_set
	|| path_reeval_query_mid.is_set
	|| path_rro_enabled.is_set
	|| path_using_strict_spf.is_set
	|| pcalc_area.is_set
	|| previous_hop_address.is_set
	|| reverse_lsp_connected.is_set
	|| reverse_lsp_name.is_set
	|| reverse_lsp_present.is_set
	|| reverse_weight.is_set
	|| role.is_set
	|| s2l_local_label.is_set
	|| s2l_out_label.is_set
	|| s2l_reverse_ero_obj_present.is_set
	|| s2l_reverse_tspec_obj_present.is_set
	|| signalling_status.is_set
	|| time_since_last_preferred_path_exists_send_mid.is_set
	|| time_since_last_preferred_tree_exists_send_mid.is_set
	|| time_since_last_query_received_mid.is_set
	|| upstream_router_id.is_set
	|| uptime.is_set
	|| weight.is_set
	|| (active_path_option !=  nullptr && active_path_option->has_data())
	|| (association !=  nullptr && association->has_data())
	|| (diversity_info !=  nullptr && diversity_info->has_data())
	|| (flex_info !=  nullptr && flex_info->has_data())
	|| (fspec !=  nullptr && fspec->has_data())
	|| (generic_fspec !=  nullptr && generic_fspec->has_data())
	|| (generic_tspec !=  nullptr && generic_tspec->has_data())
	|| (gmpls_labels !=  nullptr && gmpls_labels->has_data())
	|| (head_end_bfd_info !=  nullptr && head_end_bfd_info->has_data())
	|| (in_xro !=  nullptr && in_xro->has_data())
	|| (incoming_address_generic !=  nullptr && incoming_address_generic->has_data())
	|| (lsp_wrap_info !=  nullptr && lsp_wrap_info->has_data())
	|| (next_hop_address_generic !=  nullptr && next_hop_address_generic->has_data())
	|| (otn_s2l !=  nullptr && otn_s2l->has_data())
	|| (out_xro !=  nullptr && out_xro->has_data())
	|| (previous_hop_address_generic !=  nullptr && previous_hop_address_generic->has_data())
	|| (protection !=  nullptr && protection->has_data())
	|| (reverse_lsp_fec !=  nullptr && reverse_lsp_fec->has_data())
	|| (reverse_tspec !=  nullptr && reverse_tspec->has_data())
	|| (s2l_convergence !=  nullptr && s2l_convergence->has_data())
	|| (s2l_fec !=  nullptr && s2l_fec->has_data())
	|| (soft_preemption !=  nullptr && soft_preemption->has_data())
	|| (srlg_collection !=  nullptr && srlg_collection->has_data())
	|| (tail_end_bfd_info !=  nullptr && tail_end_bfd_info->has_data())
	|| (tspec !=  nullptr && tspec->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::has_operation() const
{
    for (std::size_t index=0; index<in_ero.size(); index++)
    {
        if(in_ero[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<out_ero.size(); index++)
    {
        if(out_ero[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<path_affinity_array.size(); index++)
    {
        if(path_affinity_array[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<path_rro.size(); index++)
    {
        if(path_rro[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<resv_rro.size(); index++)
    {
        if(resv_rro[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<reverse_ero_in.size(); index++)
    {
        if(reverse_ero_in[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<s2l_segment_routing_path.size(); index++)
    {
        if(s2l_segment_routing_path[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<shared_risk_link_group.size(); index++)
    {
        if(shared_risk_link_group[index]->has_operation())
            return true;
    }
    for (auto const & leaf : s2l_reverse_lsp_sub_obj.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(abr_auto_discovered.operation)
	|| is_set(backup_tunnel_interface.operation)
	|| is_set(downstream_router_id.operation)
	|| is_set(egress_interface.operation)
	|| is_set(egress_interface_brief.operation)
	|| is_set(egress_interface_state.operation)
	|| is_set(expanded_ero_affinity_bits.operation)
	|| is_set(expanded_ero_affinity_mask.operation)
	|| is_set(expanded_ero_area_id.operation)
	|| is_set(expanded_ero_metric.operation)
	|| is_set(expanded_ero_metric_type.operation)
	|| is_set(frr_out_tunnel_interface.operation)
	|| is_set(incoming_address.operation)
	|| is_set(ingress_interface.operation)
	|| is_set(ingress_interface_brief.operation)
	|| is_set(ingress_interface_state.operation)
	|| is_set(is_bandwidth_protect.operation)
	|| is_set(is_expanded_ero.operation)
	|| is_set(is_frr_enabled.operation)
	|| is_set(is_node_protected.operation)
	|| is_set(is_optical.operation)
	|| is_set(local_router_id.operation)
	|| is_set(next_hop_address.operation)
	|| is_set(node_hop_count.operation)
	|| is_set(outbound_frr_state.operation)
	|| is_set(path_reeval_query_mid.operation)
	|| is_set(path_rro_enabled.operation)
	|| is_set(path_using_strict_spf.operation)
	|| is_set(pcalc_area.operation)
	|| is_set(previous_hop_address.operation)
	|| is_set(reverse_lsp_connected.operation)
	|| is_set(reverse_lsp_name.operation)
	|| is_set(reverse_lsp_present.operation)
	|| is_set(reverse_weight.operation)
	|| is_set(role.operation)
	|| is_set(s2l_local_label.operation)
	|| is_set(s2l_out_label.operation)
	|| is_set(s2l_reverse_ero_obj_present.operation)
	|| is_set(s2l_reverse_lsp_sub_obj.operation)
	|| is_set(s2l_reverse_tspec_obj_present.operation)
	|| is_set(signalling_status.operation)
	|| is_set(time_since_last_preferred_path_exists_send_mid.operation)
	|| is_set(time_since_last_preferred_tree_exists_send_mid.operation)
	|| is_set(time_since_last_query_received_mid.operation)
	|| is_set(upstream_router_id.operation)
	|| is_set(uptime.operation)
	|| is_set(weight.operation)
	|| (active_path_option !=  nullptr && active_path_option->has_operation())
	|| (association !=  nullptr && association->has_operation())
	|| (diversity_info !=  nullptr && diversity_info->has_operation())
	|| (flex_info !=  nullptr && flex_info->has_operation())
	|| (fspec !=  nullptr && fspec->has_operation())
	|| (generic_fspec !=  nullptr && generic_fspec->has_operation())
	|| (generic_tspec !=  nullptr && generic_tspec->has_operation())
	|| (gmpls_labels !=  nullptr && gmpls_labels->has_operation())
	|| (head_end_bfd_info !=  nullptr && head_end_bfd_info->has_operation())
	|| (in_xro !=  nullptr && in_xro->has_operation())
	|| (incoming_address_generic !=  nullptr && incoming_address_generic->has_operation())
	|| (lsp_wrap_info !=  nullptr && lsp_wrap_info->has_operation())
	|| (next_hop_address_generic !=  nullptr && next_hop_address_generic->has_operation())
	|| (otn_s2l !=  nullptr && otn_s2l->has_operation())
	|| (out_xro !=  nullptr && out_xro->has_operation())
	|| (previous_hop_address_generic !=  nullptr && previous_hop_address_generic->has_operation())
	|| (protection !=  nullptr && protection->has_operation())
	|| (reverse_lsp_fec !=  nullptr && reverse_lsp_fec->has_operation())
	|| (reverse_tspec !=  nullptr && reverse_tspec->has_operation())
	|| (s2l_convergence !=  nullptr && s2l_convergence->has_operation())
	|| (s2l_fec !=  nullptr && s2l_fec->has_operation())
	|| (soft_preemption !=  nullptr && soft_preemption->has_operation())
	|| (srlg_collection !=  nullptr && srlg_collection->has_operation())
	|| (tail_end_bfd_info !=  nullptr && tail_end_bfd_info->has_operation())
	|| (tspec !=  nullptr && tspec->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'S2L' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (abr_auto_discovered.is_set || is_set(abr_auto_discovered.operation)) leaf_name_data.push_back(abr_auto_discovered.get_name_leafdata());
    if (backup_tunnel_interface.is_set || is_set(backup_tunnel_interface.operation)) leaf_name_data.push_back(backup_tunnel_interface.get_name_leafdata());
    if (downstream_router_id.is_set || is_set(downstream_router_id.operation)) leaf_name_data.push_back(downstream_router_id.get_name_leafdata());
    if (egress_interface.is_set || is_set(egress_interface.operation)) leaf_name_data.push_back(egress_interface.get_name_leafdata());
    if (egress_interface_brief.is_set || is_set(egress_interface_brief.operation)) leaf_name_data.push_back(egress_interface_brief.get_name_leafdata());
    if (egress_interface_state.is_set || is_set(egress_interface_state.operation)) leaf_name_data.push_back(egress_interface_state.get_name_leafdata());
    if (expanded_ero_affinity_bits.is_set || is_set(expanded_ero_affinity_bits.operation)) leaf_name_data.push_back(expanded_ero_affinity_bits.get_name_leafdata());
    if (expanded_ero_affinity_mask.is_set || is_set(expanded_ero_affinity_mask.operation)) leaf_name_data.push_back(expanded_ero_affinity_mask.get_name_leafdata());
    if (expanded_ero_area_id.is_set || is_set(expanded_ero_area_id.operation)) leaf_name_data.push_back(expanded_ero_area_id.get_name_leafdata());
    if (expanded_ero_metric.is_set || is_set(expanded_ero_metric.operation)) leaf_name_data.push_back(expanded_ero_metric.get_name_leafdata());
    if (expanded_ero_metric_type.is_set || is_set(expanded_ero_metric_type.operation)) leaf_name_data.push_back(expanded_ero_metric_type.get_name_leafdata());
    if (frr_out_tunnel_interface.is_set || is_set(frr_out_tunnel_interface.operation)) leaf_name_data.push_back(frr_out_tunnel_interface.get_name_leafdata());
    if (incoming_address.is_set || is_set(incoming_address.operation)) leaf_name_data.push_back(incoming_address.get_name_leafdata());
    if (ingress_interface.is_set || is_set(ingress_interface.operation)) leaf_name_data.push_back(ingress_interface.get_name_leafdata());
    if (ingress_interface_brief.is_set || is_set(ingress_interface_brief.operation)) leaf_name_data.push_back(ingress_interface_brief.get_name_leafdata());
    if (ingress_interface_state.is_set || is_set(ingress_interface_state.operation)) leaf_name_data.push_back(ingress_interface_state.get_name_leafdata());
    if (is_bandwidth_protect.is_set || is_set(is_bandwidth_protect.operation)) leaf_name_data.push_back(is_bandwidth_protect.get_name_leafdata());
    if (is_expanded_ero.is_set || is_set(is_expanded_ero.operation)) leaf_name_data.push_back(is_expanded_ero.get_name_leafdata());
    if (is_frr_enabled.is_set || is_set(is_frr_enabled.operation)) leaf_name_data.push_back(is_frr_enabled.get_name_leafdata());
    if (is_node_protected.is_set || is_set(is_node_protected.operation)) leaf_name_data.push_back(is_node_protected.get_name_leafdata());
    if (is_optical.is_set || is_set(is_optical.operation)) leaf_name_data.push_back(is_optical.get_name_leafdata());
    if (local_router_id.is_set || is_set(local_router_id.operation)) leaf_name_data.push_back(local_router_id.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (node_hop_count.is_set || is_set(node_hop_count.operation)) leaf_name_data.push_back(node_hop_count.get_name_leafdata());
    if (outbound_frr_state.is_set || is_set(outbound_frr_state.operation)) leaf_name_data.push_back(outbound_frr_state.get_name_leafdata());
    if (path_reeval_query_mid.is_set || is_set(path_reeval_query_mid.operation)) leaf_name_data.push_back(path_reeval_query_mid.get_name_leafdata());
    if (path_rro_enabled.is_set || is_set(path_rro_enabled.operation)) leaf_name_data.push_back(path_rro_enabled.get_name_leafdata());
    if (path_using_strict_spf.is_set || is_set(path_using_strict_spf.operation)) leaf_name_data.push_back(path_using_strict_spf.get_name_leafdata());
    if (pcalc_area.is_set || is_set(pcalc_area.operation)) leaf_name_data.push_back(pcalc_area.get_name_leafdata());
    if (previous_hop_address.is_set || is_set(previous_hop_address.operation)) leaf_name_data.push_back(previous_hop_address.get_name_leafdata());
    if (reverse_lsp_connected.is_set || is_set(reverse_lsp_connected.operation)) leaf_name_data.push_back(reverse_lsp_connected.get_name_leafdata());
    if (reverse_lsp_name.is_set || is_set(reverse_lsp_name.operation)) leaf_name_data.push_back(reverse_lsp_name.get_name_leafdata());
    if (reverse_lsp_present.is_set || is_set(reverse_lsp_present.operation)) leaf_name_data.push_back(reverse_lsp_present.get_name_leafdata());
    if (reverse_weight.is_set || is_set(reverse_weight.operation)) leaf_name_data.push_back(reverse_weight.get_name_leafdata());
    if (role.is_set || is_set(role.operation)) leaf_name_data.push_back(role.get_name_leafdata());
    if (s2l_local_label.is_set || is_set(s2l_local_label.operation)) leaf_name_data.push_back(s2l_local_label.get_name_leafdata());
    if (s2l_out_label.is_set || is_set(s2l_out_label.operation)) leaf_name_data.push_back(s2l_out_label.get_name_leafdata());
    if (s2l_reverse_ero_obj_present.is_set || is_set(s2l_reverse_ero_obj_present.operation)) leaf_name_data.push_back(s2l_reverse_ero_obj_present.get_name_leafdata());
    if (s2l_reverse_tspec_obj_present.is_set || is_set(s2l_reverse_tspec_obj_present.operation)) leaf_name_data.push_back(s2l_reverse_tspec_obj_present.get_name_leafdata());
    if (signalling_status.is_set || is_set(signalling_status.operation)) leaf_name_data.push_back(signalling_status.get_name_leafdata());
    if (time_since_last_preferred_path_exists_send_mid.is_set || is_set(time_since_last_preferred_path_exists_send_mid.operation)) leaf_name_data.push_back(time_since_last_preferred_path_exists_send_mid.get_name_leafdata());
    if (time_since_last_preferred_tree_exists_send_mid.is_set || is_set(time_since_last_preferred_tree_exists_send_mid.operation)) leaf_name_data.push_back(time_since_last_preferred_tree_exists_send_mid.get_name_leafdata());
    if (time_since_last_query_received_mid.is_set || is_set(time_since_last_query_received_mid.operation)) leaf_name_data.push_back(time_since_last_query_received_mid.get_name_leafdata());
    if (upstream_router_id.is_set || is_set(upstream_router_id.operation)) leaf_name_data.push_back(upstream_router_id.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.operation)) leaf_name_data.push_back(uptime.get_name_leafdata());
    if (weight.is_set || is_set(weight.operation)) leaf_name_data.push_back(weight.get_name_leafdata());

    auto s2l_reverse_lsp_sub_obj_name_datas = s2l_reverse_lsp_sub_obj.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), s2l_reverse_lsp_sub_obj_name_datas.begin(), s2l_reverse_lsp_sub_obj_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "active-path-option")
    {
        if(active_path_option != nullptr)
        {
            children["active-path-option"] = active_path_option;
        }
        else
        {
            active_path_option = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption>();
            active_path_option->parent = this;
            children["active-path-option"] = active_path_option;
        }
        return children.at("active-path-option");
    }

    if(child_yang_name == "association")
    {
        if(association != nullptr)
        {
            children["association"] = association;
        }
        else
        {
            association = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::Association>();
            association->parent = this;
            children["association"] = association;
        }
        return children.at("association");
    }

    if(child_yang_name == "diversity-info")
    {
        if(diversity_info != nullptr)
        {
            children["diversity-info"] = diversity_info;
        }
        else
        {
            diversity_info = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::DiversityInfo>();
            diversity_info->parent = this;
            children["diversity-info"] = diversity_info;
        }
        return children.at("diversity-info");
    }

    if(child_yang_name == "flex-info")
    {
        if(flex_info != nullptr)
        {
            children["flex-info"] = flex_info;
        }
        else
        {
            flex_info = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::FlexInfo>();
            flex_info->parent = this;
            children["flex-info"] = flex_info;
        }
        return children.at("flex-info");
    }

    if(child_yang_name == "fspec")
    {
        if(fspec != nullptr)
        {
            children["fspec"] = fspec;
        }
        else
        {
            fspec = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::Fspec>();
            fspec->parent = this;
            children["fspec"] = fspec;
        }
        return children.at("fspec");
    }

    if(child_yang_name == "generic-fspec")
    {
        if(generic_fspec != nullptr)
        {
            children["generic-fspec"] = generic_fspec;
        }
        else
        {
            generic_fspec = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::GenericFspec>();
            generic_fspec->parent = this;
            children["generic-fspec"] = generic_fspec;
        }
        return children.at("generic-fspec");
    }

    if(child_yang_name == "generic-tspec")
    {
        if(generic_tspec != nullptr)
        {
            children["generic-tspec"] = generic_tspec;
        }
        else
        {
            generic_tspec = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::GenericTspec>();
            generic_tspec->parent = this;
            children["generic-tspec"] = generic_tspec;
        }
        return children.at("generic-tspec");
    }

    if(child_yang_name == "gmpls-labels")
    {
        if(gmpls_labels != nullptr)
        {
            children["gmpls-labels"] = gmpls_labels;
        }
        else
        {
            gmpls_labels = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::GmplsLabels>();
            gmpls_labels->parent = this;
            children["gmpls-labels"] = gmpls_labels;
        }
        return children.at("gmpls-labels");
    }

    if(child_yang_name == "head-end-bfd-info")
    {
        if(head_end_bfd_info != nullptr)
        {
            children["head-end-bfd-info"] = head_end_bfd_info;
        }
        else
        {
            head_end_bfd_info = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::HeadEndBfdInfo>();
            head_end_bfd_info->parent = this;
            children["head-end-bfd-info"] = head_end_bfd_info;
        }
        return children.at("head-end-bfd-info");
    }

    if(child_yang_name == "in-ero")
    {
        for(auto const & c : in_ero)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::InEro>();
        c->parent = this;
        in_ero.push_back(std::move(c));
        children[segment_path] = in_ero.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "in-xro")
    {
        if(in_xro != nullptr)
        {
            children["in-xro"] = in_xro;
        }
        else
        {
            in_xro = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::InXro>();
            in_xro->parent = this;
            children["in-xro"] = in_xro;
        }
        return children.at("in-xro");
    }

    if(child_yang_name == "incoming-address-generic")
    {
        if(incoming_address_generic != nullptr)
        {
            children["incoming-address-generic"] = incoming_address_generic;
        }
        else
        {
            incoming_address_generic = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::IncomingAddressGeneric>();
            incoming_address_generic->parent = this;
            children["incoming-address-generic"] = incoming_address_generic;
        }
        return children.at("incoming-address-generic");
    }

    if(child_yang_name == "lsp-wrap-info")
    {
        if(lsp_wrap_info != nullptr)
        {
            children["lsp-wrap-info"] = lsp_wrap_info;
        }
        else
        {
            lsp_wrap_info = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::LspWrapInfo>();
            lsp_wrap_info->parent = this;
            children["lsp-wrap-info"] = lsp_wrap_info;
        }
        return children.at("lsp-wrap-info");
    }

    if(child_yang_name == "next-hop-address-generic")
    {
        if(next_hop_address_generic != nullptr)
        {
            children["next-hop-address-generic"] = next_hop_address_generic;
        }
        else
        {
            next_hop_address_generic = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::NextHopAddressGeneric>();
            next_hop_address_generic->parent = this;
            children["next-hop-address-generic"] = next_hop_address_generic;
        }
        return children.at("next-hop-address-generic");
    }

    if(child_yang_name == "otn-s2l")
    {
        if(otn_s2l != nullptr)
        {
            children["otn-s2l"] = otn_s2l;
        }
        else
        {
            otn_s2l = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::OtnS2L>();
            otn_s2l->parent = this;
            children["otn-s2l"] = otn_s2l;
        }
        return children.at("otn-s2l");
    }

    if(child_yang_name == "out-ero")
    {
        for(auto const & c : out_ero)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::OutEro>();
        c->parent = this;
        out_ero.push_back(std::move(c));
        children[segment_path] = out_ero.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "out-xro")
    {
        if(out_xro != nullptr)
        {
            children["out-xro"] = out_xro;
        }
        else
        {
            out_xro = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::OutXro>();
            out_xro->parent = this;
            children["out-xro"] = out_xro;
        }
        return children.at("out-xro");
    }

    if(child_yang_name == "path-affinity-array")
    {
        for(auto const & c : path_affinity_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::PathAffinityArray>();
        c->parent = this;
        path_affinity_array.push_back(std::move(c));
        children[segment_path] = path_affinity_array.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "path-rro")
    {
        for(auto const & c : path_rro)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::PathRro>();
        c->parent = this;
        path_rro.push_back(std::move(c));
        children[segment_path] = path_rro.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "previous-hop-address-generic")
    {
        if(previous_hop_address_generic != nullptr)
        {
            children["previous-hop-address-generic"] = previous_hop_address_generic;
        }
        else
        {
            previous_hop_address_generic = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::PreviousHopAddressGeneric>();
            previous_hop_address_generic->parent = this;
            children["previous-hop-address-generic"] = previous_hop_address_generic;
        }
        return children.at("previous-hop-address-generic");
    }

    if(child_yang_name == "protection")
    {
        if(protection != nullptr)
        {
            children["protection"] = protection;
        }
        else
        {
            protection = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::Protection>();
            protection->parent = this;
            children["protection"] = protection;
        }
        return children.at("protection");
    }

    if(child_yang_name == "resv-rro")
    {
        for(auto const & c : resv_rro)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ResvRro>();
        c->parent = this;
        resv_rro.push_back(std::move(c));
        children[segment_path] = resv_rro.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "reverse-ero-in")
    {
        for(auto const & c : reverse_ero_in)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ReverseEroIn>();
        c->parent = this;
        reverse_ero_in.push_back(std::move(c));
        children[segment_path] = reverse_ero_in.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "reverse-lsp-fec")
    {
        if(reverse_lsp_fec != nullptr)
        {
            children["reverse-lsp-fec"] = reverse_lsp_fec;
        }
        else
        {
            reverse_lsp_fec = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ReverseLspFec>();
            reverse_lsp_fec->parent = this;
            children["reverse-lsp-fec"] = reverse_lsp_fec;
        }
        return children.at("reverse-lsp-fec");
    }

    if(child_yang_name == "reverse-tspec")
    {
        if(reverse_tspec != nullptr)
        {
            children["reverse-tspec"] = reverse_tspec;
        }
        else
        {
            reverse_tspec = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ReverseTspec>();
            reverse_tspec->parent = this;
            children["reverse-tspec"] = reverse_tspec;
        }
        return children.at("reverse-tspec");
    }

    if(child_yang_name == "s2l-convergence")
    {
        if(s2l_convergence != nullptr)
        {
            children["s2l-convergence"] = s2l_convergence;
        }
        else
        {
            s2l_convergence = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::S2LConvergence>();
            s2l_convergence->parent = this;
            children["s2l-convergence"] = s2l_convergence;
        }
        return children.at("s2l-convergence");
    }

    if(child_yang_name == "s2l-fec")
    {
        if(s2l_fec != nullptr)
        {
            children["s2l-fec"] = s2l_fec;
        }
        else
        {
            s2l_fec = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::S2LFec>();
            s2l_fec->parent = this;
            children["s2l-fec"] = s2l_fec;
        }
        return children.at("s2l-fec");
    }

    if(child_yang_name == "s2l-segment-routing-path")
    {
        for(auto const & c : s2l_segment_routing_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::S2LSegmentRoutingPath>();
        c->parent = this;
        s2l_segment_routing_path.push_back(std::move(c));
        children[segment_path] = s2l_segment_routing_path.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "shared-risk-link-group")
    {
        for(auto const & c : shared_risk_link_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::SharedRiskLinkGroup>();
        c->parent = this;
        shared_risk_link_group.push_back(std::move(c));
        children[segment_path] = shared_risk_link_group.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "soft-preemption")
    {
        if(soft_preemption != nullptr)
        {
            children["soft-preemption"] = soft_preemption;
        }
        else
        {
            soft_preemption = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::SoftPreemption>();
            soft_preemption->parent = this;
            children["soft-preemption"] = soft_preemption;
        }
        return children.at("soft-preemption");
    }

    if(child_yang_name == "srlg-collection")
    {
        if(srlg_collection != nullptr)
        {
            children["srlg-collection"] = srlg_collection;
        }
        else
        {
            srlg_collection = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::SrlgCollection>();
            srlg_collection->parent = this;
            children["srlg-collection"] = srlg_collection;
        }
        return children.at("srlg-collection");
    }

    if(child_yang_name == "tail-end-bfd-info")
    {
        if(tail_end_bfd_info != nullptr)
        {
            children["tail-end-bfd-info"] = tail_end_bfd_info;
        }
        else
        {
            tail_end_bfd_info = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::TailEndBfdInfo>();
            tail_end_bfd_info->parent = this;
            children["tail-end-bfd-info"] = tail_end_bfd_info;
        }
        return children.at("tail-end-bfd-info");
    }

    if(child_yang_name == "tspec")
    {
        if(tspec != nullptr)
        {
            children["tspec"] = tspec;
        }
        else
        {
            tspec = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::Tspec>();
            tspec->parent = this;
            children["tspec"] = tspec;
        }
        return children.at("tspec");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::get_children()
{
    if(children.find("active-path-option") == children.end())
    {
        if(active_path_option != nullptr)
        {
            children["active-path-option"] = active_path_option;
        }
    }

    if(children.find("association") == children.end())
    {
        if(association != nullptr)
        {
            children["association"] = association;
        }
    }

    if(children.find("diversity-info") == children.end())
    {
        if(diversity_info != nullptr)
        {
            children["diversity-info"] = diversity_info;
        }
    }

    if(children.find("flex-info") == children.end())
    {
        if(flex_info != nullptr)
        {
            children["flex-info"] = flex_info;
        }
    }

    if(children.find("fspec") == children.end())
    {
        if(fspec != nullptr)
        {
            children["fspec"] = fspec;
        }
    }

    if(children.find("generic-fspec") == children.end())
    {
        if(generic_fspec != nullptr)
        {
            children["generic-fspec"] = generic_fspec;
        }
    }

    if(children.find("generic-tspec") == children.end())
    {
        if(generic_tspec != nullptr)
        {
            children["generic-tspec"] = generic_tspec;
        }
    }

    if(children.find("gmpls-labels") == children.end())
    {
        if(gmpls_labels != nullptr)
        {
            children["gmpls-labels"] = gmpls_labels;
        }
    }

    if(children.find("head-end-bfd-info") == children.end())
    {
        if(head_end_bfd_info != nullptr)
        {
            children["head-end-bfd-info"] = head_end_bfd_info;
        }
    }

    for (auto const & c : in_ero)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("in-xro") == children.end())
    {
        if(in_xro != nullptr)
        {
            children["in-xro"] = in_xro;
        }
    }

    if(children.find("incoming-address-generic") == children.end())
    {
        if(incoming_address_generic != nullptr)
        {
            children["incoming-address-generic"] = incoming_address_generic;
        }
    }

    if(children.find("lsp-wrap-info") == children.end())
    {
        if(lsp_wrap_info != nullptr)
        {
            children["lsp-wrap-info"] = lsp_wrap_info;
        }
    }

    if(children.find("next-hop-address-generic") == children.end())
    {
        if(next_hop_address_generic != nullptr)
        {
            children["next-hop-address-generic"] = next_hop_address_generic;
        }
    }

    if(children.find("otn-s2l") == children.end())
    {
        if(otn_s2l != nullptr)
        {
            children["otn-s2l"] = otn_s2l;
        }
    }

    for (auto const & c : out_ero)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("out-xro") == children.end())
    {
        if(out_xro != nullptr)
        {
            children["out-xro"] = out_xro;
        }
    }

    for (auto const & c : path_affinity_array)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : path_rro)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("previous-hop-address-generic") == children.end())
    {
        if(previous_hop_address_generic != nullptr)
        {
            children["previous-hop-address-generic"] = previous_hop_address_generic;
        }
    }

    if(children.find("protection") == children.end())
    {
        if(protection != nullptr)
        {
            children["protection"] = protection;
        }
    }

    for (auto const & c : resv_rro)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : reverse_ero_in)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("reverse-lsp-fec") == children.end())
    {
        if(reverse_lsp_fec != nullptr)
        {
            children["reverse-lsp-fec"] = reverse_lsp_fec;
        }
    }

    if(children.find("reverse-tspec") == children.end())
    {
        if(reverse_tspec != nullptr)
        {
            children["reverse-tspec"] = reverse_tspec;
        }
    }

    if(children.find("s2l-convergence") == children.end())
    {
        if(s2l_convergence != nullptr)
        {
            children["s2l-convergence"] = s2l_convergence;
        }
    }

    if(children.find("s2l-fec") == children.end())
    {
        if(s2l_fec != nullptr)
        {
            children["s2l-fec"] = s2l_fec;
        }
    }

    for (auto const & c : s2l_segment_routing_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : shared_risk_link_group)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("soft-preemption") == children.end())
    {
        if(soft_preemption != nullptr)
        {
            children["soft-preemption"] = soft_preemption;
        }
    }

    if(children.find("srlg-collection") == children.end())
    {
        if(srlg_collection != nullptr)
        {
            children["srlg-collection"] = srlg_collection;
        }
    }

    if(children.find("tail-end-bfd-info") == children.end())
    {
        if(tail_end_bfd_info != nullptr)
        {
            children["tail-end-bfd-info"] = tail_end_bfd_info;
        }
    }

    if(children.find("tspec") == children.end())
    {
        if(tspec != nullptr)
        {
            children["tspec"] = tspec;
        }
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "abr-auto-discovered")
    {
        abr_auto_discovered = value;
    }
    if(value_path == "backup-tunnel-interface")
    {
        backup_tunnel_interface = value;
    }
    if(value_path == "downstream-router-id")
    {
        downstream_router_id = value;
    }
    if(value_path == "egress-interface")
    {
        egress_interface = value;
    }
    if(value_path == "egress-interface-brief")
    {
        egress_interface_brief = value;
    }
    if(value_path == "egress-interface-state")
    {
        egress_interface_state = value;
    }
    if(value_path == "expanded-ero-affinity-bits")
    {
        expanded_ero_affinity_bits = value;
    }
    if(value_path == "expanded-ero-affinity-mask")
    {
        expanded_ero_affinity_mask = value;
    }
    if(value_path == "expanded-ero-area-id")
    {
        expanded_ero_area_id = value;
    }
    if(value_path == "expanded-ero-metric")
    {
        expanded_ero_metric = value;
    }
    if(value_path == "expanded-ero-metric-type")
    {
        expanded_ero_metric_type = value;
    }
    if(value_path == "frr-out-tunnel-interface")
    {
        frr_out_tunnel_interface = value;
    }
    if(value_path == "incoming-address")
    {
        incoming_address = value;
    }
    if(value_path == "ingress-interface")
    {
        ingress_interface = value;
    }
    if(value_path == "ingress-interface-brief")
    {
        ingress_interface_brief = value;
    }
    if(value_path == "ingress-interface-state")
    {
        ingress_interface_state = value;
    }
    if(value_path == "is-bandwidth-protect")
    {
        is_bandwidth_protect = value;
    }
    if(value_path == "is-expanded-ero")
    {
        is_expanded_ero = value;
    }
    if(value_path == "is-frr-enabled")
    {
        is_frr_enabled = value;
    }
    if(value_path == "is-node-protected")
    {
        is_node_protected = value;
    }
    if(value_path == "is-optical")
    {
        is_optical = value;
    }
    if(value_path == "local-router-id")
    {
        local_router_id = value;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "node-hop-count")
    {
        node_hop_count = value;
    }
    if(value_path == "outbound-frr-state")
    {
        outbound_frr_state = value;
    }
    if(value_path == "path-reeval-query-mid")
    {
        path_reeval_query_mid = value;
    }
    if(value_path == "path-rro-enabled")
    {
        path_rro_enabled = value;
    }
    if(value_path == "path-using-strict-spf")
    {
        path_using_strict_spf = value;
    }
    if(value_path == "pcalc-area")
    {
        pcalc_area = value;
    }
    if(value_path == "previous-hop-address")
    {
        previous_hop_address = value;
    }
    if(value_path == "reverse-lsp-connected")
    {
        reverse_lsp_connected = value;
    }
    if(value_path == "reverse-lsp-name")
    {
        reverse_lsp_name = value;
    }
    if(value_path == "reverse-lsp-present")
    {
        reverse_lsp_present = value;
    }
    if(value_path == "reverse-weight")
    {
        reverse_weight = value;
    }
    if(value_path == "role")
    {
        role = value;
    }
    if(value_path == "s2l-local-label")
    {
        s2l_local_label = value;
    }
    if(value_path == "s2l-out-label")
    {
        s2l_out_label = value;
    }
    if(value_path == "s2l-reverse-ero-obj-present")
    {
        s2l_reverse_ero_obj_present = value;
    }
    if(value_path == "s2l-reverse-lsp-sub-obj")
    {
        s2l_reverse_lsp_sub_obj.append(value);
    }
    if(value_path == "s2l-reverse-tspec-obj-present")
    {
        s2l_reverse_tspec_obj_present = value;
    }
    if(value_path == "signalling-status")
    {
        signalling_status = value;
    }
    if(value_path == "time-since-last-preferred-path-exists-send-mid")
    {
        time_since_last_preferred_path_exists_send_mid = value;
    }
    if(value_path == "time-since-last-preferred-tree-exists-send-mid")
    {
        time_since_last_preferred_tree_exists_send_mid = value;
    }
    if(value_path == "time-since-last-query-received-mid")
    {
        time_since_last_query_received_mid = value;
    }
    if(value_path == "upstream-router-id")
    {
        upstream_router_id = value;
    }
    if(value_path == "uptime")
    {
        uptime = value;
    }
    if(value_path == "weight")
    {
        weight = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::S2LFec::S2LFec()
    :
    s2l_fec_ctype{YType::enumeration, "s2l-fec-ctype"},
    s2l_fec_dest{YType::str, "s2l-fec-dest"},
    s2l_fec_extended_tunnel_id{YType::str, "s2l-fec-extended-tunnel-id"},
    s2l_fec_lsp_id{YType::uint16, "s2l-fec-lsp-id"},
    s2l_fec_p2mp_id{YType::uint32, "s2l-fec-p2mp-id"},
    s2l_fec_source{YType::str, "s2l-fec-source"},
    s2l_fec_subgroup_id{YType::uint16, "s2l-fec-subgroup-id"},
    s2l_fec_subgroup_originator{YType::str, "s2l-fec-subgroup-originator"},
    s2l_fec_tunnel_id{YType::uint16, "s2l-fec-tunnel-id"},
    s2l_fec_vrf{YType::str, "s2l-fec-vrf"}
{
    yang_name = "s2l-fec"; yang_parent_name = "s2l";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::S2LFec::~S2LFec()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::S2LFec::has_data() const
{
    return s2l_fec_ctype.is_set
	|| s2l_fec_dest.is_set
	|| s2l_fec_extended_tunnel_id.is_set
	|| s2l_fec_lsp_id.is_set
	|| s2l_fec_p2mp_id.is_set
	|| s2l_fec_source.is_set
	|| s2l_fec_subgroup_id.is_set
	|| s2l_fec_subgroup_originator.is_set
	|| s2l_fec_tunnel_id.is_set
	|| s2l_fec_vrf.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::S2LFec::has_operation() const
{
    return is_set(operation)
	|| is_set(s2l_fec_ctype.operation)
	|| is_set(s2l_fec_dest.operation)
	|| is_set(s2l_fec_extended_tunnel_id.operation)
	|| is_set(s2l_fec_lsp_id.operation)
	|| is_set(s2l_fec_p2mp_id.operation)
	|| is_set(s2l_fec_source.operation)
	|| is_set(s2l_fec_subgroup_id.operation)
	|| is_set(s2l_fec_subgroup_originator.operation)
	|| is_set(s2l_fec_tunnel_id.operation)
	|| is_set(s2l_fec_vrf.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::S2LFec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-fec";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::S2LFec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'S2LFec' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (s2l_fec_ctype.is_set || is_set(s2l_fec_ctype.operation)) leaf_name_data.push_back(s2l_fec_ctype.get_name_leafdata());
    if (s2l_fec_dest.is_set || is_set(s2l_fec_dest.operation)) leaf_name_data.push_back(s2l_fec_dest.get_name_leafdata());
    if (s2l_fec_extended_tunnel_id.is_set || is_set(s2l_fec_extended_tunnel_id.operation)) leaf_name_data.push_back(s2l_fec_extended_tunnel_id.get_name_leafdata());
    if (s2l_fec_lsp_id.is_set || is_set(s2l_fec_lsp_id.operation)) leaf_name_data.push_back(s2l_fec_lsp_id.get_name_leafdata());
    if (s2l_fec_p2mp_id.is_set || is_set(s2l_fec_p2mp_id.operation)) leaf_name_data.push_back(s2l_fec_p2mp_id.get_name_leafdata());
    if (s2l_fec_source.is_set || is_set(s2l_fec_source.operation)) leaf_name_data.push_back(s2l_fec_source.get_name_leafdata());
    if (s2l_fec_subgroup_id.is_set || is_set(s2l_fec_subgroup_id.operation)) leaf_name_data.push_back(s2l_fec_subgroup_id.get_name_leafdata());
    if (s2l_fec_subgroup_originator.is_set || is_set(s2l_fec_subgroup_originator.operation)) leaf_name_data.push_back(s2l_fec_subgroup_originator.get_name_leafdata());
    if (s2l_fec_tunnel_id.is_set || is_set(s2l_fec_tunnel_id.operation)) leaf_name_data.push_back(s2l_fec_tunnel_id.get_name_leafdata());
    if (s2l_fec_vrf.is_set || is_set(s2l_fec_vrf.operation)) leaf_name_data.push_back(s2l_fec_vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::S2LFec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::S2LFec::get_children()
{
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::S2LFec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "s2l-fec-ctype")
    {
        s2l_fec_ctype = value;
    }
    if(value_path == "s2l-fec-dest")
    {
        s2l_fec_dest = value;
    }
    if(value_path == "s2l-fec-extended-tunnel-id")
    {
        s2l_fec_extended_tunnel_id = value;
    }
    if(value_path == "s2l-fec-lsp-id")
    {
        s2l_fec_lsp_id = value;
    }
    if(value_path == "s2l-fec-p2mp-id")
    {
        s2l_fec_p2mp_id = value;
    }
    if(value_path == "s2l-fec-source")
    {
        s2l_fec_source = value;
    }
    if(value_path == "s2l-fec-subgroup-id")
    {
        s2l_fec_subgroup_id = value;
    }
    if(value_path == "s2l-fec-subgroup-originator")
    {
        s2l_fec_subgroup_originator = value;
    }
    if(value_path == "s2l-fec-tunnel-id")
    {
        s2l_fec_tunnel_id = value;
    }
    if(value_path == "s2l-fec-vrf")
    {
        s2l_fec_vrf = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::ActivePathOption()
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
    attribute_set(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet>())
	,xro_attribute_set(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet>())
{
    attribute_set->parent = this;
    children["attribute-set"] = attribute_set;

    xro_attribute_set->parent = this;
    children["xro-attribute-set"] = xro_attribute_set;

    yang_name = "active-path-option"; yang_parent_name = "s2l";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::~ActivePathOption()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::has_data() const
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::has_operation() const
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

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active-path-option";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ActivePathOption' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "attribute-set")
    {
        if(attribute_set != nullptr)
        {
            children["attribute-set"] = attribute_set;
        }
        else
        {
            attribute_set = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet>();
            attribute_set->parent = this;
            children["attribute-set"] = attribute_set;
        }
        return children.at("attribute-set");
    }

    if(child_yang_name == "path-calculation-error")
    {
        for(auto const & c : path_calculation_error)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::PathCalculationError>();
        c->parent = this;
        path_calculation_error.push_back(std::move(c));
        children[segment_path] = path_calculation_error.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "remerge-error")
    {
        for(auto const & c : remerge_error)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::RemergeError>();
        c->parent = this;
        remerge_error.push_back(std::move(c));
        children[segment_path] = remerge_error.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "signalling-error")
    {
        for(auto const & c : signalling_error)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::SignallingError>();
        c->parent = this;
        signalling_error.push_back(std::move(c));
        children[segment_path] = signalling_error.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "xro-attribute-set")
    {
        if(xro_attribute_set != nullptr)
        {
            children["xro-attribute-set"] = xro_attribute_set;
        }
        else
        {
            xro_attribute_set = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet>();
            xro_attribute_set->parent = this;
            children["xro-attribute-set"] = xro_attribute_set;
        }
        return children.at("xro-attribute-set");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::get_children()
{
    if(children.find("attribute-set") == children.end())
    {
        if(attribute_set != nullptr)
        {
            children["attribute-set"] = attribute_set;
        }
    }

    for (auto const & c : path_calculation_error)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : remerge_error)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : signalling_error)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("xro-attribute-set") == children.end())
    {
        if(xro_attribute_set != nullptr)
        {
            children["xro-attribute-set"] = xro_attribute_set;
        }
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::set_value(const std::string & value_path, std::string value)
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

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSet()
    :
    tunnel_attribute_set_name{YType::str, "tunnel-attribute-set-name"},
    tunnel_attribute_set_name_crc32{YType::uint32, "tunnel-attribute-set-name-crc32"}
    	,
    attribute_set_union(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion>())
{
    attribute_set_union->parent = this;
    children["attribute-set-union"] = attribute_set_union;

    yang_name = "attribute-set"; yang_parent_name = "active-path-option";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::~AttributeSet()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::has_data() const
{
    return tunnel_attribute_set_name.is_set
	|| tunnel_attribute_set_name_crc32.is_set
	|| (attribute_set_union !=  nullptr && attribute_set_union->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::has_operation() const
{
    return is_set(operation)
	|| is_set(tunnel_attribute_set_name.operation)
	|| is_set(tunnel_attribute_set_name_crc32.operation)
	|| (attribute_set_union !=  nullptr && attribute_set_union->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "attribute-set-union")
    {
        if(attribute_set_union != nullptr)
        {
            children["attribute-set-union"] = attribute_set_union;
        }
        else
        {
            attribute_set_union = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion>();
            attribute_set_union->parent = this;
            children["attribute-set-union"] = attribute_set_union;
        }
        return children.at("attribute-set-union");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::get_children()
{
    if(children.find("attribute-set-union") == children.end())
    {
        if(attribute_set_union != nullptr)
        {
            children["attribute-set-union"] = attribute_set_union;
        }
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::set_value(const std::string & value_path, std::string value)
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

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetUnion()
    :
    tunnel_attribute_set_type{YType::enumeration, "tunnel-attribute-set-type"}
    	,
    attribute_set_aps_pp(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp>())
	,attribute_set_autobackup(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup>())
	,attribute_set_automesh(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh>())
	,attribute_set_p2mpte(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte>())
	,attribute_set_p2p_te(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe>())
	,attribute_set_path_option(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption>())
	,attribute_set_xro(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro>())
{
    attribute_set_aps_pp->parent = this;
    children["attribute-set-aps-pp"] = attribute_set_aps_pp;

    attribute_set_autobackup->parent = this;
    children["attribute-set-autobackup"] = attribute_set_autobackup;

    attribute_set_automesh->parent = this;
    children["attribute-set-automesh"] = attribute_set_automesh;

    attribute_set_p2mpte->parent = this;
    children["attribute-set-p2mpte"] = attribute_set_p2mpte;

    attribute_set_p2p_te->parent = this;
    children["attribute-set-p2p-te"] = attribute_set_p2p_te;

    attribute_set_path_option->parent = this;
    children["attribute-set-path-option"] = attribute_set_path_option;

    attribute_set_xro->parent = this;
    children["attribute-set-xro"] = attribute_set_xro;

    yang_name = "attribute-set-union"; yang_parent_name = "attribute-set";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::~AttributeSetUnion()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::has_data() const
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::has_operation() const
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

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-union";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "attribute-set-aps-pp")
    {
        if(attribute_set_aps_pp != nullptr)
        {
            children["attribute-set-aps-pp"] = attribute_set_aps_pp;
        }
        else
        {
            attribute_set_aps_pp = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp>();
            attribute_set_aps_pp->parent = this;
            children["attribute-set-aps-pp"] = attribute_set_aps_pp;
        }
        return children.at("attribute-set-aps-pp");
    }

    if(child_yang_name == "attribute-set-autobackup")
    {
        if(attribute_set_autobackup != nullptr)
        {
            children["attribute-set-autobackup"] = attribute_set_autobackup;
        }
        else
        {
            attribute_set_autobackup = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup>();
            attribute_set_autobackup->parent = this;
            children["attribute-set-autobackup"] = attribute_set_autobackup;
        }
        return children.at("attribute-set-autobackup");
    }

    if(child_yang_name == "attribute-set-automesh")
    {
        if(attribute_set_automesh != nullptr)
        {
            children["attribute-set-automesh"] = attribute_set_automesh;
        }
        else
        {
            attribute_set_automesh = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh>();
            attribute_set_automesh->parent = this;
            children["attribute-set-automesh"] = attribute_set_automesh;
        }
        return children.at("attribute-set-automesh");
    }

    if(child_yang_name == "attribute-set-p2mpte")
    {
        if(attribute_set_p2mpte != nullptr)
        {
            children["attribute-set-p2mpte"] = attribute_set_p2mpte;
        }
        else
        {
            attribute_set_p2mpte = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte>();
            attribute_set_p2mpte->parent = this;
            children["attribute-set-p2mpte"] = attribute_set_p2mpte;
        }
        return children.at("attribute-set-p2mpte");
    }

    if(child_yang_name == "attribute-set-p2p-te")
    {
        if(attribute_set_p2p_te != nullptr)
        {
            children["attribute-set-p2p-te"] = attribute_set_p2p_te;
        }
        else
        {
            attribute_set_p2p_te = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe>();
            attribute_set_p2p_te->parent = this;
            children["attribute-set-p2p-te"] = attribute_set_p2p_te;
        }
        return children.at("attribute-set-p2p-te");
    }

    if(child_yang_name == "attribute-set-path-option")
    {
        if(attribute_set_path_option != nullptr)
        {
            children["attribute-set-path-option"] = attribute_set_path_option;
        }
        else
        {
            attribute_set_path_option = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption>();
            attribute_set_path_option->parent = this;
            children["attribute-set-path-option"] = attribute_set_path_option;
        }
        return children.at("attribute-set-path-option");
    }

    if(child_yang_name == "attribute-set-xro")
    {
        if(attribute_set_xro != nullptr)
        {
            children["attribute-set-xro"] = attribute_set_xro;
        }
        else
        {
            attribute_set_xro = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro>();
            attribute_set_xro->parent = this;
            children["attribute-set-xro"] = attribute_set_xro;
        }
        return children.at("attribute-set-xro");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::get_children()
{
    if(children.find("attribute-set-aps-pp") == children.end())
    {
        if(attribute_set_aps_pp != nullptr)
        {
            children["attribute-set-aps-pp"] = attribute_set_aps_pp;
        }
    }

    if(children.find("attribute-set-autobackup") == children.end())
    {
        if(attribute_set_autobackup != nullptr)
        {
            children["attribute-set-autobackup"] = attribute_set_autobackup;
        }
    }

    if(children.find("attribute-set-automesh") == children.end())
    {
        if(attribute_set_automesh != nullptr)
        {
            children["attribute-set-automesh"] = attribute_set_automesh;
        }
    }

    if(children.find("attribute-set-p2mpte") == children.end())
    {
        if(attribute_set_p2mpte != nullptr)
        {
            children["attribute-set-p2mpte"] = attribute_set_p2mpte;
        }
    }

    if(children.find("attribute-set-p2p-te") == children.end())
    {
        if(attribute_set_p2p_te != nullptr)
        {
            children["attribute-set-p2p-te"] = attribute_set_p2p_te;
        }
    }

    if(children.find("attribute-set-path-option") == children.end())
    {
        if(attribute_set_path_option != nullptr)
        {
            children["attribute-set-path-option"] = attribute_set_path_option;
        }
    }

    if(children.find("attribute-set-xro") == children.end())
    {
        if(attribute_set_xro != nullptr)
        {
            children["attribute-set-xro"] = attribute_set_xro;
        }
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tunnel-attribute-set-type")
    {
        tunnel_attribute_set_type = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::AttributeSetPathOption()
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
    affinity(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity>())
	,bfd_reverse_path(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath>())
{
    affinity->parent = this;
    children["affinity"] = affinity;

    bfd_reverse_path->parent = this;
    children["bfd-reverse-path"] = bfd_reverse_path;

    yang_name = "attribute-set-path-option"; yang_parent_name = "attribute-set-union";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::~AttributeSetPathOption()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::has_data() const
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::has_operation() const
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

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-path-option";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "affinity")
    {
        if(affinity != nullptr)
        {
            children["affinity"] = affinity;
        }
        else
        {
            affinity = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity>();
            affinity->parent = this;
            children["affinity"] = affinity;
        }
        return children.at("affinity");
    }

    if(child_yang_name == "bfd-reverse-path")
    {
        if(bfd_reverse_path != nullptr)
        {
            children["bfd-reverse-path"] = bfd_reverse_path;
        }
        else
        {
            bfd_reverse_path = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath>();
            bfd_reverse_path->parent = this;
            children["bfd-reverse-path"] = bfd_reverse_path;
        }
        return children.at("bfd-reverse-path");
    }

    if(child_yang_name == "version-info")
    {
        for(auto const & c : version_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo>();
        c->parent = this;
        version_info.push_back(std::move(c));
        children[segment_path] = version_info.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::get_children()
{
    if(children.find("affinity") == children.end())
    {
        if(affinity != nullptr)
        {
            children["affinity"] = affinity;
        }
    }

    if(children.find("bfd-reverse-path") == children.end())
    {
        if(bfd_reverse_path != nullptr)
        {
            children["bfd-reverse-path"] = bfd_reverse_path;
        }
    }

    for (auto const & c : version_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::set_value(const std::string & value_path, std::string value)
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

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::Affinity()
    :
    affinity_bits{YType::uint32, "affinity-bits"},
    affinity_mask{YType::uint32, "affinity-mask"}
{
    yang_name = "affinity"; yang_parent_name = "attribute-set-path-option";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::~Affinity()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::has_data() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_data())
            return true;
    }
    return affinity_bits.is_set
	|| affinity_mask.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::has_operation() const
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

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "named-affinity")
    {
        for(auto const & c : named_affinity)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity>();
        c->parent = this;
        named_affinity.push_back(std::move(c));
        children[segment_path] = named_affinity.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::get_children()
{
    for (auto const & c : named_affinity)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::set_value(const std::string & value_path, std::string value)
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

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::NamedAffinity()
    :
    constraint_extended_value{YType::uint32, "constraint-extended-value"},
    constraint_type{YType::uint8, "constraint-type"},
    constraint_value{YType::uint32, "constraint-value"},
    extended_forward_ref_value{YType::uint32, "extended-forward-ref-value"},
    forward_ref_value{YType::uint32, "forward-ref-value"}
{
    yang_name = "named-affinity"; yang_parent_name = "affinity";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::~NamedAffinity()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::has_data() const
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::has_operation() const
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

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-affinity";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::get_children()
{
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::set_value(const std::string & value_path, std::string value)
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

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::BfdReversePath()
    :
    binding_label{YType::uint32, "binding-label"},
    path_type{YType::enumeration, "path-type"}
{
    yang_name = "bfd-reverse-path"; yang_parent_name = "attribute-set-path-option";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::~BfdReversePath()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::has_data() const
{
    return binding_label.is_set
	|| path_type.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::has_operation() const
{
    return is_set(operation)
	|| is_set(binding_label.operation)
	|| is_set(path_type.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-reverse-path";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::get_children()
{
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::set_value(const std::string & value_path, std::string value)
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

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::VersionInfo()
    :
    attribute_type{YType::str, "attribute-type"},
    generation{YType::uint32, "generation"},
    is_default{YType::boolean, "is-default"}
{
    yang_name = "version-info"; yang_parent_name = "attribute-set-path-option";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::~VersionInfo()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::has_data() const
{
    return attribute_type.is_set
	|| generation.is_set
	|| is_default.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(attribute_type.operation)
	|| is_set(generation.operation)
	|| is_set(is_default.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "version-info";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::get_children()
{
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::set_value(const std::string & value_path, std::string value)
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

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::AttributeSetAutobackup()
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
    affinity(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity>())
	,logging(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging>())
	,signalled_name(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName>())
{
    affinity->parent = this;
    children["affinity"] = affinity;

    logging->parent = this;
    children["logging"] = logging;

    signalled_name->parent = this;
    children["signalled-name"] = signalled_name;

    yang_name = "attribute-set-autobackup"; yang_parent_name = "attribute-set-union";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::~AttributeSetAutobackup()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::has_data() const
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::has_operation() const
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

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-autobackup";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "affinity")
    {
        if(affinity != nullptr)
        {
            children["affinity"] = affinity;
        }
        else
        {
            affinity = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity>();
            affinity->parent = this;
            children["affinity"] = affinity;
        }
        return children.at("affinity");
    }

    if(child_yang_name == "logging")
    {
        if(logging != nullptr)
        {
            children["logging"] = logging;
        }
        else
        {
            logging = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging>();
            logging->parent = this;
            children["logging"] = logging;
        }
        return children.at("logging");
    }

    if(child_yang_name == "protected-interface")
    {
        for(auto const & c : protected_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface>();
        c->parent = this;
        protected_interface.push_back(std::move(c));
        children[segment_path] = protected_interface.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "signalled-name")
    {
        if(signalled_name != nullptr)
        {
            children["signalled-name"] = signalled_name;
        }
        else
        {
            signalled_name = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName>();
            signalled_name->parent = this;
            children["signalled-name"] = signalled_name;
        }
        return children.at("signalled-name");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::get_children()
{
    if(children.find("affinity") == children.end())
    {
        if(affinity != nullptr)
        {
            children["affinity"] = affinity;
        }
    }

    if(children.find("logging") == children.end())
    {
        if(logging != nullptr)
        {
            children["logging"] = logging;
        }
    }

    for (auto const & c : protected_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("signalled-name") == children.end())
    {
        if(signalled_name != nullptr)
        {
            children["signalled-name"] = signalled_name;
        }
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::set_value(const std::string & value_path, std::string value)
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

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::SignalledName()
    :
    is_mp_addresses{YType::boolean, "is-mp-addresses"},
    name{YType::str, "name"},
    protected_interface_type{YType::enumeration, "protected-interface-type"},
    source_type{YType::enumeration, "source-type"}
{
    yang_name = "signalled-name"; yang_parent_name = "attribute-set-autobackup";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::~SignalledName()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::has_data() const
{
    return is_mp_addresses.is_set
	|| name.is_set
	|| protected_interface_type.is_set
	|| source_type.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::has_operation() const
{
    return is_set(operation)
	|| is_set(is_mp_addresses.operation)
	|| is_set(name.operation)
	|| is_set(protected_interface_type.operation)
	|| is_set(source_type.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signalled-name";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::get_children()
{
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::set_value(const std::string & value_path, std::string value)
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

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::Affinity()
    :
    affinity_bits{YType::uint32, "affinity-bits"},
    affinity_mask{YType::uint32, "affinity-mask"}
{
    yang_name = "affinity"; yang_parent_name = "attribute-set-autobackup";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::~Affinity()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::has_data() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_data())
            return true;
    }
    return affinity_bits.is_set
	|| affinity_mask.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::has_operation() const
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

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "named-affinity")
    {
        for(auto const & c : named_affinity)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity>();
        c->parent = this;
        named_affinity.push_back(std::move(c));
        children[segment_path] = named_affinity.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::get_children()
{
    for (auto const & c : named_affinity)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::set_value(const std::string & value_path, std::string value)
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

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::NamedAffinity()
    :
    constraint_extended_value{YType::uint32, "constraint-extended-value"},
    constraint_type{YType::uint8, "constraint-type"},
    constraint_value{YType::uint32, "constraint-value"},
    extended_forward_ref_value{YType::uint32, "extended-forward-ref-value"},
    forward_ref_value{YType::uint32, "forward-ref-value"}
{
    yang_name = "named-affinity"; yang_parent_name = "affinity";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::~NamedAffinity()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::has_data() const
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::has_operation() const
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

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-affinity";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::get_children()
{
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::set_value(const std::string & value_path, std::string value)
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

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::Logging()
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

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::~Logging()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::has_data() const
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::has_operation() const
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

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::get_children()
{
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::set_value(const std::string & value_path, std::string value)
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

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::ProtectedInterface()
    :
    protected_interface{YType::str, "protected-interface"}
{
    yang_name = "protected-interface"; yang_parent_name = "attribute-set-autobackup";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::~ProtectedInterface()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::has_data() const
{
    return protected_interface.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(protected_interface.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protected-interface";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::get_children()
{
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "protected-interface")
    {
        protected_interface = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::AttributeSetAutomesh()
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
    affinity(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity>())
	,logging(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging>())
{
    affinity->parent = this;
    children["affinity"] = affinity;

    logging->parent = this;
    children["logging"] = logging;

    yang_name = "attribute-set-automesh"; yang_parent_name = "attribute-set-union";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::~AttributeSetAutomesh()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::has_data() const
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::has_operation() const
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

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-automesh";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "affinity")
    {
        if(affinity != nullptr)
        {
            children["affinity"] = affinity;
        }
        else
        {
            affinity = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity>();
            affinity->parent = this;
            children["affinity"] = affinity;
        }
        return children.at("affinity");
    }

    if(child_yang_name == "logging")
    {
        if(logging != nullptr)
        {
            children["logging"] = logging;
        }
        else
        {
            logging = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging>();
            logging->parent = this;
            children["logging"] = logging;
        }
        return children.at("logging");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::get_children()
{
    if(children.find("affinity") == children.end())
    {
        if(affinity != nullptr)
        {
            children["affinity"] = affinity;
        }
    }

    if(children.find("logging") == children.end())
    {
        if(logging != nullptr)
        {
            children["logging"] = logging;
        }
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::set_value(const std::string & value_path, std::string value)
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

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::Affinity()
    :
    affinity_bits{YType::uint32, "affinity-bits"},
    affinity_mask{YType::uint32, "affinity-mask"}
{
    yang_name = "affinity"; yang_parent_name = "attribute-set-automesh";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::~Affinity()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::has_data() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_data())
            return true;
    }
    return affinity_bits.is_set
	|| affinity_mask.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::has_operation() const
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

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "named-affinity")
    {
        for(auto const & c : named_affinity)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity>();
        c->parent = this;
        named_affinity.push_back(std::move(c));
        children[segment_path] = named_affinity.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::get_children()
{
    for (auto const & c : named_affinity)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::set_value(const std::string & value_path, std::string value)
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

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::NamedAffinity()
    :
    constraint_extended_value{YType::uint32, "constraint-extended-value"},
    constraint_type{YType::uint8, "constraint-type"},
    constraint_value{YType::uint32, "constraint-value"},
    extended_forward_ref_value{YType::uint32, "extended-forward-ref-value"},
    forward_ref_value{YType::uint32, "forward-ref-value"}
{
    yang_name = "named-affinity"; yang_parent_name = "affinity";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::~NamedAffinity()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::has_data() const
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::has_operation() const
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

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-affinity";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::get_children()
{
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::set_value(const std::string & value_path, std::string value)
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

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::Logging()
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

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::~Logging()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::has_data() const
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::has_operation() const
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

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::get_children()
{
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::set_value(const std::string & value_path, std::string value)
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

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::AttributeSetXro()
    :
    xro(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro>())
{
    xro->parent = this;
    children["xro"] = xro;

    yang_name = "attribute-set-xro"; yang_parent_name = "attribute-set-union";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::~AttributeSetXro()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::has_data() const
{
    return (xro !=  nullptr && xro->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::has_operation() const
{
    return is_set(operation)
	|| (xro !=  nullptr && xro->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-xro";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "xro")
    {
        if(xro != nullptr)
        {
            children["xro"] = xro;
        }
        else
        {
            xro = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro>();
            xro->parent = this;
            children["xro"] = xro;
        }
        return children.at("xro");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::get_children()
{
    if(children.find("xro") == children.end())
    {
        if(xro != nullptr)
        {
            children["xro"] = xro;
        }
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::set_value(const std::string & value_path, std::string value)
{
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::Xro()
    :
    mutual_diversity_flag{YType::boolean, "mutual-diversity-flag"}
{
    yang_name = "xro"; yang_parent_name = "attribute-set-xro";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::~Xro()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::has_data() const
{
    for (std::size_t index=0; index<xro_subobject.size(); index++)
    {
        if(xro_subobject[index]->has_data())
            return true;
    }
    return mutual_diversity_flag.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::has_operation() const
{
    for (std::size_t index=0; index<xro_subobject.size(); index++)
    {
        if(xro_subobject[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(mutual_diversity_flag.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xro";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "xro-subobject")
    {
        for(auto const & c : xro_subobject)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject>();
        c->parent = this;
        xro_subobject.push_back(std::move(c));
        children[segment_path] = xro_subobject.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::get_children()
{
    for (auto const & c : xro_subobject)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mutual-diversity-flag")
    {
        mutual_diversity_flag = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::XroSubobject()
    :
    type{YType::enumeration, "type"}
    	,
    as_subobject(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject>())
	,ipv4_subobject(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject>())
	,ipv6_subobject(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject>())
	,lsp_subobject(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject>())
	,srlg_subobject(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject>())
	,unnumbered_subobject(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject>())
{
    as_subobject->parent = this;
    children["as-subobject"] = as_subobject;

    ipv4_subobject->parent = this;
    children["ipv4-subobject"] = ipv4_subobject;

    ipv6_subobject->parent = this;
    children["ipv6-subobject"] = ipv6_subobject;

    lsp_subobject->parent = this;
    children["lsp-subobject"] = lsp_subobject;

    srlg_subobject->parent = this;
    children["srlg-subobject"] = srlg_subobject;

    unnumbered_subobject->parent = this;
    children["unnumbered-subobject"] = unnumbered_subobject;

    yang_name = "xro-subobject"; yang_parent_name = "xro";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::~XroSubobject()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::has_data() const
{
    return type.is_set
	|| (as_subobject !=  nullptr && as_subobject->has_data())
	|| (ipv4_subobject !=  nullptr && ipv4_subobject->has_data())
	|| (ipv6_subobject !=  nullptr && ipv6_subobject->has_data())
	|| (lsp_subobject !=  nullptr && lsp_subobject->has_data())
	|| (srlg_subobject !=  nullptr && srlg_subobject->has_data())
	|| (unnumbered_subobject !=  nullptr && unnumbered_subobject->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::has_operation() const
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

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xro-subobject";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "as-subobject")
    {
        if(as_subobject != nullptr)
        {
            children["as-subobject"] = as_subobject;
        }
        else
        {
            as_subobject = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject>();
            as_subobject->parent = this;
            children["as-subobject"] = as_subobject;
        }
        return children.at("as-subobject");
    }

    if(child_yang_name == "ipv4-subobject")
    {
        if(ipv4_subobject != nullptr)
        {
            children["ipv4-subobject"] = ipv4_subobject;
        }
        else
        {
            ipv4_subobject = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject>();
            ipv4_subobject->parent = this;
            children["ipv4-subobject"] = ipv4_subobject;
        }
        return children.at("ipv4-subobject");
    }

    if(child_yang_name == "ipv6-subobject")
    {
        if(ipv6_subobject != nullptr)
        {
            children["ipv6-subobject"] = ipv6_subobject;
        }
        else
        {
            ipv6_subobject = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject>();
            ipv6_subobject->parent = this;
            children["ipv6-subobject"] = ipv6_subobject;
        }
        return children.at("ipv6-subobject");
    }

    if(child_yang_name == "lsp-subobject")
    {
        if(lsp_subobject != nullptr)
        {
            children["lsp-subobject"] = lsp_subobject;
        }
        else
        {
            lsp_subobject = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject>();
            lsp_subobject->parent = this;
            children["lsp-subobject"] = lsp_subobject;
        }
        return children.at("lsp-subobject");
    }

    if(child_yang_name == "srlg-subobject")
    {
        if(srlg_subobject != nullptr)
        {
            children["srlg-subobject"] = srlg_subobject;
        }
        else
        {
            srlg_subobject = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject>();
            srlg_subobject->parent = this;
            children["srlg-subobject"] = srlg_subobject;
        }
        return children.at("srlg-subobject");
    }

    if(child_yang_name == "unnumbered-subobject")
    {
        if(unnumbered_subobject != nullptr)
        {
            children["unnumbered-subobject"] = unnumbered_subobject;
        }
        else
        {
            unnumbered_subobject = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject>();
            unnumbered_subobject->parent = this;
            children["unnumbered-subobject"] = unnumbered_subobject;
        }
        return children.at("unnumbered-subobject");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::get_children()
{
    if(children.find("as-subobject") == children.end())
    {
        if(as_subobject != nullptr)
        {
            children["as-subobject"] = as_subobject;
        }
    }

    if(children.find("ipv4-subobject") == children.end())
    {
        if(ipv4_subobject != nullptr)
        {
            children["ipv4-subobject"] = ipv4_subobject;
        }
    }

    if(children.find("ipv6-subobject") == children.end())
    {
        if(ipv6_subobject != nullptr)
        {
            children["ipv6-subobject"] = ipv6_subobject;
        }
    }

    if(children.find("lsp-subobject") == children.end())
    {
        if(lsp_subobject != nullptr)
        {
            children["lsp-subobject"] = lsp_subobject;
        }
    }

    if(children.find("srlg-subobject") == children.end())
    {
        if(srlg_subobject != nullptr)
        {
            children["srlg-subobject"] = srlg_subobject;
        }
    }

    if(children.find("unnumbered-subobject") == children.end())
    {
        if(unnumbered_subobject != nullptr)
        {
            children["unnumbered-subobject"] = unnumbered_subobject;
        }
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "type")
    {
        type = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::Ipv4Subobject()
    :
    address{YType::str, "address"},
    attribute{YType::enumeration, "attribute"},
    exclusion_type{YType::enumeration, "exclusion-type"},
    prefix_len{YType::uint8, "prefix-len"}
{
    yang_name = "ipv4-subobject"; yang_parent_name = "xro-subobject";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::~Ipv4Subobject()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::has_data() const
{
    return address.is_set
	|| attribute.is_set
	|| exclusion_type.is_set
	|| prefix_len.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(attribute.operation)
	|| is_set(exclusion_type.operation)
	|| is_set(prefix_len.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-subobject";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::get_children()
{
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::set_value(const std::string & value_path, std::string value)
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

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::Ipv6Subobject()
    :
    address{YType::str, "address"},
    attribute{YType::enumeration, "attribute"},
    exclusion_type{YType::enumeration, "exclusion-type"},
    prefix_len{YType::uint8, "prefix-len"}
{
    yang_name = "ipv6-subobject"; yang_parent_name = "xro-subobject";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::~Ipv6Subobject()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::has_data() const
{
    return address.is_set
	|| attribute.is_set
	|| exclusion_type.is_set
	|| prefix_len.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(attribute.operation)
	|| is_set(exclusion_type.operation)
	|| is_set(prefix_len.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-subobject";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::get_children()
{
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::set_value(const std::string & value_path, std::string value)
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

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::UnnumberedSubobject()
    :
    attribute{YType::enumeration, "attribute"},
    exclusion_type{YType::enumeration, "exclusion-type"},
    interface_id{YType::uint32, "interface-id"},
    te_router_id{YType::str, "te-router-id"}
{
    yang_name = "unnumbered-subobject"; yang_parent_name = "xro-subobject";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::~UnnumberedSubobject()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::has_data() const
{
    return attribute.is_set
	|| exclusion_type.is_set
	|| interface_id.is_set
	|| te_router_id.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::has_operation() const
{
    return is_set(operation)
	|| is_set(attribute.operation)
	|| is_set(exclusion_type.operation)
	|| is_set(interface_id.operation)
	|| is_set(te_router_id.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unnumbered-subobject";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::get_children()
{
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::set_value(const std::string & value_path, std::string value)
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

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::AsSubobject()
    :
    as_number{YType::uint16, "as-number"}
{
    yang_name = "as-subobject"; yang_parent_name = "xro-subobject";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::~AsSubobject()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::has_data() const
{
    return as_number.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::has_operation() const
{
    return is_set(operation)
	|| is_set(as_number.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as-subobject";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::get_children()
{
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "as-number")
    {
        as_number = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::SrlgSubobject()
    :
    exclusion_type{YType::enumeration, "exclusion-type"},
    srlg_id{YType::uint32, "srlg-id"}
{
    yang_name = "srlg-subobject"; yang_parent_name = "xro-subobject";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::~SrlgSubobject()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::has_data() const
{
    return exclusion_type.is_set
	|| srlg_id.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::has_operation() const
{
    return is_set(operation)
	|| is_set(exclusion_type.operation)
	|| is_set(srlg_id.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg-subobject";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::get_children()
{
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::set_value(const std::string & value_path, std::string value)
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

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::LspSubobject()
    :
    destination_node_exception{YType::boolean, "destination-node-exception"},
    exclusion_type{YType::enumeration, "exclusion-type"},
    ignore_lsp_id{YType::boolean, "ignore-lsp-id"},
    penultimate_node_exception{YType::boolean, "penultimate-node-exception"},
    processing_node_exception{YType::boolean, "processing-node-exception"}
    	,
    fec(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec>())
{
    fec->parent = this;
    children["fec"] = fec;

    yang_name = "lsp-subobject"; yang_parent_name = "xro-subobject";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::~LspSubobject()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::has_data() const
{
    return destination_node_exception.is_set
	|| exclusion_type.is_set
	|| ignore_lsp_id.is_set
	|| penultimate_node_exception.is_set
	|| processing_node_exception.is_set
	|| (fec !=  nullptr && fec->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_node_exception.operation)
	|| is_set(exclusion_type.operation)
	|| is_set(ignore_lsp_id.operation)
	|| is_set(penultimate_node_exception.operation)
	|| is_set(processing_node_exception.operation)
	|| (fec !=  nullptr && fec->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-subobject";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "fec")
    {
        if(fec != nullptr)
        {
            children["fec"] = fec;
        }
        else
        {
            fec = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec>();
            fec->parent = this;
            children["fec"] = fec;
        }
        return children.at("fec");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::get_children()
{
    if(children.find("fec") == children.end())
    {
        if(fec != nullptr)
        {
            children["fec"] = fec;
        }
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::set_value(const std::string & value_path, std::string value)
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

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::Fec()
    :
    fec_extended_tunnel_id{YType::str, "fec-extended-tunnel-id"},
    fec_lsp_id{YType::uint16, "fec-lsp-id"},
    fec_source{YType::str, "fec-source"},
    fec_tunnel_id{YType::uint16, "fec-tunnel-id"},
    fec_vrf{YType::str, "fec-vrf"}
    	,
    fec_destination_info(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo>())
{
    fec_destination_info->parent = this;
    children["fec-destination-info"] = fec_destination_info;

    yang_name = "fec"; yang_parent_name = "lsp-subobject";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::~Fec()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::has_data() const
{
    return fec_extended_tunnel_id.is_set
	|| fec_lsp_id.is_set
	|| fec_source.is_set
	|| fec_tunnel_id.is_set
	|| fec_vrf.is_set
	|| (fec_destination_info !=  nullptr && fec_destination_info->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::has_operation() const
{
    return is_set(operation)
	|| is_set(fec_extended_tunnel_id.operation)
	|| is_set(fec_lsp_id.operation)
	|| is_set(fec_source.operation)
	|| is_set(fec_tunnel_id.operation)
	|| is_set(fec_vrf.operation)
	|| (fec_destination_info !=  nullptr && fec_destination_info->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fec";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "fec-destination-info")
    {
        if(fec_destination_info != nullptr)
        {
            children["fec-destination-info"] = fec_destination_info;
        }
        else
        {
            fec_destination_info = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo>();
            fec_destination_info->parent = this;
            children["fec-destination-info"] = fec_destination_info;
        }
        return children.at("fec-destination-info");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::get_children()
{
    if(children.find("fec-destination-info") == children.end())
    {
        if(fec_destination_info != nullptr)
        {
            children["fec-destination-info"] = fec_destination_info;
        }
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::set_value(const std::string & value_path, std::string value)
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

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::FecDestinationInfo()
    :
    fec_ctype{YType::enumeration, "fec-ctype"},
    fec_destination_p2mp_id{YType::uint32, "fec-destination-p2mp-id"},
    p2p_lsp_destination{YType::str, "p2p-lsp-destination"}
{
    yang_name = "fec-destination-info"; yang_parent_name = "fec";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::~FecDestinationInfo()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::has_data() const
{
    return fec_ctype.is_set
	|| fec_destination_p2mp_id.is_set
	|| p2p_lsp_destination.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(fec_ctype.operation)
	|| is_set(fec_destination_p2mp_id.operation)
	|| is_set(p2p_lsp_destination.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fec-destination-info";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::get_children()
{
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::set_value(const std::string & value_path, std::string value)
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

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::AttributeSetP2Mpte()
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
    affinity(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity>())
{
    affinity->parent = this;
    children["affinity"] = affinity;

    yang_name = "attribute-set-p2mpte"; yang_parent_name = "attribute-set-union";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::~AttributeSetP2Mpte()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::has_data() const
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::has_operation() const
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

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-p2mpte";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "affinity")
    {
        if(affinity != nullptr)
        {
            children["affinity"] = affinity;
        }
        else
        {
            affinity = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity>();
            affinity->parent = this;
            children["affinity"] = affinity;
        }
        return children.at("affinity");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::get_children()
{
    if(children.find("affinity") == children.end())
    {
        if(affinity != nullptr)
        {
            children["affinity"] = affinity;
        }
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::set_value(const std::string & value_path, std::string value)
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

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::Affinity()
    :
    affinity_bits{YType::uint32, "affinity-bits"},
    affinity_mask{YType::uint32, "affinity-mask"}
{
    yang_name = "affinity"; yang_parent_name = "attribute-set-p2mpte";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::~Affinity()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::has_data() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_data())
            return true;
    }
    return affinity_bits.is_set
	|| affinity_mask.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::has_operation() const
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

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "named-affinity")
    {
        for(auto const & c : named_affinity)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity>();
        c->parent = this;
        named_affinity.push_back(std::move(c));
        children[segment_path] = named_affinity.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::get_children()
{
    for (auto const & c : named_affinity)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::set_value(const std::string & value_path, std::string value)
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

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::NamedAffinity()
    :
    constraint_extended_value{YType::uint32, "constraint-extended-value"},
    constraint_type{YType::uint8, "constraint-type"},
    constraint_value{YType::uint32, "constraint-value"},
    extended_forward_ref_value{YType::uint32, "extended-forward-ref-value"},
    forward_ref_value{YType::uint32, "forward-ref-value"}
{
    yang_name = "named-affinity"; yang_parent_name = "affinity";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::~NamedAffinity()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::has_data() const
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::has_operation() const
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

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-affinity";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::get_children()
{
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::set_value(const std::string & value_path, std::string value)
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

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::AttributeSetApsPp()
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
    revert_schedule(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule>())
{
    revert_schedule->parent = this;
    children["revert-schedule"] = revert_schedule;

    yang_name = "attribute-set-aps-pp"; yang_parent_name = "attribute-set-union";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::~AttributeSetApsPp()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::has_data() const
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::has_operation() const
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

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-aps-pp";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "revert-schedule")
    {
        if(revert_schedule != nullptr)
        {
            children["revert-schedule"] = revert_schedule;
        }
        else
        {
            revert_schedule = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule>();
            revert_schedule->parent = this;
            children["revert-schedule"] = revert_schedule;
        }
        return children.at("revert-schedule");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::get_children()
{
    if(children.find("revert-schedule") == children.end())
    {
        if(revert_schedule != nullptr)
        {
            children["revert-schedule"] = revert_schedule;
        }
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::set_value(const std::string & value_path, std::string value)
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

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::RevertSchedule()
    :
    duration{YType::uint32, "duration"},
    max_tries{YType::uint32, "max-tries"},
    schedule_date{YType::uint32, "schedule-date"},
    schedule_frequency{YType::enumeration, "schedule-frequency"},
    schedulename{YType::str, "schedulename"}
{
    yang_name = "revert-schedule"; yang_parent_name = "attribute-set-aps-pp";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::~RevertSchedule()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::has_data() const
{
    return duration.is_set
	|| max_tries.is_set
	|| schedule_date.is_set
	|| schedule_frequency.is_set
	|| schedulename.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::has_operation() const
{
    return is_set(operation)
	|| is_set(duration.operation)
	|| is_set(max_tries.operation)
	|| is_set(schedule_date.operation)
	|| is_set(schedule_frequency.operation)
	|| is_set(schedulename.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "revert-schedule";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::get_children()
{
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::set_value(const std::string & value_path, std::string value)
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

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::AttributeSetP2PTe()
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
    affinity(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity>())
	,logging(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging>())
	,prepend_list(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList>())
{
    affinity->parent = this;
    children["affinity"] = affinity;

    logging->parent = this;
    children["logging"] = logging;

    prepend_list->parent = this;
    children["prepend-list"] = prepend_list;

    yang_name = "attribute-set-p2p-te"; yang_parent_name = "attribute-set-union";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::~AttributeSetP2PTe()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::has_data() const
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::has_operation() const
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

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-p2p-te";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "affinity")
    {
        if(affinity != nullptr)
        {
            children["affinity"] = affinity;
        }
        else
        {
            affinity = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity>();
            affinity->parent = this;
            children["affinity"] = affinity;
        }
        return children.at("affinity");
    }

    if(child_yang_name == "logging")
    {
        if(logging != nullptr)
        {
            children["logging"] = logging;
        }
        else
        {
            logging = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging>();
            logging->parent = this;
            children["logging"] = logging;
        }
        return children.at("logging");
    }

    if(child_yang_name == "prepend-list")
    {
        if(prepend_list != nullptr)
        {
            children["prepend-list"] = prepend_list;
        }
        else
        {
            prepend_list = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList>();
            prepend_list->parent = this;
            children["prepend-list"] = prepend_list;
        }
        return children.at("prepend-list");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::get_children()
{
    if(children.find("affinity") == children.end())
    {
        if(affinity != nullptr)
        {
            children["affinity"] = affinity;
        }
    }

    if(children.find("logging") == children.end())
    {
        if(logging != nullptr)
        {
            children["logging"] = logging;
        }
    }

    if(children.find("prepend-list") == children.end())
    {
        if(prepend_list != nullptr)
        {
            children["prepend-list"] = prepend_list;
        }
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::set_value(const std::string & value_path, std::string value)
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

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::Affinity()
    :
    affinity_bits{YType::uint32, "affinity-bits"},
    affinity_mask{YType::uint32, "affinity-mask"}
{
    yang_name = "affinity"; yang_parent_name = "attribute-set-p2p-te";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::~Affinity()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::has_data() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_data())
            return true;
    }
    return affinity_bits.is_set
	|| affinity_mask.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::has_operation() const
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

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "named-affinity")
    {
        for(auto const & c : named_affinity)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity>();
        c->parent = this;
        named_affinity.push_back(std::move(c));
        children[segment_path] = named_affinity.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::get_children()
{
    for (auto const & c : named_affinity)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::set_value(const std::string & value_path, std::string value)
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

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::NamedAffinity()
    :
    constraint_extended_value{YType::uint32, "constraint-extended-value"},
    constraint_type{YType::uint8, "constraint-type"},
    constraint_value{YType::uint32, "constraint-value"},
    extended_forward_ref_value{YType::uint32, "extended-forward-ref-value"},
    forward_ref_value{YType::uint32, "forward-ref-value"}
{
    yang_name = "named-affinity"; yang_parent_name = "affinity";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::~NamedAffinity()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::has_data() const
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::has_operation() const
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

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-affinity";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::get_children()
{
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::set_value(const std::string & value_path, std::string value)
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

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::Logging()
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

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::~Logging()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::has_data() const
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::has_operation() const
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

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::get_children()
{
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::set_value(const std::string & value_path, std::string value)
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

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependList()
{
    yang_name = "prepend-list"; yang_parent_name = "attribute-set-p2p-te";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::~PrependList()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::has_data() const
{
    for (std::size_t index=0; index<prepend_entry.size(); index++)
    {
        if(prepend_entry[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::has_operation() const
{
    for (std::size_t index=0; index<prepend_entry.size(); index++)
    {
        if(prepend_entry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prepend-list";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "prepend-entry")
    {
        for(auto const & c : prepend_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry>();
        c->parent = this;
        prepend_entry.push_back(std::move(c));
        children[segment_path] = prepend_entry.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::get_children()
{
    for (auto const & c : prepend_entry)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::set_value(const std::string & value_path, std::string value)
{
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::PrependEntry()
    :
    index_{YType::uint32, "index"},
    next_label{YType::uint32, "next-label"},
    type{YType::enumeration, "type"}
{
    yang_name = "prepend-entry"; yang_parent_name = "prepend-list";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::~PrependEntry()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::has_data() const
{
    return index_.is_set
	|| next_label.is_set
	|| type.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::has_operation() const
{
    return is_set(operation)
	|| is_set(index_.operation)
	|| is_set(next_label.operation)
	|| is_set(type.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prepend-entry";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::get_children()
{
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::set_value(const std::string & value_path, std::string value)
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

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::XroAttributeSet()
    :
    tunnel_attribute_set_name{YType::str, "tunnel-attribute-set-name"},
    tunnel_attribute_set_name_crc32{YType::uint32, "tunnel-attribute-set-name-crc32"}
    	,
    attribute_set_union(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion>())
{
    attribute_set_union->parent = this;
    children["attribute-set-union"] = attribute_set_union;

    yang_name = "xro-attribute-set"; yang_parent_name = "active-path-option";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::~XroAttributeSet()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::has_data() const
{
    return tunnel_attribute_set_name.is_set
	|| tunnel_attribute_set_name_crc32.is_set
	|| (attribute_set_union !=  nullptr && attribute_set_union->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::has_operation() const
{
    return is_set(operation)
	|| is_set(tunnel_attribute_set_name.operation)
	|| is_set(tunnel_attribute_set_name_crc32.operation)
	|| (attribute_set_union !=  nullptr && attribute_set_union->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xro-attribute-set";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "attribute-set-union")
    {
        if(attribute_set_union != nullptr)
        {
            children["attribute-set-union"] = attribute_set_union;
        }
        else
        {
            attribute_set_union = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion>();
            attribute_set_union->parent = this;
            children["attribute-set-union"] = attribute_set_union;
        }
        return children.at("attribute-set-union");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::get_children()
{
    if(children.find("attribute-set-union") == children.end())
    {
        if(attribute_set_union != nullptr)
        {
            children["attribute-set-union"] = attribute_set_union;
        }
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::set_value(const std::string & value_path, std::string value)
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

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetUnion()
    :
    tunnel_attribute_set_type{YType::enumeration, "tunnel-attribute-set-type"}
    	,
    attribute_set_aps_pp(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp>())
	,attribute_set_autobackup(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup>())
	,attribute_set_automesh(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh>())
	,attribute_set_p2mpte(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte>())
	,attribute_set_p2p_te(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe>())
	,attribute_set_path_option(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption>())
	,attribute_set_xro(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro>())
{
    attribute_set_aps_pp->parent = this;
    children["attribute-set-aps-pp"] = attribute_set_aps_pp;

    attribute_set_autobackup->parent = this;
    children["attribute-set-autobackup"] = attribute_set_autobackup;

    attribute_set_automesh->parent = this;
    children["attribute-set-automesh"] = attribute_set_automesh;

    attribute_set_p2mpte->parent = this;
    children["attribute-set-p2mpte"] = attribute_set_p2mpte;

    attribute_set_p2p_te->parent = this;
    children["attribute-set-p2p-te"] = attribute_set_p2p_te;

    attribute_set_path_option->parent = this;
    children["attribute-set-path-option"] = attribute_set_path_option;

    attribute_set_xro->parent = this;
    children["attribute-set-xro"] = attribute_set_xro;

    yang_name = "attribute-set-union"; yang_parent_name = "xro-attribute-set";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::~AttributeSetUnion()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::has_data() const
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::has_operation() const
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

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-union";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "attribute-set-aps-pp")
    {
        if(attribute_set_aps_pp != nullptr)
        {
            children["attribute-set-aps-pp"] = attribute_set_aps_pp;
        }
        else
        {
            attribute_set_aps_pp = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp>();
            attribute_set_aps_pp->parent = this;
            children["attribute-set-aps-pp"] = attribute_set_aps_pp;
        }
        return children.at("attribute-set-aps-pp");
    }

    if(child_yang_name == "attribute-set-autobackup")
    {
        if(attribute_set_autobackup != nullptr)
        {
            children["attribute-set-autobackup"] = attribute_set_autobackup;
        }
        else
        {
            attribute_set_autobackup = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup>();
            attribute_set_autobackup->parent = this;
            children["attribute-set-autobackup"] = attribute_set_autobackup;
        }
        return children.at("attribute-set-autobackup");
    }

    if(child_yang_name == "attribute-set-automesh")
    {
        if(attribute_set_automesh != nullptr)
        {
            children["attribute-set-automesh"] = attribute_set_automesh;
        }
        else
        {
            attribute_set_automesh = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh>();
            attribute_set_automesh->parent = this;
            children["attribute-set-automesh"] = attribute_set_automesh;
        }
        return children.at("attribute-set-automesh");
    }

    if(child_yang_name == "attribute-set-p2mpte")
    {
        if(attribute_set_p2mpte != nullptr)
        {
            children["attribute-set-p2mpte"] = attribute_set_p2mpte;
        }
        else
        {
            attribute_set_p2mpte = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte>();
            attribute_set_p2mpte->parent = this;
            children["attribute-set-p2mpte"] = attribute_set_p2mpte;
        }
        return children.at("attribute-set-p2mpte");
    }

    if(child_yang_name == "attribute-set-p2p-te")
    {
        if(attribute_set_p2p_te != nullptr)
        {
            children["attribute-set-p2p-te"] = attribute_set_p2p_te;
        }
        else
        {
            attribute_set_p2p_te = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe>();
            attribute_set_p2p_te->parent = this;
            children["attribute-set-p2p-te"] = attribute_set_p2p_te;
        }
        return children.at("attribute-set-p2p-te");
    }

    if(child_yang_name == "attribute-set-path-option")
    {
        if(attribute_set_path_option != nullptr)
        {
            children["attribute-set-path-option"] = attribute_set_path_option;
        }
        else
        {
            attribute_set_path_option = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption>();
            attribute_set_path_option->parent = this;
            children["attribute-set-path-option"] = attribute_set_path_option;
        }
        return children.at("attribute-set-path-option");
    }

    if(child_yang_name == "attribute-set-xro")
    {
        if(attribute_set_xro != nullptr)
        {
            children["attribute-set-xro"] = attribute_set_xro;
        }
        else
        {
            attribute_set_xro = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro>();
            attribute_set_xro->parent = this;
            children["attribute-set-xro"] = attribute_set_xro;
        }
        return children.at("attribute-set-xro");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::get_children()
{
    if(children.find("attribute-set-aps-pp") == children.end())
    {
        if(attribute_set_aps_pp != nullptr)
        {
            children["attribute-set-aps-pp"] = attribute_set_aps_pp;
        }
    }

    if(children.find("attribute-set-autobackup") == children.end())
    {
        if(attribute_set_autobackup != nullptr)
        {
            children["attribute-set-autobackup"] = attribute_set_autobackup;
        }
    }

    if(children.find("attribute-set-automesh") == children.end())
    {
        if(attribute_set_automesh != nullptr)
        {
            children["attribute-set-automesh"] = attribute_set_automesh;
        }
    }

    if(children.find("attribute-set-p2mpte") == children.end())
    {
        if(attribute_set_p2mpte != nullptr)
        {
            children["attribute-set-p2mpte"] = attribute_set_p2mpte;
        }
    }

    if(children.find("attribute-set-p2p-te") == children.end())
    {
        if(attribute_set_p2p_te != nullptr)
        {
            children["attribute-set-p2p-te"] = attribute_set_p2p_te;
        }
    }

    if(children.find("attribute-set-path-option") == children.end())
    {
        if(attribute_set_path_option != nullptr)
        {
            children["attribute-set-path-option"] = attribute_set_path_option;
        }
    }

    if(children.find("attribute-set-xro") == children.end())
    {
        if(attribute_set_xro != nullptr)
        {
            children["attribute-set-xro"] = attribute_set_xro;
        }
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tunnel-attribute-set-type")
    {
        tunnel_attribute_set_type = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::AttributeSetPathOption()
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
    affinity(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity>())
	,bfd_reverse_path(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath>())
{
    affinity->parent = this;
    children["affinity"] = affinity;

    bfd_reverse_path->parent = this;
    children["bfd-reverse-path"] = bfd_reverse_path;

    yang_name = "attribute-set-path-option"; yang_parent_name = "attribute-set-union";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::~AttributeSetPathOption()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::has_data() const
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::has_operation() const
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

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-path-option";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "affinity")
    {
        if(affinity != nullptr)
        {
            children["affinity"] = affinity;
        }
        else
        {
            affinity = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity>();
            affinity->parent = this;
            children["affinity"] = affinity;
        }
        return children.at("affinity");
    }

    if(child_yang_name == "bfd-reverse-path")
    {
        if(bfd_reverse_path != nullptr)
        {
            children["bfd-reverse-path"] = bfd_reverse_path;
        }
        else
        {
            bfd_reverse_path = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath>();
            bfd_reverse_path->parent = this;
            children["bfd-reverse-path"] = bfd_reverse_path;
        }
        return children.at("bfd-reverse-path");
    }

    if(child_yang_name == "version-info")
    {
        for(auto const & c : version_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo>();
        c->parent = this;
        version_info.push_back(std::move(c));
        children[segment_path] = version_info.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::get_children()
{
    if(children.find("affinity") == children.end())
    {
        if(affinity != nullptr)
        {
            children["affinity"] = affinity;
        }
    }

    if(children.find("bfd-reverse-path") == children.end())
    {
        if(bfd_reverse_path != nullptr)
        {
            children["bfd-reverse-path"] = bfd_reverse_path;
        }
    }

    for (auto const & c : version_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::set_value(const std::string & value_path, std::string value)
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

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::Affinity()
    :
    affinity_bits{YType::uint32, "affinity-bits"},
    affinity_mask{YType::uint32, "affinity-mask"}
{
    yang_name = "affinity"; yang_parent_name = "attribute-set-path-option";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::~Affinity()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::has_data() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_data())
            return true;
    }
    return affinity_bits.is_set
	|| affinity_mask.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::has_operation() const
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

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "named-affinity")
    {
        for(auto const & c : named_affinity)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity>();
        c->parent = this;
        named_affinity.push_back(std::move(c));
        children[segment_path] = named_affinity.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::get_children()
{
    for (auto const & c : named_affinity)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::set_value(const std::string & value_path, std::string value)
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

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::NamedAffinity()
    :
    constraint_extended_value{YType::uint32, "constraint-extended-value"},
    constraint_type{YType::uint8, "constraint-type"},
    constraint_value{YType::uint32, "constraint-value"},
    extended_forward_ref_value{YType::uint32, "extended-forward-ref-value"},
    forward_ref_value{YType::uint32, "forward-ref-value"}
{
    yang_name = "named-affinity"; yang_parent_name = "affinity";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::~NamedAffinity()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::has_data() const
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::has_operation() const
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

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-affinity";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::get_children()
{
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::set_value(const std::string & value_path, std::string value)
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

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::BfdReversePath()
    :
    binding_label{YType::uint32, "binding-label"},
    path_type{YType::enumeration, "path-type"}
{
    yang_name = "bfd-reverse-path"; yang_parent_name = "attribute-set-path-option";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::~BfdReversePath()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::has_data() const
{
    return binding_label.is_set
	|| path_type.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::has_operation() const
{
    return is_set(operation)
	|| is_set(binding_label.operation)
	|| is_set(path_type.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-reverse-path";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::get_children()
{
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::set_value(const std::string & value_path, std::string value)
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

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::VersionInfo()
    :
    attribute_type{YType::str, "attribute-type"},
    generation{YType::uint32, "generation"},
    is_default{YType::boolean, "is-default"}
{
    yang_name = "version-info"; yang_parent_name = "attribute-set-path-option";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::~VersionInfo()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::has_data() const
{
    return attribute_type.is_set
	|| generation.is_set
	|| is_default.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(attribute_type.operation)
	|| is_set(generation.operation)
	|| is_set(is_default.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "version-info";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::get_children()
{
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::set_value(const std::string & value_path, std::string value)
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

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::AttributeSetAutobackup()
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
    affinity(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity>())
	,logging(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging>())
	,signalled_name(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName>())
{
    affinity->parent = this;
    children["affinity"] = affinity;

    logging->parent = this;
    children["logging"] = logging;

    signalled_name->parent = this;
    children["signalled-name"] = signalled_name;

    yang_name = "attribute-set-autobackup"; yang_parent_name = "attribute-set-union";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::~AttributeSetAutobackup()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::has_data() const
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::has_operation() const
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

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-autobackup";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "affinity")
    {
        if(affinity != nullptr)
        {
            children["affinity"] = affinity;
        }
        else
        {
            affinity = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity>();
            affinity->parent = this;
            children["affinity"] = affinity;
        }
        return children.at("affinity");
    }

    if(child_yang_name == "logging")
    {
        if(logging != nullptr)
        {
            children["logging"] = logging;
        }
        else
        {
            logging = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging>();
            logging->parent = this;
            children["logging"] = logging;
        }
        return children.at("logging");
    }

    if(child_yang_name == "protected-interface")
    {
        for(auto const & c : protected_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface>();
        c->parent = this;
        protected_interface.push_back(std::move(c));
        children[segment_path] = protected_interface.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "signalled-name")
    {
        if(signalled_name != nullptr)
        {
            children["signalled-name"] = signalled_name;
        }
        else
        {
            signalled_name = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName>();
            signalled_name->parent = this;
            children["signalled-name"] = signalled_name;
        }
        return children.at("signalled-name");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::get_children()
{
    if(children.find("affinity") == children.end())
    {
        if(affinity != nullptr)
        {
            children["affinity"] = affinity;
        }
    }

    if(children.find("logging") == children.end())
    {
        if(logging != nullptr)
        {
            children["logging"] = logging;
        }
    }

    for (auto const & c : protected_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("signalled-name") == children.end())
    {
        if(signalled_name != nullptr)
        {
            children["signalled-name"] = signalled_name;
        }
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::set_value(const std::string & value_path, std::string value)
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

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::SignalledName()
    :
    is_mp_addresses{YType::boolean, "is-mp-addresses"},
    name{YType::str, "name"},
    protected_interface_type{YType::enumeration, "protected-interface-type"},
    source_type{YType::enumeration, "source-type"}
{
    yang_name = "signalled-name"; yang_parent_name = "attribute-set-autobackup";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::~SignalledName()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::has_data() const
{
    return is_mp_addresses.is_set
	|| name.is_set
	|| protected_interface_type.is_set
	|| source_type.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::has_operation() const
{
    return is_set(operation)
	|| is_set(is_mp_addresses.operation)
	|| is_set(name.operation)
	|| is_set(protected_interface_type.operation)
	|| is_set(source_type.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signalled-name";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::get_children()
{
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::set_value(const std::string & value_path, std::string value)
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

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::Affinity()
    :
    affinity_bits{YType::uint32, "affinity-bits"},
    affinity_mask{YType::uint32, "affinity-mask"}
{
    yang_name = "affinity"; yang_parent_name = "attribute-set-autobackup";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::~Affinity()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::has_data() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_data())
            return true;
    }
    return affinity_bits.is_set
	|| affinity_mask.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::has_operation() const
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

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "named-affinity")
    {
        for(auto const & c : named_affinity)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity>();
        c->parent = this;
        named_affinity.push_back(std::move(c));
        children[segment_path] = named_affinity.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::get_children()
{
    for (auto const & c : named_affinity)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::set_value(const std::string & value_path, std::string value)
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

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::NamedAffinity()
    :
    constraint_extended_value{YType::uint32, "constraint-extended-value"},
    constraint_type{YType::uint8, "constraint-type"},
    constraint_value{YType::uint32, "constraint-value"},
    extended_forward_ref_value{YType::uint32, "extended-forward-ref-value"},
    forward_ref_value{YType::uint32, "forward-ref-value"}
{
    yang_name = "named-affinity"; yang_parent_name = "affinity";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::~NamedAffinity()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::has_data() const
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::has_operation() const
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

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-affinity";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::get_children()
{
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::set_value(const std::string & value_path, std::string value)
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

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::Logging()
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

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::~Logging()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::has_data() const
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::has_operation() const
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

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::get_children()
{
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::set_value(const std::string & value_path, std::string value)
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

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::ProtectedInterface()
    :
    protected_interface{YType::str, "protected-interface"}
{
    yang_name = "protected-interface"; yang_parent_name = "attribute-set-autobackup";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::~ProtectedInterface()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::has_data() const
{
    return protected_interface.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(protected_interface.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protected-interface";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::get_children()
{
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "protected-interface")
    {
        protected_interface = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::AttributeSetAutomesh()
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
    affinity(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity>())
	,logging(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging>())
{
    affinity->parent = this;
    children["affinity"] = affinity;

    logging->parent = this;
    children["logging"] = logging;

    yang_name = "attribute-set-automesh"; yang_parent_name = "attribute-set-union";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::~AttributeSetAutomesh()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::has_data() const
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::has_operation() const
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

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-automesh";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "affinity")
    {
        if(affinity != nullptr)
        {
            children["affinity"] = affinity;
        }
        else
        {
            affinity = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity>();
            affinity->parent = this;
            children["affinity"] = affinity;
        }
        return children.at("affinity");
    }

    if(child_yang_name == "logging")
    {
        if(logging != nullptr)
        {
            children["logging"] = logging;
        }
        else
        {
            logging = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging>();
            logging->parent = this;
            children["logging"] = logging;
        }
        return children.at("logging");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::get_children()
{
    if(children.find("affinity") == children.end())
    {
        if(affinity != nullptr)
        {
            children["affinity"] = affinity;
        }
    }

    if(children.find("logging") == children.end())
    {
        if(logging != nullptr)
        {
            children["logging"] = logging;
        }
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::set_value(const std::string & value_path, std::string value)
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

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::Affinity()
    :
    affinity_bits{YType::uint32, "affinity-bits"},
    affinity_mask{YType::uint32, "affinity-mask"}
{
    yang_name = "affinity"; yang_parent_name = "attribute-set-automesh";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::~Affinity()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::has_data() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_data())
            return true;
    }
    return affinity_bits.is_set
	|| affinity_mask.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::has_operation() const
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

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "named-affinity")
    {
        for(auto const & c : named_affinity)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity>();
        c->parent = this;
        named_affinity.push_back(std::move(c));
        children[segment_path] = named_affinity.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::get_children()
{
    for (auto const & c : named_affinity)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::set_value(const std::string & value_path, std::string value)
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

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::NamedAffinity()
    :
    constraint_extended_value{YType::uint32, "constraint-extended-value"},
    constraint_type{YType::uint8, "constraint-type"},
    constraint_value{YType::uint32, "constraint-value"},
    extended_forward_ref_value{YType::uint32, "extended-forward-ref-value"},
    forward_ref_value{YType::uint32, "forward-ref-value"}
{
    yang_name = "named-affinity"; yang_parent_name = "affinity";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::~NamedAffinity()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::has_data() const
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::has_operation() const
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

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-affinity";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::get_children()
{
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::set_value(const std::string & value_path, std::string value)
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

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::Logging()
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

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::~Logging()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::has_data() const
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::has_operation() const
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

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::get_children()
{
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::set_value(const std::string & value_path, std::string value)
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

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::AttributeSetXro()
    :
    xro(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro>())
{
    xro->parent = this;
    children["xro"] = xro;

    yang_name = "attribute-set-xro"; yang_parent_name = "attribute-set-union";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::~AttributeSetXro()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::has_data() const
{
    return (xro !=  nullptr && xro->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::has_operation() const
{
    return is_set(operation)
	|| (xro !=  nullptr && xro->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-xro";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "xro")
    {
        if(xro != nullptr)
        {
            children["xro"] = xro;
        }
        else
        {
            xro = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro>();
            xro->parent = this;
            children["xro"] = xro;
        }
        return children.at("xro");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::get_children()
{
    if(children.find("xro") == children.end())
    {
        if(xro != nullptr)
        {
            children["xro"] = xro;
        }
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::set_value(const std::string & value_path, std::string value)
{
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::Xro()
    :
    mutual_diversity_flag{YType::boolean, "mutual-diversity-flag"}
{
    yang_name = "xro"; yang_parent_name = "attribute-set-xro";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::~Xro()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::has_data() const
{
    for (std::size_t index=0; index<xro_subobject.size(); index++)
    {
        if(xro_subobject[index]->has_data())
            return true;
    }
    return mutual_diversity_flag.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::has_operation() const
{
    for (std::size_t index=0; index<xro_subobject.size(); index++)
    {
        if(xro_subobject[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(mutual_diversity_flag.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xro";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "xro-subobject")
    {
        for(auto const & c : xro_subobject)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject>();
        c->parent = this;
        xro_subobject.push_back(std::move(c));
        children[segment_path] = xro_subobject.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::get_children()
{
    for (auto const & c : xro_subobject)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mutual-diversity-flag")
    {
        mutual_diversity_flag = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::XroSubobject()
    :
    type{YType::enumeration, "type"}
    	,
    as_subobject(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject>())
	,ipv4_subobject(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject>())
	,ipv6_subobject(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject>())
	,lsp_subobject(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject>())
	,srlg_subobject(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject>())
	,unnumbered_subobject(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject>())
{
    as_subobject->parent = this;
    children["as-subobject"] = as_subobject;

    ipv4_subobject->parent = this;
    children["ipv4-subobject"] = ipv4_subobject;

    ipv6_subobject->parent = this;
    children["ipv6-subobject"] = ipv6_subobject;

    lsp_subobject->parent = this;
    children["lsp-subobject"] = lsp_subobject;

    srlg_subobject->parent = this;
    children["srlg-subobject"] = srlg_subobject;

    unnumbered_subobject->parent = this;
    children["unnumbered-subobject"] = unnumbered_subobject;

    yang_name = "xro-subobject"; yang_parent_name = "xro";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::~XroSubobject()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::has_data() const
{
    return type.is_set
	|| (as_subobject !=  nullptr && as_subobject->has_data())
	|| (ipv4_subobject !=  nullptr && ipv4_subobject->has_data())
	|| (ipv6_subobject !=  nullptr && ipv6_subobject->has_data())
	|| (lsp_subobject !=  nullptr && lsp_subobject->has_data())
	|| (srlg_subobject !=  nullptr && srlg_subobject->has_data())
	|| (unnumbered_subobject !=  nullptr && unnumbered_subobject->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::has_operation() const
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

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xro-subobject";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "as-subobject")
    {
        if(as_subobject != nullptr)
        {
            children["as-subobject"] = as_subobject;
        }
        else
        {
            as_subobject = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject>();
            as_subobject->parent = this;
            children["as-subobject"] = as_subobject;
        }
        return children.at("as-subobject");
    }

    if(child_yang_name == "ipv4-subobject")
    {
        if(ipv4_subobject != nullptr)
        {
            children["ipv4-subobject"] = ipv4_subobject;
        }
        else
        {
            ipv4_subobject = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject>();
            ipv4_subobject->parent = this;
            children["ipv4-subobject"] = ipv4_subobject;
        }
        return children.at("ipv4-subobject");
    }

    if(child_yang_name == "ipv6-subobject")
    {
        if(ipv6_subobject != nullptr)
        {
            children["ipv6-subobject"] = ipv6_subobject;
        }
        else
        {
            ipv6_subobject = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject>();
            ipv6_subobject->parent = this;
            children["ipv6-subobject"] = ipv6_subobject;
        }
        return children.at("ipv6-subobject");
    }

    if(child_yang_name == "lsp-subobject")
    {
        if(lsp_subobject != nullptr)
        {
            children["lsp-subobject"] = lsp_subobject;
        }
        else
        {
            lsp_subobject = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject>();
            lsp_subobject->parent = this;
            children["lsp-subobject"] = lsp_subobject;
        }
        return children.at("lsp-subobject");
    }

    if(child_yang_name == "srlg-subobject")
    {
        if(srlg_subobject != nullptr)
        {
            children["srlg-subobject"] = srlg_subobject;
        }
        else
        {
            srlg_subobject = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject>();
            srlg_subobject->parent = this;
            children["srlg-subobject"] = srlg_subobject;
        }
        return children.at("srlg-subobject");
    }

    if(child_yang_name == "unnumbered-subobject")
    {
        if(unnumbered_subobject != nullptr)
        {
            children["unnumbered-subobject"] = unnumbered_subobject;
        }
        else
        {
            unnumbered_subobject = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject>();
            unnumbered_subobject->parent = this;
            children["unnumbered-subobject"] = unnumbered_subobject;
        }
        return children.at("unnumbered-subobject");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::get_children()
{
    if(children.find("as-subobject") == children.end())
    {
        if(as_subobject != nullptr)
        {
            children["as-subobject"] = as_subobject;
        }
    }

    if(children.find("ipv4-subobject") == children.end())
    {
        if(ipv4_subobject != nullptr)
        {
            children["ipv4-subobject"] = ipv4_subobject;
        }
    }

    if(children.find("ipv6-subobject") == children.end())
    {
        if(ipv6_subobject != nullptr)
        {
            children["ipv6-subobject"] = ipv6_subobject;
        }
    }

    if(children.find("lsp-subobject") == children.end())
    {
        if(lsp_subobject != nullptr)
        {
            children["lsp-subobject"] = lsp_subobject;
        }
    }

    if(children.find("srlg-subobject") == children.end())
    {
        if(srlg_subobject != nullptr)
        {
            children["srlg-subobject"] = srlg_subobject;
        }
    }

    if(children.find("unnumbered-subobject") == children.end())
    {
        if(unnumbered_subobject != nullptr)
        {
            children["unnumbered-subobject"] = unnumbered_subobject;
        }
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "type")
    {
        type = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::Ipv4Subobject()
    :
    address{YType::str, "address"},
    attribute{YType::enumeration, "attribute"},
    exclusion_type{YType::enumeration, "exclusion-type"},
    prefix_len{YType::uint8, "prefix-len"}
{
    yang_name = "ipv4-subobject"; yang_parent_name = "xro-subobject";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::~Ipv4Subobject()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::has_data() const
{
    return address.is_set
	|| attribute.is_set
	|| exclusion_type.is_set
	|| prefix_len.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(attribute.operation)
	|| is_set(exclusion_type.operation)
	|| is_set(prefix_len.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-subobject";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::get_children()
{
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::set_value(const std::string & value_path, std::string value)
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

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::Ipv6Subobject()
    :
    address{YType::str, "address"},
    attribute{YType::enumeration, "attribute"},
    exclusion_type{YType::enumeration, "exclusion-type"},
    prefix_len{YType::uint8, "prefix-len"}
{
    yang_name = "ipv6-subobject"; yang_parent_name = "xro-subobject";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::~Ipv6Subobject()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::has_data() const
{
    return address.is_set
	|| attribute.is_set
	|| exclusion_type.is_set
	|| prefix_len.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(attribute.operation)
	|| is_set(exclusion_type.operation)
	|| is_set(prefix_len.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-subobject";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::get_children()
{
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::set_value(const std::string & value_path, std::string value)
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

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::UnnumberedSubobject()
    :
    attribute{YType::enumeration, "attribute"},
    exclusion_type{YType::enumeration, "exclusion-type"},
    interface_id{YType::uint32, "interface-id"},
    te_router_id{YType::str, "te-router-id"}
{
    yang_name = "unnumbered-subobject"; yang_parent_name = "xro-subobject";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::~UnnumberedSubobject()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::has_data() const
{
    return attribute.is_set
	|| exclusion_type.is_set
	|| interface_id.is_set
	|| te_router_id.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::has_operation() const
{
    return is_set(operation)
	|| is_set(attribute.operation)
	|| is_set(exclusion_type.operation)
	|| is_set(interface_id.operation)
	|| is_set(te_router_id.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unnumbered-subobject";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::get_children()
{
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::set_value(const std::string & value_path, std::string value)
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

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::AsSubobject()
    :
    as_number{YType::uint16, "as-number"}
{
    yang_name = "as-subobject"; yang_parent_name = "xro-subobject";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::~AsSubobject()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::has_data() const
{
    return as_number.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::has_operation() const
{
    return is_set(operation)
	|| is_set(as_number.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as-subobject";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::get_children()
{
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "as-number")
    {
        as_number = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::SrlgSubobject()
    :
    exclusion_type{YType::enumeration, "exclusion-type"},
    srlg_id{YType::uint32, "srlg-id"}
{
    yang_name = "srlg-subobject"; yang_parent_name = "xro-subobject";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::~SrlgSubobject()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::has_data() const
{
    return exclusion_type.is_set
	|| srlg_id.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::has_operation() const
{
    return is_set(operation)
	|| is_set(exclusion_type.operation)
	|| is_set(srlg_id.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg-subobject";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::get_children()
{
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::set_value(const std::string & value_path, std::string value)
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

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::LspSubobject()
    :
    destination_node_exception{YType::boolean, "destination-node-exception"},
    exclusion_type{YType::enumeration, "exclusion-type"},
    ignore_lsp_id{YType::boolean, "ignore-lsp-id"},
    penultimate_node_exception{YType::boolean, "penultimate-node-exception"},
    processing_node_exception{YType::boolean, "processing-node-exception"}
    	,
    fec(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec>())
{
    fec->parent = this;
    children["fec"] = fec;

    yang_name = "lsp-subobject"; yang_parent_name = "xro-subobject";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::~LspSubobject()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::has_data() const
{
    return destination_node_exception.is_set
	|| exclusion_type.is_set
	|| ignore_lsp_id.is_set
	|| penultimate_node_exception.is_set
	|| processing_node_exception.is_set
	|| (fec !=  nullptr && fec->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_node_exception.operation)
	|| is_set(exclusion_type.operation)
	|| is_set(ignore_lsp_id.operation)
	|| is_set(penultimate_node_exception.operation)
	|| is_set(processing_node_exception.operation)
	|| (fec !=  nullptr && fec->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-subobject";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "fec")
    {
        if(fec != nullptr)
        {
            children["fec"] = fec;
        }
        else
        {
            fec = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec>();
            fec->parent = this;
            children["fec"] = fec;
        }
        return children.at("fec");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::get_children()
{
    if(children.find("fec") == children.end())
    {
        if(fec != nullptr)
        {
            children["fec"] = fec;
        }
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::set_value(const std::string & value_path, std::string value)
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

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::Fec()
    :
    fec_extended_tunnel_id{YType::str, "fec-extended-tunnel-id"},
    fec_lsp_id{YType::uint16, "fec-lsp-id"},
    fec_source{YType::str, "fec-source"},
    fec_tunnel_id{YType::uint16, "fec-tunnel-id"},
    fec_vrf{YType::str, "fec-vrf"}
    	,
    fec_destination_info(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo>())
{
    fec_destination_info->parent = this;
    children["fec-destination-info"] = fec_destination_info;

    yang_name = "fec"; yang_parent_name = "lsp-subobject";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::~Fec()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::has_data() const
{
    return fec_extended_tunnel_id.is_set
	|| fec_lsp_id.is_set
	|| fec_source.is_set
	|| fec_tunnel_id.is_set
	|| fec_vrf.is_set
	|| (fec_destination_info !=  nullptr && fec_destination_info->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::has_operation() const
{
    return is_set(operation)
	|| is_set(fec_extended_tunnel_id.operation)
	|| is_set(fec_lsp_id.operation)
	|| is_set(fec_source.operation)
	|| is_set(fec_tunnel_id.operation)
	|| is_set(fec_vrf.operation)
	|| (fec_destination_info !=  nullptr && fec_destination_info->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fec";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "fec-destination-info")
    {
        if(fec_destination_info != nullptr)
        {
            children["fec-destination-info"] = fec_destination_info;
        }
        else
        {
            fec_destination_info = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo>();
            fec_destination_info->parent = this;
            children["fec-destination-info"] = fec_destination_info;
        }
        return children.at("fec-destination-info");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::get_children()
{
    if(children.find("fec-destination-info") == children.end())
    {
        if(fec_destination_info != nullptr)
        {
            children["fec-destination-info"] = fec_destination_info;
        }
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::set_value(const std::string & value_path, std::string value)
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

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::FecDestinationInfo()
    :
    fec_ctype{YType::enumeration, "fec-ctype"},
    fec_destination_p2mp_id{YType::uint32, "fec-destination-p2mp-id"},
    p2p_lsp_destination{YType::str, "p2p-lsp-destination"}
{
    yang_name = "fec-destination-info"; yang_parent_name = "fec";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::~FecDestinationInfo()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::has_data() const
{
    return fec_ctype.is_set
	|| fec_destination_p2mp_id.is_set
	|| p2p_lsp_destination.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(fec_ctype.operation)
	|| is_set(fec_destination_p2mp_id.operation)
	|| is_set(p2p_lsp_destination.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fec-destination-info";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::get_children()
{
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::set_value(const std::string & value_path, std::string value)
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

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::AttributeSetP2Mpte()
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
    affinity(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity>())
{
    affinity->parent = this;
    children["affinity"] = affinity;

    yang_name = "attribute-set-p2mpte"; yang_parent_name = "attribute-set-union";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::~AttributeSetP2Mpte()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::has_data() const
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::has_operation() const
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

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-p2mpte";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "affinity")
    {
        if(affinity != nullptr)
        {
            children["affinity"] = affinity;
        }
        else
        {
            affinity = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity>();
            affinity->parent = this;
            children["affinity"] = affinity;
        }
        return children.at("affinity");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::get_children()
{
    if(children.find("affinity") == children.end())
    {
        if(affinity != nullptr)
        {
            children["affinity"] = affinity;
        }
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::set_value(const std::string & value_path, std::string value)
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

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::Affinity()
    :
    affinity_bits{YType::uint32, "affinity-bits"},
    affinity_mask{YType::uint32, "affinity-mask"}
{
    yang_name = "affinity"; yang_parent_name = "attribute-set-p2mpte";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::~Affinity()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::has_data() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_data())
            return true;
    }
    return affinity_bits.is_set
	|| affinity_mask.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::has_operation() const
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

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "named-affinity")
    {
        for(auto const & c : named_affinity)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity>();
        c->parent = this;
        named_affinity.push_back(std::move(c));
        children[segment_path] = named_affinity.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::get_children()
{
    for (auto const & c : named_affinity)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::set_value(const std::string & value_path, std::string value)
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

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::NamedAffinity()
    :
    constraint_extended_value{YType::uint32, "constraint-extended-value"},
    constraint_type{YType::uint8, "constraint-type"},
    constraint_value{YType::uint32, "constraint-value"},
    extended_forward_ref_value{YType::uint32, "extended-forward-ref-value"},
    forward_ref_value{YType::uint32, "forward-ref-value"}
{
    yang_name = "named-affinity"; yang_parent_name = "affinity";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::~NamedAffinity()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::has_data() const
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::has_operation() const
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

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-affinity";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::get_children()
{
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::set_value(const std::string & value_path, std::string value)
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

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::AttributeSetApsPp()
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
    revert_schedule(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule>())
{
    revert_schedule->parent = this;
    children["revert-schedule"] = revert_schedule;

    yang_name = "attribute-set-aps-pp"; yang_parent_name = "attribute-set-union";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::~AttributeSetApsPp()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::has_data() const
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::has_operation() const
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

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-aps-pp";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "revert-schedule")
    {
        if(revert_schedule != nullptr)
        {
            children["revert-schedule"] = revert_schedule;
        }
        else
        {
            revert_schedule = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule>();
            revert_schedule->parent = this;
            children["revert-schedule"] = revert_schedule;
        }
        return children.at("revert-schedule");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::get_children()
{
    if(children.find("revert-schedule") == children.end())
    {
        if(revert_schedule != nullptr)
        {
            children["revert-schedule"] = revert_schedule;
        }
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::set_value(const std::string & value_path, std::string value)
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

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::RevertSchedule()
    :
    duration{YType::uint32, "duration"},
    max_tries{YType::uint32, "max-tries"},
    schedule_date{YType::uint32, "schedule-date"},
    schedule_frequency{YType::enumeration, "schedule-frequency"},
    schedulename{YType::str, "schedulename"}
{
    yang_name = "revert-schedule"; yang_parent_name = "attribute-set-aps-pp";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::~RevertSchedule()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::has_data() const
{
    return duration.is_set
	|| max_tries.is_set
	|| schedule_date.is_set
	|| schedule_frequency.is_set
	|| schedulename.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::has_operation() const
{
    return is_set(operation)
	|| is_set(duration.operation)
	|| is_set(max_tries.operation)
	|| is_set(schedule_date.operation)
	|| is_set(schedule_frequency.operation)
	|| is_set(schedulename.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "revert-schedule";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::get_children()
{
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::set_value(const std::string & value_path, std::string value)
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

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::AttributeSetP2PTe()
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
    affinity(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity>())
	,logging(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging>())
	,prepend_list(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList>())
{
    affinity->parent = this;
    children["affinity"] = affinity;

    logging->parent = this;
    children["logging"] = logging;

    prepend_list->parent = this;
    children["prepend-list"] = prepend_list;

    yang_name = "attribute-set-p2p-te"; yang_parent_name = "attribute-set-union";
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::~AttributeSetP2PTe()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::has_data() const
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::has_operation() const
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

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-p2p-te";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "affinity")
    {
        if(affinity != nullptr)
        {
            children["affinity"] = affinity;
        }
        else
        {
            affinity = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity>();
            affinity->parent = this;
            children["affinity"] = affinity;
        }
        return children.at("affinity");
    }

    if(child_yang_name == "logging")
    {
        if(logging != nullptr)
        {
            children["logging"] = logging;
        }
        else
        {
            logging = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging>();
            logging->parent = this;
            children["logging"] = logging;
        }
        return children.at("logging");
    }

    if(child_yang_name == "prepend-list")
    {
        if(prepend_list != nullptr)
        {
            children["prepend-list"] = prepend_list;
        }
        else
        {
            prepend_list = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList>();
            prepend_list->parent = this;
            children["prepend-list"] = prepend_list;
        }
        return children.at("prepend-list");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::get_children()
{
    if(children.find("affinity") == children.end())
    {
        if(affinity != nullptr)
        {
            children["affinity"] = affinity;
        }
    }

    if(children.find("logging") == children.end())
    {
        if(logging != nullptr)
        {
            children["logging"] = logging;
        }
    }

    if(children.find("prepend-list") == children.end())
    {
        if(prepend_list != nullptr)
        {
            children["prepend-list"] = prepend_list;
        }
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::set_value(const std::string & value_path, std::string value)
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


}
}

