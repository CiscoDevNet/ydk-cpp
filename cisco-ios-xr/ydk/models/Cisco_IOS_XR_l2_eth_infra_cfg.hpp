#ifndef _CISCO_IOS_XR_L2_ETH_INFRA_CFG_
#define _CISCO_IOS_XR_L2_ETH_INFRA_CFG_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

#include "Cisco_IOS_XR_ethernet_cfm_cfg.hpp"
#include "Cisco_IOS_XR_ethernet_cfm_datatypes.hpp"
#include "Cisco_IOS_XR_ethernet_link_oam_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_l2_eth_infra_cfg {

class EthernetFeatures : public Entity
{
    public:
        EthernetFeatures();
        ~EthernetFeatures();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


    class EgressFiltering : public Entity
    {
        public:
            EgressFiltering();
            ~EgressFiltering();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;
            Value egress_filtering_default_on; //type: empty




    }; // EthernetFeatures::EgressFiltering


    class Cfm : public Entity
    {
        public:
            Cfm();
            ~Cfm();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;
            Value nv_satellite_sla_processing_disable; //type: empty


        class TracerouteCache : public Entity
        {
            public:
                TracerouteCache();
                ~TracerouteCache();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value hold_time; //type: uint32
                Value cache_size; //type: uint32




        }; // EthernetFeatures::Cfm::TracerouteCache


        class Domains : public Entity
        {
            public:
                Domains();
                ~Domains();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class Domain : public Entity
            {
                public:
                    Domain();
                    ~Domain();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value domain; //type: string


                class Services : public Entity
                {
                    public:
                        Services();
                        ~Services();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class Service : public Entity
                    {
                        public:
                            Service();
                            ~Service();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value service; //type: string
                            Value maximum_meps; //type: uint32
                            Value log_cross_check_errors; //type: empty
                            Value continuity_check_archive_hold_time; //type: uint32
                            Value tags; //type: uint32
                            Value log_continuity_check_state_changes; //type: empty
                            Value log_efd; //type: empty
                            Value continuity_check_auto_traceroute; //type: empty
                            Value log_continuity_check_errors; //type: empty
                            Value log_ais; //type: empty


                        class Efd2 : public Entity
                        {
                            public:
                                Efd2();
                                ~Efd2();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value enable; //type: empty
                                Value protection_switching_enable; //type: empty




                        }; // EthernetFeatures::Cfm::Domains::Domain::Services::Service::Efd2


                        class ContinuityCheckInterval : public Entity
                        {
                            public:
                                ContinuityCheckInterval();
                                ~ContinuityCheckInterval();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value ccm_interval; //type: CfmCcmIntervalEnum
                                Value loss_threshold; //type: uint32


                                class CfmCcmIntervalEnum;


                        }; // EthernetFeatures::Cfm::Domains::Domain::Services::Service::ContinuityCheckInterval


                        class MipAutoCreation : public Entity
                        {
                            public:
                                MipAutoCreation();
                                ~MipAutoCreation();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value mip_policy; //type: CfmMipPolicyEnum
                                Value ccm_learning_enable; //type: empty


                                class CfmMipPolicyEnum;


                        }; // EthernetFeatures::Cfm::Domains::Domain::Services::Service::MipAutoCreation


                        class Ais : public Entity
                        {
                            public:
                                Ais();
                                ~Ais();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class Transmission : public Entity
                            {
                                public:
                                    Transmission();
                                    ~Transmission();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value ais_interval; //type: CfmAisIntervalEnum
                                    Value cos; //type: uint32


                                    class CfmAisIntervalEnum;


                            }; // EthernetFeatures::Cfm::Domains::Domain::Services::Service::Ais::Transmission


                                std::unique_ptr<Cisco_IOS_XR_l2_eth_infra_cfg::EthernetFeatures::Cfm::Domains::Domain::Services::Service::Ais::Transmission> transmission; // presence node


                        }; // EthernetFeatures::Cfm::Domains::Domain::Services::Service::Ais


                        class CrossCheck : public Entity
                        {
                            public:
                                CrossCheck();
                                ~CrossCheck();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value auto_; //type: empty


                            class CrossCheckMeps : public Entity
                            {
                                public:
                                    CrossCheckMeps();
                                    ~CrossCheckMeps();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class CrossCheckMep : public Entity
                                {
                                    public:
                                        CrossCheckMep();
                                        ~CrossCheckMep();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value mep_id; //type: uint32
                                        Value enable_mac_address; //type: empty
                                        Value mac_address; //type: string




                                }; // EthernetFeatures::Cfm::Domains::Domain::Services::Service::CrossCheck::CrossCheckMeps::CrossCheckMep


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_l2_eth_infra_cfg::EthernetFeatures::Cfm::Domains::Domain::Services::Service::CrossCheck::CrossCheckMeps::CrossCheckMep> > cross_check_mep;


                            }; // EthernetFeatures::Cfm::Domains::Domain::Services::Service::CrossCheck::CrossCheckMeps


                                std::unique_ptr<Cisco_IOS_XR_l2_eth_infra_cfg::EthernetFeatures::Cfm::Domains::Domain::Services::Service::CrossCheck::CrossCheckMeps> cross_check_meps;


                        }; // EthernetFeatures::Cfm::Domains::Domain::Services::Service::CrossCheck


                        class ServiceProperties : public Entity
                        {
                            public:
                                ServiceProperties();
                                ~ServiceProperties();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value service_type; //type: CfmServiceEnum
                                Value group_name; //type: string
                                Value switching_name; //type: string
                                Value ce_id; //type: uint32
                                Value remote_ce_id; //type: uint32
                                Value short_ma_name_format; //type: CfmShortMaNameFormatEnum
                                Value short_ma_name_string; //type: string
                                Value short_ma_name_number; //type: uint32
                                Value short_ma_name_oui; //type: uint32
                                Value short_ma_name_vpn_index; //type: int32
                                Value short_ma_name_icc; //type: string
                                Value short_ma_name_umc; //type: string


                                class CfmServiceEnum;
                                class CfmShortMaNameFormatEnum;


                        }; // EthernetFeatures::Cfm::Domains::Domain::Services::Service::ServiceProperties


                            std::unique_ptr<Cisco_IOS_XR_l2_eth_infra_cfg::EthernetFeatures::Cfm::Domains::Domain::Services::Service::Ais> ais;
                            std::unique_ptr<Cisco_IOS_XR_l2_eth_infra_cfg::EthernetFeatures::Cfm::Domains::Domain::Services::Service::ContinuityCheckInterval> continuity_check_interval; // presence node
                            std::unique_ptr<Cisco_IOS_XR_l2_eth_infra_cfg::EthernetFeatures::Cfm::Domains::Domain::Services::Service::CrossCheck> cross_check;
                            std::unique_ptr<Cisco_IOS_XR_l2_eth_infra_cfg::EthernetFeatures::Cfm::Domains::Domain::Services::Service::Efd2> efd2; // presence node
                            std::unique_ptr<Cisco_IOS_XR_l2_eth_infra_cfg::EthernetFeatures::Cfm::Domains::Domain::Services::Service::MipAutoCreation> mip_auto_creation; // presence node
                            std::unique_ptr<Cisco_IOS_XR_l2_eth_infra_cfg::EthernetFeatures::Cfm::Domains::Domain::Services::Service::ServiceProperties> service_properties; // presence node


                    }; // EthernetFeatures::Cfm::Domains::Domain::Services::Service


                        std::vector<std::unique_ptr<Cisco_IOS_XR_l2_eth_infra_cfg::EthernetFeatures::Cfm::Domains::Domain::Services::Service> > service;


                }; // EthernetFeatures::Cfm::Domains::Domain::Services


                class DomainProperties : public Entity
                {
                    public:
                        DomainProperties();
                        ~DomainProperties();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value level; //type: uint32
                        Value mdid_format; //type: CfmMdidFormatEnum
                        Value mdid_mac_address; //type: string
                        Value mdid_number; //type: uint32
                        Value mdid_string; //type: string


                        class CfmMdidFormatEnum;


                }; // EthernetFeatures::Cfm::Domains::Domain::DomainProperties


                    std::unique_ptr<Cisco_IOS_XR_l2_eth_infra_cfg::EthernetFeatures::Cfm::Domains::Domain::DomainProperties> domain_properties;
                    std::unique_ptr<Cisco_IOS_XR_l2_eth_infra_cfg::EthernetFeatures::Cfm::Domains::Domain::Services> services;


            }; // EthernetFeatures::Cfm::Domains::Domain


                std::vector<std::unique_ptr<Cisco_IOS_XR_l2_eth_infra_cfg::EthernetFeatures::Cfm::Domains::Domain> > domain;


        }; // EthernetFeatures::Cfm::Domains


            std::unique_ptr<Cisco_IOS_XR_l2_eth_infra_cfg::EthernetFeatures::Cfm::Domains> domains;
            std::unique_ptr<Cisco_IOS_XR_l2_eth_infra_cfg::EthernetFeatures::Cfm::TracerouteCache> traceroute_cache;


    }; // EthernetFeatures::Cfm


    class EtherLinkOam : public Entity
    {
        public:
            EtherLinkOam();
            ~EtherLinkOam();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class Profiles : public Entity
        {
            public:
                Profiles();
                ~Profiles();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class Profile : public Entity
            {
                public:
                    Profile();
                    ~Profile();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value profile; //type: string
                    Value mib_retrieval; //type: empty
                    Value udlf; //type: empty
                    Value hello_interval; //type: EtherLinkOamProfileHelloIntervalEnumEnum
                    Value mode; //type: EtherLinkOamProfileModeEnumEnum
                    Value remote_loopback; //type: empty
                    Value timeout; //type: uint32


                class LinkMonitor : public Entity
                {
                    public:
                        LinkMonitor();
                        ~LinkMonitor();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value monitoring; //type: empty


                    class FramePeriod : public Entity
                    {
                        public:
                            FramePeriod();
                            ~FramePeriod();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value window; //type: uint32


                        class Threshold : public Entity
                        {
                            public:
                                Threshold();
                                ~Threshold();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value threshold_low; //type: uint32
                                Value threshold_high; //type: uint32




                        }; // EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitor::FramePeriod::Threshold


                            std::unique_ptr<Cisco_IOS_XR_l2_eth_infra_cfg::EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitor::FramePeriod::Threshold> threshold;


                    }; // EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitor::FramePeriod


                    class FrameSeconds : public Entity
                    {
                        public:
                            FrameSeconds();
                            ~FrameSeconds();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value window; //type: uint32


                        class Threshold : public Entity
                        {
                            public:
                                Threshold();
                                ~Threshold();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value threshold_low; //type: uint32
                                Value threshold_high; //type: uint32




                        }; // EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitor::FrameSeconds::Threshold


                            std::unique_ptr<Cisco_IOS_XR_l2_eth_infra_cfg::EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitor::FrameSeconds::Threshold> threshold;


                    }; // EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitor::FrameSeconds


                    class Frame : public Entity
                    {
                        public:
                            Frame();
                            ~Frame();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value window; //type: uint32


                        class Threshold : public Entity
                        {
                            public:
                                Threshold();
                                ~Threshold();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value threshold_low; //type: uint32
                                Value threshold_high; //type: uint32




                        }; // EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitor::Frame::Threshold


                            std::unique_ptr<Cisco_IOS_XR_l2_eth_infra_cfg::EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitor::Frame::Threshold> threshold;


                    }; // EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitor::Frame


                    class SymbolPeriod : public Entity
                    {
                        public:
                            SymbolPeriod();
                            ~SymbolPeriod();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value window; //type: uint32


                        class Threshold : public Entity
                        {
                            public:
                                Threshold();
                                ~Threshold();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value threshold_low; //type: uint32
                                Value threshold_high; //type: uint32




                        }; // EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitor::SymbolPeriod::Threshold


                            std::unique_ptr<Cisco_IOS_XR_l2_eth_infra_cfg::EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitor::SymbolPeriod::Threshold> threshold;


                    }; // EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitor::SymbolPeriod


                        std::unique_ptr<Cisco_IOS_XR_l2_eth_infra_cfg::EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitor::Frame> frame;
                        std::unique_ptr<Cisco_IOS_XR_l2_eth_infra_cfg::EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitor::FramePeriod> frame_period;
                        std::unique_ptr<Cisco_IOS_XR_l2_eth_infra_cfg::EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitor::FrameSeconds> frame_seconds;
                        std::unique_ptr<Cisco_IOS_XR_l2_eth_infra_cfg::EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitor::SymbolPeriod> symbol_period;


                }; // EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitor


                class Action : public Entity
                {
                    public:
                        Action();
                        ~Action();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value dying_gasp; //type: EtherLinkOamEventActionEnum2Enum
                        Value session_up; //type: EtherLinkOamEventActionEnum4Enum
                        Value critical_event; //type: EtherLinkOamEventActionEnum2Enum
                        Value session_down; //type: EtherLinkOamEventActionEnum5Enum
                        Value discovery_timeout; //type: EtherLinkOamEventActionEnum5Enum
                        Value high_threshold; //type: EtherLinkOamEventActionEnum1Enum
                        Value capabilities_conflict; //type: EtherLinkOamEventActionEnum5Enum
                        Value remote_loopback; //type: EtherLinkOamEventActionEnum4Enum
                        Value link_fault; //type: EtherLinkOamEventActionEnum5Enum
                        Value wiring_conflict; //type: EtherLinkOamEventActionEnum6Enum


                        class EtherLinkOamEventActionEnum5Enum;
                        class EtherLinkOamEventActionEnum2Enum;
                        class EtherLinkOamEventActionEnum5Enum;
                        class EtherLinkOamEventActionEnum2Enum;
                        class EtherLinkOamEventActionEnum1Enum;
                        class EtherLinkOamEventActionEnum5Enum;
                        class EtherLinkOamEventActionEnum4Enum;
                        class EtherLinkOamEventActionEnum5Enum;
                        class EtherLinkOamEventActionEnum4Enum;
                        class EtherLinkOamEventActionEnum6Enum;


                }; // EthernetFeatures::EtherLinkOam::Profiles::Profile::Action


                class RequireRemote : public Entity
                {
                    public:
                        RequireRemote();
                        ~RequireRemote();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value mib_retrieval; //type: empty
                        Value mode; //type: EtherLinkOamProfileRequireModeEnumEnum
                        Value remote_loopback; //type: empty
                        Value link_monitoring; //type: empty


                        class EtherLinkOamProfileRequireModeEnumEnum;


                }; // EthernetFeatures::EtherLinkOam::Profiles::Profile::RequireRemote


                    std::unique_ptr<Cisco_IOS_XR_l2_eth_infra_cfg::EthernetFeatures::EtherLinkOam::Profiles::Profile::Action> action;
                    std::unique_ptr<Cisco_IOS_XR_l2_eth_infra_cfg::EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitor> link_monitor;
                    std::unique_ptr<Cisco_IOS_XR_l2_eth_infra_cfg::EthernetFeatures::EtherLinkOam::Profiles::Profile::RequireRemote> require_remote;
                    class EtherLinkOamProfileHelloIntervalEnumEnum;
                    class EtherLinkOamProfileModeEnumEnum;


            }; // EthernetFeatures::EtherLinkOam::Profiles::Profile


                std::vector<std::unique_ptr<Cisco_IOS_XR_l2_eth_infra_cfg::EthernetFeatures::EtherLinkOam::Profiles::Profile> > profile;


        }; // EthernetFeatures::EtherLinkOam::Profiles


            std::unique_ptr<Cisco_IOS_XR_l2_eth_infra_cfg::EthernetFeatures::EtherLinkOam::Profiles> profiles;


    }; // EthernetFeatures::EtherLinkOam


        std::unique_ptr<Cisco_IOS_XR_l2_eth_infra_cfg::EthernetFeatures::Cfm> cfm;
        std::unique_ptr<Cisco_IOS_XR_l2_eth_infra_cfg::EthernetFeatures::EgressFiltering> egress_filtering;
        std::unique_ptr<Cisco_IOS_XR_l2_eth_infra_cfg::EthernetFeatures::EtherLinkOam> ether_link_oam;


}; // EthernetFeatures


class EgressFilteringEnum : public Enum
{
    public:
        static const Enum::Value egress_filtering_type_strict;
        static const Enum::Value egress_filtering_type_disable;
        static const Enum::Value egress_filtering_type_default;

};

class L2ProtocolNameEnum : public Enum
{
    public:
        static const Enum::Value cdp;
        static const Enum::Value stp;
        static const Enum::Value vtp;
        static const Enum::Value pvst;
        static const Enum::Value cpsv;

};

class FilteringEnum : public Enum
{
    public:
        static const Enum::Value filtering_type_dot1q;
        static const Enum::Value filtering_type_dot1ad;

};

class L2ProtocolModeEnum : public Enum
{
    public:
        static const Enum::Value forward;
        static const Enum::Value drop;
        static const Enum::Value tunnel;
        static const Enum::Value reverse_tunnel;

};


}
}

#endif /* _CISCO_IOS_XR_L2_ETH_INFRA_CFG_ */

