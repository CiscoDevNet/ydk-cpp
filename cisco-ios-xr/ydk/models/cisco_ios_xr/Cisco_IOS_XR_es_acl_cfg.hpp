#ifndef _CISCO_IOS_XR_ES_ACL_CFG_
#define _CISCO_IOS_XR_ES_ACL_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_es_acl_cfg {

class EsAcl : public ydk::Entity
{
    public:
        EsAcl();
        ~EsAcl();

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

        class Accesses; //type: EsAcl::Accesses

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_es_acl_cfg::EsAcl::Accesses> accesses;
        
}; // EsAcl


class EsAcl::Accesses : public ydk::Entity
{
    public:
        Accesses();
        ~Accesses();

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

        class Access; //type: EsAcl::Accesses::Access

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_es_acl_cfg::EsAcl::Accesses::Access> > access;
        
}; // EsAcl::Accesses


class EsAcl::Accesses::Access : public ydk::Entity
{
    public:
        Access();
        ~Access();

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

        ydk::YLeaf name; //type: string
        class AccessListEntries; //type: EsAcl::Accesses::Access::AccessListEntries

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_es_acl_cfg::EsAcl::Accesses::Access::AccessListEntries> access_list_entries;
        
}; // EsAcl::Accesses::Access


class EsAcl::Accesses::Access::AccessListEntries : public ydk::Entity
{
    public:
        AccessListEntries();
        ~AccessListEntries();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AccessListEntry; //type: EsAcl::Accesses::Access::AccessListEntries::AccessListEntry

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_es_acl_cfg::EsAcl::Accesses::Access::AccessListEntries::AccessListEntry> > access_list_entry;
        
}; // EsAcl::Accesses::Access::AccessListEntries


class EsAcl::Accesses::Access::AccessListEntries::AccessListEntry : public ydk::Entity
{
    public:
        AccessListEntry();
        ~AccessListEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sequence_number; //type: uint32
        ydk::YLeaf grant; //type: EsAclGrantEnum
        ydk::YLeaf vlan1; //type: uint16
        ydk::YLeaf vlan2; //type: uint16
        ydk::YLeaf cos; //type: uint8
        ydk::YLeaf dei; //type: uint8
        ydk::YLeaf inner_vlan1; //type: uint16
        ydk::YLeaf inner_vlan2; //type: uint16
        ydk::YLeaf inner_cos; //type: uint8
        ydk::YLeaf inner_dei; //type: uint8
        ydk::YLeaf remark; //type: string
        ydk::YLeaf ether_type_number; //type: uint16
        ydk::YLeaf capture; //type: boolean
        ydk::YLeaf log_option; //type: uint8
        ydk::YLeaf sequence_str; //type: string
        class SourceNetwork; //type: EsAcl::Accesses::Access::AccessListEntries::AccessListEntry::SourceNetwork
        class DestinationNetwork; //type: EsAcl::Accesses::Access::AccessListEntries::AccessListEntry::DestinationNetwork

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_es_acl_cfg::EsAcl::Accesses::Access::AccessListEntries::AccessListEntry::SourceNetwork> source_network;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_es_acl_cfg::EsAcl::Accesses::Access::AccessListEntries::AccessListEntry::DestinationNetwork> destination_network;
        
}; // EsAcl::Accesses::Access::AccessListEntries::AccessListEntry


class EsAcl::Accesses::Access::AccessListEntries::AccessListEntry::SourceNetwork : public ydk::Entity
{
    public:
        SourceNetwork();
        ~SourceNetwork();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source_address; //type: string
        ydk::YLeaf source_wild_card_bits; //type: string

}; // EsAcl::Accesses::Access::AccessListEntries::AccessListEntry::SourceNetwork


class EsAcl::Accesses::Access::AccessListEntries::AccessListEntry::DestinationNetwork : public ydk::Entity
{
    public:
        DestinationNetwork();
        ~DestinationNetwork();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf destination_wild_card_bits; //type: string

}; // EsAcl::Accesses::Access::AccessListEntries::AccessListEntry::DestinationNetwork

class EsAclGrantEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf deny;
        static const ydk::Enum::YLeaf permit;

};


}
}

#endif /* _CISCO_IOS_XR_ES_ACL_CFG_ */

