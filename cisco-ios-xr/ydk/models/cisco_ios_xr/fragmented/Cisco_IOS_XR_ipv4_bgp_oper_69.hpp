#ifndef _CISCO_IOS_XR_IPV4_BGP_OPER_69_
#define _CISCO_IOS_XR_IPV4_BGP_OPER_69_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_ipv4_bgp_oper_0.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_11.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_40.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_bgp_oper {


class Bgp::Instances::Instance::InstanceStandby::RpkiSummary : public ydk::Entity
{
    public:
        RpkiSummary();
        ~RpkiSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf servers; //type: uint32
        ydk::YLeaf ipv4roa_nets; //type: uint32
        ydk::YLeaf ipv4roa_paths; //type: uint32
        ydk::YLeaf ipv6roa_nets; //type: uint32
        ydk::YLeaf ipv6roa_paths; //type: uint32
        ydk::YLeaf rpki_disabled; //type: boolean
        ydk::YLeaf rpki_use_validity; //type: boolean
        ydk::YLeaf rpki_allow_invalid; //type: boolean
        ydk::YLeaf rpki_signal_ibgp; //type: boolean

}; // Bgp::Instances::Instance::InstanceStandby::RpkiSummary


class Bgp::BpmInstancesTable : public ydk::Entity
{
    public:
        BpmInstancesTable();
        ~BpmInstancesTable();

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

        class BpmInstances; //type: Bgp::BpmInstancesTable::BpmInstances

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::BpmInstancesTable::BpmInstances> bpm_instances;
        
}; // Bgp::BpmInstancesTable


class Bgp::BpmInstancesTable::BpmInstances : public ydk::Entity
{
    public:
        BpmInstances();
        ~BpmInstances();

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

        class Instance; //type: Bgp::BpmInstancesTable::BpmInstances::Instance

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::BpmInstancesTable::BpmInstances::Instance> > instance;
        
}; // Bgp::BpmInstancesTable::BpmInstances


class Bgp::BpmInstancesTable::BpmInstances::Instance : public ydk::Entity
{
    public:
        Instance();
        ~Instance();

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

        ydk::YLeaf instance_identifier; //type: uint16
        ydk::YLeaf placed_group_id; //type: uint16
        ydk::YLeaf instance_name_str; //type: string
        ydk::YLeaf as_number; //type: uint32
        ydk::YLeaf number_of_vrfs; //type: uint32
        ydk::YLeaf read_only_enabled; //type: boolean
        ydk::YLeaf install_diversion_enabled; //type: boolean
        ydk::YLeaf srgb_start_configured; //type: uint32
        ydk::YLeaf srgb_end_configured; //type: uint32
        class AfArray; //type: Bgp::BpmInstancesTable::BpmInstances::Instance::AfArray

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::BpmInstancesTable::BpmInstances::Instance::AfArray> > af_array;
        
}; // Bgp::BpmInstancesTable::BpmInstances::Instance


class Bgp::BpmInstancesTable::BpmInstances::Instance::AfArray : public ydk::Entity
{
    public:
        AfArray();
        ~AfArray();

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

        ydk::YLeaf entry; //type: boolean

}; // Bgp::BpmInstancesTable::BpmInstances::Instance::AfArray


}
}

#endif /* _CISCO_IOS_XR_IPV4_BGP_OPER_69_ */

