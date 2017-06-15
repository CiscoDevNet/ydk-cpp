
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_IMAGE_MIB.hpp"

namespace ydk {
namespace CISCO_IMAGE_MIB {

CiscoImageMib::CiscoImageMib()
    :
    ciscoimagetable_(std::make_shared<CiscoImageMib::Ciscoimagetable>())
{
    ciscoimagetable_->parent = this;

    yang_name = "CISCO-IMAGE-MIB"; yang_parent_name = "CISCO-IMAGE-MIB";
}

CiscoImageMib::~CiscoImageMib()
{
}

bool CiscoImageMib::has_data() const
{
    return (ciscoimagetable_ !=  nullptr && ciscoimagetable_->has_data());
}

bool CiscoImageMib::has_operation() const
{
    return is_set(operation)
	|| (ciscoimagetable_ !=  nullptr && ciscoimagetable_->has_operation());
}

std::string CiscoImageMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IMAGE-MIB:CISCO-IMAGE-MIB";

    return path_buffer.str();

}

const EntityPath CiscoImageMib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> CiscoImageMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ciscoImageTable")
    {
        if(ciscoimagetable_ == nullptr)
        {
            ciscoimagetable_ = std::make_shared<CiscoImageMib::Ciscoimagetable>();
        }
        return ciscoimagetable_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoImageMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ciscoimagetable_ != nullptr)
    {
        children["ciscoImageTable"] = ciscoimagetable_;
    }

    return children;
}

void CiscoImageMib::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> CiscoImageMib::clone_ptr() const
{
    return std::make_shared<CiscoImageMib>();
}

std::string CiscoImageMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CiscoImageMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CiscoImageMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

CiscoImageMib::Ciscoimagetable::Ciscoimagetable()
{
    yang_name = "ciscoImageTable"; yang_parent_name = "CISCO-IMAGE-MIB";
}

CiscoImageMib::Ciscoimagetable::~Ciscoimagetable()
{
}

bool CiscoImageMib::Ciscoimagetable::has_data() const
{
    for (std::size_t index=0; index<ciscoimageentry_.size(); index++)
    {
        if(ciscoimageentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoImageMib::Ciscoimagetable::has_operation() const
{
    for (std::size_t index=0; index<ciscoimageentry_.size(); index++)
    {
        if(ciscoimageentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoImageMib::Ciscoimagetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoImageTable";

    return path_buffer.str();

}

const EntityPath CiscoImageMib::Ciscoimagetable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IMAGE-MIB:CISCO-IMAGE-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoImageMib::Ciscoimagetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ciscoImageEntry")
    {
        for(auto const & c : ciscoimageentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoImageMib::Ciscoimagetable::Ciscoimageentry>();
        c->parent = this;
        ciscoimageentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoImageMib::Ciscoimagetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ciscoimageentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoImageMib::Ciscoimagetable::set_value(const std::string & value_path, std::string value)
{
}

CiscoImageMib::Ciscoimagetable::Ciscoimageentry::Ciscoimageentry()
    :
    ciscoimageindex{YType::int32, "ciscoImageIndex"},
    ciscoimagestring{YType::str, "ciscoImageString"}
{
    yang_name = "ciscoImageEntry"; yang_parent_name = "ciscoImageTable";
}

CiscoImageMib::Ciscoimagetable::Ciscoimageentry::~Ciscoimageentry()
{
}

bool CiscoImageMib::Ciscoimagetable::Ciscoimageentry::has_data() const
{
    return ciscoimageindex.is_set
	|| ciscoimagestring.is_set;
}

bool CiscoImageMib::Ciscoimagetable::Ciscoimageentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ciscoimageindex.operation)
	|| is_set(ciscoimagestring.operation);
}

std::string CiscoImageMib::Ciscoimagetable::Ciscoimageentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoImageEntry" <<"[ciscoImageIndex='" <<ciscoimageindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoImageMib::Ciscoimagetable::Ciscoimageentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IMAGE-MIB:CISCO-IMAGE-MIB/ciscoImageTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciscoimageindex.is_set || is_set(ciscoimageindex.operation)) leaf_name_data.push_back(ciscoimageindex.get_name_leafdata());
    if (ciscoimagestring.is_set || is_set(ciscoimagestring.operation)) leaf_name_data.push_back(ciscoimagestring.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoImageMib::Ciscoimagetable::Ciscoimageentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoImageMib::Ciscoimagetable::Ciscoimageentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoImageMib::Ciscoimagetable::Ciscoimageentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ciscoImageIndex")
    {
        ciscoimageindex = value;
    }
    if(value_path == "ciscoImageString")
    {
        ciscoimagestring = value;
    }
}


}
}

