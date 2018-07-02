#ifndef _CISCO_IPSEC_POLICY_MAP_MIB_
#define _CISCO_IPSEC_POLICY_MAP_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace CISCO_IPSEC_POLICY_MAP_MIB {

class CISCOIPSECPOLICYMAPMIB : public ydk::Entity
{
    public:
        CISCOIPSECPOLICYMAPMIB();
        ~CISCOIPSECPOLICYMAPMIB();

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

        class IkePolMapTable; //type: CISCOIPSECPOLICYMAPMIB::IkePolMapTable
        class IpSecPolMapTable; //type: CISCOIPSECPOLICYMAPMIB::IpSecPolMapTable

        std::shared_ptr<cisco_ios_xe::CISCO_IPSEC_POLICY_MAP_MIB::CISCOIPSECPOLICYMAPMIB::IkePolMapTable> ikepolmaptable;
        std::shared_ptr<cisco_ios_xe::CISCO_IPSEC_POLICY_MAP_MIB::CISCOIPSECPOLICYMAPMIB::IpSecPolMapTable> ipsecpolmaptable;
        
}; // CISCOIPSECPOLICYMAPMIB


class CISCOIPSECPOLICYMAPMIB::IkePolMapTable : public ydk::Entity
{
    public:
        IkePolMapTable();
        ~IkePolMapTable();

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

        class IkePolMapEntry; //type: CISCOIPSECPOLICYMAPMIB::IkePolMapTable::IkePolMapEntry

        ydk::YList ikepolmapentry;
        
}; // CISCOIPSECPOLICYMAPMIB::IkePolMapTable


class CISCOIPSECPOLICYMAPMIB::IkePolMapTable::IkePolMapEntry : public ydk::Entity
{
    public:
        IkePolMapEntry();
        ~IkePolMapEntry();

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

        ydk::YLeaf ikepolmaptunindex; //type: int32
        ydk::YLeaf ikepolmappolicynum; //type: int32

}; // CISCOIPSECPOLICYMAPMIB::IkePolMapTable::IkePolMapEntry


class CISCOIPSECPOLICYMAPMIB::IpSecPolMapTable : public ydk::Entity
{
    public:
        IpSecPolMapTable();
        ~IpSecPolMapTable();

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

        class IpSecPolMapEntry; //type: CISCOIPSECPOLICYMAPMIB::IpSecPolMapTable::IpSecPolMapEntry

        ydk::YList ipsecpolmapentry;
        
}; // CISCOIPSECPOLICYMAPMIB::IpSecPolMapTable


class CISCOIPSECPOLICYMAPMIB::IpSecPolMapTable::IpSecPolMapEntry : public ydk::Entity
{
    public:
        IpSecPolMapEntry();
        ~IpSecPolMapEntry();

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

        ydk::YLeaf ipsecpolmaptunindex; //type: int32
        ydk::YLeaf ipsecpolmapcryptomapname; //type: string
        ydk::YLeaf ipsecpolmapcryptomapnum; //type: int32
        ydk::YLeaf ipsecpolmapaclstring; //type: string
        ydk::YLeaf ipsecpolmapacestring; //type: string

}; // CISCOIPSECPOLICYMAPMIB::IpSecPolMapTable::IpSecPolMapEntry


}
}

#endif /* _CISCO_IPSEC_POLICY_MAP_MIB_ */

