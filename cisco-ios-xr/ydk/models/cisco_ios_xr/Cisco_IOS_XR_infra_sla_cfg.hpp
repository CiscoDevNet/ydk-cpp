#ifndef _CISCO_IOS_XR_INFRA_SLA_CFG_
#define _CISCO_IOS_XR_INFRA_SLA_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xr {
namespace Cisco_IOS_XR_infra_sla_cfg {

class Sla : public ydk::Entity
{
    public:
        Sla();
        ~Sla();

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

        class Protocols; //type: Sla::Protocols

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_sla_cfg::Sla::Protocols> protocols;
        
}; // Sla


class Sla::Protocols : public ydk::Entity
{
    public:
        Protocols();
        ~Protocols();

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

        class Ethernet; //type: Sla::Protocols::Ethernet

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_sla_cfg::Sla::Protocols::Ethernet> ethernet;
        
}; // Sla::Protocols


class Sla::Protocols::Ethernet : public ydk::Entity
{
    public:
        Ethernet();
        ~Ethernet();

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

        class Profiles; //type: Sla::Protocols::Ethernet::Profiles

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_sla_cfg::Sla::Protocols::Ethernet::Profiles> profiles;
        
}; // Sla::Protocols::Ethernet


class Sla::Protocols::Ethernet::Profiles : public ydk::Entity
{
    public:
        Profiles();
        ~Profiles();

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

        class Profile; //type: Sla::Protocols::Ethernet::Profiles::Profile

        ydk::YList profile;
        
}; // Sla::Protocols::Ethernet::Profiles


class Sla::Protocols::Ethernet::Profiles::Profile : public ydk::Entity
{
    public:
        Profile();
        ~Profile();

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

        ydk::YLeaf profile_name; //type: string
        ydk::YLeaf packet_type; //type: string
        class Statistics; //type: Sla::Protocols::Ethernet::Profiles::Profile::Statistics
        class Schedule; //type: Sla::Protocols::Ethernet::Profiles::Profile::Schedule
        class Probe; //type: Sla::Protocols::Ethernet::Profiles::Profile::Probe

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_sla_cfg::Sla::Protocols::Ethernet::Profiles::Profile::Statistics> statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_sla_cfg::Sla::Protocols::Ethernet::Profiles::Profile::Schedule> schedule; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_sla_cfg::Sla::Protocols::Ethernet::Profiles::Profile::Probe> probe;
        
}; // Sla::Protocols::Ethernet::Profiles::Profile


class Sla::Protocols::Ethernet::Profiles::Profile::Statistics : public ydk::Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Statistic; //type: Sla::Protocols::Ethernet::Profiles::Profile::Statistics::Statistic

        ydk::YList statistic;
        
}; // Sla::Protocols::Ethernet::Profiles::Profile::Statistics


class Sla::Protocols::Ethernet::Profiles::Profile::Statistics::Statistic : public ydk::Entity
{
    public:
        Statistic();
        ~Statistic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf statistic_name; //type: SlaStatisticTypeEnum
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf buckets_archive; //type: uint32
        class BucketsSize; //type: Sla::Protocols::Ethernet::Profiles::Profile::Statistics::Statistic::BucketsSize
        class Aggregation; //type: Sla::Protocols::Ethernet::Profiles::Profile::Statistics::Statistic::Aggregation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_sla_cfg::Sla::Protocols::Ethernet::Profiles::Profile::Statistics::Statistic::BucketsSize> buckets_size; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_sla_cfg::Sla::Protocols::Ethernet::Profiles::Profile::Statistics::Statistic::Aggregation> aggregation; // presence node
        
}; // Sla::Protocols::Ethernet::Profiles::Profile::Statistics::Statistic


class Sla::Protocols::Ethernet::Profiles::Profile::Statistics::Statistic::BucketsSize : public ydk::Entity
{
    public:
        BucketsSize();
        ~BucketsSize();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf buckets_size; //type: uint32
        ydk::YLeaf buckets_size_unit; //type: SlaBucketsSizeUnitsEnum

}; // Sla::Protocols::Ethernet::Profiles::Profile::Statistics::Statistic::BucketsSize


class Sla::Protocols::Ethernet::Profiles::Profile::Statistics::Statistic::Aggregation : public ydk::Entity
{
    public:
        Aggregation();
        ~Aggregation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bins_count; //type: uint32
        ydk::YLeaf bins_width; //type: uint32
        ydk::YLeaf bins_width_tenths; //type: uint32

}; // Sla::Protocols::Ethernet::Profiles::Profile::Statistics::Statistic::Aggregation


class Sla::Protocols::Ethernet::Profiles::Profile::Schedule : public ydk::Entity
{
    public:
        Schedule();
        ~Schedule();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf probe_interval; //type: uint32
        ydk::YLeaf probe_interval_day; //type: SlaProbeIntervalDayEnum
        ydk::YLeaf probe_interval_unit; //type: SlaProbeIntervalUnitsEnum
        ydk::YLeaf start_time_hour; //type: uint32
        ydk::YLeaf start_time_minute; //type: uint32
        ydk::YLeaf start_time_second; //type: uint32
        ydk::YLeaf probe_duration; //type: uint32
        ydk::YLeaf probe_duration_unit; //type: SlaProbeDurationUnitsEnum

}; // Sla::Protocols::Ethernet::Profiles::Profile::Schedule


class Sla::Protocols::Ethernet::Profiles::Profile::Probe : public ydk::Entity
{
    public:
        Probe();
        ~Probe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf priority; //type: uint32
        ydk::YLeaf synthetic_loss_calculation_packets; //type: uint32
        class Send; //type: Sla::Protocols::Ethernet::Profiles::Profile::Probe::Send
        class PacketSizeAndPadding; //type: Sla::Protocols::Ethernet::Profiles::Profile::Probe::PacketSizeAndPadding

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_sla_cfg::Sla::Protocols::Ethernet::Profiles::Profile::Probe::Send> send; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_sla_cfg::Sla::Protocols::Ethernet::Profiles::Profile::Probe::PacketSizeAndPadding> packet_size_and_padding; // presence node
        
}; // Sla::Protocols::Ethernet::Profiles::Profile::Probe


class Sla::Protocols::Ethernet::Profiles::Profile::Probe::Send : public ydk::Entity
{
    public:
        Send();
        ~Send();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf burst_interval; //type: uint32
        ydk::YLeaf burst_interval_unit; //type: SlaBurstIntervalUnitsEnum
        ydk::YLeaf packet_interval; //type: uint32
        ydk::YLeaf packet_interval_unit; //type: SlaPacketIntervalUnitsEnum
        ydk::YLeaf packet_count; //type: uint32
        ydk::YLeaf send_type; //type: SlaSend

}; // Sla::Protocols::Ethernet::Profiles::Profile::Probe::Send


class Sla::Protocols::Ethernet::Profiles::Profile::Probe::PacketSizeAndPadding : public ydk::Entity
{
    public:
        PacketSizeAndPadding();
        ~PacketSizeAndPadding();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf size; //type: uint32
        ydk::YLeaf padding_type; //type: SlaPaddingPattern
        ydk::YLeaf padding_value; //type: string

}; // Sla::Protocols::Ethernet::Profiles::Profile::Probe::PacketSizeAndPadding


}
}

#endif /* _CISCO_IOS_XR_INFRA_SLA_CFG_ */

