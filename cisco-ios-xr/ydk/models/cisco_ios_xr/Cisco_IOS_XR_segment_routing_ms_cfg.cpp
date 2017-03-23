
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_segment_routing_ms_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_segment_routing_ms_cfg {

Sr::Sr()
    :
    enable{YType::empty, "enable"}
    	,
    global_block(nullptr) // presence node
	,mappings(std::make_shared<Sr::Mappings>())
{
    mappings->parent = this;
    children["mappings"] = mappings;

    yang_name = "sr"; yang_parent_name = "Cisco-IOS-XR-segment-routing-ms-cfg";
}

Sr::~Sr()
{
}

bool Sr::has_data() const
{
    return enable.is_set
	|| (global_block !=  nullptr && global_block->has_data())
	|| (mappings !=  nullptr && mappings->has_data());
}

bool Sr::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| (global_block !=  nullptr && global_block->has_operation())
	|| (mappings !=  nullptr && mappings->has_operation());
}

std::string Sr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-ms-cfg:sr";

    return path_buffer.str();

}

EntityPath Sr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Sr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "global-block")
    {
        if(global_block != nullptr)
        {
            children["global-block"] = global_block;
        }
        else
        {
            global_block = std::make_shared<Sr::GlobalBlock>();
            global_block->parent = this;
            children["global-block"] = global_block;
        }
        return children.at("global-block");
    }

    if(child_yang_name == "mappings")
    {
        if(mappings != nullptr)
        {
            children["mappings"] = mappings;
        }
        else
        {
            mappings = std::make_shared<Sr::Mappings>();
            mappings->parent = this;
            children["mappings"] = mappings;
        }
        return children.at("mappings");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Sr::get_children()
{
    if(children.find("global-block") == children.end())
    {
        if(global_block != nullptr)
        {
            children["global-block"] = global_block;
        }
    }

    if(children.find("mappings") == children.end())
    {
        if(mappings != nullptr)
        {
            children["mappings"] = mappings;
        }
    }

    return children;
}

void Sr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
}

std::shared_ptr<Entity> Sr::clone_ptr() const
{
    return std::make_shared<Sr>();
}

std::string Sr::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Sr::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Sr::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

Sr::GlobalBlock::GlobalBlock()
    :
    lower_bound{YType::uint32, "lower-bound"},
    upper_bound{YType::uint32, "upper-bound"}
{
    yang_name = "global-block"; yang_parent_name = "sr";
}

Sr::GlobalBlock::~GlobalBlock()
{
}

bool Sr::GlobalBlock::has_data() const
{
    return lower_bound.is_set
	|| upper_bound.is_set;
}

bool Sr::GlobalBlock::has_operation() const
{
    return is_set(operation)
	|| is_set(lower_bound.operation)
	|| is_set(upper_bound.operation);
}

std::string Sr::GlobalBlock::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-block";

    return path_buffer.str();

}

EntityPath Sr::GlobalBlock::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-segment-routing-ms-cfg:sr/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lower_bound.is_set || is_set(lower_bound.operation)) leaf_name_data.push_back(lower_bound.get_name_leafdata());
    if (upper_bound.is_set || is_set(upper_bound.operation)) leaf_name_data.push_back(upper_bound.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Sr::GlobalBlock::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Sr::GlobalBlock::get_children()
{
    return children;
}

void Sr::GlobalBlock::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lower-bound")
    {
        lower_bound = value;
    }
    if(value_path == "upper-bound")
    {
        upper_bound = value;
    }
}

Sr::Mappings::Mappings()
{
    yang_name = "mappings"; yang_parent_name = "sr";
}

Sr::Mappings::~Mappings()
{
}

bool Sr::Mappings::has_data() const
{
    for (std::size_t index=0; index<mapping.size(); index++)
    {
        if(mapping[index]->has_data())
            return true;
    }
    return false;
}

bool Sr::Mappings::has_operation() const
{
    for (std::size_t index=0; index<mapping.size(); index++)
    {
        if(mapping[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Sr::Mappings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mappings";

    return path_buffer.str();

}

EntityPath Sr::Mappings::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-segment-routing-ms-cfg:sr/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Sr::Mappings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mapping")
    {
        for(auto const & c : mapping)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Sr::Mappings::Mapping>();
        c->parent = this;
        mapping.push_back(std::move(c));
        children[segment_path] = mapping.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Sr::Mappings::get_children()
{
    for (auto const & c : mapping)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Sr::Mappings::set_value(const std::string & value_path, std::string value)
{
}

Sr::Mappings::Mapping::Mapping()
    :
    af{YType::str, "af"},
    ip{YType::str, "ip"},
    mask{YType::int32, "mask"},
    flag_attached{YType::enumeration, "flag-attached"},
    sid_range{YType::int32, "sid-range"},
    sid_start{YType::uint32, "sid-start"}
{
    yang_name = "mapping"; yang_parent_name = "mappings";
}

Sr::Mappings::Mapping::~Mapping()
{
}

bool Sr::Mappings::Mapping::has_data() const
{
    return af.is_set
	|| ip.is_set
	|| mask.is_set
	|| flag_attached.is_set
	|| sid_range.is_set
	|| sid_start.is_set;
}

bool Sr::Mappings::Mapping::has_operation() const
{
    return is_set(operation)
	|| is_set(af.operation)
	|| is_set(ip.operation)
	|| is_set(mask.operation)
	|| is_set(flag_attached.operation)
	|| is_set(sid_range.operation)
	|| is_set(sid_start.operation);
}

std::string Sr::Mappings::Mapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mapping" <<"[af='" <<af <<"']" <<"[ip='" <<ip <<"']" <<"[mask='" <<mask <<"']";

    return path_buffer.str();

}

EntityPath Sr::Mappings::Mapping::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-segment-routing-ms-cfg:sr/mappings/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af.is_set || is_set(af.operation)) leaf_name_data.push_back(af.get_name_leafdata());
    if (ip.is_set || is_set(ip.operation)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (mask.is_set || is_set(mask.operation)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (flag_attached.is_set || is_set(flag_attached.operation)) leaf_name_data.push_back(flag_attached.get_name_leafdata());
    if (sid_range.is_set || is_set(sid_range.operation)) leaf_name_data.push_back(sid_range.get_name_leafdata());
    if (sid_start.is_set || is_set(sid_start.operation)) leaf_name_data.push_back(sid_start.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Sr::Mappings::Mapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Sr::Mappings::Mapping::get_children()
{
    return children;
}

void Sr::Mappings::Mapping::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af")
    {
        af = value;
    }
    if(value_path == "ip")
    {
        ip = value;
    }
    if(value_path == "mask")
    {
        mask = value;
    }
    if(value_path == "flag-attached")
    {
        flag_attached = value;
    }
    if(value_path == "sid-range")
    {
        sid_range = value;
    }
    if(value_path == "sid-start")
    {
        sid_start = value;
    }
}

const Enum::YLeaf SrmsMiFlagEnum::disable {0, "disable"};
const Enum::YLeaf SrmsMiFlagEnum::enable {1, "enable"};


}
}

