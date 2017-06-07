#ifndef _CISCO_IPSEC_POLICY_MAP_MIB_
#define _CISCO_IPSEC_POLICY_MAP_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace CISCO_IPSEC_POLICY_MAP_MIB {

class CiscoIpsecPolicyMapMib : public Entity
{
    public:
        CiscoIpsecPolicyMapMib();
        ~CiscoIpsecPolicyMapMib();

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

        class Ikepolmaptable; //type: CiscoIpsecPolicyMapMib::Ikepolmaptable
        class Ipsecpolmaptable; //type: CiscoIpsecPolicyMapMib::Ipsecpolmaptable

        std::shared_ptr<CISCO_IPSEC_POLICY_MAP_MIB::CiscoIpsecPolicyMapMib::Ikepolmaptable> ikepolmaptable;
        std::shared_ptr<CISCO_IPSEC_POLICY_MAP_MIB::CiscoIpsecPolicyMapMib::Ipsecpolmaptable> ipsecpolmaptable;
        
}; // CiscoIpsecPolicyMapMib


class CiscoIpsecPolicyMapMib::Ikepolmaptable : public Entity
{
    public:
        Ikepolmaptable();
        ~Ikepolmaptable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ikepolmapentry; //type: CiscoIpsecPolicyMapMib::Ikepolmaptable::Ikepolmapentry

        std::vector<std::shared_ptr<CISCO_IPSEC_POLICY_MAP_MIB::CiscoIpsecPolicyMapMib::Ikepolmaptable::Ikepolmapentry> > ikepolmapentry;
        
}; // CiscoIpsecPolicyMapMib::Ikepolmaptable


class CiscoIpsecPolicyMapMib::Ikepolmaptable::Ikepolmapentry : public Entity
{
    public:
        Ikepolmapentry();
        ~Ikepolmapentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ikepolmaptunindex; //type: int32
        YLeaf ikepolmappolicynum; //type: int32

}; // CiscoIpsecPolicyMapMib::Ikepolmaptable::Ikepolmapentry


class CiscoIpsecPolicyMapMib::Ipsecpolmaptable : public Entity
{
    public:
        Ipsecpolmaptable();
        ~Ipsecpolmaptable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipsecpolmapentry; //type: CiscoIpsecPolicyMapMib::Ipsecpolmaptable::Ipsecpolmapentry

        std::vector<std::shared_ptr<CISCO_IPSEC_POLICY_MAP_MIB::CiscoIpsecPolicyMapMib::Ipsecpolmaptable::Ipsecpolmapentry> > ipsecpolmapentry;
        
}; // CiscoIpsecPolicyMapMib::Ipsecpolmaptable


class CiscoIpsecPolicyMapMib::Ipsecpolmaptable::Ipsecpolmapentry : public Entity
{
    public:
        Ipsecpolmapentry();
        ~Ipsecpolmapentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipsecpolmaptunindex; //type: int32
        YLeaf ipsecpolmapcryptomapname; //type: string
        YLeaf ipsecpolmapcryptomapnum; //type: int32
        YLeaf ipsecpolmapaclstring; //type: string
        YLeaf ipsecpolmapacestring; //type: string

}; // CiscoIpsecPolicyMapMib::Ipsecpolmaptable::Ipsecpolmapentry


}
}

#endif /* _CISCO_IPSEC_POLICY_MAP_MIB_ */

