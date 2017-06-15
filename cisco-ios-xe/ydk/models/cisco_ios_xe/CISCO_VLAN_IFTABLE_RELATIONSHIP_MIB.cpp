
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_VLAN_IFTABLE_RELATIONSHIP_MIB.hpp"

namespace ydk {
namespace CISCO_VLAN_IFTABLE_RELATIONSHIP_MIB {

CiscoVlanIftableRelationshipMib::CiscoVlanIftableRelationshipMib()
    :
    cvivlaninterfaceindextable_(std::make_shared<CiscoVlanIftableRelationshipMib::Cvivlaninterfaceindextable>())
{
    cvivlaninterfaceindextable_->parent = this;

    yang_name = "CISCO-VLAN-IFTABLE-RELATIONSHIP-MIB"; yang_parent_name = "CISCO-VLAN-IFTABLE-RELATIONSHIP-MIB";
}

CiscoVlanIftableRelationshipMib::~CiscoVlanIftableRelationshipMib()
{
}

bool CiscoVlanIftableRelationshipMib::has_data() const
{
    return (cvivlaninterfaceindextable_ !=  nullptr && cvivlaninterfaceindextable_->has_data());
}

bool CiscoVlanIftableRelationshipMib::has_operation() const
{
    return is_set(operation)
	|| (cvivlaninterfaceindextable_ !=  nullptr && cvivlaninterfaceindextable_->has_operation());
}

std::string CiscoVlanIftableRelationshipMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VLAN-IFTABLE-RELATIONSHIP-MIB:CISCO-VLAN-IFTABLE-RELATIONSHIP-MIB";

    return path_buffer.str();

}

const EntityPath CiscoVlanIftableRelationshipMib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> CiscoVlanIftableRelationshipMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cviVlanInterfaceIndexTable")
    {
        if(cvivlaninterfaceindextable_ == nullptr)
        {
            cvivlaninterfaceindextable_ = std::make_shared<CiscoVlanIftableRelationshipMib::Cvivlaninterfaceindextable>();
        }
        return cvivlaninterfaceindextable_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVlanIftableRelationshipMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cvivlaninterfaceindextable_ != nullptr)
    {
        children["cviVlanInterfaceIndexTable"] = cvivlaninterfaceindextable_;
    }

    return children;
}

void CiscoVlanIftableRelationshipMib::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> CiscoVlanIftableRelationshipMib::clone_ptr() const
{
    return std::make_shared<CiscoVlanIftableRelationshipMib>();
}

std::string CiscoVlanIftableRelationshipMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CiscoVlanIftableRelationshipMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CiscoVlanIftableRelationshipMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

CiscoVlanIftableRelationshipMib::Cvivlaninterfaceindextable::Cvivlaninterfaceindextable()
{
    yang_name = "cviVlanInterfaceIndexTable"; yang_parent_name = "CISCO-VLAN-IFTABLE-RELATIONSHIP-MIB";
}

CiscoVlanIftableRelationshipMib::Cvivlaninterfaceindextable::~Cvivlaninterfaceindextable()
{
}

bool CiscoVlanIftableRelationshipMib::Cvivlaninterfaceindextable::has_data() const
{
    for (std::size_t index=0; index<cvivlaninterfaceindexentry_.size(); index++)
    {
        if(cvivlaninterfaceindexentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoVlanIftableRelationshipMib::Cvivlaninterfaceindextable::has_operation() const
{
    for (std::size_t index=0; index<cvivlaninterfaceindexentry_.size(); index++)
    {
        if(cvivlaninterfaceindexentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoVlanIftableRelationshipMib::Cvivlaninterfaceindextable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cviVlanInterfaceIndexTable";

    return path_buffer.str();

}

const EntityPath CiscoVlanIftableRelationshipMib::Cvivlaninterfaceindextable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-VLAN-IFTABLE-RELATIONSHIP-MIB:CISCO-VLAN-IFTABLE-RELATIONSHIP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoVlanIftableRelationshipMib::Cvivlaninterfaceindextable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cviVlanInterfaceIndexEntry")
    {
        for(auto const & c : cvivlaninterfaceindexentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoVlanIftableRelationshipMib::Cvivlaninterfaceindextable::Cvivlaninterfaceindexentry>();
        c->parent = this;
        cvivlaninterfaceindexentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVlanIftableRelationshipMib::Cvivlaninterfaceindextable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cvivlaninterfaceindexentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoVlanIftableRelationshipMib::Cvivlaninterfaceindextable::set_value(const std::string & value_path, std::string value)
{
}

CiscoVlanIftableRelationshipMib::Cvivlaninterfaceindextable::Cvivlaninterfaceindexentry::Cvivlaninterfaceindexentry()
    :
    cvivlanid{YType::int32, "cviVlanId"},
    cviphysicalifindex{YType::int32, "cviPhysicalIfIndex"},
    cviroutedvlanifindex{YType::int32, "cviRoutedVlanIfIndex"}
{
    yang_name = "cviVlanInterfaceIndexEntry"; yang_parent_name = "cviVlanInterfaceIndexTable";
}

CiscoVlanIftableRelationshipMib::Cvivlaninterfaceindextable::Cvivlaninterfaceindexentry::~Cvivlaninterfaceindexentry()
{
}

bool CiscoVlanIftableRelationshipMib::Cvivlaninterfaceindextable::Cvivlaninterfaceindexentry::has_data() const
{
    return cvivlanid.is_set
	|| cviphysicalifindex.is_set
	|| cviroutedvlanifindex.is_set;
}

bool CiscoVlanIftableRelationshipMib::Cvivlaninterfaceindextable::Cvivlaninterfaceindexentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cvivlanid.operation)
	|| is_set(cviphysicalifindex.operation)
	|| is_set(cviroutedvlanifindex.operation);
}

std::string CiscoVlanIftableRelationshipMib::Cvivlaninterfaceindextable::Cvivlaninterfaceindexentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cviVlanInterfaceIndexEntry" <<"[cviVlanId='" <<cvivlanid <<"']" <<"[cviPhysicalIfIndex='" <<cviphysicalifindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoVlanIftableRelationshipMib::Cvivlaninterfaceindextable::Cvivlaninterfaceindexentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-VLAN-IFTABLE-RELATIONSHIP-MIB:CISCO-VLAN-IFTABLE-RELATIONSHIP-MIB/cviVlanInterfaceIndexTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cvivlanid.is_set || is_set(cvivlanid.operation)) leaf_name_data.push_back(cvivlanid.get_name_leafdata());
    if (cviphysicalifindex.is_set || is_set(cviphysicalifindex.operation)) leaf_name_data.push_back(cviphysicalifindex.get_name_leafdata());
    if (cviroutedvlanifindex.is_set || is_set(cviroutedvlanifindex.operation)) leaf_name_data.push_back(cviroutedvlanifindex.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoVlanIftableRelationshipMib::Cvivlaninterfaceindextable::Cvivlaninterfaceindexentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVlanIftableRelationshipMib::Cvivlaninterfaceindextable::Cvivlaninterfaceindexentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoVlanIftableRelationshipMib::Cvivlaninterfaceindextable::Cvivlaninterfaceindexentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cviVlanId")
    {
        cvivlanid = value;
    }
    if(value_path == "cviPhysicalIfIndex")
    {
        cviphysicalifindex = value;
    }
    if(value_path == "cviRoutedVlanIfIndex")
    {
        cviroutedvlanifindex = value;
    }
}


}
}

