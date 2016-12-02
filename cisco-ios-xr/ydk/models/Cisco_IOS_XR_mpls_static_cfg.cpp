
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_mpls_static_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_mpls_static_cfg {

MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::InLabel::InLabel()
    :
    	in_label_value{YType::uint32, "in-label-value"},
	 label_mode{YType::enumeration, "label-mode"},
	 prefix{YType::str, "prefix"},
	 prefix_length{YType::int32, "prefix-length"}
{
    yang_name = "in-label"; yang_parent_name = "label-switched-path";
}

MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::InLabel::~InLabel()
{
}

bool MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::InLabel::has_data() const
{
    return in_label_value.is_set
	|| label_mode.is_set
	|| prefix.is_set
	|| prefix_length.is_set;
}

bool MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::InLabel::has_operation() const
{
    return is_set(operation)
	|| is_set(in_label_value.operation)
	|| is_set(label_mode.operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation);
}

std::string MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::InLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-label";

    return path_buffer.str();

}

EntityPath MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::InLabel::get_entity_path(Entity* ancestor) const
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

    if (in_label_value.is_set || is_set(in_label_value.operation)) leaf_name_data.push_back(in_label_value.get_name_leafdata());
    if (label_mode.is_set || is_set(label_mode.operation)) leaf_name_data.push_back(label_mode.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::InLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::InLabel::get_children()
{
    return children;
}

void MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::InLabel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "in-label-value")
    {
        in_label_value = value;
    }
    if(value_path == "label-mode")
    {
        label_mode = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
}

MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::Paths::Path::Path()
    :
    	path_id{YType::uint32, "path-id"},
	 interface_name{YType::str, "interface-name"},
	 label_type{YType::enumeration, "label-type"},
	 next_hop_address{YType::str, "next-hop-address"},
	 next_hop_label{YType::uint32, "next-hop-label"},
	 path_type{YType::enumeration, "path-type"}
{
    yang_name = "path"; yang_parent_name = "paths";
}

MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::Paths::Path::~Path()
{
}

bool MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::Paths::Path::has_data() const
{
    return path_id.is_set
	|| interface_name.is_set
	|| label_type.is_set
	|| next_hop_address.is_set
	|| next_hop_label.is_set
	|| path_type.is_set;
}

bool MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::Paths::Path::has_operation() const
{
    return is_set(operation)
	|| is_set(path_id.operation)
	|| is_set(interface_name.operation)
	|| is_set(label_type.operation)
	|| is_set(next_hop_address.operation)
	|| is_set(next_hop_label.operation)
	|| is_set(path_type.operation);
}

std::string MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::Paths::Path::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path" <<"[path-id='" <<path_id.get() <<"']";

    return path_buffer.str();

}

EntityPath MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::Paths::Path::get_entity_path(Entity* ancestor) const
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

    if (path_id.is_set || is_set(path_id.operation)) leaf_name_data.push_back(path_id.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (label_type.is_set || is_set(label_type.operation)) leaf_name_data.push_back(label_type.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (next_hop_label.is_set || is_set(next_hop_label.operation)) leaf_name_data.push_back(next_hop_label.get_name_leafdata());
    if (path_type.is_set || is_set(path_type.operation)) leaf_name_data.push_back(path_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::Paths::Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::Paths::Path::get_children()
{
    return children;
}

void MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::Paths::Path::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "path-id")
    {
        path_id = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "label-type")
    {
        label_type = value;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "next-hop-label")
    {
        next_hop_label = value;
    }
    if(value_path == "path-type")
    {
        path_type = value;
    }
}

MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::Paths::Paths()
{
    yang_name = "paths"; yang_parent_name = "label-switched-path";
}

MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::Paths::~Paths()
{
}

bool MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::Paths::has_data() const
{
    for (std::size_t index=0; index<path.size(); index++)
    {
        if(path[index]->has_data())
            return true;
    }
    return false;
}

bool MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::Paths::has_operation() const
{
    for (std::size_t index=0; index<path.size(); index++)
    {
        if(path[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::Paths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "paths";

    return path_buffer.str();

}

EntityPath MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::Paths::get_entity_path(Entity* ancestor) const
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

Entity* MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::Paths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "path")
    {
        for(auto const & c : path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::Paths::Path>();
        c->parent = this;
        path.push_back(std::move(c));
        children[segment_path] = path.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::Paths::get_children()
{
    for (auto const & c : path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::Paths::set_value(const std::string & value_path, std::string value)
{
}

MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::LabelSwitchedPath()
    :
    	lsp_name{YType::str, "lsp-name"},
	 enable{YType::empty, "enable"}
    	,
    in_label(std::make_unique<MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::InLabel>())
	,paths(std::make_unique<MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::Paths>())
{
    in_label->parent = this;
    children["in-label"] = in_label.get();

    paths->parent = this;
    children["paths"] = paths.get();

    yang_name = "label-switched-path"; yang_parent_name = "label-switched-paths";
}

MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::~LabelSwitchedPath()
{
}

bool MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::has_data() const
{
    return lsp_name.is_set
	|| enable.is_set
	|| (in_label !=  nullptr && in_label->has_data())
	|| (paths !=  nullptr && paths->has_data());
}

bool MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::has_operation() const
{
    return is_set(operation)
	|| is_set(lsp_name.operation)
	|| is_set(enable.operation)
	|| (in_label !=  nullptr && is_set(in_label->operation))
	|| (paths !=  nullptr && is_set(paths->operation));
}

std::string MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-switched-path" <<"[lsp-name='" <<lsp_name.get() <<"']";

    return path_buffer.str();

}

EntityPath MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::get_entity_path(Entity* ancestor) const
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
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "in-label")
    {
        if(in_label != nullptr)
        {
            children["in-label"] = in_label.get();
        }
        else
        {
            in_label = std::make_unique<MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::InLabel>();
            in_label->parent = this;
            children["in-label"] = in_label.get();
        }
        return children.at("in-label");
    }

    if(child_yang_name == "paths")
    {
        if(paths != nullptr)
        {
            children["paths"] = paths.get();
        }
        else
        {
            paths = std::make_unique<MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::Paths>();
            paths->parent = this;
            children["paths"] = paths.get();
        }
        return children.at("paths");
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::get_children()
{
    if(children.find("in-label") == children.end())
    {
        if(in_label != nullptr)
        {
            children["in-label"] = in_label.get();
        }
    }

    if(children.find("paths") == children.end())
    {
        if(paths != nullptr)
        {
            children["paths"] = paths.get();
        }
    }

    return children;
}

void MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lsp-name")
    {
        lsp_name = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
}

MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPaths()
{
    yang_name = "label-switched-paths"; yang_parent_name = "vrf";
}

MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::~LabelSwitchedPaths()
{
}

bool MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::has_data() const
{
    for (std::size_t index=0; index<label_switched_path.size(); index++)
    {
        if(label_switched_path[index]->has_data())
            return true;
    }
    return false;
}

bool MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::has_operation() const
{
    for (std::size_t index=0; index<label_switched_path.size(); index++)
    {
        if(label_switched_path[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-switched-paths";

    return path_buffer.str();

}

EntityPath MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::get_entity_path(Entity* ancestor) const
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

Entity* MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "label-switched-path")
    {
        for(auto const & c : label_switched_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath>();
        c->parent = this;
        label_switched_path.push_back(std::move(c));
        children[segment_path] = label_switched_path.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::get_children()
{
    for (auto const & c : label_switched_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::set_value(const std::string & value_path, std::string value)
{
}

MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::LabelType::LabelType()
    :
    	label_mode{YType::enumeration, "label-mode"},
	 prefix{YType::str, "prefix"},
	 prefix_length{YType::int32, "prefix-length"}
{
    yang_name = "label-type"; yang_parent_name = "local-label";
}

MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::LabelType::~LabelType()
{
}

bool MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::LabelType::has_data() const
{
    return label_mode.is_set
	|| prefix.is_set
	|| prefix_length.is_set;
}

bool MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::LabelType::has_operation() const
{
    return is_set(operation)
	|| is_set(label_mode.operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation);
}

std::string MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::LabelType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-type";

    return path_buffer.str();

}

EntityPath MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::LabelType::get_entity_path(Entity* ancestor) const
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

    if (label_mode.is_set || is_set(label_mode.operation)) leaf_name_data.push_back(label_mode.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::LabelType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::LabelType::get_children()
{
    return children;
}

void MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::LabelType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "label-mode")
    {
        label_mode = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
}

MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::Paths::Path::Path()
    :
    	path_id{YType::uint32, "path-id"},
	 interface_name{YType::str, "interface-name"},
	 label_type{YType::enumeration, "label-type"},
	 next_hop_address{YType::str, "next-hop-address"},
	 next_hop_label{YType::uint32, "next-hop-label"},
	 path_type{YType::enumeration, "path-type"}
{
    yang_name = "path"; yang_parent_name = "paths";
}

MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::Paths::Path::~Path()
{
}

bool MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::Paths::Path::has_data() const
{
    return path_id.is_set
	|| interface_name.is_set
	|| label_type.is_set
	|| next_hop_address.is_set
	|| next_hop_label.is_set
	|| path_type.is_set;
}

bool MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::Paths::Path::has_operation() const
{
    return is_set(operation)
	|| is_set(path_id.operation)
	|| is_set(interface_name.operation)
	|| is_set(label_type.operation)
	|| is_set(next_hop_address.operation)
	|| is_set(next_hop_label.operation)
	|| is_set(path_type.operation);
}

std::string MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::Paths::Path::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path" <<"[path-id='" <<path_id.get() <<"']";

    return path_buffer.str();

}

EntityPath MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::Paths::Path::get_entity_path(Entity* ancestor) const
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

    if (path_id.is_set || is_set(path_id.operation)) leaf_name_data.push_back(path_id.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (label_type.is_set || is_set(label_type.operation)) leaf_name_data.push_back(label_type.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (next_hop_label.is_set || is_set(next_hop_label.operation)) leaf_name_data.push_back(next_hop_label.get_name_leafdata());
    if (path_type.is_set || is_set(path_type.operation)) leaf_name_data.push_back(path_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::Paths::Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::Paths::Path::get_children()
{
    return children;
}

void MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::Paths::Path::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "path-id")
    {
        path_id = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "label-type")
    {
        label_type = value;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "next-hop-label")
    {
        next_hop_label = value;
    }
    if(value_path == "path-type")
    {
        path_type = value;
    }
}

MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::Paths::Paths()
{
    yang_name = "paths"; yang_parent_name = "local-label";
}

MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::Paths::~Paths()
{
}

bool MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::Paths::has_data() const
{
    for (std::size_t index=0; index<path.size(); index++)
    {
        if(path[index]->has_data())
            return true;
    }
    return false;
}

bool MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::Paths::has_operation() const
{
    for (std::size_t index=0; index<path.size(); index++)
    {
        if(path[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::Paths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "paths";

    return path_buffer.str();

}

EntityPath MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::Paths::get_entity_path(Entity* ancestor) const
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

Entity* MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::Paths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "path")
    {
        for(auto const & c : path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::Paths::Path>();
        c->parent = this;
        path.push_back(std::move(c));
        children[segment_path] = path.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::Paths::get_children()
{
    for (auto const & c : path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::Paths::set_value(const std::string & value_path, std::string value)
{
}

MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::LocalLabel()
    :
    	local_label_id{YType::uint32, "local-label-id"}
    	,
    label_type(std::make_unique<MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::LabelType>())
	,paths(std::make_unique<MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::Paths>())
{
    label_type->parent = this;
    children["label-type"] = label_type.get();

    paths->parent = this;
    children["paths"] = paths.get();

    yang_name = "local-label"; yang_parent_name = "local-labels";
}

MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::~LocalLabel()
{
}

bool MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::has_data() const
{
    return local_label_id.is_set
	|| (label_type !=  nullptr && label_type->has_data())
	|| (paths !=  nullptr && paths->has_data());
}

bool MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::has_operation() const
{
    return is_set(operation)
	|| is_set(local_label_id.operation)
	|| (label_type !=  nullptr && is_set(label_type->operation))
	|| (paths !=  nullptr && is_set(paths->operation));
}

std::string MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-label" <<"[local-label-id='" <<local_label_id.get() <<"']";

    return path_buffer.str();

}

EntityPath MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::get_entity_path(Entity* ancestor) const
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


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "label-type")
    {
        if(label_type != nullptr)
        {
            children["label-type"] = label_type.get();
        }
        else
        {
            label_type = std::make_unique<MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::LabelType>();
            label_type->parent = this;
            children["label-type"] = label_type.get();
        }
        return children.at("label-type");
    }

    if(child_yang_name == "paths")
    {
        if(paths != nullptr)
        {
            children["paths"] = paths.get();
        }
        else
        {
            paths = std::make_unique<MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::Paths>();
            paths->parent = this;
            children["paths"] = paths.get();
        }
        return children.at("paths");
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::get_children()
{
    if(children.find("label-type") == children.end())
    {
        if(label_type != nullptr)
        {
            children["label-type"] = label_type.get();
        }
    }

    if(children.find("paths") == children.end())
    {
        if(paths != nullptr)
        {
            children["paths"] = paths.get();
        }
    }

    return children;
}

void MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "local-label-id")
    {
        local_label_id = value;
    }
}

MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabels()
{
    yang_name = "local-labels"; yang_parent_name = "top-label-hash";
}

MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::~LocalLabels()
{
}

bool MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::has_data() const
{
    for (std::size_t index=0; index<local_label.size(); index++)
    {
        if(local_label[index]->has_data())
            return true;
    }
    return false;
}

bool MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::has_operation() const
{
    for (std::size_t index=0; index<local_label.size(); index++)
    {
        if(local_label[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-labels";

    return path_buffer.str();

}

EntityPath MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::get_entity_path(Entity* ancestor) const
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

Entity* MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_unique<MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel>();
        c->parent = this;
        local_label.push_back(std::move(c));
        children[segment_path] = local_label.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::get_children()
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

void MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::set_value(const std::string & value_path, std::string value)
{
}

MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::TopLabelHash()
    :
    local_labels(std::make_unique<MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels>())
{
    local_labels->parent = this;
    children["local-labels"] = local_labels.get();

    yang_name = "top-label-hash"; yang_parent_name = "af";
}

MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::~TopLabelHash()
{
}

bool MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::has_data() const
{
    return (local_labels !=  nullptr && local_labels->has_data());
}

bool MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::has_operation() const
{
    return is_set(operation)
	|| (local_labels !=  nullptr && is_set(local_labels->operation));
}

std::string MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "top-label-hash";

    return path_buffer.str();

}

EntityPath MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::get_entity_path(Entity* ancestor) const
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

Entity* MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            local_labels = std::make_unique<MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels>();
            local_labels->parent = this;
            children["local-labels"] = local_labels.get();
        }
        return children.at("local-labels");
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::get_children()
{
    if(children.find("local-labels") == children.end())
    {
        if(local_labels != nullptr)
        {
            children["local-labels"] = local_labels.get();
        }
    }

    return children;
}

void MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::set_value(const std::string & value_path, std::string value)
{
}

MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::LocalLabel::LabelType::LabelType()
    :
    	label_mode{YType::enumeration, "label-mode"},
	 prefix{YType::str, "prefix"},
	 prefix_length{YType::int32, "prefix-length"}
{
    yang_name = "label-type"; yang_parent_name = "local-label";
}

MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::LocalLabel::LabelType::~LabelType()
{
}

bool MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::LocalLabel::LabelType::has_data() const
{
    return label_mode.is_set
	|| prefix.is_set
	|| prefix_length.is_set;
}

bool MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::LocalLabel::LabelType::has_operation() const
{
    return is_set(operation)
	|| is_set(label_mode.operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation);
}

std::string MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::LocalLabel::LabelType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-type";

    return path_buffer.str();

}

EntityPath MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::LocalLabel::LabelType::get_entity_path(Entity* ancestor) const
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

    if (label_mode.is_set || is_set(label_mode.operation)) leaf_name_data.push_back(label_mode.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::LocalLabel::LabelType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::LocalLabel::LabelType::get_children()
{
    return children;
}

void MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::LocalLabel::LabelType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "label-mode")
    {
        label_mode = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
}

MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::LocalLabel::Paths::Path::Path()
    :
    	path_id{YType::uint32, "path-id"},
	 interface_name{YType::str, "interface-name"},
	 label_type{YType::enumeration, "label-type"},
	 next_hop_address{YType::str, "next-hop-address"},
	 next_hop_label{YType::uint32, "next-hop-label"},
	 path_type{YType::enumeration, "path-type"}
{
    yang_name = "path"; yang_parent_name = "paths";
}

MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::LocalLabel::Paths::Path::~Path()
{
}

bool MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::LocalLabel::Paths::Path::has_data() const
{
    return path_id.is_set
	|| interface_name.is_set
	|| label_type.is_set
	|| next_hop_address.is_set
	|| next_hop_label.is_set
	|| path_type.is_set;
}

bool MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::LocalLabel::Paths::Path::has_operation() const
{
    return is_set(operation)
	|| is_set(path_id.operation)
	|| is_set(interface_name.operation)
	|| is_set(label_type.operation)
	|| is_set(next_hop_address.operation)
	|| is_set(next_hop_label.operation)
	|| is_set(path_type.operation);
}

std::string MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::LocalLabel::Paths::Path::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path" <<"[path-id='" <<path_id.get() <<"']";

    return path_buffer.str();

}

EntityPath MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::LocalLabel::Paths::Path::get_entity_path(Entity* ancestor) const
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

    if (path_id.is_set || is_set(path_id.operation)) leaf_name_data.push_back(path_id.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (label_type.is_set || is_set(label_type.operation)) leaf_name_data.push_back(label_type.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (next_hop_label.is_set || is_set(next_hop_label.operation)) leaf_name_data.push_back(next_hop_label.get_name_leafdata());
    if (path_type.is_set || is_set(path_type.operation)) leaf_name_data.push_back(path_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::LocalLabel::Paths::Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::LocalLabel::Paths::Path::get_children()
{
    return children;
}

void MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::LocalLabel::Paths::Path::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "path-id")
    {
        path_id = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "label-type")
    {
        label_type = value;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "next-hop-label")
    {
        next_hop_label = value;
    }
    if(value_path == "path-type")
    {
        path_type = value;
    }
}

MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::LocalLabel::Paths::Paths()
{
    yang_name = "paths"; yang_parent_name = "local-label";
}

MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::LocalLabel::Paths::~Paths()
{
}

bool MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::LocalLabel::Paths::has_data() const
{
    for (std::size_t index=0; index<path.size(); index++)
    {
        if(path[index]->has_data())
            return true;
    }
    return false;
}

bool MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::LocalLabel::Paths::has_operation() const
{
    for (std::size_t index=0; index<path.size(); index++)
    {
        if(path[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::LocalLabel::Paths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "paths";

    return path_buffer.str();

}

EntityPath MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::LocalLabel::Paths::get_entity_path(Entity* ancestor) const
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

Entity* MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::LocalLabel::Paths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "path")
    {
        for(auto const & c : path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::LocalLabel::Paths::Path>();
        c->parent = this;
        path.push_back(std::move(c));
        children[segment_path] = path.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::LocalLabel::Paths::get_children()
{
    for (auto const & c : path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::LocalLabel::Paths::set_value(const std::string & value_path, std::string value)
{
}

MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::LocalLabel::LocalLabel()
    :
    	local_label_id{YType::uint32, "local-label-id"}
    	,
    label_type(std::make_unique<MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::LocalLabel::LabelType>())
	,paths(std::make_unique<MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::LocalLabel::Paths>())
{
    label_type->parent = this;
    children["label-type"] = label_type.get();

    paths->parent = this;
    children["paths"] = paths.get();

    yang_name = "local-label"; yang_parent_name = "local-labels";
}

MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::LocalLabel::~LocalLabel()
{
}

bool MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::LocalLabel::has_data() const
{
    return local_label_id.is_set
	|| (label_type !=  nullptr && label_type->has_data())
	|| (paths !=  nullptr && paths->has_data());
}

bool MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::LocalLabel::has_operation() const
{
    return is_set(operation)
	|| is_set(local_label_id.operation)
	|| (label_type !=  nullptr && is_set(label_type->operation))
	|| (paths !=  nullptr && is_set(paths->operation));
}

std::string MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::LocalLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-label" <<"[local-label-id='" <<local_label_id.get() <<"']";

    return path_buffer.str();

}

EntityPath MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::LocalLabel::get_entity_path(Entity* ancestor) const
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


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::LocalLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "label-type")
    {
        if(label_type != nullptr)
        {
            children["label-type"] = label_type.get();
        }
        else
        {
            label_type = std::make_unique<MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::LocalLabel::LabelType>();
            label_type->parent = this;
            children["label-type"] = label_type.get();
        }
        return children.at("label-type");
    }

    if(child_yang_name == "paths")
    {
        if(paths != nullptr)
        {
            children["paths"] = paths.get();
        }
        else
        {
            paths = std::make_unique<MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::LocalLabel::Paths>();
            paths->parent = this;
            children["paths"] = paths.get();
        }
        return children.at("paths");
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::LocalLabel::get_children()
{
    if(children.find("label-type") == children.end())
    {
        if(label_type != nullptr)
        {
            children["label-type"] = label_type.get();
        }
    }

    if(children.find("paths") == children.end())
    {
        if(paths != nullptr)
        {
            children["paths"] = paths.get();
        }
    }

    return children;
}

void MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::LocalLabel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "local-label-id")
    {
        local_label_id = value;
    }
}

MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::LocalLabels()
{
    yang_name = "local-labels"; yang_parent_name = "af";
}

MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::~LocalLabels()
{
}

bool MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::has_data() const
{
    for (std::size_t index=0; index<local_label.size(); index++)
    {
        if(local_label[index]->has_data())
            return true;
    }
    return false;
}

bool MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::has_operation() const
{
    for (std::size_t index=0; index<local_label.size(); index++)
    {
        if(local_label[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-labels";

    return path_buffer.str();

}

EntityPath MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::get_entity_path(Entity* ancestor) const
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

Entity* MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_unique<MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::LocalLabel>();
        c->parent = this;
        local_label.push_back(std::move(c));
        children[segment_path] = local_label.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::get_children()
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

void MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::set_value(const std::string & value_path, std::string value)
{
}

MplsStatic::Vrfs::Vrf::Afs::Af::Af()
    :
    	afi{YType::enumeration, "afi"},
	 enable{YType::empty, "enable"}
    	,
    local_labels(std::make_unique<MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels>())
	,top_label_hash(std::make_unique<MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash>())
{
    local_labels->parent = this;
    children["local-labels"] = local_labels.get();

    top_label_hash->parent = this;
    children["top-label-hash"] = top_label_hash.get();

    yang_name = "af"; yang_parent_name = "afs";
}

MplsStatic::Vrfs::Vrf::Afs::Af::~Af()
{
}

bool MplsStatic::Vrfs::Vrf::Afs::Af::has_data() const
{
    return afi.is_set
	|| enable.is_set
	|| (local_labels !=  nullptr && local_labels->has_data())
	|| (top_label_hash !=  nullptr && top_label_hash->has_data());
}

bool MplsStatic::Vrfs::Vrf::Afs::Af::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(enable.operation)
	|| (local_labels !=  nullptr && is_set(local_labels->operation))
	|| (top_label_hash !=  nullptr && is_set(top_label_hash->operation));
}

std::string MplsStatic::Vrfs::Vrf::Afs::Af::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af" <<"[afi='" <<afi.get() <<"']";

    return path_buffer.str();

}

EntityPath MplsStatic::Vrfs::Vrf::Afs::Af::get_entity_path(Entity* ancestor) const
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

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsStatic::Vrfs::Vrf::Afs::Af::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            local_labels = std::make_unique<MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels>();
            local_labels->parent = this;
            children["local-labels"] = local_labels.get();
        }
        return children.at("local-labels");
    }

    if(child_yang_name == "top-label-hash")
    {
        if(top_label_hash != nullptr)
        {
            children["top-label-hash"] = top_label_hash.get();
        }
        else
        {
            top_label_hash = std::make_unique<MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash>();
            top_label_hash->parent = this;
            children["top-label-hash"] = top_label_hash.get();
        }
        return children.at("top-label-hash");
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsStatic::Vrfs::Vrf::Afs::Af::get_children()
{
    if(children.find("local-labels") == children.end())
    {
        if(local_labels != nullptr)
        {
            children["local-labels"] = local_labels.get();
        }
    }

    if(children.find("top-label-hash") == children.end())
    {
        if(top_label_hash != nullptr)
        {
            children["top-label-hash"] = top_label_hash.get();
        }
    }

    return children;
}

void MplsStatic::Vrfs::Vrf::Afs::Af::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
}

MplsStatic::Vrfs::Vrf::Afs::Afs()
{
    yang_name = "afs"; yang_parent_name = "vrf";
}

MplsStatic::Vrfs::Vrf::Afs::~Afs()
{
}

bool MplsStatic::Vrfs::Vrf::Afs::has_data() const
{
    for (std::size_t index=0; index<af.size(); index++)
    {
        if(af[index]->has_data())
            return true;
    }
    return false;
}

bool MplsStatic::Vrfs::Vrf::Afs::has_operation() const
{
    for (std::size_t index=0; index<af.size(); index++)
    {
        if(af[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsStatic::Vrfs::Vrf::Afs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "afs";

    return path_buffer.str();

}

EntityPath MplsStatic::Vrfs::Vrf::Afs::get_entity_path(Entity* ancestor) const
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

Entity* MplsStatic::Vrfs::Vrf::Afs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "af")
    {
        for(auto const & c : af)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<MplsStatic::Vrfs::Vrf::Afs::Af>();
        c->parent = this;
        af.push_back(std::move(c));
        children[segment_path] = af.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsStatic::Vrfs::Vrf::Afs::get_children()
{
    for (auto const & c : af)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void MplsStatic::Vrfs::Vrf::Afs::set_value(const std::string & value_path, std::string value)
{
}

MplsStatic::Vrfs::Vrf::Vrf()
    :
    	vrf_name{YType::str, "vrf-name"},
	 enable{YType::empty, "enable"}
    	,
    afs(std::make_unique<MplsStatic::Vrfs::Vrf::Afs>())
	,label_switched_paths(std::make_unique<MplsStatic::Vrfs::Vrf::LabelSwitchedPaths>())
{
    afs->parent = this;
    children["afs"] = afs.get();

    label_switched_paths->parent = this;
    children["label-switched-paths"] = label_switched_paths.get();

    yang_name = "vrf"; yang_parent_name = "vrfs";
}

MplsStatic::Vrfs::Vrf::~Vrf()
{
}

bool MplsStatic::Vrfs::Vrf::has_data() const
{
    return vrf_name.is_set
	|| enable.is_set
	|| (afs !=  nullptr && afs->has_data())
	|| (label_switched_paths !=  nullptr && label_switched_paths->has_data());
}

bool MplsStatic::Vrfs::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_name.operation)
	|| is_set(enable.operation)
	|| (afs !=  nullptr && is_set(afs->operation))
	|| (label_switched_paths !=  nullptr && is_set(label_switched_paths->operation));
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
        path_buffer << "Cisco-IOS-XR-mpls-static-cfg:mpls-static/vrfs/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


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

    if(child_yang_name == "afs")
    {
        if(afs != nullptr)
        {
            children["afs"] = afs.get();
        }
        else
        {
            afs = std::make_unique<MplsStatic::Vrfs::Vrf::Afs>();
            afs->parent = this;
            children["afs"] = afs.get();
        }
        return children.at("afs");
    }

    if(child_yang_name == "label-switched-paths")
    {
        if(label_switched_paths != nullptr)
        {
            children["label-switched-paths"] = label_switched_paths.get();
        }
        else
        {
            label_switched_paths = std::make_unique<MplsStatic::Vrfs::Vrf::LabelSwitchedPaths>();
            label_switched_paths->parent = this;
            children["label-switched-paths"] = label_switched_paths.get();
        }
        return children.at("label-switched-paths");
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsStatic::Vrfs::Vrf::get_children()
{
    if(children.find("afs") == children.end())
    {
        if(afs != nullptr)
        {
            children["afs"] = afs.get();
        }
    }

    if(children.find("label-switched-paths") == children.end())
    {
        if(label_switched_paths != nullptr)
        {
            children["label-switched-paths"] = label_switched_paths.get();
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
    if(value_path == "enable")
    {
        enable = value;
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
        path_buffer << "Cisco-IOS-XR-mpls-static-cfg:mpls-static/" << get_segment_path();
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

MplsStatic::Interfaces::Interface::Interface()
    :
    	interface_name{YType::str, "interface-name"}
{
    yang_name = "interface"; yang_parent_name = "interfaces";
}

MplsStatic::Interfaces::Interface::~Interface()
{
}

bool MplsStatic::Interfaces::Interface::has_data() const
{
    return interface_name.is_set;
}

bool MplsStatic::Interfaces::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation);
}

std::string MplsStatic::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name.get() <<"']";

    return path_buffer.str();

}

EntityPath MplsStatic::Interfaces::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-static-cfg:mpls-static/interfaces/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsStatic::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & MplsStatic::Interfaces::Interface::get_children()
{
    return children;
}

void MplsStatic::Interfaces::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

MplsStatic::Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "mpls-static";
}

MplsStatic::Interfaces::~Interfaces()
{
}

bool MplsStatic::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool MplsStatic::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsStatic::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

EntityPath MplsStatic::Interfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-static-cfg:mpls-static/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsStatic::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<MplsStatic::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(std::move(c));
        children[segment_path] = interface.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsStatic::Interfaces::get_children()
{
    for (auto const & c : interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void MplsStatic::Interfaces::set_value(const std::string & value_path, std::string value)
{
}

MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::InLabel::InLabel()
    :
    	in_label_value{YType::uint32, "in-label-value"},
	 label_mode{YType::enumeration, "label-mode"},
	 prefix{YType::str, "prefix"},
	 prefix_length{YType::int32, "prefix-length"}
{
    yang_name = "in-label"; yang_parent_name = "label-switched-path";
}

MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::InLabel::~InLabel()
{
}

bool MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::InLabel::has_data() const
{
    return in_label_value.is_set
	|| label_mode.is_set
	|| prefix.is_set
	|| prefix_length.is_set;
}

bool MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::InLabel::has_operation() const
{
    return is_set(operation)
	|| is_set(in_label_value.operation)
	|| is_set(label_mode.operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation);
}

std::string MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::InLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-label";

    return path_buffer.str();

}

EntityPath MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::InLabel::get_entity_path(Entity* ancestor) const
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

    if (in_label_value.is_set || is_set(in_label_value.operation)) leaf_name_data.push_back(in_label_value.get_name_leafdata());
    if (label_mode.is_set || is_set(label_mode.operation)) leaf_name_data.push_back(label_mode.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::InLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::InLabel::get_children()
{
    return children;
}

void MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::InLabel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "in-label-value")
    {
        in_label_value = value;
    }
    if(value_path == "label-mode")
    {
        label_mode = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
}

MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::Paths::Path::Path()
    :
    	path_id{YType::uint32, "path-id"},
	 interface_name{YType::str, "interface-name"},
	 label_type{YType::enumeration, "label-type"},
	 next_hop_address{YType::str, "next-hop-address"},
	 next_hop_label{YType::uint32, "next-hop-label"},
	 path_type{YType::enumeration, "path-type"}
{
    yang_name = "path"; yang_parent_name = "paths";
}

MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::Paths::Path::~Path()
{
}

bool MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::Paths::Path::has_data() const
{
    return path_id.is_set
	|| interface_name.is_set
	|| label_type.is_set
	|| next_hop_address.is_set
	|| next_hop_label.is_set
	|| path_type.is_set;
}

bool MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::Paths::Path::has_operation() const
{
    return is_set(operation)
	|| is_set(path_id.operation)
	|| is_set(interface_name.operation)
	|| is_set(label_type.operation)
	|| is_set(next_hop_address.operation)
	|| is_set(next_hop_label.operation)
	|| is_set(path_type.operation);
}

std::string MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::Paths::Path::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path" <<"[path-id='" <<path_id.get() <<"']";

    return path_buffer.str();

}

EntityPath MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::Paths::Path::get_entity_path(Entity* ancestor) const
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

    if (path_id.is_set || is_set(path_id.operation)) leaf_name_data.push_back(path_id.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (label_type.is_set || is_set(label_type.operation)) leaf_name_data.push_back(label_type.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (next_hop_label.is_set || is_set(next_hop_label.operation)) leaf_name_data.push_back(next_hop_label.get_name_leafdata());
    if (path_type.is_set || is_set(path_type.operation)) leaf_name_data.push_back(path_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::Paths::Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::Paths::Path::get_children()
{
    return children;
}

void MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::Paths::Path::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "path-id")
    {
        path_id = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "label-type")
    {
        label_type = value;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "next-hop-label")
    {
        next_hop_label = value;
    }
    if(value_path == "path-type")
    {
        path_type = value;
    }
}

MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::Paths::Paths()
{
    yang_name = "paths"; yang_parent_name = "label-switched-path";
}

MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::Paths::~Paths()
{
}

bool MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::Paths::has_data() const
{
    for (std::size_t index=0; index<path.size(); index++)
    {
        if(path[index]->has_data())
            return true;
    }
    return false;
}

bool MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::Paths::has_operation() const
{
    for (std::size_t index=0; index<path.size(); index++)
    {
        if(path[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::Paths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "paths";

    return path_buffer.str();

}

EntityPath MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::Paths::get_entity_path(Entity* ancestor) const
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

Entity* MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::Paths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "path")
    {
        for(auto const & c : path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::Paths::Path>();
        c->parent = this;
        path.push_back(std::move(c));
        children[segment_path] = path.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::Paths::get_children()
{
    for (auto const & c : path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::Paths::set_value(const std::string & value_path, std::string value)
{
}

MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::LabelSwitchedPath()
    :
    	lsp_name{YType::str, "lsp-name"},
	 enable{YType::empty, "enable"}
    	,
    in_label(std::make_unique<MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::InLabel>())
	,paths(std::make_unique<MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::Paths>())
{
    in_label->parent = this;
    children["in-label"] = in_label.get();

    paths->parent = this;
    children["paths"] = paths.get();

    yang_name = "label-switched-path"; yang_parent_name = "label-switched-paths";
}

MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::~LabelSwitchedPath()
{
}

bool MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::has_data() const
{
    return lsp_name.is_set
	|| enable.is_set
	|| (in_label !=  nullptr && in_label->has_data())
	|| (paths !=  nullptr && paths->has_data());
}

bool MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::has_operation() const
{
    return is_set(operation)
	|| is_set(lsp_name.operation)
	|| is_set(enable.operation)
	|| (in_label !=  nullptr && is_set(in_label->operation))
	|| (paths !=  nullptr && is_set(paths->operation));
}

std::string MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-switched-path" <<"[lsp-name='" <<lsp_name.get() <<"']";

    return path_buffer.str();

}

EntityPath MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-static-cfg:mpls-static/default-vrf/label-switched-paths/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_name.is_set || is_set(lsp_name.operation)) leaf_name_data.push_back(lsp_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "in-label")
    {
        if(in_label != nullptr)
        {
            children["in-label"] = in_label.get();
        }
        else
        {
            in_label = std::make_unique<MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::InLabel>();
            in_label->parent = this;
            children["in-label"] = in_label.get();
        }
        return children.at("in-label");
    }

    if(child_yang_name == "paths")
    {
        if(paths != nullptr)
        {
            children["paths"] = paths.get();
        }
        else
        {
            paths = std::make_unique<MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::Paths>();
            paths->parent = this;
            children["paths"] = paths.get();
        }
        return children.at("paths");
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::get_children()
{
    if(children.find("in-label") == children.end())
    {
        if(in_label != nullptr)
        {
            children["in-label"] = in_label.get();
        }
    }

    if(children.find("paths") == children.end())
    {
        if(paths != nullptr)
        {
            children["paths"] = paths.get();
        }
    }

    return children;
}

void MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lsp-name")
    {
        lsp_name = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
}

MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPaths()
{
    yang_name = "label-switched-paths"; yang_parent_name = "default-vrf";
}

MplsStatic::DefaultVrf::LabelSwitchedPaths::~LabelSwitchedPaths()
{
}

bool MplsStatic::DefaultVrf::LabelSwitchedPaths::has_data() const
{
    for (std::size_t index=0; index<label_switched_path.size(); index++)
    {
        if(label_switched_path[index]->has_data())
            return true;
    }
    return false;
}

bool MplsStatic::DefaultVrf::LabelSwitchedPaths::has_operation() const
{
    for (std::size_t index=0; index<label_switched_path.size(); index++)
    {
        if(label_switched_path[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsStatic::DefaultVrf::LabelSwitchedPaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-switched-paths";

    return path_buffer.str();

}

EntityPath MplsStatic::DefaultVrf::LabelSwitchedPaths::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-static-cfg:mpls-static/default-vrf/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsStatic::DefaultVrf::LabelSwitchedPaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "label-switched-path")
    {
        for(auto const & c : label_switched_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath>();
        c->parent = this;
        label_switched_path.push_back(std::move(c));
        children[segment_path] = label_switched_path.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsStatic::DefaultVrf::LabelSwitchedPaths::get_children()
{
    for (auto const & c : label_switched_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void MplsStatic::DefaultVrf::LabelSwitchedPaths::set_value(const std::string & value_path, std::string value)
{
}

MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::LabelType::LabelType()
    :
    	label_mode{YType::enumeration, "label-mode"},
	 prefix{YType::str, "prefix"},
	 prefix_length{YType::int32, "prefix-length"}
{
    yang_name = "label-type"; yang_parent_name = "local-label";
}

MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::LabelType::~LabelType()
{
}

bool MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::LabelType::has_data() const
{
    return label_mode.is_set
	|| prefix.is_set
	|| prefix_length.is_set;
}

bool MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::LabelType::has_operation() const
{
    return is_set(operation)
	|| is_set(label_mode.operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation);
}

std::string MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::LabelType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-type";

    return path_buffer.str();

}

EntityPath MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::LabelType::get_entity_path(Entity* ancestor) const
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

    if (label_mode.is_set || is_set(label_mode.operation)) leaf_name_data.push_back(label_mode.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::LabelType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::LabelType::get_children()
{
    return children;
}

void MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::LabelType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "label-mode")
    {
        label_mode = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
}

MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::Paths::Path::Path()
    :
    	path_id{YType::uint32, "path-id"},
	 interface_name{YType::str, "interface-name"},
	 label_type{YType::enumeration, "label-type"},
	 next_hop_address{YType::str, "next-hop-address"},
	 next_hop_label{YType::uint32, "next-hop-label"},
	 path_type{YType::enumeration, "path-type"}
{
    yang_name = "path"; yang_parent_name = "paths";
}

MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::Paths::Path::~Path()
{
}

bool MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::Paths::Path::has_data() const
{
    return path_id.is_set
	|| interface_name.is_set
	|| label_type.is_set
	|| next_hop_address.is_set
	|| next_hop_label.is_set
	|| path_type.is_set;
}

bool MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::Paths::Path::has_operation() const
{
    return is_set(operation)
	|| is_set(path_id.operation)
	|| is_set(interface_name.operation)
	|| is_set(label_type.operation)
	|| is_set(next_hop_address.operation)
	|| is_set(next_hop_label.operation)
	|| is_set(path_type.operation);
}

std::string MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::Paths::Path::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path" <<"[path-id='" <<path_id.get() <<"']";

    return path_buffer.str();

}

EntityPath MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::Paths::Path::get_entity_path(Entity* ancestor) const
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

    if (path_id.is_set || is_set(path_id.operation)) leaf_name_data.push_back(path_id.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (label_type.is_set || is_set(label_type.operation)) leaf_name_data.push_back(label_type.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (next_hop_label.is_set || is_set(next_hop_label.operation)) leaf_name_data.push_back(next_hop_label.get_name_leafdata());
    if (path_type.is_set || is_set(path_type.operation)) leaf_name_data.push_back(path_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::Paths::Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::Paths::Path::get_children()
{
    return children;
}

void MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::Paths::Path::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "path-id")
    {
        path_id = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "label-type")
    {
        label_type = value;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "next-hop-label")
    {
        next_hop_label = value;
    }
    if(value_path == "path-type")
    {
        path_type = value;
    }
}

MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::Paths::Paths()
{
    yang_name = "paths"; yang_parent_name = "local-label";
}

MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::Paths::~Paths()
{
}

bool MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::Paths::has_data() const
{
    for (std::size_t index=0; index<path.size(); index++)
    {
        if(path[index]->has_data())
            return true;
    }
    return false;
}

bool MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::Paths::has_operation() const
{
    for (std::size_t index=0; index<path.size(); index++)
    {
        if(path[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::Paths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "paths";

    return path_buffer.str();

}

EntityPath MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::Paths::get_entity_path(Entity* ancestor) const
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

Entity* MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::Paths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "path")
    {
        for(auto const & c : path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::Paths::Path>();
        c->parent = this;
        path.push_back(std::move(c));
        children[segment_path] = path.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::Paths::get_children()
{
    for (auto const & c : path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::Paths::set_value(const std::string & value_path, std::string value)
{
}

MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::LocalLabel()
    :
    	local_label_id{YType::uint32, "local-label-id"}
    	,
    label_type(std::make_unique<MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::LabelType>())
	,paths(std::make_unique<MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::Paths>())
{
    label_type->parent = this;
    children["label-type"] = label_type.get();

    paths->parent = this;
    children["paths"] = paths.get();

    yang_name = "local-label"; yang_parent_name = "local-labels";
}

MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::~LocalLabel()
{
}

bool MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::has_data() const
{
    return local_label_id.is_set
	|| (label_type !=  nullptr && label_type->has_data())
	|| (paths !=  nullptr && paths->has_data());
}

bool MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::has_operation() const
{
    return is_set(operation)
	|| is_set(local_label_id.operation)
	|| (label_type !=  nullptr && is_set(label_type->operation))
	|| (paths !=  nullptr && is_set(paths->operation));
}

std::string MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-label" <<"[local-label-id='" <<local_label_id.get() <<"']";

    return path_buffer.str();

}

EntityPath MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::get_entity_path(Entity* ancestor) const
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


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "label-type")
    {
        if(label_type != nullptr)
        {
            children["label-type"] = label_type.get();
        }
        else
        {
            label_type = std::make_unique<MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::LabelType>();
            label_type->parent = this;
            children["label-type"] = label_type.get();
        }
        return children.at("label-type");
    }

    if(child_yang_name == "paths")
    {
        if(paths != nullptr)
        {
            children["paths"] = paths.get();
        }
        else
        {
            paths = std::make_unique<MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::Paths>();
            paths->parent = this;
            children["paths"] = paths.get();
        }
        return children.at("paths");
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::get_children()
{
    if(children.find("label-type") == children.end())
    {
        if(label_type != nullptr)
        {
            children["label-type"] = label_type.get();
        }
    }

    if(children.find("paths") == children.end())
    {
        if(paths != nullptr)
        {
            children["paths"] = paths.get();
        }
    }

    return children;
}

void MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "local-label-id")
    {
        local_label_id = value;
    }
}

MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabels()
{
    yang_name = "local-labels"; yang_parent_name = "top-label-hash";
}

MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::~LocalLabels()
{
}

bool MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::has_data() const
{
    for (std::size_t index=0; index<local_label.size(); index++)
    {
        if(local_label[index]->has_data())
            return true;
    }
    return false;
}

bool MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::has_operation() const
{
    for (std::size_t index=0; index<local_label.size(); index++)
    {
        if(local_label[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-labels";

    return path_buffer.str();

}

EntityPath MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::get_entity_path(Entity* ancestor) const
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

Entity* MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_unique<MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel>();
        c->parent = this;
        local_label.push_back(std::move(c));
        children[segment_path] = local_label.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::get_children()
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

void MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::set_value(const std::string & value_path, std::string value)
{
}

MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::TopLabelHash()
    :
    local_labels(std::make_unique<MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels>())
{
    local_labels->parent = this;
    children["local-labels"] = local_labels.get();

    yang_name = "top-label-hash"; yang_parent_name = "af";
}

MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::~TopLabelHash()
{
}

bool MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::has_data() const
{
    return (local_labels !=  nullptr && local_labels->has_data());
}

bool MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::has_operation() const
{
    return is_set(operation)
	|| (local_labels !=  nullptr && is_set(local_labels->operation));
}

std::string MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "top-label-hash";

    return path_buffer.str();

}

EntityPath MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::get_entity_path(Entity* ancestor) const
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

Entity* MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            local_labels = std::make_unique<MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels>();
            local_labels->parent = this;
            children["local-labels"] = local_labels.get();
        }
        return children.at("local-labels");
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::get_children()
{
    if(children.find("local-labels") == children.end())
    {
        if(local_labels != nullptr)
        {
            children["local-labels"] = local_labels.get();
        }
    }

    return children;
}

void MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::set_value(const std::string & value_path, std::string value)
{
}

MplsStatic::DefaultVrf::Afs::Af::LocalLabels::LocalLabel::LabelType::LabelType()
    :
    	label_mode{YType::enumeration, "label-mode"},
	 prefix{YType::str, "prefix"},
	 prefix_length{YType::int32, "prefix-length"}
{
    yang_name = "label-type"; yang_parent_name = "local-label";
}

MplsStatic::DefaultVrf::Afs::Af::LocalLabels::LocalLabel::LabelType::~LabelType()
{
}

bool MplsStatic::DefaultVrf::Afs::Af::LocalLabels::LocalLabel::LabelType::has_data() const
{
    return label_mode.is_set
	|| prefix.is_set
	|| prefix_length.is_set;
}

bool MplsStatic::DefaultVrf::Afs::Af::LocalLabels::LocalLabel::LabelType::has_operation() const
{
    return is_set(operation)
	|| is_set(label_mode.operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation);
}

std::string MplsStatic::DefaultVrf::Afs::Af::LocalLabels::LocalLabel::LabelType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-type";

    return path_buffer.str();

}

EntityPath MplsStatic::DefaultVrf::Afs::Af::LocalLabels::LocalLabel::LabelType::get_entity_path(Entity* ancestor) const
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

    if (label_mode.is_set || is_set(label_mode.operation)) leaf_name_data.push_back(label_mode.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsStatic::DefaultVrf::Afs::Af::LocalLabels::LocalLabel::LabelType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & MplsStatic::DefaultVrf::Afs::Af::LocalLabels::LocalLabel::LabelType::get_children()
{
    return children;
}

void MplsStatic::DefaultVrf::Afs::Af::LocalLabels::LocalLabel::LabelType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "label-mode")
    {
        label_mode = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
}

MplsStatic::DefaultVrf::Afs::Af::LocalLabels::LocalLabel::Paths::Path::Path()
    :
    	path_id{YType::uint32, "path-id"},
	 interface_name{YType::str, "interface-name"},
	 label_type{YType::enumeration, "label-type"},
	 next_hop_address{YType::str, "next-hop-address"},
	 next_hop_label{YType::uint32, "next-hop-label"},
	 path_type{YType::enumeration, "path-type"}
{
    yang_name = "path"; yang_parent_name = "paths";
}

MplsStatic::DefaultVrf::Afs::Af::LocalLabels::LocalLabel::Paths::Path::~Path()
{
}

bool MplsStatic::DefaultVrf::Afs::Af::LocalLabels::LocalLabel::Paths::Path::has_data() const
{
    return path_id.is_set
	|| interface_name.is_set
	|| label_type.is_set
	|| next_hop_address.is_set
	|| next_hop_label.is_set
	|| path_type.is_set;
}

bool MplsStatic::DefaultVrf::Afs::Af::LocalLabels::LocalLabel::Paths::Path::has_operation() const
{
    return is_set(operation)
	|| is_set(path_id.operation)
	|| is_set(interface_name.operation)
	|| is_set(label_type.operation)
	|| is_set(next_hop_address.operation)
	|| is_set(next_hop_label.operation)
	|| is_set(path_type.operation);
}

std::string MplsStatic::DefaultVrf::Afs::Af::LocalLabels::LocalLabel::Paths::Path::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path" <<"[path-id='" <<path_id.get() <<"']";

    return path_buffer.str();

}

EntityPath MplsStatic::DefaultVrf::Afs::Af::LocalLabels::LocalLabel::Paths::Path::get_entity_path(Entity* ancestor) const
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

    if (path_id.is_set || is_set(path_id.operation)) leaf_name_data.push_back(path_id.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (label_type.is_set || is_set(label_type.operation)) leaf_name_data.push_back(label_type.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (next_hop_label.is_set || is_set(next_hop_label.operation)) leaf_name_data.push_back(next_hop_label.get_name_leafdata());
    if (path_type.is_set || is_set(path_type.operation)) leaf_name_data.push_back(path_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsStatic::DefaultVrf::Afs::Af::LocalLabels::LocalLabel::Paths::Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & MplsStatic::DefaultVrf::Afs::Af::LocalLabels::LocalLabel::Paths::Path::get_children()
{
    return children;
}

void MplsStatic::DefaultVrf::Afs::Af::LocalLabels::LocalLabel::Paths::Path::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "path-id")
    {
        path_id = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "label-type")
    {
        label_type = value;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "next-hop-label")
    {
        next_hop_label = value;
    }
    if(value_path == "path-type")
    {
        path_type = value;
    }
}

MplsStatic::DefaultVrf::Afs::Af::LocalLabels::LocalLabel::Paths::Paths()
{
    yang_name = "paths"; yang_parent_name = "local-label";
}

MplsStatic::DefaultVrf::Afs::Af::LocalLabels::LocalLabel::Paths::~Paths()
{
}

bool MplsStatic::DefaultVrf::Afs::Af::LocalLabels::LocalLabel::Paths::has_data() const
{
    for (std::size_t index=0; index<path.size(); index++)
    {
        if(path[index]->has_data())
            return true;
    }
    return false;
}

bool MplsStatic::DefaultVrf::Afs::Af::LocalLabels::LocalLabel::Paths::has_operation() const
{
    for (std::size_t index=0; index<path.size(); index++)
    {
        if(path[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsStatic::DefaultVrf::Afs::Af::LocalLabels::LocalLabel::Paths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "paths";

    return path_buffer.str();

}

EntityPath MplsStatic::DefaultVrf::Afs::Af::LocalLabels::LocalLabel::Paths::get_entity_path(Entity* ancestor) const
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

Entity* MplsStatic::DefaultVrf::Afs::Af::LocalLabels::LocalLabel::Paths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "path")
    {
        for(auto const & c : path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<MplsStatic::DefaultVrf::Afs::Af::LocalLabels::LocalLabel::Paths::Path>();
        c->parent = this;
        path.push_back(std::move(c));
        children[segment_path] = path.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsStatic::DefaultVrf::Afs::Af::LocalLabels::LocalLabel::Paths::get_children()
{
    for (auto const & c : path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void MplsStatic::DefaultVrf::Afs::Af::LocalLabels::LocalLabel::Paths::set_value(const std::string & value_path, std::string value)
{
}

MplsStatic::DefaultVrf::Afs::Af::LocalLabels::LocalLabel::LocalLabel()
    :
    	local_label_id{YType::uint32, "local-label-id"}
    	,
    label_type(std::make_unique<MplsStatic::DefaultVrf::Afs::Af::LocalLabels::LocalLabel::LabelType>())
	,paths(std::make_unique<MplsStatic::DefaultVrf::Afs::Af::LocalLabels::LocalLabel::Paths>())
{
    label_type->parent = this;
    children["label-type"] = label_type.get();

    paths->parent = this;
    children["paths"] = paths.get();

    yang_name = "local-label"; yang_parent_name = "local-labels";
}

MplsStatic::DefaultVrf::Afs::Af::LocalLabels::LocalLabel::~LocalLabel()
{
}

bool MplsStatic::DefaultVrf::Afs::Af::LocalLabels::LocalLabel::has_data() const
{
    return local_label_id.is_set
	|| (label_type !=  nullptr && label_type->has_data())
	|| (paths !=  nullptr && paths->has_data());
}

bool MplsStatic::DefaultVrf::Afs::Af::LocalLabels::LocalLabel::has_operation() const
{
    return is_set(operation)
	|| is_set(local_label_id.operation)
	|| (label_type !=  nullptr && is_set(label_type->operation))
	|| (paths !=  nullptr && is_set(paths->operation));
}

std::string MplsStatic::DefaultVrf::Afs::Af::LocalLabels::LocalLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-label" <<"[local-label-id='" <<local_label_id.get() <<"']";

    return path_buffer.str();

}

EntityPath MplsStatic::DefaultVrf::Afs::Af::LocalLabels::LocalLabel::get_entity_path(Entity* ancestor) const
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


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsStatic::DefaultVrf::Afs::Af::LocalLabels::LocalLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "label-type")
    {
        if(label_type != nullptr)
        {
            children["label-type"] = label_type.get();
        }
        else
        {
            label_type = std::make_unique<MplsStatic::DefaultVrf::Afs::Af::LocalLabels::LocalLabel::LabelType>();
            label_type->parent = this;
            children["label-type"] = label_type.get();
        }
        return children.at("label-type");
    }

    if(child_yang_name == "paths")
    {
        if(paths != nullptr)
        {
            children["paths"] = paths.get();
        }
        else
        {
            paths = std::make_unique<MplsStatic::DefaultVrf::Afs::Af::LocalLabels::LocalLabel::Paths>();
            paths->parent = this;
            children["paths"] = paths.get();
        }
        return children.at("paths");
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsStatic::DefaultVrf::Afs::Af::LocalLabels::LocalLabel::get_children()
{
    if(children.find("label-type") == children.end())
    {
        if(label_type != nullptr)
        {
            children["label-type"] = label_type.get();
        }
    }

    if(children.find("paths") == children.end())
    {
        if(paths != nullptr)
        {
            children["paths"] = paths.get();
        }
    }

    return children;
}

void MplsStatic::DefaultVrf::Afs::Af::LocalLabels::LocalLabel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "local-label-id")
    {
        local_label_id = value;
    }
}

MplsStatic::DefaultVrf::Afs::Af::LocalLabels::LocalLabels()
{
    yang_name = "local-labels"; yang_parent_name = "af";
}

MplsStatic::DefaultVrf::Afs::Af::LocalLabels::~LocalLabels()
{
}

bool MplsStatic::DefaultVrf::Afs::Af::LocalLabels::has_data() const
{
    for (std::size_t index=0; index<local_label.size(); index++)
    {
        if(local_label[index]->has_data())
            return true;
    }
    return false;
}

bool MplsStatic::DefaultVrf::Afs::Af::LocalLabels::has_operation() const
{
    for (std::size_t index=0; index<local_label.size(); index++)
    {
        if(local_label[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsStatic::DefaultVrf::Afs::Af::LocalLabels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-labels";

    return path_buffer.str();

}

EntityPath MplsStatic::DefaultVrf::Afs::Af::LocalLabels::get_entity_path(Entity* ancestor) const
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

Entity* MplsStatic::DefaultVrf::Afs::Af::LocalLabels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_unique<MplsStatic::DefaultVrf::Afs::Af::LocalLabels::LocalLabel>();
        c->parent = this;
        local_label.push_back(std::move(c));
        children[segment_path] = local_label.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsStatic::DefaultVrf::Afs::Af::LocalLabels::get_children()
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

void MplsStatic::DefaultVrf::Afs::Af::LocalLabels::set_value(const std::string & value_path, std::string value)
{
}

MplsStatic::DefaultVrf::Afs::Af::Af()
    :
    	afi{YType::enumeration, "afi"},
	 enable{YType::empty, "enable"}
    	,
    local_labels(std::make_unique<MplsStatic::DefaultVrf::Afs::Af::LocalLabels>())
	,top_label_hash(std::make_unique<MplsStatic::DefaultVrf::Afs::Af::TopLabelHash>())
{
    local_labels->parent = this;
    children["local-labels"] = local_labels.get();

    top_label_hash->parent = this;
    children["top-label-hash"] = top_label_hash.get();

    yang_name = "af"; yang_parent_name = "afs";
}

MplsStatic::DefaultVrf::Afs::Af::~Af()
{
}

bool MplsStatic::DefaultVrf::Afs::Af::has_data() const
{
    return afi.is_set
	|| enable.is_set
	|| (local_labels !=  nullptr && local_labels->has_data())
	|| (top_label_hash !=  nullptr && top_label_hash->has_data());
}

bool MplsStatic::DefaultVrf::Afs::Af::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(enable.operation)
	|| (local_labels !=  nullptr && is_set(local_labels->operation))
	|| (top_label_hash !=  nullptr && is_set(top_label_hash->operation));
}

std::string MplsStatic::DefaultVrf::Afs::Af::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af" <<"[afi='" <<afi.get() <<"']";

    return path_buffer.str();

}

EntityPath MplsStatic::DefaultVrf::Afs::Af::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-static-cfg:mpls-static/default-vrf/afs/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsStatic::DefaultVrf::Afs::Af::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            local_labels = std::make_unique<MplsStatic::DefaultVrf::Afs::Af::LocalLabels>();
            local_labels->parent = this;
            children["local-labels"] = local_labels.get();
        }
        return children.at("local-labels");
    }

    if(child_yang_name == "top-label-hash")
    {
        if(top_label_hash != nullptr)
        {
            children["top-label-hash"] = top_label_hash.get();
        }
        else
        {
            top_label_hash = std::make_unique<MplsStatic::DefaultVrf::Afs::Af::TopLabelHash>();
            top_label_hash->parent = this;
            children["top-label-hash"] = top_label_hash.get();
        }
        return children.at("top-label-hash");
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsStatic::DefaultVrf::Afs::Af::get_children()
{
    if(children.find("local-labels") == children.end())
    {
        if(local_labels != nullptr)
        {
            children["local-labels"] = local_labels.get();
        }
    }

    if(children.find("top-label-hash") == children.end())
    {
        if(top_label_hash != nullptr)
        {
            children["top-label-hash"] = top_label_hash.get();
        }
    }

    return children;
}

void MplsStatic::DefaultVrf::Afs::Af::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
}

MplsStatic::DefaultVrf::Afs::Afs()
{
    yang_name = "afs"; yang_parent_name = "default-vrf";
}

MplsStatic::DefaultVrf::Afs::~Afs()
{
}

bool MplsStatic::DefaultVrf::Afs::has_data() const
{
    for (std::size_t index=0; index<af.size(); index++)
    {
        if(af[index]->has_data())
            return true;
    }
    return false;
}

bool MplsStatic::DefaultVrf::Afs::has_operation() const
{
    for (std::size_t index=0; index<af.size(); index++)
    {
        if(af[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsStatic::DefaultVrf::Afs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "afs";

    return path_buffer.str();

}

EntityPath MplsStatic::DefaultVrf::Afs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-static-cfg:mpls-static/default-vrf/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsStatic::DefaultVrf::Afs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "af")
    {
        for(auto const & c : af)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<MplsStatic::DefaultVrf::Afs::Af>();
        c->parent = this;
        af.push_back(std::move(c));
        children[segment_path] = af.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsStatic::DefaultVrf::Afs::get_children()
{
    for (auto const & c : af)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void MplsStatic::DefaultVrf::Afs::set_value(const std::string & value_path, std::string value)
{
}

MplsStatic::DefaultVrf::DefaultVrf()
    :
    	enable{YType::empty, "enable"}
    	,
    afs(std::make_unique<MplsStatic::DefaultVrf::Afs>())
	,label_switched_paths(std::make_unique<MplsStatic::DefaultVrf::LabelSwitchedPaths>())
{
    afs->parent = this;
    children["afs"] = afs.get();

    label_switched_paths->parent = this;
    children["label-switched-paths"] = label_switched_paths.get();

    yang_name = "default-vrf"; yang_parent_name = "mpls-static";
}

MplsStatic::DefaultVrf::~DefaultVrf()
{
}

bool MplsStatic::DefaultVrf::has_data() const
{
    return enable.is_set
	|| (afs !=  nullptr && afs->has_data())
	|| (label_switched_paths !=  nullptr && label_switched_paths->has_data());
}

bool MplsStatic::DefaultVrf::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| (afs !=  nullptr && is_set(afs->operation))
	|| (label_switched_paths !=  nullptr && is_set(label_switched_paths->operation));
}

std::string MplsStatic::DefaultVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-vrf";

    return path_buffer.str();

}

EntityPath MplsStatic::DefaultVrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-static-cfg:mpls-static/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsStatic::DefaultVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "afs")
    {
        if(afs != nullptr)
        {
            children["afs"] = afs.get();
        }
        else
        {
            afs = std::make_unique<MplsStatic::DefaultVrf::Afs>();
            afs->parent = this;
            children["afs"] = afs.get();
        }
        return children.at("afs");
    }

    if(child_yang_name == "label-switched-paths")
    {
        if(label_switched_paths != nullptr)
        {
            children["label-switched-paths"] = label_switched_paths.get();
        }
        else
        {
            label_switched_paths = std::make_unique<MplsStatic::DefaultVrf::LabelSwitchedPaths>();
            label_switched_paths->parent = this;
            children["label-switched-paths"] = label_switched_paths.get();
        }
        return children.at("label-switched-paths");
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsStatic::DefaultVrf::get_children()
{
    if(children.find("afs") == children.end())
    {
        if(afs != nullptr)
        {
            children["afs"] = afs.get();
        }
    }

    if(children.find("label-switched-paths") == children.end())
    {
        if(label_switched_paths != nullptr)
        {
            children["label-switched-paths"] = label_switched_paths.get();
        }
    }

    return children;
}

void MplsStatic::DefaultVrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
}

MplsStatic::MplsStatic()
    :
    	enable{YType::empty, "enable"}
    	,
    default_vrf(std::make_unique<MplsStatic::DefaultVrf>())
	,interfaces(std::make_unique<MplsStatic::Interfaces>())
	,vrfs(std::make_unique<MplsStatic::Vrfs>())
{
    default_vrf->parent = this;
    children["default-vrf"] = default_vrf.get();

    interfaces->parent = this;
    children["interfaces"] = interfaces.get();

    vrfs->parent = this;
    children["vrfs"] = vrfs.get();

    yang_name = "mpls-static"; yang_parent_name = "Cisco-IOS-XR-mpls-static-cfg";
}

MplsStatic::~MplsStatic()
{
}

bool MplsStatic::has_data() const
{
    return enable.is_set
	|| (default_vrf !=  nullptr && default_vrf->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (vrfs !=  nullptr && vrfs->has_data());
}

bool MplsStatic::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| (default_vrf !=  nullptr && is_set(default_vrf->operation))
	|| (interfaces !=  nullptr && is_set(interfaces->operation))
	|| (vrfs !=  nullptr && is_set(vrfs->operation));
}

std::string MplsStatic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-static-cfg:mpls-static";

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

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


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

    if(child_yang_name == "default-vrf")
    {
        if(default_vrf != nullptr)
        {
            children["default-vrf"] = default_vrf.get();
        }
        else
        {
            default_vrf = std::make_unique<MplsStatic::DefaultVrf>();
            default_vrf->parent = this;
            children["default-vrf"] = default_vrf.get();
        }
        return children.at("default-vrf");
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces.get();
        }
        else
        {
            interfaces = std::make_unique<MplsStatic::Interfaces>();
            interfaces->parent = this;
            children["interfaces"] = interfaces.get();
        }
        return children.at("interfaces");
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
    if(children.find("default-vrf") == children.end())
    {
        if(default_vrf != nullptr)
        {
            children["default-vrf"] = default_vrf.get();
        }
    }

    if(children.find("interfaces") == children.end())
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces.get();
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
    if(value_path == "enable")
    {
        enable = value;
    }
}

std::unique_ptr<Entity> MplsStatic::clone_ptr()
{
    return std::make_unique<MplsStatic>();
}

const Enum::Value MplsStaticOutLabelTypesEnum::none {0, "none"};
const Enum::Value MplsStaticOutLabelTypesEnum::out_label {1, "out-label"};
const Enum::Value MplsStaticOutLabelTypesEnum::pop {2, "pop"};
const Enum::Value MplsStaticOutLabelTypesEnum::exp_null {3, "exp-null"};

const Enum::Value MplsStaticLabelModeEnum::per_vrf {1, "per-vrf"};
const Enum::Value MplsStaticLabelModeEnum::per_prefix {2, "per-prefix"};
const Enum::Value MplsStaticLabelModeEnum::lsp {3, "lsp"};

const Enum::Value MplsStaticPathEnum::pop_and_lookup {1, "pop-and-lookup"};
const Enum::Value MplsStaticPathEnum::cross_connect {2, "cross-connect"};

const Enum::Value MplsStaticAddressFamilyEnum::ipv4_unicast {1, "ipv4-unicast"};


}
}

