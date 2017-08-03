#ifndef _CISCO_CONTEXT_MAPPING_MIB_
#define _CISCO_CONTEXT_MAPPING_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_CONTEXT_MAPPING_MIB {

class CiscoContextMappingMib : public ydk::Entity
{
    public:
        CiscoContextMappingMib();
        ~CiscoContextMappingMib();

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

        class Ccontextmappingtable; //type: CiscoContextMappingMib::Ccontextmappingtable
        class Ccontextmappingbridgedomaintable; //type: CiscoContextMappingMib::Ccontextmappingbridgedomaintable
        class Ccontextmappingbridgeinstancetable; //type: CiscoContextMappingMib::Ccontextmappingbridgeinstancetable
        class Ccontextmappinglicensegrouptable; //type: CiscoContextMappingMib::Ccontextmappinglicensegrouptable

        std::shared_ptr<CISCO_CONTEXT_MAPPING_MIB::CiscoContextMappingMib::Ccontextmappingbridgedomaintable> ccontextmappingbridgedomaintable;
        std::shared_ptr<CISCO_CONTEXT_MAPPING_MIB::CiscoContextMappingMib::Ccontextmappingbridgeinstancetable> ccontextmappingbridgeinstancetable;
        std::shared_ptr<CISCO_CONTEXT_MAPPING_MIB::CiscoContextMappingMib::Ccontextmappinglicensegrouptable> ccontextmappinglicensegrouptable;
        std::shared_ptr<CISCO_CONTEXT_MAPPING_MIB::CiscoContextMappingMib::Ccontextmappingtable> ccontextmappingtable;
        
}; // CiscoContextMappingMib


class CiscoContextMappingMib::Ccontextmappingtable : public ydk::Entity
{
    public:
        Ccontextmappingtable();
        ~Ccontextmappingtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ccontextmappingentry; //type: CiscoContextMappingMib::Ccontextmappingtable::Ccontextmappingentry

        std::vector<std::shared_ptr<CISCO_CONTEXT_MAPPING_MIB::CiscoContextMappingMib::Ccontextmappingtable::Ccontextmappingentry> > ccontextmappingentry;
        
}; // CiscoContextMappingMib::Ccontextmappingtable


class CiscoContextMappingMib::Ccontextmappingtable::Ccontextmappingentry : public ydk::Entity
{
    public:
        Ccontextmappingentry();
        ~Ccontextmappingentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ccontextmappingvacmcontextname; //type: string
        ydk::YLeaf ccontextmappingvrfname; //type: string
        ydk::YLeaf ccontextmappingtopologyname; //type: string
        ydk::YLeaf ccontextmappingprotoinstname; //type: string
        ydk::YLeaf ccontextmappingstoragetype; //type: Storagetype
        ydk::YLeaf ccontextmappingrowstatus; //type: Rowstatus

}; // CiscoContextMappingMib::Ccontextmappingtable::Ccontextmappingentry


class CiscoContextMappingMib::Ccontextmappingbridgedomaintable : public ydk::Entity
{
    public:
        Ccontextmappingbridgedomaintable();
        ~Ccontextmappingbridgedomaintable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ccontextmappingbridgedomainentry; //type: CiscoContextMappingMib::Ccontextmappingbridgedomaintable::Ccontextmappingbridgedomainentry

        std::vector<std::shared_ptr<CISCO_CONTEXT_MAPPING_MIB::CiscoContextMappingMib::Ccontextmappingbridgedomaintable::Ccontextmappingbridgedomainentry> > ccontextmappingbridgedomainentry;
        
}; // CiscoContextMappingMib::Ccontextmappingbridgedomaintable


class CiscoContextMappingMib::Ccontextmappingbridgedomaintable::Ccontextmappingbridgedomainentry : public ydk::Entity
{
    public:
        Ccontextmappingbridgedomainentry();
        ~Ccontextmappingbridgedomainentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: string (refers to CISCO_CONTEXT_MAPPING_MIB::CiscoContextMappingMib::Ccontextmappingtable::Ccontextmappingentry::ccontextmappingvacmcontextname)
        ydk::YLeaf ccontextmappingvacmcontextname;
        ydk::YLeaf ccontextmappingbridgedomainidentifier; //type: uint32
        ydk::YLeaf ccontextmappingbridgedomainstoragetype; //type: Storagetype
        ydk::YLeaf ccontextmappingbridgedomainrowstatus; //type: Rowstatus

}; // CiscoContextMappingMib::Ccontextmappingbridgedomaintable::Ccontextmappingbridgedomainentry


class CiscoContextMappingMib::Ccontextmappingbridgeinstancetable : public ydk::Entity
{
    public:
        Ccontextmappingbridgeinstancetable();
        ~Ccontextmappingbridgeinstancetable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ccontextmappingbridgeinstanceentry; //type: CiscoContextMappingMib::Ccontextmappingbridgeinstancetable::Ccontextmappingbridgeinstanceentry

        std::vector<std::shared_ptr<CISCO_CONTEXT_MAPPING_MIB::CiscoContextMappingMib::Ccontextmappingbridgeinstancetable::Ccontextmappingbridgeinstanceentry> > ccontextmappingbridgeinstanceentry;
        
}; // CiscoContextMappingMib::Ccontextmappingbridgeinstancetable


class CiscoContextMappingMib::Ccontextmappingbridgeinstancetable::Ccontextmappingbridgeinstanceentry : public ydk::Entity
{
    public:
        Ccontextmappingbridgeinstanceentry();
        ~Ccontextmappingbridgeinstanceentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: string (refers to CISCO_CONTEXT_MAPPING_MIB::CiscoContextMappingMib::Ccontextmappingtable::Ccontextmappingentry::ccontextmappingvacmcontextname)
        ydk::YLeaf ccontextmappingvacmcontextname;
        ydk::YLeaf ccontextmappingbridgeinstname; //type: string
        ydk::YLeaf ccontextmappingbridgeinststoragetype; //type: Storagetype
        ydk::YLeaf ccontextmappingbridgeinstrowstatus; //type: Rowstatus

}; // CiscoContextMappingMib::Ccontextmappingbridgeinstancetable::Ccontextmappingbridgeinstanceentry


class CiscoContextMappingMib::Ccontextmappinglicensegrouptable : public ydk::Entity
{
    public:
        Ccontextmappinglicensegrouptable();
        ~Ccontextmappinglicensegrouptable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ccontextmappinglicensegroupentry; //type: CiscoContextMappingMib::Ccontextmappinglicensegrouptable::Ccontextmappinglicensegroupentry

        std::vector<std::shared_ptr<CISCO_CONTEXT_MAPPING_MIB::CiscoContextMappingMib::Ccontextmappinglicensegrouptable::Ccontextmappinglicensegroupentry> > ccontextmappinglicensegroupentry;
        
}; // CiscoContextMappingMib::Ccontextmappinglicensegrouptable


class CiscoContextMappingMib::Ccontextmappinglicensegrouptable::Ccontextmappinglicensegroupentry : public ydk::Entity
{
    public:
        Ccontextmappinglicensegroupentry();
        ~Ccontextmappinglicensegroupentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: string (refers to CISCO_CONTEXT_MAPPING_MIB::CiscoContextMappingMib::Ccontextmappingtable::Ccontextmappingentry::ccontextmappingvacmcontextname)
        ydk::YLeaf ccontextmappingvacmcontextname;
        ydk::YLeaf ccontextmappinglicensegroupname; //type: string
        ydk::YLeaf ccontextmappinglicensegroupstoragetype; //type: Storagetype
        ydk::YLeaf ccontextmappinglicensegrouprowstatus; //type: Rowstatus

}; // CiscoContextMappingMib::Ccontextmappinglicensegrouptable::Ccontextmappinglicensegroupentry


}
}

#endif /* _CISCO_CONTEXT_MAPPING_MIB_ */

