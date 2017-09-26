
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_VLAN_IFTABLE_RELATIONSHIP_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_VLAN_IFTABLE_RELATIONSHIP_MIB {

CISCOVLANIFTABLERELATIONSHIPMIB::CISCOVLANIFTABLERELATIONSHIPMIB()
    :
    cvivlaninterfaceindextable(std::make_shared<CISCOVLANIFTABLERELATIONSHIPMIB::Cvivlaninterfaceindextable>())
{
    cvivlaninterfaceindextable->parent = this;

    yang_name = "CISCO-VLAN-IFTABLE-RELATIONSHIP-MIB"; yang_parent_name = "CISCO-VLAN-IFTABLE-RELATIONSHIP-MIB"; is_top_level_class = true; has_list_ancestor = false;
}

CISCOVLANIFTABLERELATIONSHIPMIB::~CISCOVLANIFTABLERELATIONSHIPMIB()
{
}

bool CISCOVLANIFTABLERELATIONSHIPMIB::has_data() const
{
    return (cvivlaninterfaceindextable !=  nullptr && cvivlaninterfaceindextable->has_data());
}

bool CISCOVLANIFTABLERELATIONSHIPMIB::has_operation() const
{
    return is_set(yfilter)
	|| (cvivlaninterfaceindextable !=  nullptr && cvivlaninterfaceindextable->has_operation());
}

std::string CISCOVLANIFTABLERELATIONSHIPMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VLAN-IFTABLE-RELATIONSHIP-MIB:CISCO-VLAN-IFTABLE-RELATIONSHIP-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVLANIFTABLERELATIONSHIPMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVLANIFTABLERELATIONSHIPMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cviVlanInterfaceIndexTable")
    {
        if(cvivlaninterfaceindextable == nullptr)
        {
            cvivlaninterfaceindextable = std::make_shared<CISCOVLANIFTABLERELATIONSHIPMIB::Cvivlaninterfaceindextable>();
        }
        return cvivlaninterfaceindextable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVLANIFTABLERELATIONSHIPMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cvivlaninterfaceindextable != nullptr)
    {
        children["cviVlanInterfaceIndexTable"] = cvivlaninterfaceindextable;
    }

    return children;
}

void CISCOVLANIFTABLERELATIONSHIPMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOVLANIFTABLERELATIONSHIPMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CISCOVLANIFTABLERELATIONSHIPMIB::clone_ptr() const
{
    return std::make_shared<CISCOVLANIFTABLERELATIONSHIPMIB>();
}

std::string CISCOVLANIFTABLERELATIONSHIPMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CISCOVLANIFTABLERELATIONSHIPMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CISCOVLANIFTABLERELATIONSHIPMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CISCOVLANIFTABLERELATIONSHIPMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CISCOVLANIFTABLERELATIONSHIPMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cviVlanInterfaceIndexTable")
        return true;
    return false;
}

CISCOVLANIFTABLERELATIONSHIPMIB::Cvivlaninterfaceindextable::Cvivlaninterfaceindextable()
{

    yang_name = "cviVlanInterfaceIndexTable"; yang_parent_name = "CISCO-VLAN-IFTABLE-RELATIONSHIP-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOVLANIFTABLERELATIONSHIPMIB::Cvivlaninterfaceindextable::~Cvivlaninterfaceindextable()
{
}

bool CISCOVLANIFTABLERELATIONSHIPMIB::Cvivlaninterfaceindextable::has_data() const
{
    for (std::size_t index=0; index<cvivlaninterfaceindexentry.size(); index++)
    {
        if(cvivlaninterfaceindexentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOVLANIFTABLERELATIONSHIPMIB::Cvivlaninterfaceindextable::has_operation() const
{
    for (std::size_t index=0; index<cvivlaninterfaceindexentry.size(); index++)
    {
        if(cvivlaninterfaceindexentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOVLANIFTABLERELATIONSHIPMIB::Cvivlaninterfaceindextable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VLAN-IFTABLE-RELATIONSHIP-MIB:CISCO-VLAN-IFTABLE-RELATIONSHIP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVLANIFTABLERELATIONSHIPMIB::Cvivlaninterfaceindextable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cviVlanInterfaceIndexTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVLANIFTABLERELATIONSHIPMIB::Cvivlaninterfaceindextable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVLANIFTABLERELATIONSHIPMIB::Cvivlaninterfaceindextable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cviVlanInterfaceIndexEntry")
    {
        for(auto const & c : cvivlaninterfaceindexentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CISCOVLANIFTABLERELATIONSHIPMIB::Cvivlaninterfaceindextable::Cvivlaninterfaceindexentry>();
        c->parent = this;
        cvivlaninterfaceindexentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVLANIFTABLERELATIONSHIPMIB::Cvivlaninterfaceindextable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cvivlaninterfaceindexentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOVLANIFTABLERELATIONSHIPMIB::Cvivlaninterfaceindextable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOVLANIFTABLERELATIONSHIPMIB::Cvivlaninterfaceindextable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOVLANIFTABLERELATIONSHIPMIB::Cvivlaninterfaceindextable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cviVlanInterfaceIndexEntry")
        return true;
    return false;
}

CISCOVLANIFTABLERELATIONSHIPMIB::Cvivlaninterfaceindextable::Cvivlaninterfaceindexentry::Cvivlaninterfaceindexentry()
    :
    cvivlanid{YType::int32, "cviVlanId"},
    cviphysicalifindex{YType::int32, "cviPhysicalIfIndex"},
    cviroutedvlanifindex{YType::int32, "cviRoutedVlanIfIndex"}
{

    yang_name = "cviVlanInterfaceIndexEntry"; yang_parent_name = "cviVlanInterfaceIndexTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOVLANIFTABLERELATIONSHIPMIB::Cvivlaninterfaceindextable::Cvivlaninterfaceindexentry::~Cvivlaninterfaceindexentry()
{
}

bool CISCOVLANIFTABLERELATIONSHIPMIB::Cvivlaninterfaceindextable::Cvivlaninterfaceindexentry::has_data() const
{
    return cvivlanid.is_set
	|| cviphysicalifindex.is_set
	|| cviroutedvlanifindex.is_set;
}

bool CISCOVLANIFTABLERELATIONSHIPMIB::Cvivlaninterfaceindextable::Cvivlaninterfaceindexentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cvivlanid.yfilter)
	|| ydk::is_set(cviphysicalifindex.yfilter)
	|| ydk::is_set(cviroutedvlanifindex.yfilter);
}

std::string CISCOVLANIFTABLERELATIONSHIPMIB::Cvivlaninterfaceindextable::Cvivlaninterfaceindexentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VLAN-IFTABLE-RELATIONSHIP-MIB:CISCO-VLAN-IFTABLE-RELATIONSHIP-MIB/cviVlanInterfaceIndexTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVLANIFTABLERELATIONSHIPMIB::Cvivlaninterfaceindextable::Cvivlaninterfaceindexentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cviVlanInterfaceIndexEntry" <<"[cviVlanId='" <<cvivlanid <<"']" <<"[cviPhysicalIfIndex='" <<cviphysicalifindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVLANIFTABLERELATIONSHIPMIB::Cvivlaninterfaceindextable::Cvivlaninterfaceindexentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cvivlanid.is_set || is_set(cvivlanid.yfilter)) leaf_name_data.push_back(cvivlanid.get_name_leafdata());
    if (cviphysicalifindex.is_set || is_set(cviphysicalifindex.yfilter)) leaf_name_data.push_back(cviphysicalifindex.get_name_leafdata());
    if (cviroutedvlanifindex.is_set || is_set(cviroutedvlanifindex.yfilter)) leaf_name_data.push_back(cviroutedvlanifindex.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVLANIFTABLERELATIONSHIPMIB::Cvivlaninterfaceindextable::Cvivlaninterfaceindexentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVLANIFTABLERELATIONSHIPMIB::Cvivlaninterfaceindextable::Cvivlaninterfaceindexentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOVLANIFTABLERELATIONSHIPMIB::Cvivlaninterfaceindextable::Cvivlaninterfaceindexentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cviVlanId")
    {
        cvivlanid = value;
        cvivlanid.value_namespace = name_space;
        cvivlanid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cviPhysicalIfIndex")
    {
        cviphysicalifindex = value;
        cviphysicalifindex.value_namespace = name_space;
        cviphysicalifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cviRoutedVlanIfIndex")
    {
        cviroutedvlanifindex = value;
        cviroutedvlanifindex.value_namespace = name_space;
        cviroutedvlanifindex.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOVLANIFTABLERELATIONSHIPMIB::Cvivlaninterfaceindextable::Cvivlaninterfaceindexentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cviVlanId")
    {
        cvivlanid.yfilter = yfilter;
    }
    if(value_path == "cviPhysicalIfIndex")
    {
        cviphysicalifindex.yfilter = yfilter;
    }
    if(value_path == "cviRoutedVlanIfIndex")
    {
        cviroutedvlanifindex.yfilter = yfilter;
    }
}

bool CISCOVLANIFTABLERELATIONSHIPMIB::Cvivlaninterfaceindextable::Cvivlaninterfaceindexentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cviVlanId" || name == "cviPhysicalIfIndex" || name == "cviRoutedVlanIfIndex")
        return true;
    return false;
}


}
}

