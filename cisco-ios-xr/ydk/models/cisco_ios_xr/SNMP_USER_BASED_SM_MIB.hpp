#ifndef _SNMP_USER_BASED_SM_MIB_
#define _SNMP_USER_BASED_SM_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xr {
namespace SNMP_USER_BASED_SM_MIB {

class SNMPUSERBASEDSMMIB : public ydk::Entity
{
    public:
        SNMPUSERBASEDSMMIB();
        ~SNMPUSERBASEDSMMIB();

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

        class UsmStats; //type: SNMPUSERBASEDSMMIB::UsmStats
        class UsmUserTable; //type: SNMPUSERBASEDSMMIB::UsmUserTable

        std::shared_ptr<cisco_ios_xr::SNMP_USER_BASED_SM_MIB::SNMPUSERBASEDSMMIB::UsmStats> usmstats;
        std::shared_ptr<cisco_ios_xr::SNMP_USER_BASED_SM_MIB::SNMPUSERBASEDSMMIB::UsmUserTable> usmusertable;
        
}; // SNMPUSERBASEDSMMIB


class SNMPUSERBASEDSMMIB::UsmStats : public ydk::Entity
{
    public:
        UsmStats();
        ~UsmStats();

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

        ydk::YLeaf usmstatsunsupportedseclevels; //type: uint32
        ydk::YLeaf usmstatsnotintimewindows; //type: uint32
        ydk::YLeaf usmstatsunknownusernames; //type: uint32
        ydk::YLeaf usmstatsunknownengineids; //type: uint32
        ydk::YLeaf usmstatswrongdigests; //type: uint32
        ydk::YLeaf usmstatsdecryptionerrors; //type: uint32

}; // SNMPUSERBASEDSMMIB::UsmStats


class SNMPUSERBASEDSMMIB::UsmUserTable : public ydk::Entity
{
    public:
        UsmUserTable();
        ~UsmUserTable();

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

        class UsmUserEntry; //type: SNMPUSERBASEDSMMIB::UsmUserTable::UsmUserEntry

        ydk::YList usmuserentry;
        
}; // SNMPUSERBASEDSMMIB::UsmUserTable


class SNMPUSERBASEDSMMIB::UsmUserTable::UsmUserEntry : public ydk::Entity
{
    public:
        UsmUserEntry();
        ~UsmUserEntry();

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

        ydk::YLeaf usmuserengineid; //type: string
        ydk::YLeaf usmusername; //type: string
        ydk::YLeaf usmusersecurityname; //type: string
        ydk::YLeaf usmuserclonefrom; //type: string
        ydk::YLeaf usmuserauthprotocol; //type: string
        ydk::YLeaf usmuserauthkeychange; //type: string
        ydk::YLeaf usmuserownauthkeychange; //type: string
        ydk::YLeaf usmuserprivprotocol; //type: string
        ydk::YLeaf usmuserprivkeychange; //type: string
        ydk::YLeaf usmuserownprivkeychange; //type: string
        ydk::YLeaf usmuserpublic; //type: string
        ydk::YLeaf usmuserstoragetype; //type: StorageType
        ydk::YLeaf usmuserauthkey; //type: string
        ydk::YLeaf usmuserprivkey; //type: string

}; // SNMPUSERBASEDSMMIB::UsmUserTable::UsmUserEntry


}
}

#endif /* _SNMP_USER_BASED_SM_MIB_ */

