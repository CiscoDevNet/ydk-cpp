
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_checkpoint_archive_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XE_checkpoint_archive_oper {

CheckpointArchive::CheckpointArchive()
    :
    current{YType::uint8, "current"},
    max{YType::uint8, "max"},
    recent{YType::str, "recent"}
    	,
    archives_(std::make_shared<CheckpointArchive::Archives>())
{
    archives_->parent = this;

    yang_name = "checkpoint-archive"; yang_parent_name = "Cisco-IOS-XE-checkpoint-archive-oper";
}

CheckpointArchive::~CheckpointArchive()
{
}

bool CheckpointArchive::has_data() const
{
    return current.is_set
	|| max.is_set
	|| recent.is_set
	|| (archives_ !=  nullptr && archives_->has_data());
}

bool CheckpointArchive::has_operation() const
{
    return is_set(operation)
	|| is_set(current.operation)
	|| is_set(max.operation)
	|| is_set(recent.operation)
	|| (archives_ !=  nullptr && archives_->has_operation());
}

std::string CheckpointArchive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-checkpoint-archive-oper:checkpoint-archive";

    return path_buffer.str();

}

const EntityPath CheckpointArchive::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (current.is_set || is_set(current.operation)) leaf_name_data.push_back(current.get_name_leafdata());
    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());
    if (recent.is_set || is_set(recent.operation)) leaf_name_data.push_back(recent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CheckpointArchive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "archives")
    {
        if(archives_ == nullptr)
        {
            archives_ = std::make_shared<CheckpointArchive::Archives>();
        }
        return archives_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CheckpointArchive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(archives_ != nullptr)
    {
        children["archives"] = archives_;
    }

    return children;
}

void CheckpointArchive::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "current")
    {
        current = value;
    }
    if(value_path == "max")
    {
        max = value;
    }
    if(value_path == "recent")
    {
        recent = value;
    }
}

std::shared_ptr<Entity> CheckpointArchive::clone_ptr() const
{
    return std::make_shared<CheckpointArchive>();
}

std::string CheckpointArchive::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CheckpointArchive::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CheckpointArchive::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

CheckpointArchive::Archives::Archives()
{
    yang_name = "archives"; yang_parent_name = "checkpoint-archive";
}

CheckpointArchive::Archives::~Archives()
{
}

bool CheckpointArchive::Archives::has_data() const
{
    for (std::size_t index=0; index<archive_.size(); index++)
    {
        if(archive_[index]->has_data())
            return true;
    }
    return false;
}

bool CheckpointArchive::Archives::has_operation() const
{
    for (std::size_t index=0; index<archive_.size(); index++)
    {
        if(archive_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CheckpointArchive::Archives::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "archives";

    return path_buffer.str();

}

const EntityPath CheckpointArchive::Archives::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-checkpoint-archive-oper:checkpoint-archive/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CheckpointArchive::Archives::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "archive")
    {
        for(auto const & c : archive_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CheckpointArchive::Archives::Archive>();
        c->parent = this;
        archive_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CheckpointArchive::Archives::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : archive_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CheckpointArchive::Archives::set_value(const std::string & value_path, std::string value)
{
}

CheckpointArchive::Archives::Archive::Archive()
    :
    number{YType::uint16, "number"},
    name{YType::str, "name"}
{
    yang_name = "archive"; yang_parent_name = "archives";
}

CheckpointArchive::Archives::Archive::~Archive()
{
}

bool CheckpointArchive::Archives::Archive::has_data() const
{
    return number.is_set
	|| name.is_set;
}

bool CheckpointArchive::Archives::Archive::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| is_set(name.operation);
}

std::string CheckpointArchive::Archives::Archive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "archive" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

const EntityPath CheckpointArchive::Archives::Archive::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-checkpoint-archive-oper:checkpoint-archive/archives/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CheckpointArchive::Archives::Archive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CheckpointArchive::Archives::Archive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CheckpointArchive::Archives::Archive::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}


}
}

