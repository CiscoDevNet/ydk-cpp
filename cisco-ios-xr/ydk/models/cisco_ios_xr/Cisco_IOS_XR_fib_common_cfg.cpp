
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_fib_common_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_fib_common_cfg {

Fib::Fib()
    :
    prefer_aib_routes{YType::boolean, "prefer-aib-routes"}
    	,
    pbts_forward_class_fallbacks(std::make_shared<Fib::PbtsForwardClassFallbacks>())
	,platform(std::make_shared<Fib::Platform>())
{
    pbts_forward_class_fallbacks->parent = this;
    children["pbts-forward-class-fallbacks"] = pbts_forward_class_fallbacks;

    platform->parent = this;
    children["platform"] = platform;

    yang_name = "fib"; yang_parent_name = "Cisco-IOS-XR-fib-common-cfg";
}

Fib::~Fib()
{
}

bool Fib::has_data() const
{
    return prefer_aib_routes.is_set
	|| (pbts_forward_class_fallbacks !=  nullptr && pbts_forward_class_fallbacks->has_data())
	|| (platform !=  nullptr && platform->has_data());
}

bool Fib::has_operation() const
{
    return is_set(operation)
	|| is_set(prefer_aib_routes.operation)
	|| (pbts_forward_class_fallbacks !=  nullptr && pbts_forward_class_fallbacks->has_operation())
	|| (platform !=  nullptr && platform->has_operation());
}

std::string Fib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fib-common-cfg:fib";

    return path_buffer.str();

}

EntityPath Fib::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefer_aib_routes.is_set || is_set(prefer_aib_routes.operation)) leaf_name_data.push_back(prefer_aib_routes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "pbts-forward-class-fallbacks")
    {
        if(pbts_forward_class_fallbacks != nullptr)
        {
            children["pbts-forward-class-fallbacks"] = pbts_forward_class_fallbacks;
        }
        else
        {
            pbts_forward_class_fallbacks = std::make_shared<Fib::PbtsForwardClassFallbacks>();
            pbts_forward_class_fallbacks->parent = this;
            children["pbts-forward-class-fallbacks"] = pbts_forward_class_fallbacks;
        }
        return children.at("pbts-forward-class-fallbacks");
    }

    if(child_yang_name == "platform")
    {
        if(platform != nullptr)
        {
            children["platform"] = platform;
        }
        else
        {
            platform = std::make_shared<Fib::Platform>();
            platform->parent = this;
            children["platform"] = platform;
        }
        return children.at("platform");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Fib::get_children()
{
    if(children.find("pbts-forward-class-fallbacks") == children.end())
    {
        if(pbts_forward_class_fallbacks != nullptr)
        {
            children["pbts-forward-class-fallbacks"] = pbts_forward_class_fallbacks;
        }
    }

    if(children.find("platform") == children.end())
    {
        if(platform != nullptr)
        {
            children["platform"] = platform;
        }
    }

    return children;
}

void Fib::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefer-aib-routes")
    {
        prefer_aib_routes = value;
    }
}

std::shared_ptr<Entity> Fib::clone_ptr() const
{
    return std::make_shared<Fib>();
}

std::string Fib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Fib::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Fib::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

Fib::PbtsForwardClassFallbacks::PbtsForwardClassFallbacks()
{
    yang_name = "pbts-forward-class-fallbacks"; yang_parent_name = "fib";
}

Fib::PbtsForwardClassFallbacks::~PbtsForwardClassFallbacks()
{
}

bool Fib::PbtsForwardClassFallbacks::has_data() const
{
    for (std::size_t index=0; index<pbts_forward_class_fallback.size(); index++)
    {
        if(pbts_forward_class_fallback[index]->has_data())
            return true;
    }
    return false;
}

bool Fib::PbtsForwardClassFallbacks::has_operation() const
{
    for (std::size_t index=0; index<pbts_forward_class_fallback.size(); index++)
    {
        if(pbts_forward_class_fallback[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Fib::PbtsForwardClassFallbacks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbts-forward-class-fallbacks";

    return path_buffer.str();

}

EntityPath Fib::PbtsForwardClassFallbacks::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-fib-common-cfg:fib/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::PbtsForwardClassFallbacks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "pbts-forward-class-fallback")
    {
        for(auto const & c : pbts_forward_class_fallback)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Fib::PbtsForwardClassFallbacks::PbtsForwardClassFallback>();
        c->parent = this;
        pbts_forward_class_fallback.push_back(std::move(c));
        children[segment_path] = pbts_forward_class_fallback.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Fib::PbtsForwardClassFallbacks::get_children()
{
    for (auto const & c : pbts_forward_class_fallback)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Fib::PbtsForwardClassFallbacks::set_value(const std::string & value_path, std::string value)
{
}

Fib::PbtsForwardClassFallbacks::PbtsForwardClassFallback::PbtsForwardClassFallback()
    :
    forward_class_number{YType::str, "forward-class-number"},
    fallback_class_number_array{YType::uint32, "fallback-class-number-array"},
    fallback_type{YType::enumeration, "fallback-type"}
{
    yang_name = "pbts-forward-class-fallback"; yang_parent_name = "pbts-forward-class-fallbacks";
}

Fib::PbtsForwardClassFallbacks::PbtsForwardClassFallback::~PbtsForwardClassFallback()
{
}

bool Fib::PbtsForwardClassFallbacks::PbtsForwardClassFallback::has_data() const
{
    for (auto const & leaf : fallback_class_number_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return forward_class_number.is_set
	|| fallback_type.is_set;
}

bool Fib::PbtsForwardClassFallbacks::PbtsForwardClassFallback::has_operation() const
{
    for (auto const & leaf : fallback_class_number_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(forward_class_number.operation)
	|| is_set(fallback_class_number_array.operation)
	|| is_set(fallback_type.operation);
}

std::string Fib::PbtsForwardClassFallbacks::PbtsForwardClassFallback::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbts-forward-class-fallback" <<"[forward-class-number='" <<forward_class_number <<"']";

    return path_buffer.str();

}

EntityPath Fib::PbtsForwardClassFallbacks::PbtsForwardClassFallback::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-fib-common-cfg:fib/pbts-forward-class-fallbacks/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (forward_class_number.is_set || is_set(forward_class_number.operation)) leaf_name_data.push_back(forward_class_number.get_name_leafdata());
    if (fallback_type.is_set || is_set(fallback_type.operation)) leaf_name_data.push_back(fallback_type.get_name_leafdata());

    auto fallback_class_number_array_name_datas = fallback_class_number_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), fallback_class_number_array_name_datas.begin(), fallback_class_number_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::PbtsForwardClassFallbacks::PbtsForwardClassFallback::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Fib::PbtsForwardClassFallbacks::PbtsForwardClassFallback::get_children()
{
    return children;
}

void Fib::PbtsForwardClassFallbacks::PbtsForwardClassFallback::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "forward-class-number")
    {
        forward_class_number = value;
    }
    if(value_path == "fallback-class-number-array")
    {
        fallback_class_number_array.append(value);
    }
    if(value_path == "fallback-type")
    {
        fallback_type = value;
    }
}

Fib::Platform::Platform()
    :
    label_switched_multicast(std::make_shared<Fib::Platform::LabelSwitchedMulticast>())
{
    label_switched_multicast->parent = this;
    children["label-switched-multicast"] = label_switched_multicast;

    yang_name = "platform"; yang_parent_name = "fib";
}

Fib::Platform::~Platform()
{
}

bool Fib::Platform::has_data() const
{
    return (label_switched_multicast !=  nullptr && label_switched_multicast->has_data());
}

bool Fib::Platform::has_operation() const
{
    return is_set(operation)
	|| (label_switched_multicast !=  nullptr && label_switched_multicast->has_operation());
}

std::string Fib::Platform::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "platform";

    return path_buffer.str();

}

EntityPath Fib::Platform::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-fib-common-cfg:fib/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Platform::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "label-switched-multicast")
    {
        if(label_switched_multicast != nullptr)
        {
            children["label-switched-multicast"] = label_switched_multicast;
        }
        else
        {
            label_switched_multicast = std::make_shared<Fib::Platform::LabelSwitchedMulticast>();
            label_switched_multicast->parent = this;
            children["label-switched-multicast"] = label_switched_multicast;
        }
        return children.at("label-switched-multicast");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Fib::Platform::get_children()
{
    if(children.find("label-switched-multicast") == children.end())
    {
        if(label_switched_multicast != nullptr)
        {
            children["label-switched-multicast"] = label_switched_multicast;
        }
    }

    return children;
}

void Fib::Platform::set_value(const std::string & value_path, std::string value)
{
}

Fib::Platform::LabelSwitchedMulticast::LabelSwitchedMulticast()
    :
    frr_holdtime{YType::uint32, "frr-holdtime"}
{
    yang_name = "label-switched-multicast"; yang_parent_name = "platform";
}

Fib::Platform::LabelSwitchedMulticast::~LabelSwitchedMulticast()
{
}

bool Fib::Platform::LabelSwitchedMulticast::has_data() const
{
    return frr_holdtime.is_set;
}

bool Fib::Platform::LabelSwitchedMulticast::has_operation() const
{
    return is_set(operation)
	|| is_set(frr_holdtime.operation);
}

std::string Fib::Platform::LabelSwitchedMulticast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-switched-multicast";

    return path_buffer.str();

}

EntityPath Fib::Platform::LabelSwitchedMulticast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-fib-common-cfg:fib/platform/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (frr_holdtime.is_set || is_set(frr_holdtime.operation)) leaf_name_data.push_back(frr_holdtime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Platform::LabelSwitchedMulticast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Fib::Platform::LabelSwitchedMulticast::get_children()
{
    return children;
}

void Fib::Platform::LabelSwitchedMulticast::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "frr-holdtime")
    {
        frr_holdtime = value;
    }
}

const Enum::YLeaf FibPbtsFallbackEnum::list {1, "list"};
const Enum::YLeaf FibPbtsFallbackEnum::any {2, "any"};
const Enum::YLeaf FibPbtsFallbackEnum::drop {3, "drop"};

const Enum::YLeaf FibPbtsForwardClassEnum::any {8, "any"};


}
}

