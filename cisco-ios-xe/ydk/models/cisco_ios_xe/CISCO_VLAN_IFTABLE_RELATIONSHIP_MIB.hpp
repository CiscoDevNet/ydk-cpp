#ifndef _CISCO_VLAN_IFTABLE_RELATIONSHIP_MIB_
#define _CISCO_VLAN_IFTABLE_RELATIONSHIP_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace CISCO_VLAN_IFTABLE_RELATIONSHIP_MIB {

class CiscoVlanIftableRelationshipMib : public ydk::Entity
{
    public:
        CiscoVlanIftableRelationshipMib();
        ~CiscoVlanIftableRelationshipMib();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::shared_ptr<ydk::Entity> clone_ptr() const override;
        ydk::augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;
        std::map<std::pair<std::string, std::string>, std::string> get_namespace_identity_lookup() const override;

        class Cvivlaninterfaceindextable; //type: CiscoVlanIftableRelationshipMib::Cvivlaninterfaceindextable

        std::shared_ptr<CISCO_VLAN_IFTABLE_RELATIONSHIP_MIB::CiscoVlanIftableRelationshipMib::Cvivlaninterfaceindextable> cvivlaninterfaceindextable;
        
}; // CiscoVlanIftableRelationshipMib


class CiscoVlanIftableRelationshipMib::Cvivlaninterfaceindextable : public ydk::Entity
{
    public:
        Cvivlaninterfaceindextable();
        ~Cvivlaninterfaceindextable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cvivlaninterfaceindexentry; //type: CiscoVlanIftableRelationshipMib::Cvivlaninterfaceindextable::Cvivlaninterfaceindexentry

        std::vector<std::shared_ptr<CISCO_VLAN_IFTABLE_RELATIONSHIP_MIB::CiscoVlanIftableRelationshipMib::Cvivlaninterfaceindextable::Cvivlaninterfaceindexentry> > cvivlaninterfaceindexentry;
        
}; // CiscoVlanIftableRelationshipMib::Cvivlaninterfaceindextable


class CiscoVlanIftableRelationshipMib::Cvivlaninterfaceindextable::Cvivlaninterfaceindexentry : public ydk::Entity
{
    public:
        Cvivlaninterfaceindexentry();
        ~Cvivlaninterfaceindexentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cvivlanid; //type: int32
        ydk::YLeaf cviphysicalifindex; //type: int32
        ydk::YLeaf cviroutedvlanifindex; //type: int32

}; // CiscoVlanIftableRelationshipMib::Cvivlaninterfaceindextable::Cvivlaninterfaceindexentry


}
}

#endif /* _CISCO_VLAN_IFTABLE_RELATIONSHIP_MIB_ */

