#ifndef _CISCO_IPSEC_POLICY_MAP_MIB_
#define _CISCO_IPSEC_POLICY_MAP_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace CISCO_IPSEC_POLICY_MAP_MIB {

class CiscoIpsecPolicyMapMib : public ydk::Entity
{
    public:
        CiscoIpsecPolicyMapMib();
        ~CiscoIpsecPolicyMapMib();

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

        class Ikepolmaptable; //type: CiscoIpsecPolicyMapMib::Ikepolmaptable
        class Ipsecpolmaptable; //type: CiscoIpsecPolicyMapMib::Ipsecpolmaptable

        std::shared_ptr<CISCO_IPSEC_POLICY_MAP_MIB::CiscoIpsecPolicyMapMib::Ikepolmaptable> ikepolmaptable;
        std::shared_ptr<CISCO_IPSEC_POLICY_MAP_MIB::CiscoIpsecPolicyMapMib::Ipsecpolmaptable> ipsecpolmaptable;
        
}; // CiscoIpsecPolicyMapMib


class CiscoIpsecPolicyMapMib::Ikepolmaptable : public ydk::Entity
{
    public:
        Ikepolmaptable();
        ~Ikepolmaptable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ikepolmapentry; //type: CiscoIpsecPolicyMapMib::Ikepolmaptable::Ikepolmapentry

        std::vector<std::shared_ptr<CISCO_IPSEC_POLICY_MAP_MIB::CiscoIpsecPolicyMapMib::Ikepolmaptable::Ikepolmapentry> > ikepolmapentry;
        
}; // CiscoIpsecPolicyMapMib::Ikepolmaptable


class CiscoIpsecPolicyMapMib::Ikepolmaptable::Ikepolmapentry : public ydk::Entity
{
    public:
        Ikepolmapentry();
        ~Ikepolmapentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ikepolmaptunindex; //type: int32
        ydk::YLeaf ikepolmappolicynum; //type: int32

}; // CiscoIpsecPolicyMapMib::Ikepolmaptable::Ikepolmapentry


class CiscoIpsecPolicyMapMib::Ipsecpolmaptable : public ydk::Entity
{
    public:
        Ipsecpolmaptable();
        ~Ipsecpolmaptable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipsecpolmapentry; //type: CiscoIpsecPolicyMapMib::Ipsecpolmaptable::Ipsecpolmapentry

        std::vector<std::shared_ptr<CISCO_IPSEC_POLICY_MAP_MIB::CiscoIpsecPolicyMapMib::Ipsecpolmaptable::Ipsecpolmapentry> > ipsecpolmapentry;
        
}; // CiscoIpsecPolicyMapMib::Ipsecpolmaptable


class CiscoIpsecPolicyMapMib::Ipsecpolmaptable::Ipsecpolmapentry : public ydk::Entity
{
    public:
        Ipsecpolmapentry();
        ~Ipsecpolmapentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipsecpolmaptunindex; //type: int32
        ydk::YLeaf ipsecpolmapcryptomapname; //type: string
        ydk::YLeaf ipsecpolmapcryptomapnum; //type: int32
        ydk::YLeaf ipsecpolmapaclstring; //type: string
        ydk::YLeaf ipsecpolmapacestring; //type: string

}; // CiscoIpsecPolicyMapMib::Ipsecpolmaptable::Ipsecpolmapentry


}
}

#endif /* _CISCO_IPSEC_POLICY_MAP_MIB_ */

