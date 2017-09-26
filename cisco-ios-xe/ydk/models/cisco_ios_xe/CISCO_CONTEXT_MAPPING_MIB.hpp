#ifndef _CISCO_CONTEXT_MAPPING_MIB_
#define _CISCO_CONTEXT_MAPPING_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_CONTEXT_MAPPING_MIB {

class CISCOCONTEXTMAPPINGMIB : public ydk::Entity
{
    public:
        CISCOCONTEXTMAPPINGMIB();
        ~CISCOCONTEXTMAPPINGMIB();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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

        class Ccontextmappingtable; //type: CISCOCONTEXTMAPPINGMIB::Ccontextmappingtable
        class Ccontextmappingbridgedomaintable; //type: CISCOCONTEXTMAPPINGMIB::Ccontextmappingbridgedomaintable
        class Ccontextmappingbridgeinstancetable; //type: CISCOCONTEXTMAPPINGMIB::Ccontextmappingbridgeinstancetable
        class Ccontextmappinglicensegrouptable; //type: CISCOCONTEXTMAPPINGMIB::Ccontextmappinglicensegrouptable

        std::shared_ptr<cisco_ios_xe::CISCO_CONTEXT_MAPPING_MIB::CISCOCONTEXTMAPPINGMIB::Ccontextmappingbridgedomaintable> ccontextmappingbridgedomaintable;
        std::shared_ptr<cisco_ios_xe::CISCO_CONTEXT_MAPPING_MIB::CISCOCONTEXTMAPPINGMIB::Ccontextmappingbridgeinstancetable> ccontextmappingbridgeinstancetable;
        std::shared_ptr<cisco_ios_xe::CISCO_CONTEXT_MAPPING_MIB::CISCOCONTEXTMAPPINGMIB::Ccontextmappinglicensegrouptable> ccontextmappinglicensegrouptable;
        std::shared_ptr<cisco_ios_xe::CISCO_CONTEXT_MAPPING_MIB::CISCOCONTEXTMAPPINGMIB::Ccontextmappingtable> ccontextmappingtable;
        
}; // CISCOCONTEXTMAPPINGMIB


class CISCOCONTEXTMAPPINGMIB::Ccontextmappingbridgedomaintable : public ydk::Entity
{
    public:
        Ccontextmappingbridgedomaintable();
        ~Ccontextmappingbridgedomaintable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Ccontextmappingbridgedomainentry; //type: CISCOCONTEXTMAPPINGMIB::Ccontextmappingbridgedomaintable::Ccontextmappingbridgedomainentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_CONTEXT_MAPPING_MIB::CISCOCONTEXTMAPPINGMIB::Ccontextmappingbridgedomaintable::Ccontextmappingbridgedomainentry> > ccontextmappingbridgedomainentry;
        
}; // CISCOCONTEXTMAPPINGMIB::Ccontextmappingbridgedomaintable


class CISCOCONTEXTMAPPINGMIB::Ccontextmappingbridgedomaintable::Ccontextmappingbridgedomainentry : public ydk::Entity
{
    public:
        Ccontextmappingbridgedomainentry();
        ~Ccontextmappingbridgedomainentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        //type: string (refers to cisco_ios_xe::CISCO_CONTEXT_MAPPING_MIB::CISCOCONTEXTMAPPINGMIB::Ccontextmappingtable::Ccontextmappingentry::ccontextmappingvacmcontextname)
        ydk::YLeaf ccontextmappingvacmcontextname;
        ydk::YLeaf ccontextmappingbridgedomainidentifier; //type: uint32
        ydk::YLeaf ccontextmappingbridgedomainstoragetype; //type: StorageType
        ydk::YLeaf ccontextmappingbridgedomainrowstatus; //type: RowStatus

}; // CISCOCONTEXTMAPPINGMIB::Ccontextmappingbridgedomaintable::Ccontextmappingbridgedomainentry


class CISCOCONTEXTMAPPINGMIB::Ccontextmappingbridgeinstancetable : public ydk::Entity
{
    public:
        Ccontextmappingbridgeinstancetable();
        ~Ccontextmappingbridgeinstancetable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Ccontextmappingbridgeinstanceentry; //type: CISCOCONTEXTMAPPINGMIB::Ccontextmappingbridgeinstancetable::Ccontextmappingbridgeinstanceentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_CONTEXT_MAPPING_MIB::CISCOCONTEXTMAPPINGMIB::Ccontextmappingbridgeinstancetable::Ccontextmappingbridgeinstanceentry> > ccontextmappingbridgeinstanceentry;
        
}; // CISCOCONTEXTMAPPINGMIB::Ccontextmappingbridgeinstancetable


class CISCOCONTEXTMAPPINGMIB::Ccontextmappingbridgeinstancetable::Ccontextmappingbridgeinstanceentry : public ydk::Entity
{
    public:
        Ccontextmappingbridgeinstanceentry();
        ~Ccontextmappingbridgeinstanceentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        //type: string (refers to cisco_ios_xe::CISCO_CONTEXT_MAPPING_MIB::CISCOCONTEXTMAPPINGMIB::Ccontextmappingtable::Ccontextmappingentry::ccontextmappingvacmcontextname)
        ydk::YLeaf ccontextmappingvacmcontextname;
        ydk::YLeaf ccontextmappingbridgeinstname; //type: string
        ydk::YLeaf ccontextmappingbridgeinststoragetype; //type: StorageType
        ydk::YLeaf ccontextmappingbridgeinstrowstatus; //type: RowStatus

}; // CISCOCONTEXTMAPPINGMIB::Ccontextmappingbridgeinstancetable::Ccontextmappingbridgeinstanceentry


class CISCOCONTEXTMAPPINGMIB::Ccontextmappinglicensegrouptable : public ydk::Entity
{
    public:
        Ccontextmappinglicensegrouptable();
        ~Ccontextmappinglicensegrouptable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Ccontextmappinglicensegroupentry; //type: CISCOCONTEXTMAPPINGMIB::Ccontextmappinglicensegrouptable::Ccontextmappinglicensegroupentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_CONTEXT_MAPPING_MIB::CISCOCONTEXTMAPPINGMIB::Ccontextmappinglicensegrouptable::Ccontextmappinglicensegroupentry> > ccontextmappinglicensegroupentry;
        
}; // CISCOCONTEXTMAPPINGMIB::Ccontextmappinglicensegrouptable


class CISCOCONTEXTMAPPINGMIB::Ccontextmappinglicensegrouptable::Ccontextmappinglicensegroupentry : public ydk::Entity
{
    public:
        Ccontextmappinglicensegroupentry();
        ~Ccontextmappinglicensegroupentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        //type: string (refers to cisco_ios_xe::CISCO_CONTEXT_MAPPING_MIB::CISCOCONTEXTMAPPINGMIB::Ccontextmappingtable::Ccontextmappingentry::ccontextmappingvacmcontextname)
        ydk::YLeaf ccontextmappingvacmcontextname;
        ydk::YLeaf ccontextmappinglicensegroupname; //type: string
        ydk::YLeaf ccontextmappinglicensegroupstoragetype; //type: StorageType
        ydk::YLeaf ccontextmappinglicensegrouprowstatus; //type: RowStatus

}; // CISCOCONTEXTMAPPINGMIB::Ccontextmappinglicensegrouptable::Ccontextmappinglicensegroupentry


class CISCOCONTEXTMAPPINGMIB::Ccontextmappingtable : public ydk::Entity
{
    public:
        Ccontextmappingtable();
        ~Ccontextmappingtable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Ccontextmappingentry; //type: CISCOCONTEXTMAPPINGMIB::Ccontextmappingtable::Ccontextmappingentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_CONTEXT_MAPPING_MIB::CISCOCONTEXTMAPPINGMIB::Ccontextmappingtable::Ccontextmappingentry> > ccontextmappingentry;
        
}; // CISCOCONTEXTMAPPINGMIB::Ccontextmappingtable


class CISCOCONTEXTMAPPINGMIB::Ccontextmappingtable::Ccontextmappingentry : public ydk::Entity
{
    public:
        Ccontextmappingentry();
        ~Ccontextmappingentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ccontextmappingvacmcontextname; //type: string
        ydk::YLeaf ccontextmappingvrfname; //type: string
        ydk::YLeaf ccontextmappingtopologyname; //type: string
        ydk::YLeaf ccontextmappingprotoinstname; //type: string
        ydk::YLeaf ccontextmappingstoragetype; //type: StorageType
        ydk::YLeaf ccontextmappingrowstatus; //type: RowStatus

}; // CISCOCONTEXTMAPPINGMIB::Ccontextmappingtable::Ccontextmappingentry


}
}

#endif /* _CISCO_CONTEXT_MAPPING_MIB_ */

