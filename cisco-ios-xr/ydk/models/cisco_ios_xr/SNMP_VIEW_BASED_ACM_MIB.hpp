#ifndef _SNMP_VIEW_BASED_ACM_MIB_
#define _SNMP_VIEW_BASED_ACM_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xr {
namespace SNMP_VIEW_BASED_ACM_MIB {

class SNMPVIEWBASEDACMMIB : public ydk::Entity
{
    public:
        SNMPVIEWBASEDACMMIB();
        ~SNMPVIEWBASEDACMMIB();

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

        class VacmSecurityToGroupTable; //type: SNMPVIEWBASEDACMMIB::VacmSecurityToGroupTable
        class VacmAccessTable; //type: SNMPVIEWBASEDACMMIB::VacmAccessTable
        class VacmViewTreeFamilyTable; //type: SNMPVIEWBASEDACMMIB::VacmViewTreeFamilyTable

        std::shared_ptr<cisco_ios_xr::SNMP_VIEW_BASED_ACM_MIB::SNMPVIEWBASEDACMMIB::VacmSecurityToGroupTable> vacmsecuritytogrouptable;
        std::shared_ptr<cisco_ios_xr::SNMP_VIEW_BASED_ACM_MIB::SNMPVIEWBASEDACMMIB::VacmAccessTable> vacmaccesstable;
        std::shared_ptr<cisco_ios_xr::SNMP_VIEW_BASED_ACM_MIB::SNMPVIEWBASEDACMMIB::VacmViewTreeFamilyTable> vacmviewtreefamilytable;
        
}; // SNMPVIEWBASEDACMMIB


class SNMPVIEWBASEDACMMIB::VacmSecurityToGroupTable : public ydk::Entity
{
    public:
        VacmSecurityToGroupTable();
        ~VacmSecurityToGroupTable();

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

        class VacmSecurityToGroupEntry; //type: SNMPVIEWBASEDACMMIB::VacmSecurityToGroupTable::VacmSecurityToGroupEntry

        ydk::YList vacmsecuritytogroupentry;
        
}; // SNMPVIEWBASEDACMMIB::VacmSecurityToGroupTable


class SNMPVIEWBASEDACMMIB::VacmSecurityToGroupTable::VacmSecurityToGroupEntry : public ydk::Entity
{
    public:
        VacmSecurityToGroupEntry();
        ~VacmSecurityToGroupEntry();

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

        ydk::YLeaf vacmsecuritymodel; //type: int32
        ydk::YLeaf vacmsecurityname; //type: string
        ydk::YLeaf vacmgroupname; //type: string
        ydk::YLeaf vacmsecuritytogroupstoragetype; //type: StorageType

}; // SNMPVIEWBASEDACMMIB::VacmSecurityToGroupTable::VacmSecurityToGroupEntry


class SNMPVIEWBASEDACMMIB::VacmAccessTable : public ydk::Entity
{
    public:
        VacmAccessTable();
        ~VacmAccessTable();

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

        class VacmAccessEntry; //type: SNMPVIEWBASEDACMMIB::VacmAccessTable::VacmAccessEntry

        ydk::YList vacmaccessentry;
        
}; // SNMPVIEWBASEDACMMIB::VacmAccessTable


class SNMPVIEWBASEDACMMIB::VacmAccessTable::VacmAccessEntry : public ydk::Entity
{
    public:
        VacmAccessEntry();
        ~VacmAccessEntry();

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

        ydk::YLeaf vacmgroupname; //type: string
        ydk::YLeaf vacmaccesscontextprefix; //type: string
        ydk::YLeaf vacmaccesssecuritymodel; //type: int32
        ydk::YLeaf vacmaccesssecuritylevel; //type: SnmpSecurityLevel
        ydk::YLeaf vacmaccesscontextmatch; //type: VacmAccessContextMatchType
        ydk::YLeaf vacmaccessreadviewname; //type: string
        ydk::YLeaf vacmaccesswriteviewname; //type: string
        ydk::YLeaf vacmaccessnotifyviewname; //type: string
        ydk::YLeaf vacmaccessstoragetype; //type: StorageType

}; // SNMPVIEWBASEDACMMIB::VacmAccessTable::VacmAccessEntry


class SNMPVIEWBASEDACMMIB::VacmViewTreeFamilyTable : public ydk::Entity
{
    public:
        VacmViewTreeFamilyTable();
        ~VacmViewTreeFamilyTable();

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

        class VacmViewTreeFamilyEntry; //type: SNMPVIEWBASEDACMMIB::VacmViewTreeFamilyTable::VacmViewTreeFamilyEntry

        ydk::YList vacmviewtreefamilyentry;
        
}; // SNMPVIEWBASEDACMMIB::VacmViewTreeFamilyTable


class SNMPVIEWBASEDACMMIB::VacmViewTreeFamilyTable::VacmViewTreeFamilyEntry : public ydk::Entity
{
    public:
        VacmViewTreeFamilyEntry();
        ~VacmViewTreeFamilyEntry();

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

        ydk::YLeaf vacmviewtreefamilyviewname; //type: string
        ydk::YLeaf vacmviewtreefamilysubtree; //type: string
        ydk::YLeaf vacmviewtreefamilymask; //type: string
        ydk::YLeaf vacmviewtreefamilytype; //type: VacmViewTreeFamilyTypeType
        ydk::YLeaf vacmviewtreefamilystoragetype; //type: StorageType

}; // SNMPVIEWBASEDACMMIB::VacmViewTreeFamilyTable::VacmViewTreeFamilyEntry

class VacmAccessContextMatchType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf exact;
        static const ydk::Enum::YLeaf prefix;

};

class VacmViewTreeFamilyTypeType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf included;
        static const ydk::Enum::YLeaf excluded;

};


}
}

#endif /* _SNMP_VIEW_BASED_ACM_MIB_ */

