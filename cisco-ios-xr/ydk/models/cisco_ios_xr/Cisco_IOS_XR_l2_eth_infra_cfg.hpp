#ifndef _CISCO_IOS_XR_L2_ETH_INFRA_CFG_
#define _CISCO_IOS_XR_L2_ETH_INFRA_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xr {
namespace Cisco_IOS_XR_l2_eth_infra_cfg {

class EthernetFeatures : public ydk::Entity
{
    public:
        EthernetFeatures();
        ~EthernetFeatures();

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

        class EgressFiltering; //type: EthernetFeatures::EgressFiltering
        class Cfm; //type: EthernetFeatures::Cfm
        class EtherLinkOam; //type: EthernetFeatures::EtherLinkOam

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2_eth_infra_cfg::EthernetFeatures::EgressFiltering> egress_filtering;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2_eth_infra_cfg::EthernetFeatures::Cfm> cfm;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2_eth_infra_cfg::EthernetFeatures::EtherLinkOam> ether_link_oam;
        
}; // EthernetFeatures


class EthernetFeatures::EgressFiltering : public ydk::Entity
{
    public:
        EgressFiltering();
        ~EgressFiltering();

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

        ydk::YLeaf egress_filtering_default_on; //type: empty

}; // EthernetFeatures::EgressFiltering


class EthernetFeatures::Cfm : public ydk::Entity
{
    public:
        Cfm();
        ~Cfm();

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

        ydk::YLeaf nv_satellite_sla_processing_disable; //type: empty
        class TracerouteCache; //type: EthernetFeatures::Cfm::TracerouteCache
        class Domains; //type: EthernetFeatures::Cfm::Domains

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2_eth_infra_cfg::EthernetFeatures::Cfm::TracerouteCache> traceroute_cache;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2_eth_infra_cfg::EthernetFeatures::Cfm::Domains> domains;
        
}; // EthernetFeatures::Cfm


class EthernetFeatures::Cfm::TracerouteCache : public ydk::Entity
{
    public:
        TracerouteCache();
        ~TracerouteCache();

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

        ydk::YLeaf hold_time; //type: uint32
        ydk::YLeaf cache_size; //type: uint32

}; // EthernetFeatures::Cfm::TracerouteCache


class EthernetFeatures::Cfm::Domains : public ydk::Entity
{
    public:
        Domains();
        ~Domains();

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

        class Domain; //type: EthernetFeatures::Cfm::Domains::Domain

        ydk::YList domain;
        
}; // EthernetFeatures::Cfm::Domains


class EthernetFeatures::Cfm::Domains::Domain : public ydk::Entity
{
    public:
        Domain();
        ~Domain();

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

        ydk::YLeaf domain; //type: string
        class Services; //type: EthernetFeatures::Cfm::Domains::Domain::Services
        class DomainProperties; //type: EthernetFeatures::Cfm::Domains::Domain::DomainProperties

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2_eth_infra_cfg::EthernetFeatures::Cfm::Domains::Domain::Services> services;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2_eth_infra_cfg::EthernetFeatures::Cfm::Domains::Domain::DomainProperties> domain_properties;
        
}; // EthernetFeatures::Cfm::Domains::Domain


class EthernetFeatures::Cfm::Domains::Domain::Services : public ydk::Entity
{
    public:
        Services();
        ~Services();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Service; //type: EthernetFeatures::Cfm::Domains::Domain::Services::Service

        ydk::YList service;
        
}; // EthernetFeatures::Cfm::Domains::Domain::Services


class EthernetFeatures::Cfm::Domains::Domain::Services::Service : public ydk::Entity
{
    public:
        Service();
        ~Service();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf service; //type: string
        ydk::YLeaf maximum_meps; //type: uint32
        ydk::YLeaf log_cross_check_errors; //type: empty
        ydk::YLeaf continuity_check_archive_hold_time; //type: uint32
        ydk::YLeaf tags; //type: uint32
        ydk::YLeaf log_continuity_check_state_changes; //type: empty
        ydk::YLeaf log_efd; //type: empty
        ydk::YLeaf continuity_check_auto_traceroute; //type: empty
        ydk::YLeaf log_continuity_check_errors; //type: empty
        ydk::YLeaf log_ais; //type: empty
        class Efd2; //type: EthernetFeatures::Cfm::Domains::Domain::Services::Service::Efd2
        class ContinuityCheckInterval; //type: EthernetFeatures::Cfm::Domains::Domain::Services::Service::ContinuityCheckInterval
        class MipAutoCreation; //type: EthernetFeatures::Cfm::Domains::Domain::Services::Service::MipAutoCreation
        class Ais; //type: EthernetFeatures::Cfm::Domains::Domain::Services::Service::Ais
        class CrossCheck; //type: EthernetFeatures::Cfm::Domains::Domain::Services::Service::CrossCheck
        class ServiceProperties; //type: EthernetFeatures::Cfm::Domains::Domain::Services::Service::ServiceProperties

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2_eth_infra_cfg::EthernetFeatures::Cfm::Domains::Domain::Services::Service::Efd2> efd2; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2_eth_infra_cfg::EthernetFeatures::Cfm::Domains::Domain::Services::Service::ContinuityCheckInterval> continuity_check_interval; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2_eth_infra_cfg::EthernetFeatures::Cfm::Domains::Domain::Services::Service::MipAutoCreation> mip_auto_creation; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2_eth_infra_cfg::EthernetFeatures::Cfm::Domains::Domain::Services::Service::Ais> ais;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2_eth_infra_cfg::EthernetFeatures::Cfm::Domains::Domain::Services::Service::CrossCheck> cross_check;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2_eth_infra_cfg::EthernetFeatures::Cfm::Domains::Domain::Services::Service::ServiceProperties> service_properties; // presence node
        
}; // EthernetFeatures::Cfm::Domains::Domain::Services::Service


class EthernetFeatures::Cfm::Domains::Domain::Services::Service::Efd2 : public ydk::Entity
{
    public:
        Efd2();
        ~Efd2();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: empty
        ydk::YLeaf protection_switching_enable; //type: empty

}; // EthernetFeatures::Cfm::Domains::Domain::Services::Service::Efd2


class EthernetFeatures::Cfm::Domains::Domain::Services::Service::ContinuityCheckInterval : public ydk::Entity
{
    public:
        ContinuityCheckInterval();
        ~ContinuityCheckInterval();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ccm_interval; //type: CfmCcmInterval
        ydk::YLeaf loss_threshold; //type: uint32

}; // EthernetFeatures::Cfm::Domains::Domain::Services::Service::ContinuityCheckInterval


class EthernetFeatures::Cfm::Domains::Domain::Services::Service::MipAutoCreation : public ydk::Entity
{
    public:
        MipAutoCreation();
        ~MipAutoCreation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mip_policy; //type: CfmMipPolicy
        ydk::YLeaf ccm_learning_enable; //type: empty

}; // EthernetFeatures::Cfm::Domains::Domain::Services::Service::MipAutoCreation


class EthernetFeatures::Cfm::Domains::Domain::Services::Service::Ais : public ydk::Entity
{
    public:
        Ais();
        ~Ais();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Transmission; //type: EthernetFeatures::Cfm::Domains::Domain::Services::Service::Ais::Transmission

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2_eth_infra_cfg::EthernetFeatures::Cfm::Domains::Domain::Services::Service::Ais::Transmission> transmission; // presence node
        
}; // EthernetFeatures::Cfm::Domains::Domain::Services::Service::Ais


class EthernetFeatures::Cfm::Domains::Domain::Services::Service::Ais::Transmission : public ydk::Entity
{
    public:
        Transmission();
        ~Transmission();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ais_interval; //type: CfmAisInterval
        ydk::YLeaf cos; //type: uint32

}; // EthernetFeatures::Cfm::Domains::Domain::Services::Service::Ais::Transmission


class EthernetFeatures::Cfm::Domains::Domain::Services::Service::CrossCheck : public ydk::Entity
{
    public:
        CrossCheck();
        ~CrossCheck();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf auto_; //type: empty
        class CrossCheckMeps; //type: EthernetFeatures::Cfm::Domains::Domain::Services::Service::CrossCheck::CrossCheckMeps

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2_eth_infra_cfg::EthernetFeatures::Cfm::Domains::Domain::Services::Service::CrossCheck::CrossCheckMeps> cross_check_meps;
        
}; // EthernetFeatures::Cfm::Domains::Domain::Services::Service::CrossCheck


class EthernetFeatures::Cfm::Domains::Domain::Services::Service::CrossCheck::CrossCheckMeps : public ydk::Entity
{
    public:
        CrossCheckMeps();
        ~CrossCheckMeps();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CrossCheckMep; //type: EthernetFeatures::Cfm::Domains::Domain::Services::Service::CrossCheck::CrossCheckMeps::CrossCheckMep

        ydk::YList cross_check_mep;
        
}; // EthernetFeatures::Cfm::Domains::Domain::Services::Service::CrossCheck::CrossCheckMeps


class EthernetFeatures::Cfm::Domains::Domain::Services::Service::CrossCheck::CrossCheckMeps::CrossCheckMep : public ydk::Entity
{
    public:
        CrossCheckMep();
        ~CrossCheckMep();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mep_id; //type: uint32
        ydk::YLeaf enable_mac_address; //type: empty
        ydk::YLeaf mac_address; //type: string

}; // EthernetFeatures::Cfm::Domains::Domain::Services::Service::CrossCheck::CrossCheckMeps::CrossCheckMep


class EthernetFeatures::Cfm::Domains::Domain::Services::Service::ServiceProperties : public ydk::Entity
{
    public:
        ServiceProperties();
        ~ServiceProperties();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf service_type; //type: CfmService
        ydk::YLeaf group_name; //type: string
        ydk::YLeaf switching_name; //type: string
        ydk::YLeaf ce_id; //type: uint32
        ydk::YLeaf remote_ce_id; //type: uint32
        ydk::YLeaf evi; //type: uint32
        ydk::YLeaf short_ma_name_format; //type: CfmShortMaNameFormat
        ydk::YLeaf short_ma_name_string; //type: string
        ydk::YLeaf short_ma_name_number; //type: uint32
        ydk::YLeaf short_ma_name_oui; //type: uint32
        ydk::YLeaf short_ma_name_vpn_index; //type: uint32
        ydk::YLeaf short_ma_name_icc; //type: string
        ydk::YLeaf short_ma_name_umc; //type: string

}; // EthernetFeatures::Cfm::Domains::Domain::Services::Service::ServiceProperties


class EthernetFeatures::Cfm::Domains::Domain::DomainProperties : public ydk::Entity
{
    public:
        DomainProperties();
        ~DomainProperties();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: uint32
        ydk::YLeaf mdid_format; //type: CfmMdidFormat
        ydk::YLeaf mdid_mac_address; //type: string
        ydk::YLeaf mdid_number; //type: uint32
        ydk::YLeaf mdid_string; //type: string

}; // EthernetFeatures::Cfm::Domains::Domain::DomainProperties


class EthernetFeatures::EtherLinkOam : public ydk::Entity
{
    public:
        EtherLinkOam();
        ~EtherLinkOam();

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

        class Profiles; //type: EthernetFeatures::EtherLinkOam::Profiles

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2_eth_infra_cfg::EthernetFeatures::EtherLinkOam::Profiles> profiles;
        
}; // EthernetFeatures::EtherLinkOam


class EthernetFeatures::EtherLinkOam::Profiles : public ydk::Entity
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

        class Profile; //type: EthernetFeatures::EtherLinkOam::Profiles::Profile

        ydk::YList profile;
        
}; // EthernetFeatures::EtherLinkOam::Profiles


class EthernetFeatures::EtherLinkOam::Profiles::Profile : public ydk::Entity
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

        ydk::YLeaf profile; //type: string
        ydk::YLeaf mib_retrieval; //type: boolean
        ydk::YLeaf udlf; //type: boolean
        ydk::YLeaf hello_interval; //type: EtherLinkOamHelloIntervalEnum
        ydk::YLeaf mode; //type: EtherLinkOamModeEnum
        ydk::YLeaf remote_loopback; //type: boolean
        ydk::YLeaf timeout; //type: uint32
        class Action; //type: EthernetFeatures::EtherLinkOam::Profiles::Profile::Action
        class RequireRemote; //type: EthernetFeatures::EtherLinkOam::Profiles::Profile::RequireRemote
        class LinkMonitoring; //type: EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2_eth_infra_cfg::EthernetFeatures::EtherLinkOam::Profiles::Profile::Action> action;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2_eth_infra_cfg::EthernetFeatures::EtherLinkOam::Profiles::Profile::RequireRemote> require_remote;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2_eth_infra_cfg::EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring> link_monitoring;
        
}; // EthernetFeatures::EtherLinkOam::Profiles::Profile


class EthernetFeatures::EtherLinkOam::Profiles::Profile::Action : public ydk::Entity
{
    public:
        Action();
        ~Action();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dying_gasp; //type: EtherLinkOamEventActionEnum
        ydk::YLeaf session_up; //type: EtherLinkOamEventActionPrimEnum
        ydk::YLeaf critical_event; //type: EtherLinkOamEventActionEnum
        ydk::YLeaf session_down; //type: EtherLinkOamEventActionEnumEfd
        ydk::YLeaf discovery_timeout; //type: EtherLinkOamEventActionEnumEfd
        ydk::YLeaf high_threshold; //type: EtherLinkOamEventActionEnum
        ydk::YLeaf capabilities_conflict; //type: EtherLinkOamEventActionEnumEfd
        ydk::YLeaf remote_loopback; //type: EtherLinkOamEventActionPrimEnum
        ydk::YLeaf link_fault; //type: EtherLinkOamEventActionEnumEfd
        ydk::YLeaf wiring_conflict; //type: EtherLinkOamEventActionEnumEfd

}; // EthernetFeatures::EtherLinkOam::Profiles::Profile::Action


class EthernetFeatures::EtherLinkOam::Profiles::Profile::RequireRemote : public ydk::Entity
{
    public:
        RequireRemote();
        ~RequireRemote();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mib_retrieval; //type: boolean
        ydk::YLeaf mode; //type: EtherLinkOamRequireModeEnum
        ydk::YLeaf remote_loopback; //type: boolean
        ydk::YLeaf link_monitoring; //type: boolean

}; // EthernetFeatures::EtherLinkOam::Profiles::Profile::RequireRemote


class EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring : public ydk::Entity
{
    public:
        LinkMonitoring();
        ~LinkMonitoring();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf monitoring; //type: boolean
        class SymbolPeriod; //type: EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::SymbolPeriod
        class FramePeriod; //type: EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FramePeriod
        class FrameSeconds; //type: EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FrameSeconds
        class Frame; //type: EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::Frame

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2_eth_infra_cfg::EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::SymbolPeriod> symbol_period;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2_eth_infra_cfg::EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FramePeriod> frame_period;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2_eth_infra_cfg::EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FrameSeconds> frame_seconds;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2_eth_infra_cfg::EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::Frame> frame;
        
}; // EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring


class EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::SymbolPeriod : public ydk::Entity
{
    public:
        SymbolPeriod();
        ~SymbolPeriod();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Window; //type: EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::SymbolPeriod::Window
        class Threshold; //type: EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::SymbolPeriod::Threshold

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2_eth_infra_cfg::EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::SymbolPeriod::Window> window; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2_eth_infra_cfg::EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::SymbolPeriod::Threshold> threshold;
        
}; // EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::SymbolPeriod


class EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::SymbolPeriod::Window : public ydk::Entity
{
    public:
        Window();
        ~Window();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf window; //type: uint32
        ydk::YLeaf units; //type: EtherLinkOamWindowUnitsSymbolsEnum
        ydk::YLeaf multiplier; //type: EtherLinkOamThresholdWindowMultiplierEnum

}; // EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::SymbolPeriod::Window


class EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::SymbolPeriod::Threshold : public ydk::Entity
{
    public:
        Threshold();
        ~Threshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_low; //type: uint32
        ydk::YLeaf threshold_high; //type: uint32
        ydk::YLeaf units; //type: EtherLinkOamThresholdUnitsSymbolsEnum
        ydk::YLeaf multiplier_low; //type: EtherLinkOamThresholdWindowMultiplierEnum
        ydk::YLeaf multiplier_high; //type: EtherLinkOamThresholdWindowMultiplierEnum

}; // EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::SymbolPeriod::Threshold


class EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FramePeriod : public ydk::Entity
{
    public:
        FramePeriod();
        ~FramePeriod();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Window; //type: EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FramePeriod::Window
        class Threshold; //type: EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FramePeriod::Threshold

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2_eth_infra_cfg::EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FramePeriod::Window> window; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2_eth_infra_cfg::EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FramePeriod::Threshold> threshold;
        
}; // EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FramePeriod


class EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FramePeriod::Window : public ydk::Entity
{
    public:
        Window();
        ~Window();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf window; //type: uint32
        ydk::YLeaf units; //type: EtherLinkOamWindowUnitsFramesEnum
        ydk::YLeaf multiplier; //type: EtherLinkOamThresholdWindowMultiplierEnum

}; // EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FramePeriod::Window


class EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FramePeriod::Threshold : public ydk::Entity
{
    public:
        Threshold();
        ~Threshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_low; //type: uint32
        ydk::YLeaf threshold_high; //type: uint32
        ydk::YLeaf units; //type: EtherLinkOamThresholdUnitsFramesEnum
        ydk::YLeaf multiplier_low; //type: EtherLinkOamThresholdWindowMultiplierEnum
        ydk::YLeaf multiplier_high; //type: EtherLinkOamThresholdWindowMultiplierEnum

}; // EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FramePeriod::Threshold


class EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FrameSeconds : public ydk::Entity
{
    public:
        FrameSeconds();
        ~FrameSeconds();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf window; //type: uint32
        class Threshold; //type: EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FrameSeconds::Threshold

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2_eth_infra_cfg::EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FrameSeconds::Threshold> threshold;
        
}; // EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FrameSeconds


class EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FrameSeconds::Threshold : public ydk::Entity
{
    public:
        Threshold();
        ~Threshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_low; //type: uint32
        ydk::YLeaf threshold_high; //type: uint32

}; // EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FrameSeconds::Threshold


class EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::Frame : public ydk::Entity
{
    public:
        Frame();
        ~Frame();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf window; //type: uint32
        class Threshold; //type: EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::Frame::Threshold

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2_eth_infra_cfg::EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::Frame::Threshold> threshold;
        
}; // EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::Frame


class EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::Frame::Threshold : public ydk::Entity
{
    public:
        Threshold();
        ~Threshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_low; //type: uint32
        ydk::YLeaf threshold_high; //type: uint32
        ydk::YLeaf multiplier_low; //type: EtherLinkOamThresholdWindowMultiplierEnum
        ydk::YLeaf multiplier_high; //type: EtherLinkOamThresholdWindowMultiplierEnum

}; // EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::Frame::Threshold

class EgressFiltering : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf egress_filtering_type_strict;
        static const ydk::Enum::YLeaf egress_filtering_type_disable;
        static const ydk::Enum::YLeaf egress_filtering_type_default;

};

class L2ProtocolName : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf cdp;
        static const ydk::Enum::YLeaf stp;
        static const ydk::Enum::YLeaf vtp;
        static const ydk::Enum::YLeaf pvst;
        static const ydk::Enum::YLeaf cpsv;

};

class Filtering : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf filtering_type_dot1q;
        static const ydk::Enum::YLeaf filtering_type_dot1ad;

};

class L2ProtocolMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf forward;
        static const ydk::Enum::YLeaf drop;
        static const ydk::Enum::YLeaf tunnel;
        static const ydk::Enum::YLeaf reverse_tunnel;

};


}
}

#endif /* _CISCO_IOS_XR_L2_ETH_INFRA_CFG_ */

