
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ncs5k_fea_pfilter_nonatomic_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ncs5k_fea_pfilter_nonatomic_cfg {

Hardware::Hardware()
    :
    access_list(std::make_shared<Hardware::AccessList>())
{
    access_list->parent = this;

    yang_name = "hardware"; yang_parent_name = "Cisco-IOS-XR-ncs5k-fea-pfilter-nonatomic-cfg";
}

Hardware::~Hardware()
{
}

bool Hardware::has_data() const
{
    return (access_list !=  nullptr && access_list->has_data());
}

bool Hardware::has_operation() const
{
    return is_set(operation)
	|| (access_list !=  nullptr && access_list->has_operation());
}

std::string Hardware::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ncs5k-fea-pfilter-nonatomic-cfg:hardware";

    return path_buffer.str();

}

const EntityPath Hardware::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Hardware::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-list")
    {
        if(access_list == nullptr)
        {
            access_list = std::make_shared<Hardware::AccessList>();
        }
        return access_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Hardware::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(access_list != nullptr)
    {
        children["access-list"] = access_list;
    }

    return children;
}

void Hardware::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> Hardware::clone_ptr() const
{
    return std::make_shared<Hardware>();
}

std::string Hardware::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Hardware::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Hardware::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

Hardware::AccessList::AccessList()
    :
    atomic_disable{YType::enumeration, "atomic-disable"}
{
    yang_name = "access-list"; yang_parent_name = "hardware";
}

Hardware::AccessList::~AccessList()
{
}

bool Hardware::AccessList::has_data() const
{
    return atomic_disable.is_set;
}

bool Hardware::AccessList::has_operation() const
{
    return is_set(operation)
	|| is_set(atomic_disable.operation);
}

std::string Hardware::AccessList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-list";

    return path_buffer.str();

}

const EntityPath Hardware::AccessList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ncs5k-fea-pfilter-nonatomic-cfg:hardware/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atomic_disable.is_set || is_set(atomic_disable.operation)) leaf_name_data.push_back(atomic_disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Hardware::AccessList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Hardware::AccessList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Hardware::AccessList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "atomic-disable")
    {
        atomic_disable = value;
    }
}

const Enum::YLeaf AtomicDisableDfltActnEnum::default_action_deny {1, "default-action-deny"};
const Enum::YLeaf AtomicDisableDfltActnEnum::default_action_permit {2, "default-action-permit"};


}
}

