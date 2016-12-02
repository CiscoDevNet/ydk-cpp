
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_mpls_static_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_mpls_static_oper {

MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::Prefix::Prefix_::Prefix_()
    :
    	af_name{YType::enumeration, "af-name"},
	 ipv4_prefix{YType::str, "ipv4-prefix"},
	 ipv6_prefix{YType::str, "ipv6-prefix"}
{
    yang_name = "prefix"; yang_parent_name = "prefix";
}

MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::Prefix::Prefix_::~Prefix_()
{
}

bool MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::Prefix::Prefix_::has_data() const
{
    return af_name.is_set
	|| ipv4_prefix.is_set
	|| ipv6_prefix.is_set;
}

bool MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::Prefix::Prefix_::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_prefix.operation)
	|| is_set(ipv6_prefix.operation);
}

std::string MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::Prefix::Prefix_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";

    return path_buffer.str();

}

EntityPath MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::Prefix::Prefix_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_prefix.is_set || is_set(ipv4_prefix.operation)) leaf_name_data.push_back(ipv4_prefix.get_name_leafdata());
    if (ipv6_prefix.is_set || is_set(ipv6_prefix.operation)) leaf_name_data.push_back(ipv6_prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::Prefix::Prefix_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::Prefix::Prefix_::get_children()
{
    return children;
}

void MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::Prefix::Prefix_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix = value;
    }
    if(value_path == "ipv6-prefix")
    {
        ipv6_prefix = value;
    }
}

MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::Prefix::Prefix()
    :
    	prefix_length{YType::uint8, "prefix-length"}
    	,
    prefix(std::make_unique<MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::Prefix::Prefix_>())
{
    prefix->parent = this;
    children["prefix"] = prefix.get();

    yang_name = "prefix"; yang_parent_name = "label";
}

MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::Prefix::~Prefix()
{
}

bool MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::Prefix::has_data() const
{
    return prefix_length.is_set
	|| (prefix !=  nullptr && prefix->has_data());
}

bool MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::Prefix::has_operation() const
{
    return is_set(operation)
	|| is_set(prefix_length.operation)
	|| (prefix !=  nullptr && is_set(prefix->operation));
}

std::string MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";

    return path_buffer.str();

}

EntityPath MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::Prefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "prefix")
    {
        if(prefix != nullptr)
        {
            children["prefix"] = prefix.get();
        }
        else
        {
            prefix = std::make_unique<MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::Prefix::Prefix_>();
            prefix->parent = this;
            children["prefix"] = prefix.get();
        }
        return children.at("prefix");
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::Prefix::get_children()
{
    if(children.find("prefix") == children.end())
    {
        if(prefix != nullptr)
        {
            children["prefix"] = prefix.get();
        }
    }

    return children;
}

void MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::Prefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
}

MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathInfo::PathInfo()
    :
    	next_hop_interface_name{YType::str, "next-hop-interface-name"},
	 next_hop_ipv4_address{YType::str, "next-hop-ipv4-address"},
	 next_hop_ipv4_address_set{YType::boolean, "next-hop-ipv4-address-set"},
	 next_hop_label{YType::uint32, "next-hop-label"},
	 next_hop_label_type{YType::enumeration, "next-hop-label-type"},
	 path{YType::uint32, "path"},
	 type{YType::enumeration, "type"}
{
    yang_name = "path-info"; yang_parent_name = "label";
}

MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathInfo::~PathInfo()
{
}

bool MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathInfo::has_data() const
{
    return next_hop_interface_name.is_set
	|| next_hop_ipv4_address.is_set
	|| next_hop_ipv4_address_set.is_set
	|| next_hop_label.is_set
	|| next_hop_label_type.is_set
	|| path.is_set
	|| type.is_set;
}

bool MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(next_hop_interface_name.operation)
	|| is_set(next_hop_ipv4_address.operation)
	|| is_set(next_hop_ipv4_address_set.operation)
	|| is_set(next_hop_label.operation)
	|| is_set(next_hop_label_type.operation)
	|| is_set(path.operation)
	|| is_set(type.operation);
}

std::string MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-info";

    return path_buffer.str();

}

EntityPath MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_interface_name.is_set || is_set(next_hop_interface_name.operation)) leaf_name_data.push_back(next_hop_interface_name.get_name_leafdata());
    if (next_hop_ipv4_address.is_set || is_set(next_hop_ipv4_address.operation)) leaf_name_data.push_back(next_hop_ipv4_address.get_name_leafdata());
    if (next_hop_ipv4_address_set.is_set || is_set(next_hop_ipv4_address_set.operation)) leaf_name_data.push_back(next_hop_ipv4_address_set.get_name_leafdata());
    if (next_hop_label.is_set || is_set(next_hop_label.operation)) leaf_name_data.push_back(next_hop_label.get_name_leafdata());
    if (next_hop_label_type.is_set || is_set(next_hop_label_type.operation)) leaf_name_data.push_back(next_hop_label_type.get_name_leafdata());
    if (path.is_set || is_set(path.operation)) leaf_name_data.push_back(path.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathInfo::get_children()
{
    return children;
}

void MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "next-hop-interface-name")
    {
        next_hop_interface_name = value;
    }
    if(value_path == "next-hop-ipv4-address")
    {
        next_hop_ipv4_address = value;
    }
    if(value_path == "next-hop-ipv4-address-set")
    {
        next_hop_ipv4_address_set = value;
    }
    if(value_path == "next-hop-label")
    {
        next_hop_label = value;
    }
    if(value_path == "next-hop-label-type")
    {
        next_hop_label_type = value;
    }
    if(value_path == "path")
    {
        path = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::Label()
    :
    	label{YType::uint32, "label"},
	 label_mode{YType::enumeration, "label-mode"},
	 label_status{YType::enumeration, "label-status"},
	 vrf_name{YType::str, "vrf-name"}
    	,
    prefix(std::make_unique<MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::Prefix>())
{
    prefix->parent = this;
    children["prefix"] = prefix.get();

    yang_name = "label"; yang_parent_name = "lsp";
}

MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::~Label()
{
}

bool MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::has_data() const
{
    for (std::size_t index=0; index<path_info.size(); index++)
    {
        if(path_info[index]->has_data())
            return true;
    }
    return label.is_set
	|| label_mode.is_set
	|| label_status.is_set
	|| vrf_name.is_set
	|| (prefix !=  nullptr && prefix->has_data());
}

bool MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::has_operation() const
{
    for (std::size_t index=0; index<path_info.size(); index++)
    {
        if(path_info[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(label.operation)
	|| is_set(label_mode.operation)
	|| is_set(label_status.operation)
	|| is_set(vrf_name.operation)
	|| (prefix !=  nullptr && is_set(prefix->operation));
}

std::string MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label";

    return path_buffer.str();

}

EntityPath MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label.is_set || is_set(label.operation)) leaf_name_data.push_back(label.get_name_leafdata());
    if (label_mode.is_set || is_set(label_mode.operation)) leaf_name_data.push_back(label_mode.get_name_leafdata());
    if (label_status.is_set || is_set(label_status.operation)) leaf_name_data.push_back(label_status.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "path-info")
    {
        for(auto const & c : path_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathInfo>();
        c->parent = this;
        path_info.push_back(std::move(c));
        children[segment_path] = path_info.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "prefix")
    {
        if(prefix != nullptr)
        {
            children["prefix"] = prefix.get();
        }
        else
        {
            prefix = std::make_unique<MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::Prefix>();
            prefix->parent = this;
            children["prefix"] = prefix.get();
        }
        return children.at("prefix");
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::get_children()
{
    for (auto const & c : path_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    if(children.find("prefix") == children.end())
    {
        if(prefix != nullptr)
        {
            children["prefix"] = prefix.get();
        }
    }

    return children;
}

void MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "label")
    {
        label = value;
    }
    if(value_path == "label-mode")
    {
        label_mode = value;
    }
    if(value_path == "label-status")
    {
        label_status = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

MplsStatic::Vrfs::Vrf::Lsps::Lsp::Lsp()
    :
    	lsp_name{YType::str, "lsp-name"},
	 lsp_name_xr{YType::str, "lsp-name-xr"}
    	,
    label(std::make_unique<MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label>())
{
    label->parent = this;
    children["label"] = label.get();

    yang_name = "lsp"; yang_parent_name = "lsps";
}

MplsStatic::Vrfs::Vrf::Lsps::Lsp::~Lsp()
{
}

bool MplsStatic::Vrfs::Vrf::Lsps::Lsp::has_data() const
{
    return lsp_name.is_set
	|| lsp_name_xr.is_set
	|| (label !=  nullptr && label->has_data());
}

bool MplsStatic::Vrfs::Vrf::Lsps::Lsp::has_operation() const
{
    return is_set(operation)
	|| is_set(lsp_name.operation)
	|| is_set(lsp_name_xr.operation)
	|| (label !=  nullptr && is_set(label->operation));
}

std::string MplsStatic::Vrfs::Vrf::Lsps::Lsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp" <<"[lsp-name='" <<lsp_name.get() <<"']";

    return path_buffer.str();

}

EntityPath MplsStatic::Vrfs::Vrf::Lsps::Lsp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_name.is_set || is_set(lsp_name.operation)) leaf_name_data.push_back(lsp_name.get_name_leafdata());
    if (lsp_name_xr.is_set || is_set(lsp_name_xr.operation)) leaf_name_data.push_back(lsp_name_xr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsStatic::Vrfs::Vrf::Lsps::Lsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "label")
    {
        if(label != nullptr)
        {
            children["label"] = label.get();
        }
        else
        {
            label = std::make_unique<MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label>();
            label->parent = this;
            children["label"] = label.get();
        }
        return children.at("label");
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsStatic::Vrfs::Vrf::Lsps::Lsp::get_children()
{
    if(children.find("label") == children.end())
    {
        if(label != nullptr)
        {
            children["label"] = label.get();
        }
    }

    return children;
}

void MplsStatic::Vrfs::Vrf::Lsps::Lsp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lsp-name")
    {
        lsp_name = value;
    }
    if(value_path == "lsp-name-xr")
    {
        lsp_name_xr = value;
    }
}

MplsStatic::Vrfs::Vrf::Lsps::Lsps()
{
    yang_name = "lsps"; yang_parent_name = "vrf";
}

MplsStatic::Vrfs::Vrf::Lsps::~Lsps()
{
}

bool MplsStatic::Vrfs::Vrf::Lsps::has_data() const
{
    for (std::size_t index=0; index<lsp.size(); index++)
    {
        if(lsp[index]->has_data())
            return true;
    }
    return false;
}

bool MplsStatic::Vrfs::Vrf::Lsps::has_operation() const
{
    for (std::size_t index=0; index<lsp.size(); index++)
    {
        if(lsp[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsStatic::Vrfs::Vrf::Lsps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsps";

    return path_buffer.str();

}

EntityPath MplsStatic::Vrfs::Vrf::Lsps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsStatic::Vrfs::Vrf::Lsps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "lsp")
    {
        for(auto const & c : lsp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<MplsStatic::Vrfs::Vrf::Lsps::Lsp>();
        c->parent = this;
        lsp.push_back(std::move(c));
        children[segment_path] = lsp.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsStatic::Vrfs::Vrf::Lsps::get_children()
{
    for (auto const & c : lsp)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void MplsStatic::Vrfs::Vrf::Lsps::set_value(const std::string & value_path, std::string value)
{
}

MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::Prefix::Prefix_::Prefix_()
    :
    	af_name{YType::enumeration, "af-name"},
	 ipv4_prefix{YType::str, "ipv4-prefix"},
	 ipv6_prefix{YType::str, "ipv6-prefix"}
{
    yang_name = "prefix"; yang_parent_name = "prefix";
}

MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::Prefix::Prefix_::~Prefix_()
{
}

bool MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::Prefix::Prefix_::has_data() const
{
    return af_name.is_set
	|| ipv4_prefix.is_set
	|| ipv6_prefix.is_set;
}

bool MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::Prefix::Prefix_::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_prefix.operation)
	|| is_set(ipv6_prefix.operation);
}

std::string MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::Prefix::Prefix_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";

    return path_buffer.str();

}

EntityPath MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::Prefix::Prefix_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_prefix.is_set || is_set(ipv4_prefix.operation)) leaf_name_data.push_back(ipv4_prefix.get_name_leafdata());
    if (ipv6_prefix.is_set || is_set(ipv6_prefix.operation)) leaf_name_data.push_back(ipv6_prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::Prefix::Prefix_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::Prefix::Prefix_::get_children()
{
    return children;
}

void MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::Prefix::Prefix_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix = value;
    }
    if(value_path == "ipv6-prefix")
    {
        ipv6_prefix = value;
    }
}

MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::Prefix::Prefix()
    :
    	prefix_length{YType::uint8, "prefix-length"}
    	,
    prefix(std::make_unique<MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::Prefix::Prefix_>())
{
    prefix->parent = this;
    children["prefix"] = prefix.get();

    yang_name = "prefix"; yang_parent_name = "local-label";
}

MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::Prefix::~Prefix()
{
}

bool MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::Prefix::has_data() const
{
    return prefix_length.is_set
	|| (prefix !=  nullptr && prefix->has_data());
}

bool MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::Prefix::has_operation() const
{
    return is_set(operation)
	|| is_set(prefix_length.operation)
	|| (prefix !=  nullptr && is_set(prefix->operation));
}

std::string MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";

    return path_buffer.str();

}

EntityPath MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::Prefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "prefix")
    {
        if(prefix != nullptr)
        {
            children["prefix"] = prefix.get();
        }
        else
        {
            prefix = std::make_unique<MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::Prefix::Prefix_>();
            prefix->parent = this;
            children["prefix"] = prefix.get();
        }
        return children.at("prefix");
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::Prefix::get_children()
{
    if(children.find("prefix") == children.end())
    {
        if(prefix != nullptr)
        {
            children["prefix"] = prefix.get();
        }
    }

    return children;
}

void MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::Prefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
}

MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathInfo::PathInfo()
    :
    	next_hop_interface_name{YType::str, "next-hop-interface-name"},
	 next_hop_ipv4_address{YType::str, "next-hop-ipv4-address"},
	 next_hop_ipv4_address_set{YType::boolean, "next-hop-ipv4-address-set"},
	 next_hop_label{YType::uint32, "next-hop-label"},
	 next_hop_label_type{YType::enumeration, "next-hop-label-type"},
	 path{YType::uint32, "path"},
	 type{YType::enumeration, "type"}
{
    yang_name = "path-info"; yang_parent_name = "local-label";
}

MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathInfo::~PathInfo()
{
}

bool MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathInfo::has_data() const
{
    return next_hop_interface_name.is_set
	|| next_hop_ipv4_address.is_set
	|| next_hop_ipv4_address_set.is_set
	|| next_hop_label.is_set
	|| next_hop_label_type.is_set
	|| path.is_set
	|| type.is_set;
}

bool MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(next_hop_interface_name.operation)
	|| is_set(next_hop_ipv4_address.operation)
	|| is_set(next_hop_ipv4_address_set.operation)
	|| is_set(next_hop_label.operation)
	|| is_set(next_hop_label_type.operation)
	|| is_set(path.operation)
	|| is_set(type.operation);
}

std::string MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-info";

    return path_buffer.str();

}

EntityPath MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_interface_name.is_set || is_set(next_hop_interface_name.operation)) leaf_name_data.push_back(next_hop_interface_name.get_name_leafdata());
    if (next_hop_ipv4_address.is_set || is_set(next_hop_ipv4_address.operation)) leaf_name_data.push_back(next_hop_ipv4_address.get_name_leafdata());
    if (next_hop_ipv4_address_set.is_set || is_set(next_hop_ipv4_address_set.operation)) leaf_name_data.push_back(next_hop_ipv4_address_set.get_name_leafdata());
    if (next_hop_label.is_set || is_set(next_hop_label.operation)) leaf_name_data.push_back(next_hop_label.get_name_leafdata());
    if (next_hop_label_type.is_set || is_set(next_hop_label_type.operation)) leaf_name_data.push_back(next_hop_label_type.get_name_leafdata());
    if (path.is_set || is_set(path.operation)) leaf_name_data.push_back(path.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathInfo::get_children()
{
    return children;
}

void MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "next-hop-interface-name")
    {
        next_hop_interface_name = value;
    }
    if(value_path == "next-hop-ipv4-address")
    {
        next_hop_ipv4_address = value;
    }
    if(value_path == "next-hop-ipv4-address-set")
    {
        next_hop_ipv4_address_set = value;
    }
    if(value_path == "next-hop-label")
    {
        next_hop_label = value;
    }
    if(value_path == "next-hop-label-type")
    {
        next_hop_label_type = value;
    }
    if(value_path == "path")
    {
        path = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::LocalLabel()
    :
    	local_label_id{YType::uint32, "local-label-id"},
	 label{YType::uint32, "label"},
	 label_mode{YType::enumeration, "label-mode"},
	 label_status{YType::enumeration, "label-status"},
	 vrf_name{YType::str, "vrf-name"}
    	,
    prefix(std::make_unique<MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::Prefix>())
{
    prefix->parent = this;
    children["prefix"] = prefix.get();

    yang_name = "local-label"; yang_parent_name = "local-labels";
}

MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::~LocalLabel()
{
}

bool MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::has_data() const
{
    for (std::size_t index=0; index<path_info.size(); index++)
    {
        if(path_info[index]->has_data())
            return true;
    }
    return local_label_id.is_set
	|| label.is_set
	|| label_mode.is_set
	|| label_status.is_set
	|| vrf_name.is_set
	|| (prefix !=  nullptr && prefix->has_data());
}

bool MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::has_operation() const
{
    for (std::size_t index=0; index<path_info.size(); index++)
    {
        if(path_info[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(local_label_id.operation)
	|| is_set(label.operation)
	|| is_set(label_mode.operation)
	|| is_set(label_status.operation)
	|| is_set(vrf_name.operation)
	|| (prefix !=  nullptr && is_set(prefix->operation));
}

std::string MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-label" <<"[local-label-id='" <<local_label_id.get() <<"']";

    return path_buffer.str();

}

EntityPath MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_label_id.is_set || is_set(local_label_id.operation)) leaf_name_data.push_back(local_label_id.get_name_leafdata());
    if (label.is_set || is_set(label.operation)) leaf_name_data.push_back(label.get_name_leafdata());
    if (label_mode.is_set || is_set(label_mode.operation)) leaf_name_data.push_back(label_mode.get_name_leafdata());
    if (label_status.is_set || is_set(label_status.operation)) leaf_name_data.push_back(label_status.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "path-info")
    {
        for(auto const & c : path_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathInfo>();
        c->parent = this;
        path_info.push_back(std::move(c));
        children[segment_path] = path_info.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "prefix")
    {
        if(prefix != nullptr)
        {
            children["prefix"] = prefix.get();
        }
        else
        {
            prefix = std::make_unique<MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::Prefix>();
            prefix->parent = this;
            children["prefix"] = prefix.get();
        }
        return children.at("prefix");
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::get_children()
{
    for (auto const & c : path_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    if(children.find("prefix") == children.end())
    {
        if(prefix != nullptr)
        {
            children["prefix"] = prefix.get();
        }
    }

    return children;
}

void MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "local-label-id")
    {
        local_label_id = value;
    }
    if(value_path == "label")
    {
        label = value;
    }
    if(value_path == "label-mode")
    {
        label_mode = value;
    }
    if(value_path == "label-status")
    {
        label_status = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabels()
{
    yang_name = "local-labels"; yang_parent_name = "vrf";
}

MplsStatic::Vrfs::Vrf::LocalLabels::~LocalLabels()
{
}

bool MplsStatic::Vrfs::Vrf::LocalLabels::has_data() const
{
    for (std::size_t index=0; index<local_label.size(); index++)
    {
        if(local_label[index]->has_data())
            return true;
    }
    return false;
}

bool MplsStatic::Vrfs::Vrf::LocalLabels::has_operation() const
{
    for (std::size_t index=0; index<local_label.size(); index++)
    {
        if(local_label[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsStatic::Vrfs::Vrf::LocalLabels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-labels";

    return path_buffer.str();

}

EntityPath MplsStatic::Vrfs::Vrf::LocalLabels::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsStatic::Vrfs::Vrf::LocalLabels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "local-label")
    {
        for(auto const & c : local_label)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel>();
        c->parent = this;
        local_label.push_back(std::move(c));
        children[segment_path] = local_label.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsStatic::Vrfs::Vrf::LocalLabels::get_children()
{
    for (auto const & c : local_label)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void MplsStatic::Vrfs::Vrf::LocalLabels::set_value(const std::string & value_path, std::string value)
{
}

MplsStatic::Vrfs::Vrf::Vrf()
    :
    	vrf_name{YType::str, "vrf-name"}
    	,
    local_labels(std::make_unique<MplsStatic::Vrfs::Vrf::LocalLabels>())
	,lsps(std::make_unique<MplsStatic::Vrfs::Vrf::Lsps>())
{
    local_labels->parent = this;
    children["local-labels"] = local_labels.get();

    lsps->parent = this;
    children["lsps"] = lsps.get();

    yang_name = "vrf"; yang_parent_name = "vrfs";
}

MplsStatic::Vrfs::Vrf::~Vrf()
{
}

bool MplsStatic::Vrfs::Vrf::has_data() const
{
    return vrf_name.is_set
	|| (local_labels !=  nullptr && local_labels->has_data())
	|| (lsps !=  nullptr && lsps->has_data());
}

bool MplsStatic::Vrfs::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_name.operation)
	|| (local_labels !=  nullptr && is_set(local_labels->operation))
	|| (lsps !=  nullptr && is_set(lsps->operation));
}

std::string MplsStatic::Vrfs::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name.get() <<"']";

    return path_buffer.str();

}

EntityPath MplsStatic::Vrfs::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-static-oper:mpls-static/vrfs/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsStatic::Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "local-labels")
    {
        if(local_labels != nullptr)
        {
            children["local-labels"] = local_labels.get();
        }
        else
        {
            local_labels = std::make_unique<MplsStatic::Vrfs::Vrf::LocalLabels>();
            local_labels->parent = this;
            children["local-labels"] = local_labels.get();
        }
        return children.at("local-labels");
    }

    if(child_yang_name == "lsps")
    {
        if(lsps != nullptr)
        {
            children["lsps"] = lsps.get();
        }
        else
        {
            lsps = std::make_unique<MplsStatic::Vrfs::Vrf::Lsps>();
            lsps->parent = this;
            children["lsps"] = lsps.get();
        }
        return children.at("lsps");
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsStatic::Vrfs::Vrf::get_children()
{
    if(children.find("local-labels") == children.end())
    {
        if(local_labels != nullptr)
        {
            children["local-labels"] = local_labels.get();
        }
    }

    if(children.find("lsps") == children.end())
    {
        if(lsps != nullptr)
        {
            children["lsps"] = lsps.get();
        }
    }

    return children;
}

void MplsStatic::Vrfs::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

MplsStatic::Vrfs::Vrfs()
{
    yang_name = "vrfs"; yang_parent_name = "mpls-static";
}

MplsStatic::Vrfs::~Vrfs()
{
}

bool MplsStatic::Vrfs::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool MplsStatic::Vrfs::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsStatic::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";

    return path_buffer.str();

}

EntityPath MplsStatic::Vrfs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-static-oper:mpls-static/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsStatic::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf")
    {
        for(auto const & c : vrf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<MplsStatic::Vrfs::Vrf>();
        c->parent = this;
        vrf.push_back(std::move(c));
        children[segment_path] = vrf.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsStatic::Vrfs::get_children()
{
    for (auto const & c : vrf)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void MplsStatic::Vrfs::set_value(const std::string & value_path, std::string value)
{
}

MplsStatic::Summary::Summary()
    :
    	active_vrf_count{YType::uint32, "active-vrf-count"},
	 im_connected{YType::boolean, "im-connected"},
	 interface_count{YType::uint32, "interface-count"},
	 interface_foward_reference_count{YType::uint32, "interface-foward-reference-count"},
	 label_count{YType::uint32, "label-count"},
	 label_discrepancy_count{YType::uint32, "label-discrepancy-count"},
	 label_error_count{YType::uint32, "label-error-count"},
	 lsd_connected{YType::boolean, "lsd-connected"},
	 mpls_enabled_interface_count{YType::uint32, "mpls-enabled-interface-count"},
	 rsi_connected{YType::boolean, "rsi-connected"},
	 vrf_count{YType::uint32, "vrf-count"}
{
    yang_name = "summary"; yang_parent_name = "mpls-static";
}

MplsStatic::Summary::~Summary()
{
}

bool MplsStatic::Summary::has_data() const
{
    return active_vrf_count.is_set
	|| im_connected.is_set
	|| interface_count.is_set
	|| interface_foward_reference_count.is_set
	|| label_count.is_set
	|| label_discrepancy_count.is_set
	|| label_error_count.is_set
	|| lsd_connected.is_set
	|| mpls_enabled_interface_count.is_set
	|| rsi_connected.is_set
	|| vrf_count.is_set;
}

bool MplsStatic::Summary::has_operation() const
{
    return is_set(operation)
	|| is_set(active_vrf_count.operation)
	|| is_set(im_connected.operation)
	|| is_set(interface_count.operation)
	|| is_set(interface_foward_reference_count.operation)
	|| is_set(label_count.operation)
	|| is_set(label_discrepancy_count.operation)
	|| is_set(label_error_count.operation)
	|| is_set(lsd_connected.operation)
	|| is_set(mpls_enabled_interface_count.operation)
	|| is_set(rsi_connected.operation)
	|| is_set(vrf_count.operation);
}

std::string MplsStatic::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";

    return path_buffer.str();

}

EntityPath MplsStatic::Summary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-static-oper:mpls-static/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_vrf_count.is_set || is_set(active_vrf_count.operation)) leaf_name_data.push_back(active_vrf_count.get_name_leafdata());
    if (im_connected.is_set || is_set(im_connected.operation)) leaf_name_data.push_back(im_connected.get_name_leafdata());
    if (interface_count.is_set || is_set(interface_count.operation)) leaf_name_data.push_back(interface_count.get_name_leafdata());
    if (interface_foward_reference_count.is_set || is_set(interface_foward_reference_count.operation)) leaf_name_data.push_back(interface_foward_reference_count.get_name_leafdata());
    if (label_count.is_set || is_set(label_count.operation)) leaf_name_data.push_back(label_count.get_name_leafdata());
    if (label_discrepancy_count.is_set || is_set(label_discrepancy_count.operation)) leaf_name_data.push_back(label_discrepancy_count.get_name_leafdata());
    if (label_error_count.is_set || is_set(label_error_count.operation)) leaf_name_data.push_back(label_error_count.get_name_leafdata());
    if (lsd_connected.is_set || is_set(lsd_connected.operation)) leaf_name_data.push_back(lsd_connected.get_name_leafdata());
    if (mpls_enabled_interface_count.is_set || is_set(mpls_enabled_interface_count.operation)) leaf_name_data.push_back(mpls_enabled_interface_count.get_name_leafdata());
    if (rsi_connected.is_set || is_set(rsi_connected.operation)) leaf_name_data.push_back(rsi_connected.get_name_leafdata());
    if (vrf_count.is_set || is_set(vrf_count.operation)) leaf_name_data.push_back(vrf_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsStatic::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & MplsStatic::Summary::get_children()
{
    return children;
}

void MplsStatic::Summary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active-vrf-count")
    {
        active_vrf_count = value;
    }
    if(value_path == "im-connected")
    {
        im_connected = value;
    }
    if(value_path == "interface-count")
    {
        interface_count = value;
    }
    if(value_path == "interface-foward-reference-count")
    {
        interface_foward_reference_count = value;
    }
    if(value_path == "label-count")
    {
        label_count = value;
    }
    if(value_path == "label-discrepancy-count")
    {
        label_discrepancy_count = value;
    }
    if(value_path == "label-error-count")
    {
        label_error_count = value;
    }
    if(value_path == "lsd-connected")
    {
        lsd_connected = value;
    }
    if(value_path == "mpls-enabled-interface-count")
    {
        mpls_enabled_interface_count = value;
    }
    if(value_path == "rsi-connected")
    {
        rsi_connected = value;
    }
    if(value_path == "vrf-count")
    {
        vrf_count = value;
    }
}

MplsStatic::LocalLabels::LocalLabel::Prefix::Prefix_::Prefix_()
    :
    	af_name{YType::enumeration, "af-name"},
	 ipv4_prefix{YType::str, "ipv4-prefix"},
	 ipv6_prefix{YType::str, "ipv6-prefix"}
{
    yang_name = "prefix"; yang_parent_name = "prefix";
}

MplsStatic::LocalLabels::LocalLabel::Prefix::Prefix_::~Prefix_()
{
}

bool MplsStatic::LocalLabels::LocalLabel::Prefix::Prefix_::has_data() const
{
    return af_name.is_set
	|| ipv4_prefix.is_set
	|| ipv6_prefix.is_set;
}

bool MplsStatic::LocalLabels::LocalLabel::Prefix::Prefix_::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_prefix.operation)
	|| is_set(ipv6_prefix.operation);
}

std::string MplsStatic::LocalLabels::LocalLabel::Prefix::Prefix_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";

    return path_buffer.str();

}

EntityPath MplsStatic::LocalLabels::LocalLabel::Prefix::Prefix_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_prefix.is_set || is_set(ipv4_prefix.operation)) leaf_name_data.push_back(ipv4_prefix.get_name_leafdata());
    if (ipv6_prefix.is_set || is_set(ipv6_prefix.operation)) leaf_name_data.push_back(ipv6_prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsStatic::LocalLabels::LocalLabel::Prefix::Prefix_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & MplsStatic::LocalLabels::LocalLabel::Prefix::Prefix_::get_children()
{
    return children;
}

void MplsStatic::LocalLabels::LocalLabel::Prefix::Prefix_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix = value;
    }
    if(value_path == "ipv6-prefix")
    {
        ipv6_prefix = value;
    }
}

MplsStatic::LocalLabels::LocalLabel::Prefix::Prefix()
    :
    	prefix_length{YType::uint8, "prefix-length"}
    	,
    prefix(std::make_unique<MplsStatic::LocalLabels::LocalLabel::Prefix::Prefix_>())
{
    prefix->parent = this;
    children["prefix"] = prefix.get();

    yang_name = "prefix"; yang_parent_name = "local-label";
}

MplsStatic::LocalLabels::LocalLabel::Prefix::~Prefix()
{
}

bool MplsStatic::LocalLabels::LocalLabel::Prefix::has_data() const
{
    return prefix_length.is_set
	|| (prefix !=  nullptr && prefix->has_data());
}

bool MplsStatic::LocalLabels::LocalLabel::Prefix::has_operation() const
{
    return is_set(operation)
	|| is_set(prefix_length.operation)
	|| (prefix !=  nullptr && is_set(prefix->operation));
}

std::string MplsStatic::LocalLabels::LocalLabel::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";

    return path_buffer.str();

}

EntityPath MplsStatic::LocalLabels::LocalLabel::Prefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsStatic::LocalLabels::LocalLabel::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "prefix")
    {
        if(prefix != nullptr)
        {
            children["prefix"] = prefix.get();
        }
        else
        {
            prefix = std::make_unique<MplsStatic::LocalLabels::LocalLabel::Prefix::Prefix_>();
            prefix->parent = this;
            children["prefix"] = prefix.get();
        }
        return children.at("prefix");
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsStatic::LocalLabels::LocalLabel::Prefix::get_children()
{
    if(children.find("prefix") == children.end())
    {
        if(prefix != nullptr)
        {
            children["prefix"] = prefix.get();
        }
    }

    return children;
}

void MplsStatic::LocalLabels::LocalLabel::Prefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
}

MplsStatic::LocalLabels::LocalLabel::PathInfo::PathInfo()
    :
    	next_hop_interface_name{YType::str, "next-hop-interface-name"},
	 next_hop_ipv4_address{YType::str, "next-hop-ipv4-address"},
	 next_hop_ipv4_address_set{YType::boolean, "next-hop-ipv4-address-set"},
	 next_hop_label{YType::uint32, "next-hop-label"},
	 next_hop_label_type{YType::enumeration, "next-hop-label-type"},
	 path{YType::uint32, "path"},
	 type{YType::enumeration, "type"}
{
    yang_name = "path-info"; yang_parent_name = "local-label";
}

MplsStatic::LocalLabels::LocalLabel::PathInfo::~PathInfo()
{
}

bool MplsStatic::LocalLabels::LocalLabel::PathInfo::has_data() const
{
    return next_hop_interface_name.is_set
	|| next_hop_ipv4_address.is_set
	|| next_hop_ipv4_address_set.is_set
	|| next_hop_label.is_set
	|| next_hop_label_type.is_set
	|| path.is_set
	|| type.is_set;
}

bool MplsStatic::LocalLabels::LocalLabel::PathInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(next_hop_interface_name.operation)
	|| is_set(next_hop_ipv4_address.operation)
	|| is_set(next_hop_ipv4_address_set.operation)
	|| is_set(next_hop_label.operation)
	|| is_set(next_hop_label_type.operation)
	|| is_set(path.operation)
	|| is_set(type.operation);
}

std::string MplsStatic::LocalLabels::LocalLabel::PathInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-info";

    return path_buffer.str();

}

EntityPath MplsStatic::LocalLabels::LocalLabel::PathInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_interface_name.is_set || is_set(next_hop_interface_name.operation)) leaf_name_data.push_back(next_hop_interface_name.get_name_leafdata());
    if (next_hop_ipv4_address.is_set || is_set(next_hop_ipv4_address.operation)) leaf_name_data.push_back(next_hop_ipv4_address.get_name_leafdata());
    if (next_hop_ipv4_address_set.is_set || is_set(next_hop_ipv4_address_set.operation)) leaf_name_data.push_back(next_hop_ipv4_address_set.get_name_leafdata());
    if (next_hop_label.is_set || is_set(next_hop_label.operation)) leaf_name_data.push_back(next_hop_label.get_name_leafdata());
    if (next_hop_label_type.is_set || is_set(next_hop_label_type.operation)) leaf_name_data.push_back(next_hop_label_type.get_name_leafdata());
    if (path.is_set || is_set(path.operation)) leaf_name_data.push_back(path.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsStatic::LocalLabels::LocalLabel::PathInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & MplsStatic::LocalLabels::LocalLabel::PathInfo::get_children()
{
    return children;
}

void MplsStatic::LocalLabels::LocalLabel::PathInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "next-hop-interface-name")
    {
        next_hop_interface_name = value;
    }
    if(value_path == "next-hop-ipv4-address")
    {
        next_hop_ipv4_address = value;
    }
    if(value_path == "next-hop-ipv4-address-set")
    {
        next_hop_ipv4_address_set = value;
    }
    if(value_path == "next-hop-label")
    {
        next_hop_label = value;
    }
    if(value_path == "next-hop-label-type")
    {
        next_hop_label_type = value;
    }
    if(value_path == "path")
    {
        path = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

MplsStatic::LocalLabels::LocalLabel::LocalLabel()
    :
    	local_label_id{YType::uint32, "local-label-id"},
	 label{YType::uint32, "label"},
	 label_mode{YType::enumeration, "label-mode"},
	 label_status{YType::enumeration, "label-status"},
	 vrf_name{YType::str, "vrf-name"}
    	,
    prefix(std::make_unique<MplsStatic::LocalLabels::LocalLabel::Prefix>())
{
    prefix->parent = this;
    children["prefix"] = prefix.get();

    yang_name = "local-label"; yang_parent_name = "local-labels";
}

MplsStatic::LocalLabels::LocalLabel::~LocalLabel()
{
}

bool MplsStatic::LocalLabels::LocalLabel::has_data() const
{
    for (std::size_t index=0; index<path_info.size(); index++)
    {
        if(path_info[index]->has_data())
            return true;
    }
    return local_label_id.is_set
	|| label.is_set
	|| label_mode.is_set
	|| label_status.is_set
	|| vrf_name.is_set
	|| (prefix !=  nullptr && prefix->has_data());
}

bool MplsStatic::LocalLabels::LocalLabel::has_operation() const
{
    for (std::size_t index=0; index<path_info.size(); index++)
    {
        if(path_info[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(local_label_id.operation)
	|| is_set(label.operation)
	|| is_set(label_mode.operation)
	|| is_set(label_status.operation)
	|| is_set(vrf_name.operation)
	|| (prefix !=  nullptr && is_set(prefix->operation));
}

std::string MplsStatic::LocalLabels::LocalLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-label" <<"[local-label-id='" <<local_label_id.get() <<"']";

    return path_buffer.str();

}

EntityPath MplsStatic::LocalLabels::LocalLabel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-static-oper:mpls-static/local-labels/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_label_id.is_set || is_set(local_label_id.operation)) leaf_name_data.push_back(local_label_id.get_name_leafdata());
    if (label.is_set || is_set(label.operation)) leaf_name_data.push_back(label.get_name_leafdata());
    if (label_mode.is_set || is_set(label_mode.operation)) leaf_name_data.push_back(label_mode.get_name_leafdata());
    if (label_status.is_set || is_set(label_status.operation)) leaf_name_data.push_back(label_status.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsStatic::LocalLabels::LocalLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "path-info")
    {
        for(auto const & c : path_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<MplsStatic::LocalLabels::LocalLabel::PathInfo>();
        c->parent = this;
        path_info.push_back(std::move(c));
        children[segment_path] = path_info.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "prefix")
    {
        if(prefix != nullptr)
        {
            children["prefix"] = prefix.get();
        }
        else
        {
            prefix = std::make_unique<MplsStatic::LocalLabels::LocalLabel::Prefix>();
            prefix->parent = this;
            children["prefix"] = prefix.get();
        }
        return children.at("prefix");
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsStatic::LocalLabels::LocalLabel::get_children()
{
    for (auto const & c : path_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    if(children.find("prefix") == children.end())
    {
        if(prefix != nullptr)
        {
            children["prefix"] = prefix.get();
        }
    }

    return children;
}

void MplsStatic::LocalLabels::LocalLabel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "local-label-id")
    {
        local_label_id = value;
    }
    if(value_path == "label")
    {
        label = value;
    }
    if(value_path == "label-mode")
    {
        label_mode = value;
    }
    if(value_path == "label-status")
    {
        label_status = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

MplsStatic::LocalLabels::LocalLabels()
{
    yang_name = "local-labels"; yang_parent_name = "mpls-static";
}

MplsStatic::LocalLabels::~LocalLabels()
{
}

bool MplsStatic::LocalLabels::has_data() const
{
    for (std::size_t index=0; index<local_label.size(); index++)
    {
        if(local_label[index]->has_data())
            return true;
    }
    return false;
}

bool MplsStatic::LocalLabels::has_operation() const
{
    for (std::size_t index=0; index<local_label.size(); index++)
    {
        if(local_label[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsStatic::LocalLabels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-labels";

    return path_buffer.str();

}

EntityPath MplsStatic::LocalLabels::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-static-oper:mpls-static/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsStatic::LocalLabels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "local-label")
    {
        for(auto const & c : local_label)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<MplsStatic::LocalLabels::LocalLabel>();
        c->parent = this;
        local_label.push_back(std::move(c));
        children[segment_path] = local_label.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsStatic::LocalLabels::get_children()
{
    for (auto const & c : local_label)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void MplsStatic::LocalLabels::set_value(const std::string & value_path, std::string value)
{
}

MplsStatic::MplsStatic()
    :
    local_labels(std::make_unique<MplsStatic::LocalLabels>())
	,summary(std::make_unique<MplsStatic::Summary>())
	,vrfs(std::make_unique<MplsStatic::Vrfs>())
{
    local_labels->parent = this;
    children["local-labels"] = local_labels.get();

    summary->parent = this;
    children["summary"] = summary.get();

    vrfs->parent = this;
    children["vrfs"] = vrfs.get();

    yang_name = "mpls-static"; yang_parent_name = "Cisco-IOS-XR-mpls-static-oper";
}

MplsStatic::~MplsStatic()
{
}

bool MplsStatic::has_data() const
{
    return (local_labels !=  nullptr && local_labels->has_data())
	|| (summary !=  nullptr && summary->has_data())
	|| (vrfs !=  nullptr && vrfs->has_data());
}

bool MplsStatic::has_operation() const
{
    return is_set(operation)
	|| (local_labels !=  nullptr && is_set(local_labels->operation))
	|| (summary !=  nullptr && is_set(summary->operation))
	|| (vrfs !=  nullptr && is_set(vrfs->operation));
}

std::string MplsStatic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-static-oper:mpls-static";

    return path_buffer.str();

}

EntityPath MplsStatic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsStatic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "local-labels")
    {
        if(local_labels != nullptr)
        {
            children["local-labels"] = local_labels.get();
        }
        else
        {
            local_labels = std::make_unique<MplsStatic::LocalLabels>();
            local_labels->parent = this;
            children["local-labels"] = local_labels.get();
        }
        return children.at("local-labels");
    }

    if(child_yang_name == "summary")
    {
        if(summary != nullptr)
        {
            children["summary"] = summary.get();
        }
        else
        {
            summary = std::make_unique<MplsStatic::Summary>();
            summary->parent = this;
            children["summary"] = summary.get();
        }
        return children.at("summary");
    }

    if(child_yang_name == "vrfs")
    {
        if(vrfs != nullptr)
        {
            children["vrfs"] = vrfs.get();
        }
        else
        {
            vrfs = std::make_unique<MplsStatic::Vrfs>();
            vrfs->parent = this;
            children["vrfs"] = vrfs.get();
        }
        return children.at("vrfs");
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsStatic::get_children()
{
    if(children.find("local-labels") == children.end())
    {
        if(local_labels != nullptr)
        {
            children["local-labels"] = local_labels.get();
        }
    }

    if(children.find("summary") == children.end())
    {
        if(summary != nullptr)
        {
            children["summary"] = summary.get();
        }
    }

    if(children.find("vrfs") == children.end())
    {
        if(vrfs != nullptr)
        {
            children["vrfs"] = vrfs.get();
        }
    }

    return children;
}

void MplsStatic::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> MplsStatic::clone_ptr()
{
    return std::make_unique<MplsStatic>();
}

const Enum::Value MgmtMplsStaticLabelStatusEnum::not_created {0, "not-created"};
const Enum::Value MgmtMplsStaticLabelStatusEnum::vrf_down {1, "vrf-down"};
const Enum::Value MgmtMplsStaticLabelStatusEnum::rewrite_vrf_down {2, "rewrite-vrf-down"};
const Enum::Value MgmtMplsStaticLabelStatusEnum::lsd_disconnected {3, "lsd-disconnected"};
const Enum::Value MgmtMplsStaticLabelStatusEnum::lsd_failed {4, "lsd-failed"};
const Enum::Value MgmtMplsStaticLabelStatusEnum::wait_for_lsd_reply {5, "wait-for-lsd-reply"};
const Enum::Value MgmtMplsStaticLabelStatusEnum::label_created {6, "label-created"};
const Enum::Value MgmtMplsStaticLabelStatusEnum::label_create_failed {7, "label-create-failed"};
const Enum::Value MgmtMplsStaticLabelStatusEnum::label_rewrite_failed {8, "label-rewrite-failed"};
const Enum::Value MgmtMplsStaticLabelStatusEnum::rewrite_next_hop_interface_missing {9, "rewrite-next-hop-interface-missing"};
const Enum::Value MgmtMplsStaticLabelStatusEnum::label_discrepancy {10, "label-discrepancy"};
const Enum::Value MgmtMplsStaticLabelStatusEnum::rewrite_discrepancy {11, "rewrite-discrepancy"};
const Enum::Value MgmtMplsStaticLabelStatusEnum::label_status_unknown {12, "label-status-unknown"};

const Enum::Value MgmtStaticPathEnum::cross_connect_path {0, "cross-connect-path"};
const Enum::Value MgmtStaticPathEnum::pop_lookup_path {1, "pop-lookup-path"};

const Enum::Value MgmtStaticNhLblEnum::out_label {0, "out-label"};
const Enum::Value MgmtStaticNhLblEnum::out_pop {1, "out-pop"};
const Enum::Value MgmtStaticNhLblEnum::out_explicit_null {2, "out-explicit-null"};

const Enum::Value MgmtStaticAddrEnum::ipv4 {0, "ipv4"};
const Enum::Value MgmtStaticAddrEnum::ipv6 {1, "ipv6"};

const Enum::Value MgmtMplsStaticLabelModeEnum::none {0, "none"};
const Enum::Value MgmtMplsStaticLabelModeEnum::per_prefix {1, "per-prefix"};
const Enum::Value MgmtMplsStaticLabelModeEnum::per_vrf {2, "per-vrf"};
const Enum::Value MgmtMplsStaticLabelModeEnum::cross_connect {3, "cross-connect"};


}
}

