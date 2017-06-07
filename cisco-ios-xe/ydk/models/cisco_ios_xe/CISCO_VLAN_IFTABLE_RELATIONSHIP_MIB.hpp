#ifndef _CISCO_VLAN_IFTABLE_RELATIONSHIP_MIB_
#define _CISCO_VLAN_IFTABLE_RELATIONSHIP_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace CISCO_VLAN_IFTABLE_RELATIONSHIP_MIB {

class CiscoVlanIftableRelationshipMib : public Entity
{
    public:
        CiscoVlanIftableRelationshipMib();
        ~CiscoVlanIftableRelationshipMib();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Cvivlaninterfaceindextable; //type: CiscoVlanIftableRelationshipMib::Cvivlaninterfaceindextable

        std::shared_ptr<CISCO_VLAN_IFTABLE_RELATIONSHIP_MIB::CiscoVlanIftableRelationshipMib::Cvivlaninterfaceindextable> cvivlaninterfaceindextable;
        
}; // CiscoVlanIftableRelationshipMib


class CiscoVlanIftableRelationshipMib::Cvivlaninterfaceindextable : public Entity
{
    public:
        Cvivlaninterfaceindextable();
        ~Cvivlaninterfaceindextable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cvivlaninterfaceindexentry; //type: CiscoVlanIftableRelationshipMib::Cvivlaninterfaceindextable::Cvivlaninterfaceindexentry

        std::vector<std::shared_ptr<CISCO_VLAN_IFTABLE_RELATIONSHIP_MIB::CiscoVlanIftableRelationshipMib::Cvivlaninterfaceindextable::Cvivlaninterfaceindexentry> > cvivlaninterfaceindexentry;
        
}; // CiscoVlanIftableRelationshipMib::Cvivlaninterfaceindextable


class CiscoVlanIftableRelationshipMib::Cvivlaninterfaceindextable::Cvivlaninterfaceindexentry : public Entity
{
    public:
        Cvivlaninterfaceindexentry();
        ~Cvivlaninterfaceindexentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cvivlanid; //type: int32
        YLeaf cviphysicalifindex; //type: int32
        YLeaf cviroutedvlanifindex; //type: int32

}; // CiscoVlanIftableRelationshipMib::Cvivlaninterfaceindextable::Cvivlaninterfaceindexentry


}
}

#endif /* _CISCO_VLAN_IFTABLE_RELATIONSHIP_MIB_ */

