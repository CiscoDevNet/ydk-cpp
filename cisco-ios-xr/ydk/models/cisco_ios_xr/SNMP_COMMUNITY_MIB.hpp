#ifndef _SNMP_COMMUNITY_MIB_
#define _SNMP_COMMUNITY_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xr {
namespace SNMP_COMMUNITY_MIB {

class SNMPCOMMUNITYMIB : public ydk::Entity
{
    public:
        SNMPCOMMUNITYMIB();
        ~SNMPCOMMUNITYMIB();

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

        class SnmpCommunityTable; //type: SNMPCOMMUNITYMIB::SnmpCommunityTable

        std::shared_ptr<cisco_ios_xr::SNMP_COMMUNITY_MIB::SNMPCOMMUNITYMIB::SnmpCommunityTable> snmpcommunitytable;
        
}; // SNMPCOMMUNITYMIB


class SNMPCOMMUNITYMIB::SnmpCommunityTable : public ydk::Entity
{
    public:
        SnmpCommunityTable();
        ~SnmpCommunityTable();

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

        class SnmpCommunityEntry; //type: SNMPCOMMUNITYMIB::SnmpCommunityTable::SnmpCommunityEntry

        ydk::YList snmpcommunityentry;
        
}; // SNMPCOMMUNITYMIB::SnmpCommunityTable


class SNMPCOMMUNITYMIB::SnmpCommunityTable::SnmpCommunityEntry : public ydk::Entity
{
    public:
        SnmpCommunityEntry();
        ~SnmpCommunityEntry();

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

        ydk::YLeaf snmpcommunityindex; //type: string
        ydk::YLeaf snmpcommunityname; //type: string
        ydk::YLeaf snmpcommunitysecurityname; //type: string
        ydk::YLeaf snmpcommunitycontextengineid; //type: string
        ydk::YLeaf snmpcommunitycontextname; //type: string
        ydk::YLeaf snmpcommunitytransporttag; //type: string
        ydk::YLeaf snmpcommunitystoragetype; //type: StorageType

}; // SNMPCOMMUNITYMIB::SnmpCommunityTable::SnmpCommunityEntry


}
}

#endif /* _SNMP_COMMUNITY_MIB_ */

