#ifndef _CISCO_IOS_XR_MPLS_LSD_CFG_
#define _CISCO_IOS_XR_MPLS_LSD_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_mpls_lsd_cfg {

class MplsLsd : public ydk::Entity
{
    public:
        MplsLsd();
        ~MplsLsd();

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

        ydk::YLeaf ltrace_multiplier; //type: uint32
        ydk::YLeaf app_reg_delay_disable; //type: empty
        ydk::YLeaf mpls_entropy_label; //type: empty
        ydk::YLeaf mpls_ip_ttl_propagate_disable; //type: MplsIpTtlPropagateDisable
        class Ipv6; //type: MplsLsd::Ipv6
        class Ipv4; //type: MplsLsd::Ipv4
        class LabelDatabases; //type: MplsLsd::LabelDatabases

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_cfg::MplsLsd::Ipv6> ipv6;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_cfg::MplsLsd::Ipv4> ipv4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_cfg::MplsLsd::LabelDatabases> label_databases;
        
}; // MplsLsd


class MplsLsd::Ipv6 : public ydk::Entity
{
    public:
        Ipv6();
        ~Ipv6();

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

        ydk::YLeaf ttl_expiration_pop; //type: uint32

}; // MplsLsd::Ipv6


class MplsLsd::Ipv4 : public ydk::Entity
{
    public:
        Ipv4();
        ~Ipv4();

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

        ydk::YLeaf ttl_expiration_pop; //type: uint32

}; // MplsLsd::Ipv4


class MplsLsd::LabelDatabases : public ydk::Entity
{
    public:
        LabelDatabases();
        ~LabelDatabases();

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

        class LabelDatabase; //type: MplsLsd::LabelDatabases::LabelDatabase

        ydk::YList label_database;
        
}; // MplsLsd::LabelDatabases


class MplsLsd::LabelDatabases::LabelDatabase : public ydk::Entity
{
    public:
        LabelDatabase();
        ~LabelDatabase();

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

        ydk::YLeaf label_database_id; //type: uint32
        class LabelRange; //type: MplsLsd::LabelDatabases::LabelDatabase::LabelRange

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_cfg::MplsLsd::LabelDatabases::LabelDatabase::LabelRange> label_range;
        
}; // MplsLsd::LabelDatabases::LabelDatabase


class MplsLsd::LabelDatabases::LabelDatabase::LabelRange : public ydk::Entity
{
    public:
        LabelRange();
        ~LabelRange();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minvalue; //type: uint32
        ydk::YLeaf max_value; //type: uint32
        ydk::YLeaf min_static_value; //type: uint32
        ydk::YLeaf max_static_value; //type: uint32

}; // MplsLsd::LabelDatabases::LabelDatabase::LabelRange

class MplsIpTtlPropagateDisable : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf all;
        static const ydk::Enum::YLeaf forward;
        static const ydk::Enum::YLeaf local;

        static int get_enum_value(const std::string & name) {
            if (name == "all") return 0;
            if (name == "forward") return 1;
            if (name == "local") return 2;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_MPLS_LSD_CFG_ */

