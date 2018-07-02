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

        class CContextMappingTable; //type: CISCOCONTEXTMAPPINGMIB::CContextMappingTable
        class CContextMappingBridgeDomainTable; //type: CISCOCONTEXTMAPPINGMIB::CContextMappingBridgeDomainTable
        class CContextMappingBridgeInstanceTable; //type: CISCOCONTEXTMAPPINGMIB::CContextMappingBridgeInstanceTable
        class CContextMappingLicenseGroupTable; //type: CISCOCONTEXTMAPPINGMIB::CContextMappingLicenseGroupTable

        std::shared_ptr<cisco_ios_xe::CISCO_CONTEXT_MAPPING_MIB::CISCOCONTEXTMAPPINGMIB::CContextMappingTable> ccontextmappingtable;
        std::shared_ptr<cisco_ios_xe::CISCO_CONTEXT_MAPPING_MIB::CISCOCONTEXTMAPPINGMIB::CContextMappingBridgeDomainTable> ccontextmappingbridgedomaintable;
        std::shared_ptr<cisco_ios_xe::CISCO_CONTEXT_MAPPING_MIB::CISCOCONTEXTMAPPINGMIB::CContextMappingBridgeInstanceTable> ccontextmappingbridgeinstancetable;
        std::shared_ptr<cisco_ios_xe::CISCO_CONTEXT_MAPPING_MIB::CISCOCONTEXTMAPPINGMIB::CContextMappingLicenseGroupTable> ccontextmappinglicensegrouptable;
        
}; // CISCOCONTEXTMAPPINGMIB


class CISCOCONTEXTMAPPINGMIB::CContextMappingTable : public ydk::Entity
{
    public:
        CContextMappingTable();
        ~CContextMappingTable();

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

        class CContextMappingEntry; //type: CISCOCONTEXTMAPPINGMIB::CContextMappingTable::CContextMappingEntry

        ydk::YList ccontextmappingentry;
        
}; // CISCOCONTEXTMAPPINGMIB::CContextMappingTable


class CISCOCONTEXTMAPPINGMIB::CContextMappingTable::CContextMappingEntry : public ydk::Entity
{
    public:
        CContextMappingEntry();
        ~CContextMappingEntry();

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

}; // CISCOCONTEXTMAPPINGMIB::CContextMappingTable::CContextMappingEntry


class CISCOCONTEXTMAPPINGMIB::CContextMappingBridgeDomainTable : public ydk::Entity
{
    public:
        CContextMappingBridgeDomainTable();
        ~CContextMappingBridgeDomainTable();

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

        class CContextMappingBridgeDomainEntry; //type: CISCOCONTEXTMAPPINGMIB::CContextMappingBridgeDomainTable::CContextMappingBridgeDomainEntry

        ydk::YList ccontextmappingbridgedomainentry;
        
}; // CISCOCONTEXTMAPPINGMIB::CContextMappingBridgeDomainTable


class CISCOCONTEXTMAPPINGMIB::CContextMappingBridgeDomainTable::CContextMappingBridgeDomainEntry : public ydk::Entity
{
    public:
        CContextMappingBridgeDomainEntry();
        ~CContextMappingBridgeDomainEntry();

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

        //type: string (refers to cisco_ios_xe::CISCO_CONTEXT_MAPPING_MIB::CISCOCONTEXTMAPPINGMIB::CContextMappingTable::CContextMappingEntry::ccontextmappingvacmcontextname)
        ydk::YLeaf ccontextmappingvacmcontextname;
        ydk::YLeaf ccontextmappingbridgedomainidentifier; //type: uint32
        ydk::YLeaf ccontextmappingbridgedomainstoragetype; //type: StorageType
        ydk::YLeaf ccontextmappingbridgedomainrowstatus; //type: RowStatus

}; // CISCOCONTEXTMAPPINGMIB::CContextMappingBridgeDomainTable::CContextMappingBridgeDomainEntry


class CISCOCONTEXTMAPPINGMIB::CContextMappingBridgeInstanceTable : public ydk::Entity
{
    public:
        CContextMappingBridgeInstanceTable();
        ~CContextMappingBridgeInstanceTable();

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

        class CContextMappingBridgeInstanceEntry; //type: CISCOCONTEXTMAPPINGMIB::CContextMappingBridgeInstanceTable::CContextMappingBridgeInstanceEntry

        ydk::YList ccontextmappingbridgeinstanceentry;
        
}; // CISCOCONTEXTMAPPINGMIB::CContextMappingBridgeInstanceTable


class CISCOCONTEXTMAPPINGMIB::CContextMappingBridgeInstanceTable::CContextMappingBridgeInstanceEntry : public ydk::Entity
{
    public:
        CContextMappingBridgeInstanceEntry();
        ~CContextMappingBridgeInstanceEntry();

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

        //type: string (refers to cisco_ios_xe::CISCO_CONTEXT_MAPPING_MIB::CISCOCONTEXTMAPPINGMIB::CContextMappingTable::CContextMappingEntry::ccontextmappingvacmcontextname)
        ydk::YLeaf ccontextmappingvacmcontextname;
        ydk::YLeaf ccontextmappingbridgeinstname; //type: string
        ydk::YLeaf ccontextmappingbridgeinststoragetype; //type: StorageType
        ydk::YLeaf ccontextmappingbridgeinstrowstatus; //type: RowStatus

}; // CISCOCONTEXTMAPPINGMIB::CContextMappingBridgeInstanceTable::CContextMappingBridgeInstanceEntry


class CISCOCONTEXTMAPPINGMIB::CContextMappingLicenseGroupTable : public ydk::Entity
{
    public:
        CContextMappingLicenseGroupTable();
        ~CContextMappingLicenseGroupTable();

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

        class CContextMappingLicenseGroupEntry; //type: CISCOCONTEXTMAPPINGMIB::CContextMappingLicenseGroupTable::CContextMappingLicenseGroupEntry

        ydk::YList ccontextmappinglicensegroupentry;
        
}; // CISCOCONTEXTMAPPINGMIB::CContextMappingLicenseGroupTable


class CISCOCONTEXTMAPPINGMIB::CContextMappingLicenseGroupTable::CContextMappingLicenseGroupEntry : public ydk::Entity
{
    public:
        CContextMappingLicenseGroupEntry();
        ~CContextMappingLicenseGroupEntry();

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

        //type: string (refers to cisco_ios_xe::CISCO_CONTEXT_MAPPING_MIB::CISCOCONTEXTMAPPINGMIB::CContextMappingTable::CContextMappingEntry::ccontextmappingvacmcontextname)
        ydk::YLeaf ccontextmappingvacmcontextname;
        ydk::YLeaf ccontextmappinglicensegroupname; //type: string
        ydk::YLeaf ccontextmappinglicensegroupstoragetype; //type: StorageType
        ydk::YLeaf ccontextmappinglicensegrouprowstatus; //type: RowStatus

}; // CISCOCONTEXTMAPPINGMIB::CContextMappingLicenseGroupTable::CContextMappingLicenseGroupEntry


}
}

#endif /* _CISCO_CONTEXT_MAPPING_MIB_ */

