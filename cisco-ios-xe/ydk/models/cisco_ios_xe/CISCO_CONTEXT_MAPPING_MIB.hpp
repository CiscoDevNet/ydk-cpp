#ifndef _CISCO_CONTEXT_MAPPING_MIB_
#define _CISCO_CONTEXT_MAPPING_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace CISCO_CONTEXT_MAPPING_MIB {

class CiscoContextMappingMib : public Entity
{
    public:
        CiscoContextMappingMib();
        ~CiscoContextMappingMib();

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

        class Ccontextmappingtable; //type: CiscoContextMappingMib::Ccontextmappingtable
        class Ccontextmappingbridgedomaintable; //type: CiscoContextMappingMib::Ccontextmappingbridgedomaintable
        class Ccontextmappingbridgeinstancetable; //type: CiscoContextMappingMib::Ccontextmappingbridgeinstancetable
        class Ccontextmappinglicensegrouptable; //type: CiscoContextMappingMib::Ccontextmappinglicensegrouptable

        std::shared_ptr<CISCO_CONTEXT_MAPPING_MIB::CiscoContextMappingMib::Ccontextmappingbridgedomaintable> ccontextmappingbridgedomaintable;
        std::shared_ptr<CISCO_CONTEXT_MAPPING_MIB::CiscoContextMappingMib::Ccontextmappingbridgeinstancetable> ccontextmappingbridgeinstancetable;
        std::shared_ptr<CISCO_CONTEXT_MAPPING_MIB::CiscoContextMappingMib::Ccontextmappinglicensegrouptable> ccontextmappinglicensegrouptable;
        std::shared_ptr<CISCO_CONTEXT_MAPPING_MIB::CiscoContextMappingMib::Ccontextmappingtable> ccontextmappingtable;
        
}; // CiscoContextMappingMib


class CiscoContextMappingMib::Ccontextmappingtable : public Entity
{
    public:
        Ccontextmappingtable();
        ~Ccontextmappingtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ccontextmappingentry; //type: CiscoContextMappingMib::Ccontextmappingtable::Ccontextmappingentry

        std::vector<std::shared_ptr<CISCO_CONTEXT_MAPPING_MIB::CiscoContextMappingMib::Ccontextmappingtable::Ccontextmappingentry> > ccontextmappingentry;
        
}; // CiscoContextMappingMib::Ccontextmappingtable


class CiscoContextMappingMib::Ccontextmappingtable::Ccontextmappingentry : public Entity
{
    public:
        Ccontextmappingentry();
        ~Ccontextmappingentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ccontextmappingvacmcontextname; //type: string
        YLeaf ccontextmappingvrfname; //type: string
        YLeaf ccontextmappingtopologyname; //type: string
        YLeaf ccontextmappingprotoinstname; //type: string
        YLeaf ccontextmappingstoragetype; //type: StoragetypeEnum
        YLeaf ccontextmappingrowstatus; //type: RowstatusEnum

}; // CiscoContextMappingMib::Ccontextmappingtable::Ccontextmappingentry


class CiscoContextMappingMib::Ccontextmappingbridgedomaintable : public Entity
{
    public:
        Ccontextmappingbridgedomaintable();
        ~Ccontextmappingbridgedomaintable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ccontextmappingbridgedomainentry; //type: CiscoContextMappingMib::Ccontextmappingbridgedomaintable::Ccontextmappingbridgedomainentry

        std::vector<std::shared_ptr<CISCO_CONTEXT_MAPPING_MIB::CiscoContextMappingMib::Ccontextmappingbridgedomaintable::Ccontextmappingbridgedomainentry> > ccontextmappingbridgedomainentry;
        
}; // CiscoContextMappingMib::Ccontextmappingbridgedomaintable


class CiscoContextMappingMib::Ccontextmappingbridgedomaintable::Ccontextmappingbridgedomainentry : public Entity
{
    public:
        Ccontextmappingbridgedomainentry();
        ~Ccontextmappingbridgedomainentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: string (refers to CISCO_CONTEXT_MAPPING_MIB::CiscoContextMappingMib::Ccontextmappingtable::Ccontextmappingentry::ccontextmappingvacmcontextname)
        YLeaf ccontextmappingvacmcontextname;
        YLeaf ccontextmappingbridgedomainidentifier; //type: uint32
        YLeaf ccontextmappingbridgedomainstoragetype; //type: StoragetypeEnum
        YLeaf ccontextmappingbridgedomainrowstatus; //type: RowstatusEnum

}; // CiscoContextMappingMib::Ccontextmappingbridgedomaintable::Ccontextmappingbridgedomainentry


class CiscoContextMappingMib::Ccontextmappingbridgeinstancetable : public Entity
{
    public:
        Ccontextmappingbridgeinstancetable();
        ~Ccontextmappingbridgeinstancetable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ccontextmappingbridgeinstanceentry; //type: CiscoContextMappingMib::Ccontextmappingbridgeinstancetable::Ccontextmappingbridgeinstanceentry

        std::vector<std::shared_ptr<CISCO_CONTEXT_MAPPING_MIB::CiscoContextMappingMib::Ccontextmappingbridgeinstancetable::Ccontextmappingbridgeinstanceentry> > ccontextmappingbridgeinstanceentry;
        
}; // CiscoContextMappingMib::Ccontextmappingbridgeinstancetable


class CiscoContextMappingMib::Ccontextmappingbridgeinstancetable::Ccontextmappingbridgeinstanceentry : public Entity
{
    public:
        Ccontextmappingbridgeinstanceentry();
        ~Ccontextmappingbridgeinstanceentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: string (refers to CISCO_CONTEXT_MAPPING_MIB::CiscoContextMappingMib::Ccontextmappingtable::Ccontextmappingentry::ccontextmappingvacmcontextname)
        YLeaf ccontextmappingvacmcontextname;
        YLeaf ccontextmappingbridgeinstname; //type: string
        YLeaf ccontextmappingbridgeinststoragetype; //type: StoragetypeEnum
        YLeaf ccontextmappingbridgeinstrowstatus; //type: RowstatusEnum

}; // CiscoContextMappingMib::Ccontextmappingbridgeinstancetable::Ccontextmappingbridgeinstanceentry


class CiscoContextMappingMib::Ccontextmappinglicensegrouptable : public Entity
{
    public:
        Ccontextmappinglicensegrouptable();
        ~Ccontextmappinglicensegrouptable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ccontextmappinglicensegroupentry; //type: CiscoContextMappingMib::Ccontextmappinglicensegrouptable::Ccontextmappinglicensegroupentry

        std::vector<std::shared_ptr<CISCO_CONTEXT_MAPPING_MIB::CiscoContextMappingMib::Ccontextmappinglicensegrouptable::Ccontextmappinglicensegroupentry> > ccontextmappinglicensegroupentry;
        
}; // CiscoContextMappingMib::Ccontextmappinglicensegrouptable


class CiscoContextMappingMib::Ccontextmappinglicensegrouptable::Ccontextmappinglicensegroupentry : public Entity
{
    public:
        Ccontextmappinglicensegroupentry();
        ~Ccontextmappinglicensegroupentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: string (refers to CISCO_CONTEXT_MAPPING_MIB::CiscoContextMappingMib::Ccontextmappingtable::Ccontextmappingentry::ccontextmappingvacmcontextname)
        YLeaf ccontextmappingvacmcontextname;
        YLeaf ccontextmappinglicensegroupname; //type: string
        YLeaf ccontextmappinglicensegroupstoragetype; //type: StoragetypeEnum
        YLeaf ccontextmappinglicensegrouprowstatus; //type: RowstatusEnum

}; // CiscoContextMappingMib::Ccontextmappinglicensegrouptable::Ccontextmappinglicensegroupentry


}
}

#endif /* _CISCO_CONTEXT_MAPPING_MIB_ */

