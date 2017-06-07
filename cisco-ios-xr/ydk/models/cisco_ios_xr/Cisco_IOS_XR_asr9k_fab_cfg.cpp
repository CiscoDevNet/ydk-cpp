
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_asr9k_fab_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_asr9k_fab_cfg {

FabVqiConfig::FabVqiConfig()
    :
    operates(std::make_shared<FabVqiConfig::Operates>())
{
    operates->parent = this;

    yang_name = "fab-vqi-config"; yang_parent_name = "Cisco-IOS-XR-asr9k-fab-cfg";
}

FabVqiConfig::~FabVqiConfig()
{
}

bool FabVqiConfig::has_data() const
{
    return (operates !=  nullptr && operates->has_data());
}

bool FabVqiConfig::has_operation() const
{
    return is_set(operation)
	|| (operates !=  nullptr && operates->has_operation());
}

std::string FabVqiConfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-asr9k-fab-cfg:fab-vqi-config";

    return path_buffer.str();

}

const EntityPath FabVqiConfig::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> FabVqiConfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "operates")
    {
        if(operates == nullptr)
        {
            operates = std::make_shared<FabVqiConfig::Operates>();
        }
        return operates;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FabVqiConfig::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(operates != nullptr)
    {
        children["operates"] = operates;
    }

    return children;
}

void FabVqiConfig::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> FabVqiConfig::clone_ptr() const
{
    return std::make_shared<FabVqiConfig>();
}

std::string FabVqiConfig::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string FabVqiConfig::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function FabVqiConfig::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

FabVqiConfig::Operates::Operates()
{
    yang_name = "operates"; yang_parent_name = "fab-vqi-config";
}

FabVqiConfig::Operates::~Operates()
{
}

bool FabVqiConfig::Operates::has_data() const
{
    for (std::size_t index=0; index<operate.size(); index++)
    {
        if(operate[index]->has_data())
            return true;
    }
    return false;
}

bool FabVqiConfig::Operates::has_operation() const
{
    for (std::size_t index=0; index<operate.size(); index++)
    {
        if(operate[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string FabVqiConfig::Operates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "operates";

    return path_buffer.str();

}

const EntityPath FabVqiConfig::Operates::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-asr9k-fab-cfg:fab-vqi-config/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> FabVqiConfig::Operates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "operate")
    {
        for(auto const & c : operate)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<FabVqiConfig::Operates::Operate>();
        c->parent = this;
        operate.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FabVqiConfig::Operates::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : operate)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void FabVqiConfig::Operates::set_value(const std::string & value_path, std::string value)
{
}

FabVqiConfig::Operates::Operate::Operate()
    :
    id1{YType::str, "id1"},
    id1_xr{YType::int32, "id1-xr"},
    id2{YType::int32, "id2"}
{
    yang_name = "operate"; yang_parent_name = "operates";
}

FabVqiConfig::Operates::Operate::~Operate()
{
}

bool FabVqiConfig::Operates::Operate::has_data() const
{
    return id1.is_set
	|| id1_xr.is_set
	|| id2.is_set;
}

bool FabVqiConfig::Operates::Operate::has_operation() const
{
    return is_set(operation)
	|| is_set(id1.operation)
	|| is_set(id1_xr.operation)
	|| is_set(id2.operation);
}

std::string FabVqiConfig::Operates::Operate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "operate" <<"[id1='" <<id1 <<"']";

    return path_buffer.str();

}

const EntityPath FabVqiConfig::Operates::Operate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-asr9k-fab-cfg:fab-vqi-config/operates/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id1.is_set || is_set(id1.operation)) leaf_name_data.push_back(id1.get_name_leafdata());
    if (id1_xr.is_set || is_set(id1_xr.operation)) leaf_name_data.push_back(id1_xr.get_name_leafdata());
    if (id2.is_set || is_set(id2.operation)) leaf_name_data.push_back(id2.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> FabVqiConfig::Operates::Operate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FabVqiConfig::Operates::Operate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void FabVqiConfig::Operates::Operate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id1")
    {
        id1 = value;
    }
    if(value_path == "id1-xr")
    {
        id1_xr = value;
    }
    if(value_path == "id2")
    {
        id2 = value;
    }
}


}
}

