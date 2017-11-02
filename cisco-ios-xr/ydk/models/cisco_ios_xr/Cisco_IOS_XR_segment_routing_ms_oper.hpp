#ifndef _CISCO_IOS_XR_SEGMENT_ROUTING_MS_OPER_
#define _CISCO_IOS_XR_SEGMENT_ROUTING_MS_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_segment_routing_ms_oper {

class Srms : public ydk::Entity
{
    public:
        Srms();
        ~Srms();

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

        class Mapping; //type: Srms::Mapping
        class Policy; //type: Srms::Policy

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_ms_oper::Srms::Mapping> mapping;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_ms_oper::Srms::Policy> policy;
        
}; // Srms


class Srms::Mapping : public ydk::Entity
{
    public:
        Mapping();
        ~Mapping();

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

        class MappingIpv4; //type: Srms::Mapping::MappingIpv4
        class MappingIpv6; //type: Srms::Mapping::MappingIpv6

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_ms_oper::Srms::Mapping::MappingIpv4> mapping_ipv4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_ms_oper::Srms::Mapping::MappingIpv6> mapping_ipv6;
        
}; // Srms::Mapping


class Srms::Mapping::MappingIpv4 : public ydk::Entity
{
    public:
        MappingIpv4();
        ~MappingIpv4();

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

        class MappingMi; //type: Srms::Mapping::MappingIpv4::MappingMi

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_ms_oper::Srms::Mapping::MappingIpv4::MappingMi> > mapping_mi;
        
}; // Srms::Mapping::MappingIpv4


class Srms::Mapping::MappingIpv4::MappingMi : public ydk::Entity
{
    public:
        MappingMi();
        ~MappingMi();

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

        ydk::YLeaf ip; //type: string
        ydk::YLeaf prefix; //type: int32
        ydk::YLeaf src; //type: SrmsMiSrcEB
        ydk::YLeaf router; //type: string
        ydk::YLeaf area; //type: string
        ydk::YLeaf prefix_xr; //type: uint8
        ydk::YLeaf sid_start; //type: uint32
        ydk::YLeaf sid_count; //type: uint32
        ydk::YLeaf last_prefix; //type: string
        ydk::YLeaf last_sid_index; //type: uint32
        ydk::YLeaf flag_attached; //type: SrmsMiFlagEB
        class Addr; //type: Srms::Mapping::MappingIpv4::MappingMi::Addr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_ms_oper::Srms::Mapping::MappingIpv4::MappingMi::Addr> addr;
        
}; // Srms::Mapping::MappingIpv4::MappingMi


class Srms::Mapping::MappingIpv4::MappingMi::Addr : public ydk::Entity
{
    public:
        Addr();
        ~Addr();

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

        ydk::YLeaf af; //type: SrmsMiAfEB
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Srms::Mapping::MappingIpv4::MappingMi::Addr


class Srms::Mapping::MappingIpv6 : public ydk::Entity
{
    public:
        MappingIpv6();
        ~MappingIpv6();

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

        class MappingMi; //type: Srms::Mapping::MappingIpv6::MappingMi

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_ms_oper::Srms::Mapping::MappingIpv6::MappingMi> > mapping_mi;
        
}; // Srms::Mapping::MappingIpv6


class Srms::Mapping::MappingIpv6::MappingMi : public ydk::Entity
{
    public:
        MappingMi();
        ~MappingMi();

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

        ydk::YLeaf ip; //type: string
        ydk::YLeaf prefix; //type: int32
        ydk::YLeaf src; //type: SrmsMiSrcEB
        ydk::YLeaf router; //type: string
        ydk::YLeaf area; //type: string
        ydk::YLeaf prefix_xr; //type: uint8
        ydk::YLeaf sid_start; //type: uint32
        ydk::YLeaf sid_count; //type: uint32
        ydk::YLeaf last_prefix; //type: string
        ydk::YLeaf last_sid_index; //type: uint32
        ydk::YLeaf flag_attached; //type: SrmsMiFlagEB
        class Addr; //type: Srms::Mapping::MappingIpv6::MappingMi::Addr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_ms_oper::Srms::Mapping::MappingIpv6::MappingMi::Addr> addr;
        
}; // Srms::Mapping::MappingIpv6::MappingMi


class Srms::Mapping::MappingIpv6::MappingMi::Addr : public ydk::Entity
{
    public:
        Addr();
        ~Addr();

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

        ydk::YLeaf af; //type: SrmsMiAfEB
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Srms::Mapping::MappingIpv6::MappingMi::Addr


class Srms::Policy : public ydk::Entity
{
    public:
        Policy();
        ~Policy();

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

        class PolicyIpv4; //type: Srms::Policy::PolicyIpv4
        class PolicyIpv6; //type: Srms::Policy::PolicyIpv6

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_ms_oper::Srms::Policy::PolicyIpv4> policy_ipv4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_ms_oper::Srms::Policy::PolicyIpv6> policy_ipv6;
        
}; // Srms::Policy


class Srms::Policy::PolicyIpv4 : public ydk::Entity
{
    public:
        PolicyIpv4();
        ~PolicyIpv4();

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

        class PolicyIpv4Backup; //type: Srms::Policy::PolicyIpv4::PolicyIpv4Backup
        class PolicyIpv4Active; //type: Srms::Policy::PolicyIpv4::PolicyIpv4Active

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_ms_oper::Srms::Policy::PolicyIpv4::PolicyIpv4Backup> policy_ipv4_backup;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_ms_oper::Srms::Policy::PolicyIpv4::PolicyIpv4Active> policy_ipv4_active;
        
}; // Srms::Policy::PolicyIpv4


class Srms::Policy::PolicyIpv4::PolicyIpv4Backup : public ydk::Entity
{
    public:
        PolicyIpv4Backup();
        ~PolicyIpv4Backup();

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

        class PolicyMi; //type: Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_ms_oper::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi> > policy_mi;
        
}; // Srms::Policy::PolicyIpv4::PolicyIpv4Backup


class Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi : public ydk::Entity
{
    public:
        PolicyMi();
        ~PolicyMi();

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

        ydk::YLeaf mi_id; //type: string
        ydk::YLeaf src; //type: SrmsMiSrcEB
        ydk::YLeaf router; //type: string
        ydk::YLeaf area; //type: string
        ydk::YLeaf prefix_xr; //type: uint8
        ydk::YLeaf sid_start; //type: uint32
        ydk::YLeaf sid_count; //type: uint32
        ydk::YLeaf last_prefix; //type: string
        ydk::YLeaf last_sid_index; //type: uint32
        ydk::YLeaf flag_attached; //type: SrmsMiFlagEB
        class Addr; //type: Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_ms_oper::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr> addr;
        
}; // Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi


class Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr : public ydk::Entity
{
    public:
        Addr();
        ~Addr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af; //type: SrmsMiAfEB
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr


class Srms::Policy::PolicyIpv4::PolicyIpv4Active : public ydk::Entity
{
    public:
        PolicyIpv4Active();
        ~PolicyIpv4Active();

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

        class PolicyMi; //type: Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_ms_oper::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi> > policy_mi;
        
}; // Srms::Policy::PolicyIpv4::PolicyIpv4Active


class Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi : public ydk::Entity
{
    public:
        PolicyMi();
        ~PolicyMi();

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

        ydk::YLeaf mi_id; //type: string
        ydk::YLeaf src; //type: SrmsMiSrcEB
        ydk::YLeaf router; //type: string
        ydk::YLeaf area; //type: string
        ydk::YLeaf prefix_xr; //type: uint8
        ydk::YLeaf sid_start; //type: uint32
        ydk::YLeaf sid_count; //type: uint32
        ydk::YLeaf last_prefix; //type: string
        ydk::YLeaf last_sid_index; //type: uint32
        ydk::YLeaf flag_attached; //type: SrmsMiFlagEB
        class Addr; //type: Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_ms_oper::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr> addr;
        
}; // Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi


class Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr : public ydk::Entity
{
    public:
        Addr();
        ~Addr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af; //type: SrmsMiAfEB
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr


class Srms::Policy::PolicyIpv6 : public ydk::Entity
{
    public:
        PolicyIpv6();
        ~PolicyIpv6();

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

        class PolicyIpv6Backup; //type: Srms::Policy::PolicyIpv6::PolicyIpv6Backup
        class PolicyIpv6Active; //type: Srms::Policy::PolicyIpv6::PolicyIpv6Active

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_ms_oper::Srms::Policy::PolicyIpv6::PolicyIpv6Backup> policy_ipv6_backup;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_ms_oper::Srms::Policy::PolicyIpv6::PolicyIpv6Active> policy_ipv6_active;
        
}; // Srms::Policy::PolicyIpv6


class Srms::Policy::PolicyIpv6::PolicyIpv6Backup : public ydk::Entity
{
    public:
        PolicyIpv6Backup();
        ~PolicyIpv6Backup();

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

        class PolicyMi; //type: Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_ms_oper::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi> > policy_mi;
        
}; // Srms::Policy::PolicyIpv6::PolicyIpv6Backup


class Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi : public ydk::Entity
{
    public:
        PolicyMi();
        ~PolicyMi();

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

        ydk::YLeaf mi_id; //type: string
        ydk::YLeaf src; //type: SrmsMiSrcEB
        ydk::YLeaf router; //type: string
        ydk::YLeaf area; //type: string
        ydk::YLeaf prefix_xr; //type: uint8
        ydk::YLeaf sid_start; //type: uint32
        ydk::YLeaf sid_count; //type: uint32
        ydk::YLeaf last_prefix; //type: string
        ydk::YLeaf last_sid_index; //type: uint32
        ydk::YLeaf flag_attached; //type: SrmsMiFlagEB
        class Addr; //type: Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::Addr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_ms_oper::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::Addr> addr;
        
}; // Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi


class Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::Addr : public ydk::Entity
{
    public:
        Addr();
        ~Addr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af; //type: SrmsMiAfEB
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::Addr


class Srms::Policy::PolicyIpv6::PolicyIpv6Active : public ydk::Entity
{
    public:
        PolicyIpv6Active();
        ~PolicyIpv6Active();

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

        class PolicyMi; //type: Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_ms_oper::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi> > policy_mi;
        
}; // Srms::Policy::PolicyIpv6::PolicyIpv6Active


class Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi : public ydk::Entity
{
    public:
        PolicyMi();
        ~PolicyMi();

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

        ydk::YLeaf mi_id; //type: string
        ydk::YLeaf src; //type: SrmsMiSrcEB
        ydk::YLeaf router; //type: string
        ydk::YLeaf area; //type: string
        ydk::YLeaf prefix_xr; //type: uint8
        ydk::YLeaf sid_start; //type: uint32
        ydk::YLeaf sid_count; //type: uint32
        ydk::YLeaf last_prefix; //type: string
        ydk::YLeaf last_sid_index; //type: uint32
        ydk::YLeaf flag_attached; //type: SrmsMiFlagEB
        class Addr; //type: Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::Addr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_ms_oper::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::Addr> addr;
        
}; // Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi


class Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::Addr : public ydk::Entity
{
    public:
        Addr();
        ~Addr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af; //type: SrmsMiAfEB
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::Addr

class SrmsMiFlagEB : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf false_;
        static const ydk::Enum::YLeaf true_;

};

class SrmsMiAfEB : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv6;

};

class SrmsMiSrcEB : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf local;
        static const ydk::Enum::YLeaf remote;

};


}
}

#endif /* _CISCO_IOS_XR_SEGMENT_ROUTING_MS_OPER_ */

