#ifndef _CISCO_IOS_XR_L2_ETH_INFRA_CFG_
#define _CISCO_IOS_XR_L2_ETH_INFRA_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace Cisco_IOS_XR_l2_eth_infra_cfg {

class EthernetFeatures : public Entity
{
    public:
        EthernetFeatures();
        ~EthernetFeatures();

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

        class EgressFiltering; //type: EthernetFeatures::EgressFiltering
        class Cfm; //type: EthernetFeatures::Cfm
        class EtherLinkOam; //type: EthernetFeatures::EtherLinkOam

        std::shared_ptr<Cisco_IOS_XR_l2_eth_infra_cfg::EthernetFeatures::Cfm> cfm;
        std::shared_ptr<Cisco_IOS_XR_l2_eth_infra_cfg::EthernetFeatures::EgressFiltering> egress_filtering;
        std::shared_ptr<Cisco_IOS_XR_l2_eth_infra_cfg::EthernetFeatures::EtherLinkOam> ether_link_oam;
        
}; // EthernetFeatures


class EthernetFeatures::EgressFiltering : public Entity
{
    public:
        EgressFiltering();
        ~EgressFiltering();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf egress_filtering_default_on; //type: empty

}; // EthernetFeatures::EgressFiltering


class EthernetFeatures::Cfm : public Entity
{
    public:
        Cfm();
        ~Cfm();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf nv_satellite_sla_processing_disable; //type: empty
        class TracerouteCache; //type: EthernetFeatures::Cfm::TracerouteCache
        class Domains; //type: EthernetFeatures::Cfm::Domains

        std::shared_ptr<Cisco_IOS_XR_l2_eth_infra_cfg::EthernetFeatures::Cfm::Domains> domains;
        std::shared_ptr<Cisco_IOS_XR_l2_eth_infra_cfg::EthernetFeatures::Cfm::TracerouteCache> traceroute_cache;
        
}; // EthernetFeatures::Cfm


class EthernetFeatures::Cfm::TracerouteCache : public Entity
{
    public:
        TracerouteCache();
        ~TracerouteCache();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf hold_time; //type: uint32
        YLeaf cache_size; //type: uint32

}; // EthernetFeatures::Cfm::TracerouteCache


class EthernetFeatures::Cfm::Domains : public Entity
{
    public:
        Domains();
        ~Domains();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Domain; //type: EthernetFeatures::Cfm::Domains::Domain

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2_eth_infra_cfg::EthernetFeatures::Cfm::Domains::Domain> > domain;
        
}; // EthernetFeatures::Cfm::Domains


class EthernetFeatures::Cfm::Domains::Domain : public Entity
{
    public:
        Domain();
        ~Domain();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf domain; //type: string
        class Services; //type: EthernetFeatures::Cfm::Domains::Domain::Services
        class DomainProperties; //type: EthernetFeatures::Cfm::Domains::Domain::DomainProperties

        std::shared_ptr<Cisco_IOS_XR_l2_eth_infra_cfg::EthernetFeatures::Cfm::Domains::Domain::DomainProperties> domain_properties;
        std::shared_ptr<Cisco_IOS_XR_l2_eth_infra_cfg::EthernetFeatures::Cfm::Domains::Domain::Services> services;
        
}; // EthernetFeatures::Cfm::Domains::Domain


class EthernetFeatures::Cfm::Domains::Domain::Services : public Entity
{
    public:
        Services();
        ~Services();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Service; //type: EthernetFeatures::Cfm::Domains::Domain::Services::Service

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2_eth_infra_cfg::EthernetFeatures::Cfm::Domains::Domain::Services::Service> > service;
        
}; // EthernetFeatures::Cfm::Domains::Domain::Services


class EthernetFeatures::Cfm::Domains::Domain::Services::Service : public Entity
{
    public:
        Service();
        ~Service();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf service; //type: string
        YLeaf maximum_meps; //type: uint32
        YLeaf log_cross_check_errors; //type: empty
        YLeaf continuity_check_archive_hold_time; //type: uint32
        YLeaf tags; //type: uint32
        YLeaf log_continuity_check_state_changes; //type: empty
        YLeaf log_efd; //type: empty
        YLeaf continuity_check_auto_traceroute; //type: empty
        YLeaf log_continuity_check_errors; //type: empty
        YLeaf log_ais; //type: empty
        class Efd2; //type: EthernetFeatures::Cfm::Domains::Domain::Services::Service::Efd2
        class ContinuityCheckInterval; //type: EthernetFeatures::Cfm::Domains::Domain::Services::Service::ContinuityCheckInterval
        class MipAutoCreation; //type: EthernetFeatures::Cfm::Domains::Domain::Services::Service::MipAutoCreation
        class Ais; //type: EthernetFeatures::Cfm::Domains::Domain::Services::Service::Ais
        class CrossCheck; //type: EthernetFeatures::Cfm::Domains::Domain::Services::Service::CrossCheck
        class ServiceProperties; //type: EthernetFeatures::Cfm::Domains::Domain::Services::Service::ServiceProperties

        std::shared_ptr<Cisco_IOS_XR_l2_eth_infra_cfg::EthernetFeatures::Cfm::Domains::Domain::Services::Service::Ais> ais;
        std::shared_ptr<Cisco_IOS_XR_l2_eth_infra_cfg::EthernetFeatures::Cfm::Domains::Domain::Services::Service::ContinuityCheckInterval> continuity_check_interval; // presence node
        std::shared_ptr<Cisco_IOS_XR_l2_eth_infra_cfg::EthernetFeatures::Cfm::Domains::Domain::Services::Service::CrossCheck> cross_check;
        std::shared_ptr<Cisco_IOS_XR_l2_eth_infra_cfg::EthernetFeatures::Cfm::Domains::Domain::Services::Service::Efd2> efd2; // presence node
        std::shared_ptr<Cisco_IOS_XR_l2_eth_infra_cfg::EthernetFeatures::Cfm::Domains::Domain::Services::Service::MipAutoCreation> mip_auto_creation; // presence node
        std::shared_ptr<Cisco_IOS_XR_l2_eth_infra_cfg::EthernetFeatures::Cfm::Domains::Domain::Services::Service::ServiceProperties> service_properties; // presence node
        
}; // EthernetFeatures::Cfm::Domains::Domain::Services::Service


class EthernetFeatures::Cfm::Domains::Domain::Services::Service::Efd2 : public Entity
{
    public:
        Efd2();
        ~Efd2();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enable; //type: empty
        YLeaf protection_switching_enable; //type: empty

}; // EthernetFeatures::Cfm::Domains::Domain::Services::Service::Efd2


class EthernetFeatures::Cfm::Domains::Domain::Services::Service::ContinuityCheckInterval : public Entity
{
    public:
        ContinuityCheckInterval();
        ~ContinuityCheckInterval();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ccm_interval; //type: CfmCcmIntervalEnum
        YLeaf loss_threshold; //type: uint32

}; // EthernetFeatures::Cfm::Domains::Domain::Services::Service::ContinuityCheckInterval


class EthernetFeatures::Cfm::Domains::Domain::Services::Service::MipAutoCreation : public Entity
{
    public:
        MipAutoCreation();
        ~MipAutoCreation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mip_policy; //type: CfmMipPolicyEnum
        YLeaf ccm_learning_enable; //type: empty

}; // EthernetFeatures::Cfm::Domains::Domain::Services::Service::MipAutoCreation


class EthernetFeatures::Cfm::Domains::Domain::Services::Service::Ais : public Entity
{
    public:
        Ais();
        ~Ais();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Transmission; //type: EthernetFeatures::Cfm::Domains::Domain::Services::Service::Ais::Transmission

        std::shared_ptr<Cisco_IOS_XR_l2_eth_infra_cfg::EthernetFeatures::Cfm::Domains::Domain::Services::Service::Ais::Transmission> transmission; // presence node
        
}; // EthernetFeatures::Cfm::Domains::Domain::Services::Service::Ais


class EthernetFeatures::Cfm::Domains::Domain::Services::Service::Ais::Transmission : public Entity
{
    public:
        Transmission();
        ~Transmission();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ais_interval; //type: CfmAisIntervalEnum
        YLeaf cos; //type: uint32

}; // EthernetFeatures::Cfm::Domains::Domain::Services::Service::Ais::Transmission


class EthernetFeatures::Cfm::Domains::Domain::Services::Service::CrossCheck : public Entity
{
    public:
        CrossCheck();
        ~CrossCheck();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf auto_; //type: empty
        class CrossCheckMeps; //type: EthernetFeatures::Cfm::Domains::Domain::Services::Service::CrossCheck::CrossCheckMeps

        std::shared_ptr<Cisco_IOS_XR_l2_eth_infra_cfg::EthernetFeatures::Cfm::Domains::Domain::Services::Service::CrossCheck::CrossCheckMeps> cross_check_meps;
        
}; // EthernetFeatures::Cfm::Domains::Domain::Services::Service::CrossCheck


class EthernetFeatures::Cfm::Domains::Domain::Services::Service::CrossCheck::CrossCheckMeps : public Entity
{
    public:
        CrossCheckMeps();
        ~CrossCheckMeps();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class CrossCheckMep; //type: EthernetFeatures::Cfm::Domains::Domain::Services::Service::CrossCheck::CrossCheckMeps::CrossCheckMep

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2_eth_infra_cfg::EthernetFeatures::Cfm::Domains::Domain::Services::Service::CrossCheck::CrossCheckMeps::CrossCheckMep> > cross_check_mep;
        
}; // EthernetFeatures::Cfm::Domains::Domain::Services::Service::CrossCheck::CrossCheckMeps


class EthernetFeatures::Cfm::Domains::Domain::Services::Service::CrossCheck::CrossCheckMeps::CrossCheckMep : public Entity
{
    public:
        CrossCheckMep();
        ~CrossCheckMep();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mep_id; //type: uint32
        YLeaf enable_mac_address; //type: empty
        YLeaf mac_address; //type: string

}; // EthernetFeatures::Cfm::Domains::Domain::Services::Service::CrossCheck::CrossCheckMeps::CrossCheckMep


class EthernetFeatures::Cfm::Domains::Domain::Services::Service::ServiceProperties : public Entity
{
    public:
        ServiceProperties();
        ~ServiceProperties();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf service_type; //type: CfmServiceEnum
        YLeaf group_name; //type: string
        YLeaf switching_name; //type: string
        YLeaf ce_id; //type: uint32
        YLeaf remote_ce_id; //type: uint32
        YLeaf short_ma_name_format; //type: CfmShortMaNameFormatEnum
        YLeaf short_ma_name_string; //type: string
        YLeaf short_ma_name_number; //type: uint32
        YLeaf short_ma_name_oui; //type: uint32
        YLeaf short_ma_name_vpn_index; //type: int32
        YLeaf short_ma_name_icc; //type: string
        YLeaf short_ma_name_umc; //type: string

}; // EthernetFeatures::Cfm::Domains::Domain::Services::Service::ServiceProperties


class EthernetFeatures::Cfm::Domains::Domain::DomainProperties : public Entity
{
    public:
        DomainProperties();
        ~DomainProperties();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf level; //type: uint32
        YLeaf mdid_format; //type: CfmMdidFormatEnum
        YLeaf mdid_mac_address; //type: string
        YLeaf mdid_number; //type: uint32
        YLeaf mdid_string; //type: string

}; // EthernetFeatures::Cfm::Domains::Domain::DomainProperties


class EthernetFeatures::EtherLinkOam : public Entity
{
    public:
        EtherLinkOam();
        ~EtherLinkOam();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Profiles; //type: EthernetFeatures::EtherLinkOam::Profiles

        std::shared_ptr<Cisco_IOS_XR_l2_eth_infra_cfg::EthernetFeatures::EtherLinkOam::Profiles> profiles;
        
}; // EthernetFeatures::EtherLinkOam


class EthernetFeatures::EtherLinkOam::Profiles : public Entity
{
    public:
        Profiles();
        ~Profiles();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Profile; //type: EthernetFeatures::EtherLinkOam::Profiles::Profile

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2_eth_infra_cfg::EthernetFeatures::EtherLinkOam::Profiles::Profile> > profile;
        
}; // EthernetFeatures::EtherLinkOam::Profiles


class EthernetFeatures::EtherLinkOam::Profiles::Profile : public Entity
{
    public:
        Profile();
        ~Profile();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf profile; //type: string
        YLeaf mib_retrieval; //type: boolean
        YLeaf udlf; //type: boolean
        YLeaf hello_interval; //type: EtherLinkOamHelloIntervalEnumEnum
        YLeaf mode; //type: EtherLinkOamModeEnumEnum
        YLeaf remote_loopback; //type: boolean
        YLeaf timeout; //type: uint32
        class Action; //type: EthernetFeatures::EtherLinkOam::Profiles::Profile::Action
        class RequireRemote; //type: EthernetFeatures::EtherLinkOam::Profiles::Profile::RequireRemote
        class LinkMonitoring; //type: EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring

        std::shared_ptr<Cisco_IOS_XR_l2_eth_infra_cfg::EthernetFeatures::EtherLinkOam::Profiles::Profile::Action> action;
        std::shared_ptr<Cisco_IOS_XR_l2_eth_infra_cfg::EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring> link_monitoring;
        std::shared_ptr<Cisco_IOS_XR_l2_eth_infra_cfg::EthernetFeatures::EtherLinkOam::Profiles::Profile::RequireRemote> require_remote;
        
}; // EthernetFeatures::EtherLinkOam::Profiles::Profile


class EthernetFeatures::EtherLinkOam::Profiles::Profile::Action : public Entity
{
    public:
        Action();
        ~Action();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dying_gasp; //type: EtherLinkOamEventActionEnumEnum
        YLeaf session_up; //type: EtherLinkOamEventActionPrimEnumEnum
        YLeaf critical_event; //type: EtherLinkOamEventActionEnumEnum
        YLeaf session_down; //type: EtherLinkOamEventActionEnumEfdEnum
        YLeaf discovery_timeout; //type: EtherLinkOamEventActionEnumEfdEnum
        YLeaf high_threshold; //type: EtherLinkOamEventActionEnumEnum
        YLeaf capabilities_conflict; //type: EtherLinkOamEventActionEnumEfdEnum
        YLeaf remote_loopback; //type: EtherLinkOamEventActionPrimEnumEnum
        YLeaf link_fault; //type: EtherLinkOamEventActionEnumEfdEnum
        YLeaf wiring_conflict; //type: EtherLinkOamEventActionEnumEfdEnum

}; // EthernetFeatures::EtherLinkOam::Profiles::Profile::Action


class EthernetFeatures::EtherLinkOam::Profiles::Profile::RequireRemote : public Entity
{
    public:
        RequireRemote();
        ~RequireRemote();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mib_retrieval; //type: boolean
        YLeaf mode; //type: EtherLinkOamRequireModeEnumEnum
        YLeaf remote_loopback; //type: boolean
        YLeaf link_monitoring; //type: boolean

}; // EthernetFeatures::EtherLinkOam::Profiles::Profile::RequireRemote


class EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring : public Entity
{
    public:
        LinkMonitoring();
        ~LinkMonitoring();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf monitoring; //type: boolean
        class SymbolPeriod; //type: EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::SymbolPeriod
        class FramePeriod; //type: EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FramePeriod
        class FrameSeconds; //type: EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FrameSeconds
        class Frame; //type: EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::Frame

        std::shared_ptr<Cisco_IOS_XR_l2_eth_infra_cfg::EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::Frame> frame;
        std::shared_ptr<Cisco_IOS_XR_l2_eth_infra_cfg::EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FramePeriod> frame_period;
        std::shared_ptr<Cisco_IOS_XR_l2_eth_infra_cfg::EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FrameSeconds> frame_seconds;
        std::shared_ptr<Cisco_IOS_XR_l2_eth_infra_cfg::EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::SymbolPeriod> symbol_period;
        
}; // EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring


class EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::SymbolPeriod : public Entity
{
    public:
        SymbolPeriod();
        ~SymbolPeriod();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Window; //type: EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::SymbolPeriod::Window
        class Threshold; //type: EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::SymbolPeriod::Threshold

        std::shared_ptr<Cisco_IOS_XR_l2_eth_infra_cfg::EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::SymbolPeriod::Threshold> threshold;
        std::shared_ptr<Cisco_IOS_XR_l2_eth_infra_cfg::EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::SymbolPeriod::Window> window; // presence node
        
}; // EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::SymbolPeriod


class EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::SymbolPeriod::Window : public Entity
{
    public:
        Window();
        ~Window();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf window; //type: uint32
        YLeaf units; //type: EtherLinkOamWindowUnitsSymbolsEnumEnum
        YLeaf multiplier; //type: EtherLinkOamThresholdWindowMultiplierEnumEnum

}; // EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::SymbolPeriod::Window


class EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::SymbolPeriod::Threshold : public Entity
{
    public:
        Threshold();
        ~Threshold();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf threshold_low; //type: uint32
        YLeaf threshold_high; //type: uint32
        YLeaf units; //type: EtherLinkOamThresholdUnitsSymbolsEnumEnum
        YLeaf multiplier_low; //type: EtherLinkOamThresholdWindowMultiplierEnumEnum
        YLeaf multiplier_high; //type: EtherLinkOamThresholdWindowMultiplierEnumEnum

}; // EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::SymbolPeriod::Threshold


class EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FramePeriod : public Entity
{
    public:
        FramePeriod();
        ~FramePeriod();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Window; //type: EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FramePeriod::Window
        class Threshold; //type: EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FramePeriod::Threshold

        std::shared_ptr<Cisco_IOS_XR_l2_eth_infra_cfg::EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FramePeriod::Threshold> threshold;
        std::shared_ptr<Cisco_IOS_XR_l2_eth_infra_cfg::EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FramePeriod::Window> window; // presence node
        
}; // EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FramePeriod


class EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FramePeriod::Window : public Entity
{
    public:
        Window();
        ~Window();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf window; //type: uint32
        YLeaf units; //type: EtherLinkOamWindowUnitsFramesEnumEnum
        YLeaf multiplier; //type: EtherLinkOamThresholdWindowMultiplierEnumEnum

}; // EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FramePeriod::Window


class EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FramePeriod::Threshold : public Entity
{
    public:
        Threshold();
        ~Threshold();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf threshold_low; //type: uint32
        YLeaf threshold_high; //type: uint32
        YLeaf units; //type: EtherLinkOamThresholdUnitsFramesEnumEnum
        YLeaf multiplier_low; //type: EtherLinkOamThresholdWindowMultiplierEnumEnum
        YLeaf multiplier_high; //type: EtherLinkOamThresholdWindowMultiplierEnumEnum

}; // EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FramePeriod::Threshold


class EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FrameSeconds : public Entity
{
    public:
        FrameSeconds();
        ~FrameSeconds();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf window; //type: uint32
        class Threshold; //type: EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FrameSeconds::Threshold

        std::shared_ptr<Cisco_IOS_XR_l2_eth_infra_cfg::EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FrameSeconds::Threshold> threshold;
        
}; // EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FrameSeconds


class EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FrameSeconds::Threshold : public Entity
{
    public:
        Threshold();
        ~Threshold();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf threshold_low; //type: uint32
        YLeaf threshold_high; //type: uint32

}; // EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FrameSeconds::Threshold


class EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::Frame : public Entity
{
    public:
        Frame();
        ~Frame();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf window; //type: uint32
        class Threshold; //type: EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::Frame::Threshold

        std::shared_ptr<Cisco_IOS_XR_l2_eth_infra_cfg::EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::Frame::Threshold> threshold;
        
}; // EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::Frame


class EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::Frame::Threshold : public Entity
{
    public:
        Threshold();
        ~Threshold();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf threshold_low; //type: uint32
        YLeaf threshold_high; //type: uint32
        YLeaf multiplier_low; //type: EtherLinkOamThresholdWindowMultiplierEnumEnum
        YLeaf multiplier_high; //type: EtherLinkOamThresholdWindowMultiplierEnumEnum

}; // EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::Frame::Threshold

class EgressFilteringEnum : public Enum
{
    public:
        static const Enum::YLeaf egress_filtering_type_strict;
        static const Enum::YLeaf egress_filtering_type_disable;
        static const Enum::YLeaf egress_filtering_type_default;

};

class L2ProtocolNameEnum : public Enum
{
    public:
        static const Enum::YLeaf cdp;
        static const Enum::YLeaf stp;
        static const Enum::YLeaf vtp;
        static const Enum::YLeaf pvst;
        static const Enum::YLeaf cpsv;

};

class FilteringEnum : public Enum
{
    public:
        static const Enum::YLeaf filtering_type_dot1q;
        static const Enum::YLeaf filtering_type_dot1ad;

};

class L2ProtocolModeEnum : public Enum
{
    public:
        static const Enum::YLeaf forward;
        static const Enum::YLeaf drop;
        static const Enum::YLeaf tunnel;
        static const Enum::YLeaf reverse_tunnel;

};


}
}

#endif /* _CISCO_IOS_XR_L2_ETH_INFRA_CFG_ */

