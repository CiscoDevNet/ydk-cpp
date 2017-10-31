#ifndef _CISCO_IOS_XR_NCS1K_MXP_HEADLESS_OPER_
#define _CISCO_IOS_XR_NCS1K_MXP_HEADLESS_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ncs1k_mxp_headless_oper {

class HeadlessFuncData : public ydk::Entity
{
    public:
        HeadlessFuncData();
        ~HeadlessFuncData();

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

        class OtnPortNames; //type: HeadlessFuncData::OtnPortNames
        class EthernetPortNames; //type: HeadlessFuncData::EthernetPortNames

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs1k_mxp_headless_oper::HeadlessFuncData::OtnPortNames> otn_port_names;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs1k_mxp_headless_oper::HeadlessFuncData::EthernetPortNames> ethernet_port_names;
        
}; // HeadlessFuncData


class HeadlessFuncData::OtnPortNames : public ydk::Entity
{
    public:
        OtnPortNames();
        ~OtnPortNames();

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

        class OtnPortName; //type: HeadlessFuncData::OtnPortNames::OtnPortName

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs1k_mxp_headless_oper::HeadlessFuncData::OtnPortNames::OtnPortName> > otn_port_name;
        
}; // HeadlessFuncData::OtnPortNames


class HeadlessFuncData::OtnPortNames::OtnPortName : public ydk::Entity
{
    public:
        OtnPortName();
        ~OtnPortName();

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
        ydk::YLeaf started_stateful; //type: boolean
        ydk::YLeaf headless_start_time; //type: string
        ydk::YLeaf headless_end_time; //type: string
        class OtnStatistics; //type: HeadlessFuncData::OtnPortNames::OtnPortName::OtnStatistics
        class PrbsStatistics; //type: HeadlessFuncData::OtnPortNames::OtnPortName::PrbsStatistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs1k_mxp_headless_oper::HeadlessFuncData::OtnPortNames::OtnPortName::OtnStatistics> otn_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs1k_mxp_headless_oper::HeadlessFuncData::OtnPortNames::OtnPortName::PrbsStatistics> prbs_statistics;
        
}; // HeadlessFuncData::OtnPortNames::OtnPortName


class HeadlessFuncData::OtnPortNames::OtnPortName::OtnStatistics : public ydk::Entity
{
    public:
        OtnStatistics();
        ~OtnStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sm_bip; //type: uint64
        ydk::YLeaf sm_bei; //type: uint64
        ydk::YLeaf fec_ec; //type: uint64
        ydk::YLeaf fec_uc; //type: uint64

}; // HeadlessFuncData::OtnPortNames::OtnPortName::OtnStatistics


class HeadlessFuncData::OtnPortNames::OtnPortName::PrbsStatistics : public ydk::Entity
{
    public:
        PrbsStatistics();
        ~PrbsStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ebc; //type: uint64
        ydk::YLeaf sync_status; //type: MxpOtnPrbsStatus

}; // HeadlessFuncData::OtnPortNames::OtnPortName::PrbsStatistics


class HeadlessFuncData::EthernetPortNames : public ydk::Entity
{
    public:
        EthernetPortNames();
        ~EthernetPortNames();

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

        class EthernetPortName; //type: HeadlessFuncData::EthernetPortNames::EthernetPortName

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs1k_mxp_headless_oper::HeadlessFuncData::EthernetPortNames::EthernetPortName> > ethernet_port_name;
        
}; // HeadlessFuncData::EthernetPortNames


class HeadlessFuncData::EthernetPortNames::EthernetPortName : public ydk::Entity
{
    public:
        EthernetPortName();
        ~EthernetPortName();

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
        ydk::YLeaf started_stateful; //type: boolean
        ydk::YLeaf headless_start_time; //type: string
        ydk::YLeaf headless_end_time; //type: string
        class EtherStatistics; //type: HeadlessFuncData::EthernetPortNames::EthernetPortName::EtherStatistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs1k_mxp_headless_oper::HeadlessFuncData::EthernetPortNames::EthernetPortName::EtherStatistics> ether_statistics;
        
}; // HeadlessFuncData::EthernetPortNames::EthernetPortName


class HeadlessFuncData::EthernetPortNames::EthernetPortName::EtherStatistics : public ydk::Entity
{
    public:
        EtherStatistics();
        ~EtherStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rx_pkts_over_sized; //type: uint64
        ydk::YLeaf rx_pkts_bad_fcs; //type: uint64
        ydk::YLeaf rx_error_jabbers; //type: uint64
        ydk::YLeaf rx_pkts_multicast; //type: uint64
        ydk::YLeaf rx_pkts_broadcast; //type: uint64
        ydk::YLeaf rx_pkts_under_sized; //type: uint64
        ydk::YLeaf rx_packets; //type: uint64
        ydk::YLeaf rx_total_bytes; //type: uint64
        ydk::YLeaf rx_bytes_good; //type: uint64
        ydk::YLeaf rx_pkts_good; //type: uint64
        ydk::YLeaf tx_bytes_good; //type: uint64
        ydk::YLeaf tx_pkts_good; //type: uint64
        ydk::YLeaf rx_recv_fragments; //type: uint64
        ydk::YLeaf rx_pkts64_bytes; //type: uint64
        ydk::YLeaf rx_pkts65_to127_bytes; //type: uint64
        ydk::YLeaf rx_pkts128to255_bytes; //type: uint64
        ydk::YLeaf rx_pkts256_to511_bytes; //type: uint64
        ydk::YLeaf rx_pkts512_to1023_bytes; //type: uint64
        ydk::YLeaf rx_pkts1024_to1518_bytes; //type: uint64
        ydk::YLeaf rx_pkts_unicast; //type: uint64
        ydk::YLeaf tx_packets; //type: uint64
        ydk::YLeaf tx_total_bytes; //type: uint64
        ydk::YLeaf tx_pkts_under_sized; //type: uint64
        ydk::YLeaf tx_pkts_over_sized; //type: uint64
        ydk::YLeaf tx_fragments; //type: uint64
        ydk::YLeaf tx_jabber; //type: uint64
        ydk::YLeaf tx_bad_fcs; //type: uint64
        ydk::YLeaf rx_pkt_drop; //type: uint64
        ydk::YLeaf rx_pause; //type: uint64
        ydk::YLeaf tx_pause; //type: uint64
        ydk::YLeaf rx_lldp_pkt; //type: uint64
        ydk::YLeaf rx8021q_pkt; //type: uint64

}; // HeadlessFuncData::EthernetPortNames::EthernetPortName::EtherStatistics

class MxpOtnPrbsStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf locked;
        static const ydk::Enum::YLeaf not_locked;
        static const ydk::Enum::YLeaf not_applicable;
        static const ydk::Enum::YLeaf locked_with_errors;

};


}
}

#endif /* _CISCO_IOS_XR_NCS1K_MXP_HEADLESS_OPER_ */

