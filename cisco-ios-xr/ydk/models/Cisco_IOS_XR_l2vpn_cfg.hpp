#ifndef _CISCO_IOS_XR_L2VPN_CFG_
#define _CISCO_IOS_XR_L2VPN_CFG_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_l2vpn_cfg {

class L2Vpn : public Entity
{
    public:
        L2Vpn();
        ~L2Vpn();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;
        Value nsr; //type: empty
        Value mtu_mismatch_ignore; //type: empty
        Value tcn_propagation; //type: empty
        Value pwoam_refresh; //type: uint32
        Value load_balance; //type: LoadBalanceEnum
        Value mspw_description; //type: string
        Value pw_status_disable; //type: empty
        Value enable; //type: empty
        Value pw_grouping; //type: empty
        Value capability; //type: L2VpnCapabilityModeEnum
        Value l2vpn_router_id; //type: string


    class PwRouting : public Entity
    {
        public:
            PwRouting();
            ~PwRouting();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;
            Value pw_routing_global_id; //type: uint32


        class PwRoutingBgp : public Entity
        {
            public:
                PwRoutingBgp();
                ~PwRoutingBgp();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value enable; //type: empty


            class EvpnRouteDistinguisher : public Entity
            {
                public:
                    EvpnRouteDistinguisher();
                    ~EvpnRouteDistinguisher();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value type; //type: BgpRouteDistinguisherEnum
                    Value as; //type: uint32
                    Value as_index; //type: uint32
                    Value address; //type: string
                    Value addr_index; //type: uint32


                    class BgpRouteDistinguisherEnum;


            }; // L2Vpn::PwRouting::PwRoutingBgp::EvpnRouteDistinguisher


                std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::PwRouting::PwRoutingBgp::EvpnRouteDistinguisher> evpn_route_distinguisher;


        }; // L2Vpn::PwRouting::PwRoutingBgp


            std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::PwRouting::PwRoutingBgp> pw_routing_bgp;


    }; // L2Vpn::PwRouting


    class Neighbor : public Entity
    {
        public:
            Neighbor();
            ~Neighbor();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;
            Value ldp_flap; //type: empty




    }; // L2Vpn::Neighbor


    class Database : public Entity
    {
        public:
            Database();
            ~Database();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class G8032Rings : public Entity
        {
            public:
                G8032Rings();
                ~G8032Rings();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class G8032Ring : public Entity
            {
                public:
                    G8032Ring();
                    ~G8032Ring();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value g8032_ring_name; //type: string
                    Value open_ring; //type: empty
                    Value exclusion_list; //type: string
                    Value erp_provider_bridge; //type: empty


                class ErpPort0S : public Entity
                {
                    public:
                        ErpPort0S();
                        ~ErpPort0S();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class ErpPort0 : public Entity
                    {
                        public:
                            ErpPort0();
                            ~ErpPort0();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value interface_name; //type: string
                            Value monitor; //type: string




                    }; // L2Vpn::Database::G8032Rings::G8032Ring::ErpPort0S::ErpPort0


                        std::vector<std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::G8032Rings::G8032Ring::ErpPort0S::ErpPort0> > erp_port0;


                }; // L2Vpn::Database::G8032Rings::G8032Ring::ErpPort0S


                class ErpInstances : public Entity
                {
                    public:
                        ErpInstances();
                        ~ErpInstances();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class ErpInstance : public Entity
                    {
                        public:
                            ErpInstance();
                            ~ErpInstance();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value erp_instance_id; //type: uint32
                            Value description; //type: string
                            Value inclusion_list; //type: string
                            Value profile; //type: string


                        class Rpl : public Entity
                        {
                            public:
                                Rpl();
                                ~Rpl();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value port; //type: ErpPort1Enum
                                Value role; //type: RplRoleEnum


                                class ErpPort1Enum;
                                class RplRoleEnum;


                        }; // L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Rpl


                        class Aps : public Entity
                        {
                            public:
                                Aps();
                                ~Aps();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value port0; //type: string
                                Value enable; //type: empty
                                Value level; //type: uint32


                            class Port1 : public Entity
                            {
                                public:
                                    Port1();
                                    ~Port1();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value aps_type; //type: ErpapsEnum
                                    Value aps_channel; //type: string


                                    class ErpapsEnum;


                            }; // L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Aps::Port1


                                std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Aps::Port1> port1;


                        }; // L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Aps


                            std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Aps> aps;
                            std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Rpl> rpl;


                    }; // L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance


                        std::vector<std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance> > erp_instance;


                }; // L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances


                class ErpPort1S : public Entity
                {
                    public:
                        ErpPort1S();
                        ~ErpPort1S();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class ErpPort1 : public Entity
                    {
                        public:
                            ErpPort1();
                            ~ErpPort1();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value erp_port_type; //type: ErpPortEnum


                        class None : public Entity
                        {
                            public:
                                None();
                                ~None();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value monitor; //type: string




                        }; // L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S::ErpPort1::None


                        class VirtualOrInterface : public Entity
                        {
                            public:
                                VirtualOrInterface();
                                ~VirtualOrInterface();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value interface_name; //type: string
                                Value monitor; //type: string




                        }; // L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S::ErpPort1::VirtualOrInterface


                            std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S::ErpPort1::None> none; // presence node
                            std::vector<std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S::ErpPort1::VirtualOrInterface> > virtual_or_interface;
                            class ErpPortEnum;


                    }; // L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S::ErpPort1


                        std::vector<std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S::ErpPort1> > erp_port1;


                }; // L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S


                    std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances> erp_instances;
                    std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::G8032Rings::G8032Ring::ErpPort0S> erp_port0s;
                    std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S> erp_port1s;


            }; // L2Vpn::Database::G8032Rings::G8032Ring


                std::vector<std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::G8032Rings::G8032Ring> > g8032_ring;


        }; // L2Vpn::Database::G8032Rings


        class XconnectGroups : public Entity
        {
            public:
                XconnectGroups();
                ~XconnectGroups();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class XconnectGroup : public Entity
            {
                public:
                    XconnectGroup();
                    ~XconnectGroup();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value name; //type: string


                class P2PXconnects : public Entity
                {
                    public:
                        P2PXconnects();
                        ~P2PXconnects();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class P2PXconnect : public Entity
                    {
                        public:
                            P2PXconnect();
                            ~P2PXconnect();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value name; //type: string
                            Value p2p_description; //type: string
                            Value interworking; //type: InterworkingEnum


                        class BackupAttachmentCircuits : public Entity
                        {
                            public:
                                BackupAttachmentCircuits();
                                ~BackupAttachmentCircuits();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class BackupAttachmentCircuit : public Entity
                            {
                                public:
                                    BackupAttachmentCircuit();
                                    ~BackupAttachmentCircuit();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value interface_name; //type: string




                            }; // L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::BackupAttachmentCircuits::BackupAttachmentCircuit


                                std::vector<std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::BackupAttachmentCircuits::BackupAttachmentCircuit> > backup_attachment_circuit;


                        }; // L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::BackupAttachmentCircuits


                        class PseudowireEvpns : public Entity
                        {
                            public:
                                PseudowireEvpns();
                                ~PseudowireEvpns();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class PseudowireEvpn : public Entity
                            {
                                public:
                                    PseudowireEvpn();
                                    ~PseudowireEvpn();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value eviid; //type: uint32
                                    Value remote_acid; //type: uint32
                                    Value source_acid; //type: uint32




                            }; // L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireEvpns::PseudowireEvpn


                                std::vector<std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireEvpns::PseudowireEvpn> > pseudowire_evpn;


                        }; // L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireEvpns


                        class Pseudowires : public Entity
                        {
                            public:
                                Pseudowires();
                                ~Pseudowires();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class Pseudowire : public Entity
                            {
                                public:
                                    Pseudowire();
                                    ~Pseudowire();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value pseudowire_id; //type: uint32


                                class Neighbor : public Entity
                                {
                                    public:
                                        Neighbor();
                                        ~Neighbor();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value neighbor; //type: string
                                        Value tag_impose; //type: uint32
                                        Value class_; //type: string
                                        Value source_address; //type: string
                                        Value bandwidth; //type: uint32


                                    class MplsStaticLabels : public Entity
                                    {
                                        public:
                                            MplsStaticLabels();
                                            ~MplsStaticLabels();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value local_static_label; //type: uint32
                                            Value remote_static_label; //type: uint32




                                    }; // L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::MplsStaticLabels


                                    class BackupPseudowires : public Entity
                                    {
                                        public:
                                            BackupPseudowires();
                                            ~BackupPseudowires();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                        class BackupPseudowire : public Entity
                                        {
                                            public:
                                                BackupPseudowire();
                                                ~BackupPseudowire();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value neighbor; //type: string
                                                Value pseudowire_id; //type: uint32
                                                Value backup_pw_class; //type: string


                                            class BackupMplsStaticLabels : public Entity
                                            {
                                                public:
                                                    BackupMplsStaticLabels();
                                                    ~BackupMplsStaticLabels();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value local_static_label; //type: uint32
                                                    Value remote_static_label; //type: uint32




                                            }; // L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::BackupPseudowire::BackupMplsStaticLabels


                                                std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::BackupPseudowire::BackupMplsStaticLabels> backup_mpls_static_labels;


                                        }; // L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::BackupPseudowire


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::BackupPseudowire> > backup_pseudowire;


                                    }; // L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires


                                    class L2TpStaticAttributes : public Entity
                                    {
                                        public:
                                            L2TpStaticAttributes();
                                            ~L2TpStaticAttributes();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value l2tp_remote_session_id; //type: uint32
                                            Value l2tp_local_session_id; //type: uint32


                                        class L2TpRemoteCookie : public Entity
                                        {
                                            public:
                                                L2TpRemoteCookie();
                                                ~L2TpRemoteCookie();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value size; //type: L2TpCookieSizeEnum
                                                Value lower_value; //type: uint32
                                                Value higher_value; //type: uint32


                                                class L2TpCookieSizeEnum;


                                        }; // L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::L2TpRemoteCookie


                                        class L2TpSecondaryLocalCookie : public Entity
                                        {
                                            public:
                                                L2TpSecondaryLocalCookie();
                                                ~L2TpSecondaryLocalCookie();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value size; //type: L2TpCookieSizeEnum
                                                Value lower_value; //type: uint32
                                                Value higher_value; //type: uint32


                                                class L2TpCookieSizeEnum;


                                        }; // L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::L2TpSecondaryLocalCookie


                                        class L2TpLocalCookie : public Entity
                                        {
                                            public:
                                                L2TpLocalCookie();
                                                ~L2TpLocalCookie();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value size; //type: L2TpCookieSizeEnum
                                                Value lower_value; //type: uint32
                                                Value higher_value; //type: uint32


                                                class L2TpCookieSizeEnum;


                                        }; // L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::L2TpLocalCookie


                                            std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::L2TpLocalCookie> l2tp_local_cookie;
                                            std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::L2TpRemoteCookie> l2tp_remote_cookie;
                                            std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::L2TpSecondaryLocalCookie> l2tp_secondary_local_cookie;


                                    }; // L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes


                                    class L2TpStatic : public Entity
                                    {
                                        public:
                                            L2TpStatic();
                                            ~L2TpStatic();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value enable; //type: empty




                                    }; // L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStatic


                                        std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires> backup_pseudowires;
                                        std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStatic> l2tp_static;
                                        std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes> l2tp_static_attributes;
                                        std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::MplsStaticLabels> mpls_static_labels;


                                }; // L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor


                                class PseudowireAddress : public Entity
                                {
                                    public:
                                        PseudowireAddress();
                                        ~PseudowireAddress();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value pseudowire_address; //type: string
                                        Value tag_impose; //type: uint32
                                        Value class_; //type: string
                                        Value source_address; //type: string
                                        Value bandwidth; //type: uint32


                                    class MplsStaticLabels : public Entity
                                    {
                                        public:
                                            MplsStaticLabels();
                                            ~MplsStaticLabels();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value local_static_label; //type: uint32
                                            Value remote_static_label; //type: uint32




                                    }; // L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::MplsStaticLabels


                                    class BackupPseudowires : public Entity
                                    {
                                        public:
                                            BackupPseudowires();
                                            ~BackupPseudowires();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                        class BackupPseudowire : public Entity
                                        {
                                            public:
                                                BackupPseudowire();
                                                ~BackupPseudowire();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value neighbor; //type: string
                                                Value pseudowire_id; //type: uint32
                                                Value backup_pw_class; //type: string


                                            class BackupMplsStaticLabels : public Entity
                                            {
                                                public:
                                                    BackupMplsStaticLabels();
                                                    ~BackupMplsStaticLabels();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value local_static_label; //type: uint32
                                                    Value remote_static_label; //type: uint32




                                            }; // L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::BackupPseudowire::BackupMplsStaticLabels


                                                std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::BackupPseudowire::BackupMplsStaticLabels> backup_mpls_static_labels;


                                        }; // L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::BackupPseudowire


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::BackupPseudowire> > backup_pseudowire;


                                    }; // L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires


                                    class L2TpStaticAttributes : public Entity
                                    {
                                        public:
                                            L2TpStaticAttributes();
                                            ~L2TpStaticAttributes();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value l2tp_remote_session_id; //type: uint32
                                            Value l2tp_local_session_id; //type: uint32


                                        class L2TpRemoteCookie : public Entity
                                        {
                                            public:
                                                L2TpRemoteCookie();
                                                ~L2TpRemoteCookie();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value size; //type: L2TpCookieSizeEnum
                                                Value lower_value; //type: uint32
                                                Value higher_value; //type: uint32


                                                class L2TpCookieSizeEnum;


                                        }; // L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::L2TpRemoteCookie


                                        class L2TpSecondaryLocalCookie : public Entity
                                        {
                                            public:
                                                L2TpSecondaryLocalCookie();
                                                ~L2TpSecondaryLocalCookie();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value size; //type: L2TpCookieSizeEnum
                                                Value lower_value; //type: uint32
                                                Value higher_value; //type: uint32


                                                class L2TpCookieSizeEnum;


                                        }; // L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::L2TpSecondaryLocalCookie


                                        class L2TpLocalCookie : public Entity
                                        {
                                            public:
                                                L2TpLocalCookie();
                                                ~L2TpLocalCookie();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value size; //type: L2TpCookieSizeEnum
                                                Value lower_value; //type: uint32
                                                Value higher_value; //type: uint32


                                                class L2TpCookieSizeEnum;


                                        }; // L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::L2TpLocalCookie


                                            std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::L2TpLocalCookie> l2tp_local_cookie;
                                            std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::L2TpRemoteCookie> l2tp_remote_cookie;
                                            std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::L2TpSecondaryLocalCookie> l2tp_secondary_local_cookie;


                                    }; // L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes


                                    class L2TpStatic : public Entity
                                    {
                                        public:
                                            L2TpStatic();
                                            ~L2TpStatic();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value enable; //type: empty




                                    }; // L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStatic


                                        std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires> backup_pseudowires;
                                        std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStatic> l2tp_static;
                                        std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes> l2tp_static_attributes;
                                        std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::MplsStaticLabels> mpls_static_labels;


                                }; // L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor> > neighbor;
                                    std::vector<std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress> > pseudowire_address;


                            }; // L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire


                                std::vector<std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire> > pseudowire;


                        }; // L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires


                        class MonitorSessions : public Entity
                        {
                            public:
                                MonitorSessions();
                                ~MonitorSessions();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class MonitorSession : public Entity
                            {
                                public:
                                    MonitorSession();
                                    ~MonitorSession();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value name; //type: string
                                    Value enable; //type: empty




                            }; // L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::MonitorSessions::MonitorSession


                                std::vector<std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::MonitorSessions::MonitorSession> > monitor_session;


                        }; // L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::MonitorSessions


                        class PseudowireRouteds : public Entity
                        {
                            public:
                                PseudowireRouteds();
                                ~PseudowireRouteds();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class PseudowireRouted : public Entity
                            {
                                public:
                                    PseudowireRouted();
                                    ~PseudowireRouted();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value global_id; //type: uint32
                                    Value prefix; //type: string
                                    Value acid; //type: uint32
                                    Value sacid; //type: uint32
                                    Value tag_impose; //type: uint32
                                    Value class_; //type: string




                            }; // L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireRouteds::PseudowireRouted


                                std::vector<std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireRouteds::PseudowireRouted> > pseudowire_routed;


                        }; // L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireRouteds


                        class AttachmentCircuits : public Entity
                        {
                            public:
                                AttachmentCircuits();
                                ~AttachmentCircuits();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class AttachmentCircuit : public Entity
                            {
                                public:
                                    AttachmentCircuit();
                                    ~AttachmentCircuit();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value name; //type: string
                                    Value enable; //type: empty




                            }; // L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::AttachmentCircuits::AttachmentCircuit


                                std::vector<std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::AttachmentCircuits::AttachmentCircuit> > attachment_circuit;


                        }; // L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::AttachmentCircuits


                            std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::AttachmentCircuits> attachment_circuits;
                            std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::BackupAttachmentCircuits> backup_attachment_circuits;
                            std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::MonitorSessions> monitor_sessions;
                            std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireEvpns> pseudowire_evpns;
                            std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireRouteds> pseudowire_routeds;
                            std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires> pseudowires;
                            class InterworkingEnum;


                    }; // L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect


                        std::vector<std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect> > p2p_xconnect;


                }; // L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects


                class Mp2MpXconnects : public Entity
                {
                    public:
                        Mp2MpXconnects();
                        ~Mp2MpXconnects();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class Mp2MpXconnect : public Entity
                    {
                        public:
                            Mp2MpXconnect();
                            ~Mp2MpXconnect();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value name; //type: string
                            Value mp2mpmtu; //type: uint32
                            Value mp2mp_control_word; //type: empty
                            Value mp2mpl2_encapsulation; //type: L2EncapsulationEnum
                            Value mp2mp_interworking; //type: InterworkingEnum
                            Value mp2mp_shutdown; //type: empty
                            Value mp2mpvpn_id; //type: uint32


                        class Mp2MpAutoDiscovery : public Entity
                        {
                            public:
                                Mp2MpAutoDiscovery();
                                ~Mp2MpAutoDiscovery();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value enable; //type: empty


                            class RouteDistinguisher : public Entity
                            {
                                public:
                                    RouteDistinguisher();
                                    ~RouteDistinguisher();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value type; //type: BgpRouteDistinguisherEnum
                                    Value as; //type: uint32
                                    Value as_index; //type: uint32
                                    Value address; //type: string
                                    Value addr_index; //type: uint32


                                    class BgpRouteDistinguisherEnum;


                            }; // L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::RouteDistinguisher


                            class Mp2MpRoutePolicy : public Entity
                            {
                                public:
                                    Mp2MpRoutePolicy();
                                    ~Mp2MpRoutePolicy();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value export_; //type: string
                                    Value import; //type: string




                            }; // L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRoutePolicy


                            class Mp2MpRouteTargets : public Entity
                            {
                                public:
                                    Mp2MpRouteTargets();
                                    ~Mp2MpRouteTargets();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class Mp2MpRouteTarget : public Entity
                                {
                                    public:
                                        Mp2MpRouteTarget();
                                        ~Mp2MpRouteTarget();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value role; //type: BgpRouteTargetRoleEnum
                                        Value format; //type: BgpRouteTargetFormatEnum


                                    class TwoByteAsOrFourByteAs : public Entity
                                    {
                                        public:
                                            TwoByteAsOrFourByteAs();
                                            ~TwoByteAsOrFourByteAs();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value as; //type: uint32
                                            Value as_index; //type: uint32




                                    }; // L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets::Mp2MpRouteTarget::TwoByteAsOrFourByteAs


                                    class Ipv4Address : public Entity
                                    {
                                        public:
                                            Ipv4Address();
                                            ~Ipv4Address();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value address; //type: string
                                            Value addr_index; //type: uint32




                                    }; // L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets::Mp2MpRouteTarget::Ipv4Address


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets::Mp2MpRouteTarget::Ipv4Address> > ipv4_address;
                                        std::vector<std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets::Mp2MpRouteTarget::TwoByteAsOrFourByteAs> > two_byte_as_or_four_byte_as;
                                        class BgpRouteTargetFormatEnum;
                                        class BgpRouteTargetRoleEnum;


                                }; // L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets::Mp2MpRouteTarget


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets::Mp2MpRouteTarget> > mp2mp_route_target;


                            }; // L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets


                            class Mp2MpSignalingProtocol : public Entity
                            {
                                public:
                                    Mp2MpSignalingProtocol();
                                    ~Mp2MpSignalingProtocol();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value ce_range; //type: uint32
                                    Value enable; //type: empty


                                class FlowLabelLoadBalance : public Entity
                                {
                                    public:
                                        FlowLabelLoadBalance();
                                        ~FlowLabelLoadBalance();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value flow_label; //type: FlowLabelLoadBalanceEnum
                                        Value static_; //type: empty


                                        class FlowLabelLoadBalanceEnum;


                                }; // L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::FlowLabelLoadBalance


                                class Ceids : public Entity
                                {
                                    public:
                                        Ceids();
                                        ~Ceids();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                    class Ceid : public Entity
                                    {
                                        public:
                                            Ceid();
                                            ~Ceid();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value ce_id; //type: uint32


                                        class RemoteCeidAttachmentCircuits : public Entity
                                        {
                                            public:
                                                RemoteCeidAttachmentCircuits();
                                                ~RemoteCeidAttachmentCircuits();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                            class RemoteCeidAttachmentCircuit : public Entity
                                            {
                                                public:
                                                    RemoteCeidAttachmentCircuit();
                                                    ~RemoteCeidAttachmentCircuit();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value name; //type: string
                                                    Value remote_ce_id; //type: uint32




                                            }; // L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids::Ceid::RemoteCeidAttachmentCircuits::RemoteCeidAttachmentCircuit


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids::Ceid::RemoteCeidAttachmentCircuits::RemoteCeidAttachmentCircuit> > remote_ceid_attachment_circuit;


                                        }; // L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids::Ceid::RemoteCeidAttachmentCircuits


                                            std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids::Ceid::RemoteCeidAttachmentCircuits> remote_ceid_attachment_circuits;


                                    }; // L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids::Ceid


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids::Ceid> > ceid;


                                }; // L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids


                                    std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids> ceids;
                                    std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::FlowLabelLoadBalance> flow_label_load_balance;


                            }; // L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol


                                std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRoutePolicy> mp2mp_route_policy;
                                std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets> mp2mp_route_targets;
                                std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol> mp2mp_signaling_protocol;
                                std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::RouteDistinguisher> route_distinguisher;


                        }; // L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery


                            std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery> mp2mp_auto_discovery;
                            class InterworkingEnum;
                            class L2EncapsulationEnum;


                    }; // L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect


                        std::vector<std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect> > mp2mp_xconnect;


                }; // L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects


                    std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects> mp2mp_xconnects;
                    std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects> p2p_xconnects;


            }; // L2Vpn::Database::XconnectGroups::XconnectGroup


                std::vector<std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup> > xconnect_group;


        }; // L2Vpn::Database::XconnectGroups


        class BridgeDomainGroups : public Entity
        {
            public:
                BridgeDomainGroups();
                ~BridgeDomainGroups();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class BridgeDomainGroup : public Entity
            {
                public:
                    BridgeDomainGroup();
                    ~BridgeDomainGroup();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value name; //type: string


                class BridgeDomains : public Entity
                {
                    public:
                        BridgeDomains();
                        ~BridgeDomains();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class BridgeDomain : public Entity
                    {
                        public:
                            BridgeDomain();
                            ~BridgeDomain();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value name; //type: string
                            Value coupled_mode; //type: empty
                            Value shutdown; //type: empty
                            Value flooding_unknown_unicast; //type: empty
                            Value igmp_snooping_disable; //type: empty
                            Value transport_mode; //type: BridgeDomainTransportModeEnum
                            Value mld_snooping; //type: string
                            Value bridge_domain_mtu; //type: uint32
                            Value dhcp; //type: string
                            Value igmp_snooping; //type: string
                            Value flooding; //type: empty


                        class BdStormControls : public Entity
                        {
                            public:
                                BdStormControls();
                                ~BdStormControls();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class BdStormControl : public Entity
                            {
                                public:
                                    BdStormControl();
                                    ~BdStormControl();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value sctype; //type: StormControlEnum


                                class StormControlUnit : public Entity
                                {
                                    public:
                                        StormControlUnit();
                                        ~StormControlUnit();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value kbits_per_sec; //type: uint32
                                        Value pkts_per_sec; //type: uint32




                                }; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl::StormControlUnit


                                    std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl::StormControlUnit> storm_control_unit;
                                    class StormControlEnum;


                            }; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl


                                std::vector<std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl> > bd_storm_control;


                        }; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls


                        class MemberVnis : public Entity
                        {
                            public:
                                MemberVnis();
                                ~MemberVnis();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class MemberVni : public Entity
                            {
                                public:
                                    MemberVni();
                                    ~MemberVni();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value vni; //type: uint32


                                class MemberVniStaticMacAddresses : public Entity
                                {
                                    public:
                                        MemberVniStaticMacAddresses();
                                        ~MemberVniStaticMacAddresses();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                    class MemberVniStaticMacAddress : public Entity
                                    {
                                        public:
                                            MemberVniStaticMacAddress();
                                            ~MemberVniStaticMacAddress();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value mac_address; //type: string
                                            Value next_hop_ip; //type: string




                                    }; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses::MemberVniStaticMacAddress


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses::MemberVniStaticMacAddress> > member_vni_static_mac_address;


                                }; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses


                                    std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses> member_vni_static_mac_addresses;


                            }; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni


                                std::vector<std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni> > member_vni;


                        }; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis


                        class BridgeDomainMac : public Entity
                        {
                            public:
                                BridgeDomainMac();
                                ~BridgeDomainMac();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value bd_mac_withdraw_relay; //type: empty
                                Value bd_mac_withdraw_access_pw_disable; //type: empty
                                Value bd_mac_port_down_flush; //type: empty
                                Value bd_mac_withdraw; //type: empty
                                Value bd_mac_withdraw_behavior; //type: MacWithdrawBehaviorEnum
                                Value bd_mac_learn; //type: MacLearnEnum


                            class BdMacLimit : public Entity
                            {
                                public:
                                    BdMacLimit();
                                    ~BdMacLimit();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value bd_mac_limit_action; //type: MacLimitActionEnum
                                    Value bd_mac_limit_notif; //type: MacNotificationEnum
                                    Value bd_mac_limit_max; //type: uint32


                                    class MacLimitActionEnum;
                                    class MacNotificationEnum;


                            }; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacLimit


                            class BdMacFilters : public Entity
                            {
                                public:
                                    BdMacFilters();
                                    ~BdMacFilters();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class BdMacFilter : public Entity
                                {
                                    public:
                                        BdMacFilter();
                                        ~BdMacFilter();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value address; //type: string
                                        Value drop; //type: empty




                                }; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters::BdMacFilter


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters::BdMacFilter> > bd_mac_filter;


                            }; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters


                            class MacSecure : public Entity
                            {
                                public:
                                    MacSecure();
                                    ~MacSecure();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value logging; //type: empty
                                    Value action; //type: MacSecureActionEnum
                                    Value enable; //type: empty


                                    class MacSecureActionEnum;


                            }; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::MacSecure


                            class BdMacAging : public Entity
                            {
                                public:
                                    BdMacAging();
                                    ~BdMacAging();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value bd_mac_aging_type; //type: MacAgingEnum
                                    Value bd_mac_aging_time; //type: uint32


                                    class MacAgingEnum;


                            }; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacAging


                                std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacAging> bd_mac_aging;
                                std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters> bd_mac_filters;
                                std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacLimit> bd_mac_limit;
                                std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::MacSecure> mac_secure;
                                class MacLearnEnum;
                                class MacWithdrawBehaviorEnum;


                        }; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac


                        class NvSatellite : public Entity
                        {
                            public:
                                NvSatellite();
                                ~NvSatellite();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value offload_ipv4_multicast_enable; //type: empty
                                Value enable; //type: empty




                        }; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::NvSatellite


                        class BridgeDomainPbb : public Entity
                        {
                            public:
                                BridgeDomainPbb();
                                ~BridgeDomainPbb();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class PbbEdges : public Entity
                            {
                                public:
                                    PbbEdges();
                                    ~PbbEdges();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class PbbEdge : public Entity
                                {
                                    public:
                                        PbbEdge();
                                        ~PbbEdge();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value isid; //type: uint32
                                        Value core_bd_name; //type: string
                                        Value pbb_edge_igmp_profile; //type: string
                                        Value unknown_unicast_bmac; //type: string


                                    class PbbStaticMacMappings : public Entity
                                    {
                                        public:
                                            PbbStaticMacMappings();
                                            ~PbbStaticMacMappings();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                        class PbbStaticMacMapping : public Entity
                                        {
                                            public:
                                                PbbStaticMacMapping();
                                                ~PbbStaticMacMapping();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value address; //type: string
                                                Value bmac; //type: string




                                        }; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings::PbbStaticMacMapping


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings::PbbStaticMacMapping> > pbb_static_mac_mapping;


                                    }; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings


                                    class PbbEdgeDhcpProfile : public Entity
                                    {
                                        public:
                                            PbbEdgeDhcpProfile();
                                            ~PbbEdgeDhcpProfile();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value profile_id; //type: InterfaceProfileEnum
                                            Value dhcp_snooping_id; //type: string


                                            class InterfaceProfileEnum;


                                    }; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeDhcpProfile


                                    class PbbEdgeMac : public Entity
                                    {
                                        public:
                                            PbbEdgeMac();
                                            ~PbbEdgeMac();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value pbb_edge_mac_learning; //type: MacLearnEnum


                                        class PbbEdgeMacLimit : public Entity
                                        {
                                            public:
                                                PbbEdgeMacLimit();
                                                ~PbbEdgeMacLimit();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value pbb_edge_mac_limit_action; //type: MacLimitActionEnum
                                                Value pbb_edge_mac_limit_max; //type: uint32
                                                Value pbb_edge_mac_limit_notif; //type: MacNotificationEnum


                                                class MacLimitActionEnum;
                                                class MacNotificationEnum;


                                        }; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacLimit


                                        class PbbEdgeMacAging : public Entity
                                        {
                                            public:
                                                PbbEdgeMacAging();
                                                ~PbbEdgeMacAging();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value pbb_edge_mac_aging_type; //type: MacAgingEnum
                                                Value pbb_edge_mac_aging_time; //type: uint32


                                                class MacAgingEnum;


                                        }; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacAging


                                        class PbbEdgeMacSecure : public Entity
                                        {
                                            public:
                                                PbbEdgeMacSecure();
                                                ~PbbEdgeMacSecure();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value logging; //type: L2VpnLoggingEnum
                                                Value disable; //type: empty
                                                Value action; //type: MacSecureActionEnum
                                                Value enable; //type: empty
                                                Value accept_shutdown; //type: empty


                                                class MacSecureActionEnum;
                                                class L2VpnLoggingEnum;


                                        }; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacSecure


                                            std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacAging> pbb_edge_mac_aging;
                                            std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacLimit> pbb_edge_mac_limit;
                                            std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacSecure> pbb_edge_mac_secure;
                                            class MacLearnEnum;


                                    }; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac


                                        std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeDhcpProfile> pbb_edge_dhcp_profile;
                                        std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac> pbb_edge_mac;
                                        std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings> pbb_static_mac_mappings;


                                }; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge> > pbb_edge;


                            }; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges


                            class PbbCore : public Entity
                            {
                                public:
                                    PbbCore();
                                    ~PbbCore();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value pbb_core_mmrp_flood_optimization; //type: empty
                                    Value vlan_id; //type: uint32
                                    Value pbb_core_igmp_profile; //type: string
                                    Value enable; //type: empty


                                class PbbCoreMac : public Entity
                                {
                                    public:
                                        PbbCoreMac();
                                        ~PbbCoreMac();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value pbb_core_mac_learning; //type: MacLearnEnum


                                    class PbbCoreMacAging : public Entity
                                    {
                                        public:
                                            PbbCoreMacAging();
                                            ~PbbCoreMacAging();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value pbb_core_mac_aging_type; //type: MacAgingEnum
                                            Value pbb_core_mac_aging_time; //type: uint32


                                            class MacAgingEnum;


                                    }; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacAging


                                    class PbbCoreMacLimit : public Entity
                                    {
                                        public:
                                            PbbCoreMacLimit();
                                            ~PbbCoreMacLimit();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value pbb_core_mac_limit_max; //type: uint32
                                            Value pbb_core_mac_limit_notif; //type: MacNotificationEnum
                                            Value pbb_core_mac_limit_action; //type: MacLimitActionEnum


                                            class MacLimitActionEnum;
                                            class MacNotificationEnum;


                                    }; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacLimit


                                        std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacAging> pbb_core_mac_aging;
                                        std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacLimit> pbb_core_mac_limit;
                                        class MacLearnEnum;


                                }; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac


                                class PbbCoreEvis : public Entity
                                {
                                    public:
                                        PbbCoreEvis();
                                        ~PbbCoreEvis();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                    class PbbCoreEvi : public Entity
                                    {
                                        public:
                                            PbbCoreEvi();
                                            ~PbbCoreEvi();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value eviid; //type: uint32




                                    }; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis::PbbCoreEvi


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis::PbbCoreEvi> > pbb_core_evi;


                                }; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis


                                class PbbCoreDhcpProfile : public Entity
                                {
                                    public:
                                        PbbCoreDhcpProfile();
                                        ~PbbCoreDhcpProfile();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value profile_id; //type: InterfaceProfileEnum
                                        Value dhcp_snooping_id; //type: string


                                        class InterfaceProfileEnum;


                                }; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreDhcpProfile


                                    std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreDhcpProfile> pbb_core_dhcp_profile;
                                    std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis> pbb_core_evis;
                                    std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac> pbb_core_mac;


                            }; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore


                                std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore> pbb_core;
                                std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges> pbb_edges;


                        }; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb


                        class BridgeDomainEvis : public Entity
                        {
                            public:
                                BridgeDomainEvis();
                                ~BridgeDomainEvis();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class BridgeDomainEvi : public Entity
                            {
                                public:
                                    BridgeDomainEvi();
                                    ~BridgeDomainEvi();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value eviid; //type: uint32




                            }; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainEvis::BridgeDomainEvi


                                std::vector<std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainEvis::BridgeDomainEvi> > bridge_domain_evi;


                        }; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainEvis


                        class BdPseudowires : public Entity
                        {
                            public:
                                BdPseudowires();
                                ~BdPseudowires();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class BdPseudowire : public Entity
                            {
                                public:
                                    BdPseudowire();
                                    ~BdPseudowire();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value neighbor; //type: string
                                    Value pseudowire_id; //type: uint32
                                    Value pseudowire_mld_snoop; //type: string
                                    Value pseudowire_igmp_snoop; //type: string
                                    Value pseudowire_flooding; //type: InterfaceTrafficFloodEnum
                                    Value bd_pw_class; //type: string
                                    Value pseudowire_flooding_unknown_unicast; //type: InterfaceTrafficFloodEnum


                                class PseudowireDai : public Entity
                                {
                                    public:
                                        PseudowireDai();
                                        ~PseudowireDai();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value logging; //type: L2VpnLoggingEnum
                                        Value disable; //type: empty
                                        Value enable; //type: empty


                                    class PseudowireDaiAddressValidation : public Entity
                                    {
                                        public:
                                            PseudowireDaiAddressValidation();
                                            ~PseudowireDaiAddressValidation();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value ipv4_verification; //type: L2VpnVerificationEnum
                                            Value destination_mac_verification; //type: L2VpnVerificationEnum
                                            Value source_mac_verification; //type: L2VpnVerificationEnum


                                            class L2VpnVerificationEnum;
                                            class L2VpnVerificationEnum;
                                            class L2VpnVerificationEnum;


                                    }; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai::PseudowireDaiAddressValidation


                                        std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai::PseudowireDaiAddressValidation> pseudowire_dai_address_validation;
                                        class L2VpnLoggingEnum;


                                }; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai


                                class BdpwStormControlTypes : public Entity
                                {
                                    public:
                                        BdpwStormControlTypes();
                                        ~BdpwStormControlTypes();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                    class BdpwStormControlType : public Entity
                                    {
                                        public:
                                            BdpwStormControlType();
                                            ~BdpwStormControlType();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value sctype; //type: StormControlEnum


                                        class StormControlUnit : public Entity
                                        {
                                            public:
                                                StormControlUnit();
                                                ~StormControlUnit();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value kbits_per_sec; //type: uint32
                                                Value pkts_per_sec; //type: uint32




                                        }; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType::StormControlUnit


                                            std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType::StormControlUnit> storm_control_unit;
                                            class StormControlEnum;


                                    }; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType> > bdpw_storm_control_type;


                                }; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes


                                class PseudowireProfile : public Entity
                                {
                                    public:
                                        PseudowireProfile();
                                        ~PseudowireProfile();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value profile_id; //type: InterfaceProfileEnum
                                        Value dhcp_snooping_id; //type: string


                                        class InterfaceProfileEnum;


                                }; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireProfile


                                class BdPwStaticMacAddresses : public Entity
                                {
                                    public:
                                        BdPwStaticMacAddresses();
                                        ~BdPwStaticMacAddresses();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                    class BdPwStaticMacAddress : public Entity
                                    {
                                        public:
                                            BdPwStaticMacAddress();
                                            ~BdPwStaticMacAddress();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value address; //type: string




                                    }; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses::BdPwStaticMacAddress


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses::BdPwStaticMacAddress> > bd_pw_static_mac_address;


                                }; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses


                                class PseudowireIpSourceGuard : public Entity
                                {
                                    public:
                                        PseudowireIpSourceGuard();
                                        ~PseudowireIpSourceGuard();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value logging; //type: L2VpnLoggingEnum
                                        Value disable; //type: empty
                                        Value enable; //type: empty


                                        class L2VpnLoggingEnum;


                                }; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireIpSourceGuard


                                class PseudowireMac : public Entity
                                {
                                    public:
                                        PseudowireMac();
                                        ~PseudowireMac();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value pseudowire_mac_port_down_flush; //type: PortDownFlushEnum
                                        Value enable; //type: empty
                                        Value pseudowire_mac_learning; //type: MacLearnEnum


                                    class PseudowireMacSecure : public Entity
                                    {
                                        public:
                                            PseudowireMacSecure();
                                            ~PseudowireMacSecure();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value logging; //type: L2VpnLoggingEnum
                                            Value disable; //type: empty
                                            Value action; //type: MacSecureActionEnum
                                            Value enable; //type: empty


                                            class MacSecureActionEnum;
                                            class L2VpnLoggingEnum;


                                    }; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacSecure


                                    class PseudowireMacAging : public Entity
                                    {
                                        public:
                                            PseudowireMacAging();
                                            ~PseudowireMacAging();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value pseudowire_mac_aging_type; //type: MacAgingEnum
                                            Value pseudowire_mac_aging_time; //type: uint32


                                            class MacAgingEnum;


                                    }; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacAging


                                    class PseudowireMacLimit : public Entity
                                    {
                                        public:
                                            PseudowireMacLimit();
                                            ~PseudowireMacLimit();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value pseudowire_mac_limit_action; //type: MacLimitActionEnum
                                            Value pseudowire_mac_limit_notif; //type: MacNotificationEnum
                                            Value pseudowire_mac_limit_max; //type: uint32


                                            class MacLimitActionEnum;
                                            class MacNotificationEnum;


                                    }; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacLimit


                                        std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacAging> pseudowire_mac_aging;
                                        std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacLimit> pseudowire_mac_limit;
                                        std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacSecure> pseudowire_mac_secure;
                                        class MacLearnEnum;
                                        class PortDownFlushEnum;


                                }; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac


                                class BdPwSplitHorizon : public Entity
                                {
                                    public:
                                        BdPwSplitHorizon();
                                        ~BdPwSplitHorizon();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                    class BdPwSplitHorizonGroup : public Entity
                                    {
                                        public:
                                            BdPwSplitHorizonGroup();
                                            ~BdPwSplitHorizonGroup();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value enable; //type: empty




                                    }; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon::BdPwSplitHorizonGroup


                                        std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon::BdPwSplitHorizonGroup> bd_pw_split_horizon_group;


                                }; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon


                                class BdPwMplsStaticLabels : public Entity
                                {
                                    public:
                                        BdPwMplsStaticLabels();
                                        ~BdPwMplsStaticLabels();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value local_static_label; //type: uint32
                                        Value remote_static_label; //type: uint32




                                }; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwMplsStaticLabels


                                class BridgeDomainBackupPseudowires : public Entity
                                {
                                    public:
                                        BridgeDomainBackupPseudowires();
                                        ~BridgeDomainBackupPseudowires();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                    class BridgeDomainBackupPseudowire : public Entity
                                    {
                                        public:
                                            BridgeDomainBackupPseudowire();
                                            ~BridgeDomainBackupPseudowire();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value neighbor; //type: string
                                            Value pseudowire_id; //type: uint32
                                            Value bridge_domain_backup_pw_class; //type: string




                                    }; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires::BridgeDomainBackupPseudowire


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires::BridgeDomainBackupPseudowire> > bridge_domain_backup_pseudowire;


                                }; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires


                                    std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwMplsStaticLabels> bd_pw_mpls_static_labels;
                                    std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon> bd_pw_split_horizon;
                                    std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses> bd_pw_static_mac_addresses;
                                    std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes> bdpw_storm_control_types;
                                    std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires> bridge_domain_backup_pseudowires;
                                    std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai> pseudowire_dai;
                                    std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireIpSourceGuard> pseudowire_ip_source_guard;
                                    std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac> pseudowire_mac;
                                    std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireProfile> pseudowire_profile;
                                    class InterfaceTrafficFloodEnum;
                                    class InterfaceTrafficFloodEnum;


                            }; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire


                                std::vector<std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire> > bd_pseudowire;


                        }; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires


                        class Vfis : public Entity
                        {
                            public:
                                Vfis();
                                ~Vfis();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class Vfi : public Entity
                            {
                                public:
                                    Vfi();
                                    ~Vfi();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value name; //type: string
                                    Value vfi_shutdown; //type: empty
                                    Value vpnid; //type: uint32


                                class MulticastP2Mp : public Entity
                                {
                                    public:
                                        MulticastP2Mp();
                                        ~MulticastP2Mp();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value enable; //type: empty


                                    class Transports : public Entity
                                    {
                                        public:
                                            Transports();
                                            ~Transports();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                        class Transport : public Entity
                                        {
                                            public:
                                                Transport();
                                                ~Transport();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value transport_name; //type: string
                                                Value attribute_set_name; //type: string




                                        }; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Transports::Transport


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Transports::Transport> > transport;


                                    }; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Transports


                                    class Signalings : public Entity
                                    {
                                        public:
                                            Signalings();
                                            ~Signalings();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                        class Signaling : public Entity
                                        {
                                            public:
                                                Signaling();
                                                ~Signaling();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value signaling_name; //type: string




                                        }; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Signalings::Signaling


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Signalings::Signaling> > signaling;


                                    }; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Signalings


                                        std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Signalings> signalings;
                                        std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Transports> transports;


                                }; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp


                                class VfiPseudowires : public Entity
                                {
                                    public:
                                        VfiPseudowires();
                                        ~VfiPseudowires();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                    class VfiPseudowire : public Entity
                                    {
                                        public:
                                            VfiPseudowire();
                                            ~VfiPseudowire();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value neighbor; //type: string
                                            Value pseudowire_id; //type: uint32
                                            Value vfi_pw_class; //type: string
                                            Value vfi_pw_igmp_snoop; //type: string
                                            Value vfi_pw_mld_snoop; //type: string


                                        class VfiPwDhcpSnoop : public Entity
                                        {
                                            public:
                                                VfiPwDhcpSnoop();
                                                ~VfiPwDhcpSnoop();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value profile_id; //type: InterfaceProfileEnum
                                                Value dhcp_snooping_id; //type: string


                                                class InterfaceProfileEnum;


                                        }; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwDhcpSnoop


                                        class VfiPwMplsStaticLabels : public Entity
                                        {
                                            public:
                                                VfiPwMplsStaticLabels();
                                                ~VfiPwMplsStaticLabels();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value local_static_label; //type: uint32
                                                Value remote_static_label; //type: uint32




                                        }; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwMplsStaticLabels


                                        class PseudowireStaticMacAddresses : public Entity
                                        {
                                            public:
                                                PseudowireStaticMacAddresses();
                                                ~PseudowireStaticMacAddresses();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                            class PseudowireStaticMacAddress : public Entity
                                            {
                                                public:
                                                    PseudowireStaticMacAddress();
                                                    ~PseudowireStaticMacAddress();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value address; //type: string




                                            }; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses::PseudowireStaticMacAddress


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses::PseudowireStaticMacAddress> > pseudowire_static_mac_address;


                                        }; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses


                                            std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses> pseudowire_static_mac_addresses;
                                            std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwDhcpSnoop> vfi_pw_dhcp_snoop;
                                            std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwMplsStaticLabels> vfi_pw_mpls_static_labels;


                                    }; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire> > vfi_pseudowire;


                                }; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires


                                class BgpAutoDiscovery : public Entity
                                {
                                    public:
                                        BgpAutoDiscovery();
                                        ~BgpAutoDiscovery();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value table_policy; //type: string
                                        Value ad_control_word; //type: empty
                                        Value enable; //type: empty


                                    class LdpSignalingProtocol : public Entity
                                    {
                                        public:
                                            LdpSignalingProtocol();
                                            ~LdpSignalingProtocol();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value enable; //type: empty


                                        class Vplsid : public Entity
                                        {
                                            public:
                                                Vplsid();
                                                ~Vplsid();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value type; //type: LdpVplsIdEnum
                                                Value as; //type: uint32
                                                Value as_index; //type: uint32
                                                Value address; //type: string
                                                Value address_index; //type: uint32


                                                class LdpVplsIdEnum;


                                        }; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::Vplsid


                                        class FlowLabelLoadBalance : public Entity
                                        {
                                            public:
                                                FlowLabelLoadBalance();
                                                ~FlowLabelLoadBalance();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value flow_label; //type: FlowLabelLoadBalanceEnum
                                                Value static_; //type: empty


                                                class FlowLabelLoadBalanceEnum;


                                        }; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::FlowLabelLoadBalance


                                            std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::FlowLabelLoadBalance> flow_label_load_balance;
                                            std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::Vplsid> vplsid;


                                    }; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol


                                    class BgpRoutePolicy : public Entity
                                    {
                                        public:
                                            BgpRoutePolicy();
                                            ~BgpRoutePolicy();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value export_; //type: string




                                    }; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpRoutePolicy


                                    class RouteDistinguisher : public Entity
                                    {
                                        public:
                                            RouteDistinguisher();
                                            ~RouteDistinguisher();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value type; //type: BgpRouteDistinguisherEnum
                                            Value as; //type: uint32
                                            Value as_index; //type: uint32
                                            Value address; //type: string
                                            Value addr_index; //type: uint32


                                            class BgpRouteDistinguisherEnum;


                                    }; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteDistinguisher


                                    class BgpSignalingProtocol : public Entity
                                    {
                                        public:
                                            BgpSignalingProtocol();
                                            ~BgpSignalingProtocol();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value ve_range; //type: uint32
                                            Value veid; //type: uint32
                                            Value enable; //type: empty


                                        class FlowLabelLoadBalance : public Entity
                                        {
                                            public:
                                                FlowLabelLoadBalance();
                                                ~FlowLabelLoadBalance();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value flow_label; //type: FlowLabelLoadBalanceEnum
                                                Value static_; //type: empty


                                                class FlowLabelLoadBalanceEnum;


                                        }; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol::FlowLabelLoadBalance


                                            std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol::FlowLabelLoadBalance> flow_label_load_balance;


                                    }; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol


                                    class RouteTargets : public Entity
                                    {
                                        public:
                                            RouteTargets();
                                            ~RouteTargets();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                        class RouteTarget : public Entity
                                        {
                                            public:
                                                RouteTarget();
                                                ~RouteTarget();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value role; //type: BgpRouteTargetRoleEnum
                                                Value format; //type: BgpRouteTargetFormatEnum


                                            class TwoByteAsOrFourByteAs : public Entity
                                            {
                                                public:
                                                    TwoByteAsOrFourByteAs();
                                                    ~TwoByteAsOrFourByteAs();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value as; //type: uint32
                                                    Value as_index; //type: uint32




                                            }; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::TwoByteAsOrFourByteAs


                                            class Ipv4Address : public Entity
                                            {
                                                public:
                                                    Ipv4Address();
                                                    ~Ipv4Address();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value address; //type: string
                                                    Value addr_index; //type: uint32




                                            }; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::Ipv4Address


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::Ipv4Address> > ipv4_address;
                                                std::vector<std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::TwoByteAsOrFourByteAs> > two_byte_as_or_four_byte_as;
                                                class BgpRouteTargetFormatEnum;
                                                class BgpRouteTargetRoleEnum;


                                        }; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget> > route_target;


                                    }; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets


                                        std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpRoutePolicy> bgp_route_policy;
                                        std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol> bgp_signaling_protocol;
                                        std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol> ldp_signaling_protocol;
                                        std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteDistinguisher> route_distinguisher;
                                        std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets> route_targets;


                                }; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery


                                    std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery> bgp_auto_discovery;
                                    std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp> multicast_p2mp;
                                    std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires> vfi_pseudowires;


                            }; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi


                                std::vector<std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi> > vfi;


                        }; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis


                        class BdAttachmentCircuits : public Entity
                        {
                            public:
                                BdAttachmentCircuits();
                                ~BdAttachmentCircuits();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class BdAttachmentCircuit : public Entity
                            {
                                public:
                                    BdAttachmentCircuit();
                                    ~BdAttachmentCircuit();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value name; //type: string
                                    Value interface_flooding; //type: InterfaceTrafficFloodEnum
                                    Value interface_igmp_snoop; //type: string
                                    Value interface_flooding_unknown_unicast; //type: InterfaceTrafficFloodEnum
                                    Value interface_mld_snoop; //type: string


                                class InterfaceIpSourceGuard : public Entity
                                {
                                    public:
                                        InterfaceIpSourceGuard();
                                        ~InterfaceIpSourceGuard();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value logging; //type: L2VpnLoggingEnum
                                        Value disable; //type: empty
                                        Value enable; //type: empty


                                        class L2VpnLoggingEnum;


                                }; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceIpSourceGuard


                                class InterfaceDai : public Entity
                                {
                                    public:
                                        InterfaceDai();
                                        ~InterfaceDai();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value logging; //type: L2VpnLoggingEnum
                                        Value disable; //type: empty
                                        Value enable; //type: empty


                                    class InterfaceDaiAddressValidation : public Entity
                                    {
                                        public:
                                            InterfaceDaiAddressValidation();
                                            ~InterfaceDaiAddressValidation();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value ipv4_verification; //type: L2VpnVerificationEnum
                                            Value destination_mac_verification; //type: L2VpnVerificationEnum
                                            Value source_mac_verification; //type: L2VpnVerificationEnum
                                            Value enable; //type: empty


                                            class L2VpnVerificationEnum;
                                            class L2VpnVerificationEnum;
                                            class L2VpnVerificationEnum;


                                    }; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai::InterfaceDaiAddressValidation


                                        std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai::InterfaceDaiAddressValidation> interface_dai_address_validation;
                                        class L2VpnLoggingEnum;


                                }; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai


                                class InterfaceProfile : public Entity
                                {
                                    public:
                                        InterfaceProfile();
                                        ~InterfaceProfile();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value profile_id; //type: InterfaceProfileEnum
                                        Value dhcp_snooping_id; //type: string


                                        class InterfaceProfileEnum;


                                }; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceProfile


                                class BdacStormControlTypes : public Entity
                                {
                                    public:
                                        BdacStormControlTypes();
                                        ~BdacStormControlTypes();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                    class BdacStormControlType : public Entity
                                    {
                                        public:
                                            BdacStormControlType();
                                            ~BdacStormControlType();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value sctype; //type: StormControlEnum


                                        class StormControlUnit : public Entity
                                        {
                                            public:
                                                StormControlUnit();
                                                ~StormControlUnit();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value kbits_per_sec; //type: uint32
                                                Value pkts_per_sec; //type: uint32




                                        }; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::BdacStormControlType::StormControlUnit


                                            std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::BdacStormControlType::StormControlUnit> storm_control_unit;
                                            class StormControlEnum;


                                    }; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::BdacStormControlType


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::BdacStormControlType> > bdac_storm_control_type;


                                }; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes


                                class SplitHorizon : public Entity
                                {
                                    public:
                                        SplitHorizon();
                                        ~SplitHorizon();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                    class SplitHorizonGroupId : public Entity
                                    {
                                        public:
                                            SplitHorizonGroupId();
                                            ~SplitHorizonGroupId();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value enable; //type: empty




                                    }; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::SplitHorizon::SplitHorizonGroupId


                                        std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::SplitHorizon::SplitHorizonGroupId> split_horizon_group_id;


                                }; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::SplitHorizon


                                class StaticMacAddresses : public Entity
                                {
                                    public:
                                        StaticMacAddresses();
                                        ~StaticMacAddresses();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                    class StaticMacAddress : public Entity
                                    {
                                        public:
                                            StaticMacAddress();
                                            ~StaticMacAddress();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value address; //type: string




                                    }; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::StaticMacAddresses::StaticMacAddress


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::StaticMacAddresses::StaticMacAddress> > static_mac_address;


                                }; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::StaticMacAddresses


                                class InterfaceMac : public Entity
                                {
                                    public:
                                        InterfaceMac();
                                        ~InterfaceMac();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value interface_mac_port_down_flush; //type: PortDownFlushEnum
                                        Value interface_mac_learning; //type: MacLearnEnum


                                    class InterfaceMacAging : public Entity
                                    {
                                        public:
                                            InterfaceMacAging();
                                            ~InterfaceMacAging();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value interface_mac_aging_time; //type: uint32
                                            Value interface_mac_aging_type; //type: MacAgingEnum


                                            class MacAgingEnum;


                                    }; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacAging


                                    class InterfaceMacSecure : public Entity
                                    {
                                        public:
                                            InterfaceMacSecure();
                                            ~InterfaceMacSecure();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value logging; //type: L2VpnLoggingEnum
                                            Value disable; //type: empty
                                            Value action; //type: MacSecureActionEnum
                                            Value enable; //type: empty


                                            class MacSecureActionEnum;
                                            class L2VpnLoggingEnum;


                                    }; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacSecure


                                    class InterfaceMacLimit : public Entity
                                    {
                                        public:
                                            InterfaceMacLimit();
                                            ~InterfaceMacLimit();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value interface_mac_limit_max; //type: uint32
                                            Value interface_mac_limit_notif; //type: MacNotificationEnum
                                            Value interface_mac_limit_action; //type: MacLimitActionEnum


                                            class MacLimitActionEnum;
                                            class MacNotificationEnum;


                                    }; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacLimit


                                        std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacAging> interface_mac_aging;
                                        std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacLimit> interface_mac_limit;
                                        std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacSecure> interface_mac_secure;
                                        class MacLearnEnum;
                                        class PortDownFlushEnum;


                                }; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac


                                    std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes> bdac_storm_control_types;
                                    std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai> interface_dai;
                                    std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceIpSourceGuard> interface_ip_source_guard;
                                    std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac> interface_mac;
                                    std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceProfile> interface_profile;
                                    std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::SplitHorizon> split_horizon;
                                    std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::StaticMacAddresses> static_mac_addresses;
                                    class InterfaceTrafficFloodEnum;
                                    class InterfaceTrafficFloodEnum;


                            }; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit


                                std::vector<std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit> > bd_attachment_circuit;


                        }; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits


                        class BdPseudowireEvpns : public Entity
                        {
                            public:
                                BdPseudowireEvpns();
                                ~BdPseudowireEvpns();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class BdPseudowireEvpn : public Entity
                            {
                                public:
                                    BdPseudowireEvpn();
                                    ~BdPseudowireEvpn();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value eviid; //type: uint32
                                    Value acid; //type: uint32




                            }; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowireEvpns::BdPseudowireEvpn


                                std::vector<std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowireEvpns::BdPseudowireEvpn> > bd_pseudowire_evpn;


                        }; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowireEvpns


                        class IpSourceGuard : public Entity
                        {
                            public:
                                IpSourceGuard();
                                ~IpSourceGuard();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value logging; //type: empty
                                Value enable; //type: empty




                        }; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::IpSourceGuard


                        class Dai : public Entity
                        {
                            public:
                                Dai();
                                ~Dai();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value logging; //type: empty
                                Value enable; //type: empty


                            class DaiAddressValidation : public Entity
                            {
                                public:
                                    DaiAddressValidation();
                                    ~DaiAddressValidation();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value ipv4_verification; //type: empty
                                    Value destination_mac_verification; //type: empty
                                    Value source_mac_verification; //type: empty
                                    Value enable; //type: empty




                            }; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Dai::DaiAddressValidation


                                std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Dai::DaiAddressValidation> dai_address_validation;


                        }; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Dai


                        class RoutedInterfaces : public Entity
                        {
                            public:
                                RoutedInterfaces();
                                ~RoutedInterfaces();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class RoutedInterface : public Entity
                            {
                                public:
                                    RoutedInterface();
                                    ~RoutedInterface();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value interface_name; //type: string




                            }; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::RoutedInterface


                                std::vector<std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::RoutedInterface> > routed_interface;


                        }; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces


                            std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits> bd_attachment_circuits;
                            std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowireEvpns> bd_pseudowire_evpns;
                            std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires> bd_pseudowires;
                            std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls> bd_storm_controls;
                            std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainEvis> bridge_domain_evis;
                            std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac> bridge_domain_mac;
                            std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb> bridge_domain_pbb;
                            std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Dai> dai;
                            std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::IpSourceGuard> ip_source_guard;
                            std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis> member_vnis;
                            std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::NvSatellite> nv_satellite;
                            std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces> routed_interfaces;
                            std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis> vfis;
                            class BridgeDomainTransportModeEnum;


                    }; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain


                        std::vector<std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain> > bridge_domain;


                }; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains


                    std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains> bridge_domains;


            }; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup


                std::vector<std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup> > bridge_domain_group;


        }; // L2Vpn::Database::BridgeDomainGroups


        class PseudowireClasses : public Entity
        {
            public:
                PseudowireClasses();
                ~PseudowireClasses();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class PseudowireClass : public Entity
            {
                public:
                    PseudowireClass();
                    ~PseudowireClass();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value name; //type: string
                    Value mac_withdraw; //type: empty
                    Value enable; //type: empty


                class L2Tpv3Encapsulation : public Entity
                {
                    public:
                        L2Tpv3Encapsulation();
                        ~L2Tpv3Encapsulation();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value df_bit_set; //type: empty
                        Value cookie_size; //type: L2TpCookieSizeEnum
                        Value source_address; //type: string
                        Value transport_mode; //type: TransportModeEnum
                        Value enable; //type: empty
                        Value time_to_live; //type: uint32


                    class Sequencing : public Entity
                    {
                        public:
                            Sequencing();
                            ~Sequencing();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value sequencing; //type: L2Tpv3SequencingEnum
                            Value resync_threshold; //type: uint32


                            class L2Tpv3SequencingEnum;


                    }; // L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::Sequencing


                    class TypeOfService : public Entity
                    {
                        public:
                            TypeOfService();
                            ~TypeOfService();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value type_of_service_value; //type: uint32
                            Value type_of_service_mode; //type: TypeOfServiceModeEnum


                            class TypeOfServiceModeEnum;


                    }; // L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::TypeOfService


                    class SignalingProtocol : public Entity
                    {
                        public:
                            SignalingProtocol();
                            ~SignalingProtocol();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value protocol; //type: L2TpSignalingProtocolEnum
                            Value l2tpv3_class_name; //type: string


                            class L2TpSignalingProtocolEnum;


                    }; // L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::SignalingProtocol


                    class PathMtu : public Entity
                    {
                        public:
                            PathMtu();
                            ~PathMtu();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value enable; //type: empty
                            Value max_path_mtu; //type: uint32




                    }; // L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::PathMtu


                        std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::PathMtu> path_mtu;
                        std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::Sequencing> sequencing;
                        std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::SignalingProtocol> signaling_protocol;
                        std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::TypeOfService> type_of_service;
                        class L2TpCookieSizeEnum;
                        class TransportModeEnum;


                }; // L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation


                class BackupDisableDelay : public Entity
                {
                    public:
                        BackupDisableDelay();
                        ~BackupDisableDelay();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value type; //type: BackupDisableEnum
                        Value disable_backup; //type: uint32


                        class BackupDisableEnum;


                }; // L2Vpn::Database::PseudowireClasses::PseudowireClass::BackupDisableDelay


                class MplsEncapsulation : public Entity
                {
                    public:
                        MplsEncapsulation();
                        ~MplsEncapsulation();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value pw_switching_tlv; //type: PwSwitchingPointTlvEnum
                        Value static_tag_rewrite; //type: uint32
                        Value signaling_protocol; //type: MplsSignalingProtocolEnum
                        Value vccv_type; //type: VccvVerificationEnum
                        Value source_address; //type: string
                        Value transport_mode; //type: TransportModeEnum
                        Value enable; //type: empty
                        Value control_word; //type: ControlWordEnum


                    class Sequencing : public Entity
                    {
                        public:
                            Sequencing();
                            ~Sequencing();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value sequencing; //type: MplsSequencingEnum
                            Value resync_threshold; //type: uint32


                            class MplsSequencingEnum;


                    }; // L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::Sequencing


                    class MplsRedundancy : public Entity
                    {
                        public:
                            MplsRedundancy();
                            ~MplsRedundancy();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value redundancy_one_way; //type: empty
                            Value redundancy_initial_delay; //type: uint32




                    }; // L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::MplsRedundancy


                    class PreferredPath : public Entity
                    {
                        public:
                            PreferredPath();
                            ~PreferredPath();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value type; //type: PreferredPathEnum
                            Value interface_tunnel_number; //type: uint32
                            Value fallback_disable; //type: empty


                            class PreferredPathEnum;


                    }; // L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::PreferredPath


                    class LoadBalanceGroup : public Entity
                    {
                        public:
                            LoadBalanceGroup();
                            ~LoadBalanceGroup();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value flow_label_load_balance_code; //type: FlowLabelTlvCodeEnum
                            Value pw_label_load_balance; //type: LoadBalanceEnum


                        class FlowLabelLoadBalance : public Entity
                        {
                            public:
                                FlowLabelLoadBalance();
                                ~FlowLabelLoadBalance();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value flow_label; //type: FlowLabelLoadBalanceEnum
                                Value static_; //type: empty


                                class FlowLabelLoadBalanceEnum;


                        }; // L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::LoadBalanceGroup::FlowLabelLoadBalance


                            std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::LoadBalanceGroup::FlowLabelLoadBalance> flow_label_load_balance;
                            class FlowLabelTlvCodeEnum;
                            class LoadBalanceEnum;


                    }; // L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::LoadBalanceGroup


                        std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::LoadBalanceGroup> load_balance_group;
                        std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::MplsRedundancy> mpls_redundancy;
                        std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::PreferredPath> preferred_path;
                        std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::Sequencing> sequencing;
                        class ControlWordEnum;
                        class PwSwitchingPointTlvEnum;
                        class MplsSignalingProtocolEnum;
                        class TransportModeEnum;
                        class VccvVerificationEnum;


                }; // L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation


                    std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::PseudowireClasses::PseudowireClass::BackupDisableDelay> backup_disable_delay;
                    std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation> l2tpv3_encapsulation;
                    std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation> mpls_encapsulation;


            }; // L2Vpn::Database::PseudowireClasses::PseudowireClass


                std::vector<std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::PseudowireClasses::PseudowireClass> > pseudowire_class;


        }; // L2Vpn::Database::PseudowireClasses


        class FlexibleXconnectServiceTable : public Entity
        {
            public:
                FlexibleXconnectServiceTable();
                ~FlexibleXconnectServiceTable();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class VlanUnawareFlexibleXconnectServices : public Entity
            {
                public:
                    VlanUnawareFlexibleXconnectServices();
                    ~VlanUnawareFlexibleXconnectServices();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class VlanUnawareFlexibleXconnectService : public Entity
                {
                    public:
                        VlanUnawareFlexibleXconnectService();
                        ~VlanUnawareFlexibleXconnectService();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value name; //type: string


                    class VlanUnawareFxcAttachmentCircuits : public Entity
                    {
                        public:
                            VlanUnawareFxcAttachmentCircuits();
                            ~VlanUnawareFxcAttachmentCircuits();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class VlanUnawareFxcAttachmentCircuit : public Entity
                        {
                            public:
                                VlanUnawareFxcAttachmentCircuit();
                                ~VlanUnawareFxcAttachmentCircuit();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value name; //type: string




                        }; // L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcAttachmentCircuits::VlanUnawareFxcAttachmentCircuit


                            std::vector<std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcAttachmentCircuits::VlanUnawareFxcAttachmentCircuit> > vlan_unaware_fxc_attachment_circuit;


                    }; // L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcAttachmentCircuits


                    class VlanUnawareFxcPseudowireEvpns : public Entity
                    {
                        public:
                            VlanUnawareFxcPseudowireEvpns();
                            ~VlanUnawareFxcPseudowireEvpns();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class VlanUnawareFxcPseudowireEvpn : public Entity
                        {
                            public:
                                VlanUnawareFxcPseudowireEvpn();
                                ~VlanUnawareFxcPseudowireEvpn();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value eviid; //type: uint32
                                Value acid; //type: uint32




                        }; // L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcPseudowireEvpns::VlanUnawareFxcPseudowireEvpn


                            std::vector<std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcPseudowireEvpns::VlanUnawareFxcPseudowireEvpn> > vlan_unaware_fxc_pseudowire_evpn;


                    }; // L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcPseudowireEvpns


                        std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcAttachmentCircuits> vlan_unaware_fxc_attachment_circuits;
                        std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcPseudowireEvpns> vlan_unaware_fxc_pseudowire_evpns;


                }; // L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService


                    std::vector<std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService> > vlan_unaware_flexible_xconnect_service;


            }; // L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices


                std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices> vlan_unaware_flexible_xconnect_services;


        }; // L2Vpn::Database::FlexibleXconnectServiceTable


        class Redundancy : public Entity
        {
            public:
                Redundancy();
                ~Redundancy();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value enable; //type: empty


            class IccpRedundancyGroups : public Entity
            {
                public:
                    IccpRedundancyGroups();
                    ~IccpRedundancyGroups();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class IccpRedundancyGroup : public Entity
                {
                    public:
                        IccpRedundancyGroup();
                        ~IccpRedundancyGroup();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value group_id; //type: int32
                        Value multi_homing_node_id; //type: uint32


                    class IccpInterfaces : public Entity
                    {
                        public:
                            IccpInterfaces();
                            ~IccpInterfaces();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class IccpInterface : public Entity
                        {
                            public:
                                IccpInterface();
                                ~IccpInterface();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value interface_name; //type: string
                                Value secondary_vlan_range; //type: string
                                Value recovery_delay; //type: uint32
                                Value primary_vlan_range; //type: string
                                Value mac_flush_tcn; //type: empty




                        }; // L2Vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::IccpInterfaces::IccpInterface


                            std::vector<std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::IccpInterfaces::IccpInterface> > iccp_interface;


                    }; // L2Vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::IccpInterfaces


                        std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::IccpInterfaces> iccp_interfaces;


                }; // L2Vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup


                    std::vector<std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup> > iccp_redundancy_group;


            }; // L2Vpn::Database::Redundancy::IccpRedundancyGroups


                std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::Redundancy::IccpRedundancyGroups> iccp_redundancy_groups;


        }; // L2Vpn::Database::Redundancy


            std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups> bridge_domain_groups;
            std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::FlexibleXconnectServiceTable> flexible_xconnect_service_table;
            std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::G8032Rings> g8032_rings;
            std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::PseudowireClasses> pseudowire_classes;
            std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::Redundancy> redundancy;
            std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups> xconnect_groups;


    }; // L2Vpn::Database


    class Pbb : public Entity
    {
        public:
            Pbb();
            ~Pbb();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;
            Value backbone_source_mac; //type: string




    }; // L2Vpn::Pbb


    class AutoDiscovery : public Entity
    {
        public:
            AutoDiscovery();
            ~AutoDiscovery();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class BgpSignaling : public Entity
        {
            public:
                BgpSignaling();
                ~BgpSignaling();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value mtu_mismatch_ignore; //type: empty




        }; // L2Vpn::AutoDiscovery::BgpSignaling


            std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::AutoDiscovery::BgpSignaling> bgp_signaling;


    }; // L2Vpn::AutoDiscovery


    class Utility : public Entity
    {
        public:
            Utility();
            ~Utility();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class Logging : public Entity
        {
            public:
                Logging();
                ~Logging();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value bridge_domain_state_change; //type: empty
                Value pseudowire_state_change; //type: empty
                Value vfi; //type: empty
                Value nsr_state_change; //type: empty
                Value pwhe_replication_state_change; //type: empty




        }; // L2Vpn::Utility::Logging


            std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Utility::Logging> logging;


    }; // L2Vpn::Utility


    class Snmp : public Entity
    {
        public:
            Snmp();
            ~Snmp();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class Mib : public Entity
        {
            public:
                Mib();
                ~Mib();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class MibInterface : public Entity
            {
                public:
                    MibInterface();
                    ~MibInterface();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class Format : public Entity
                {
                    public:
                        Format();
                        ~Format();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value external_interface_format; //type: empty




                }; // L2Vpn::Snmp::Mib::MibInterface::Format


                    std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Snmp::Mib::MibInterface::Format> format;


            }; // L2Vpn::Snmp::Mib::MibInterface


            class MibPseudowire : public Entity
            {
                public:
                    MibPseudowire();
                    ~MibPseudowire();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value statistics; //type: empty




            }; // L2Vpn::Snmp::Mib::MibPseudowire


                std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Snmp::Mib::MibInterface> mib_interface;
                std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Snmp::Mib::MibPseudowire> mib_pseudowire;


        }; // L2Vpn::Snmp::Mib


            std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Snmp::Mib> mib;


    }; // L2Vpn::Snmp


        std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::AutoDiscovery> auto_discovery;
        std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database> database;
        std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Neighbor> neighbor;
        std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Pbb> pbb;
        std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::PwRouting> pw_routing;
        std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Snmp> snmp;
        std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Utility> utility;
        class L2VpnCapabilityModeEnum;
        class LoadBalanceEnum;


}; // L2Vpn

class GenericInterfaceLists : public Entity
{
    public:
        GenericInterfaceLists();
        ~GenericInterfaceLists();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


    class GenericInterface : public Entity
    {
        public:
            GenericInterface();
            ~GenericInterface();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;
            Value generic_interface_list_name; //type: string
            Value enable; //type: empty


        class Interfaces : public Entity
        {
            public:
                Interfaces();
                ~Interfaces();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class Interface : public Entity
            {
                public:
                    Interface();
                    ~Interface();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value interface_name; //type: string
                    Value enable; //type: empty




            }; // GenericInterfaceLists::GenericInterface::Interfaces::Interface


                std::vector<std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::GenericInterfaceLists::GenericInterface::Interfaces::Interface> > interface;


        }; // GenericInterfaceLists::GenericInterface::Interfaces


            std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::GenericInterfaceLists::GenericInterface::Interfaces> interfaces;


    }; // GenericInterfaceLists::GenericInterface


        std::vector<std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::GenericInterfaceLists::GenericInterface> > generic_interface;


}; // GenericInterfaceLists

class Evpn : public Entity
{
    public:
        Evpn();
        ~Evpn();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;
        Value enable; //type: empty


    class EvpnTables : public Entity
    {
        public:
            EvpnTables();
            ~EvpnTables();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class EvpnTimers : public Entity
        {
            public:
                EvpnTimers();
                ~EvpnTimers();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value evpn_recovery; //type: uint32
                Value enable; //type: empty
                Value evpn_peering; //type: uint32




        }; // Evpn::EvpnTables::EvpnTimers


        class Evpnevis : public Entity
        {
            public:
                Evpnevis();
                ~Evpnevis();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class Evpnevi : public Entity
            {
                public:
                    Evpnevi();
                    ~Evpnevi();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value eviid; //type: uint32
                    Value evpnevi_description; //type: string
                    Value evpn_evi_cw_disable; //type: empty


                class EviLoadBalancing : public Entity
                {
                    public:
                        EviLoadBalancing();
                        ~EviLoadBalancing();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value evi_flow_label; //type: empty
                        Value enable; //type: empty




                }; // Evpn::EvpnTables::Evpnevis::Evpnevi::EviLoadBalancing


                class EvpnevibgpAutoDiscovery : public Entity
                {
                    public:
                        EvpnevibgpAutoDiscovery();
                        ~EvpnevibgpAutoDiscovery();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value table_policy; //type: string
                        Value enable; //type: empty


                    class EvpnRouteTargets : public Entity
                    {
                        public:
                            EvpnRouteTargets();
                            ~EvpnRouteTargets();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class EvpnRouteTarget : public Entity
                        {
                            public:
                                EvpnRouteTarget();
                                ~EvpnRouteTarget();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value stitching; //type: BgpRouteTargetEnum
                                Value role; //type: BgpRouteTargetRoleEnum
                                Value format; //type: BgpRouteTargetFormatEnum


                            class TwoByteAsOrFourByteAs : public Entity
                            {
                                public:
                                    TwoByteAsOrFourByteAs();
                                    ~TwoByteAsOrFourByteAs();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value as; //type: uint32
                                    Value as_index; //type: uint32




                            }; // Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevibgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTarget::TwoByteAsOrFourByteAs


                            class Ipv4Address : public Entity
                            {
                                public:
                                    Ipv4Address();
                                    ~Ipv4Address();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value address; //type: string
                                    Value addr_index; //type: uint32




                            }; // Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevibgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTarget::Ipv4Address


                                std::vector<std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevibgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTarget::Ipv4Address> > ipv4_address;
                                std::vector<std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevibgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTarget::TwoByteAsOrFourByteAs> > two_byte_as_or_four_byte_as;
                                class BgpRouteTargetFormatEnum;
                                class BgpRouteTargetRoleEnum;
                                class BgpRouteTargetEnum;


                        }; // Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevibgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTarget


                            std::vector<std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevibgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTarget> > evpn_route_target;


                    }; // Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevibgpAutoDiscovery::EvpnRouteTargets


                    class EvpnRouteDistinguisher : public Entity
                    {
                        public:
                            EvpnRouteDistinguisher();
                            ~EvpnRouteDistinguisher();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value type; //type: BgpRouteDistinguisherEnum
                            Value as; //type: uint32
                            Value as_index; //type: uint32
                            Value address; //type: string
                            Value addr_index; //type: uint32


                            class BgpRouteDistinguisherEnum;


                    }; // Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevibgpAutoDiscovery::EvpnRouteDistinguisher


                        std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevibgpAutoDiscovery::EvpnRouteDistinguisher> evpn_route_distinguisher;
                        std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevibgpAutoDiscovery::EvpnRouteTargets> evpn_route_targets;


                }; // Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevibgpAutoDiscovery


                    std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::Evpnevis::Evpnevi::EviLoadBalancing> evi_load_balancing;
                    std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevibgpAutoDiscovery> evpnevibgp_auto_discovery;


            }; // Evpn::EvpnTables::Evpnevis::Evpnevi


                std::vector<std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::Evpnevis::Evpnevi> > evpnevi;


        }; // Evpn::EvpnTables::Evpnevis


        class EvpnLoadBalancing : public Entity
        {
            public:
                EvpnLoadBalancing();
                ~EvpnLoadBalancing();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value evpn_flow_label; //type: empty
                Value enable; //type: empty




        }; // Evpn::EvpnTables::EvpnLoadBalancing


        class EvpnbgpAutoDiscovery : public Entity
        {
            public:
                EvpnbgpAutoDiscovery();
                ~EvpnbgpAutoDiscovery();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value enable; //type: empty


            class EvpnRouteDistinguisher : public Entity
            {
                public:
                    EvpnRouteDistinguisher();
                    ~EvpnRouteDistinguisher();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value type; //type: BgpRouteDistinguisherEnum
                    Value as; //type: uint32
                    Value as_index; //type: uint32
                    Value address; //type: string
                    Value addr_index; //type: uint32


                    class BgpRouteDistinguisherEnum;


            }; // Evpn::EvpnTables::EvpnbgpAutoDiscovery::EvpnRouteDistinguisher


                std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnbgpAutoDiscovery::EvpnRouteDistinguisher> evpn_route_distinguisher;


        }; // Evpn::EvpnTables::EvpnbgpAutoDiscovery


        class EvpnInterfaces : public Entity
        {
            public:
                EvpnInterfaces();
                ~EvpnInterfaces();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class EvpnInterface : public Entity
            {
                public:
                    EvpnInterface();
                    ~EvpnInterface();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value interface_name; //type: string
                    Value mac_flush; //type: empty


                class EvpnacTimers : public Entity
                {
                    public:
                        EvpnacTimers();
                        ~EvpnacTimers();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value evpnac_peering; //type: uint32
                        Value enable; //type: empty
                        Value evpnac_recovery; //type: uint32




                }; // Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EvpnacTimers


                class EthernetSegment : public Entity
                {
                    public:
                        EthernetSegment();
                        ~EthernetSegment();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value force_single_homed; //type: empty
                        Value load_balancing_per_service; //type: empty
                        Value es_import_route_target; //type: string
                        Value enable; //type: empty
                        Value backbone_source_mac; //type: string


                    class IdentifierType0 : public Entity
                    {
                        public:
                            IdentifierType0();
                            ~IdentifierType0();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value bytes1; //type: string
                            Value bytes23; //type: string
                            Value bytes45; //type: string
                            Value bytes67; //type: string
                            Value bytes89; //type: string




                    }; // Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::IdentifierType0


                    class ManualServiceCarving : public Entity
                    {
                        public:
                            ManualServiceCarving();
                            ~ManualServiceCarving();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value enable; //type: empty


                        class ServiceList : public Entity
                        {
                            public:
                                ServiceList();
                                ~ServiceList();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value primary; //type: string
                                Value secondary; //type: string




                        }; // Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::ManualServiceCarving::ServiceList


                            std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::ManualServiceCarving::ServiceList> service_list;


                    }; // Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::ManualServiceCarving


                        std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::IdentifierType0> identifier_type0;
                        std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::ManualServiceCarving> manual_service_carving;


                }; // Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment


                    std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment> ethernet_segment;
                    std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EvpnacTimers> evpnac_timers;


            }; // Evpn::EvpnTables::EvpnInterfaces::EvpnInterface


                std::vector<std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnInterfaces::EvpnInterface> > evpn_interface;


        }; // Evpn::EvpnTables::EvpnInterfaces


            std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnInterfaces> evpn_interfaces;
            std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnLoadBalancing> evpn_load_balancing;
            std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnTimers> evpn_timers;
            std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnbgpAutoDiscovery> evpnbgp_auto_discovery;
            std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::Evpnevis> evpnevis;


    }; // Evpn::EvpnTables


        std::unique_ptr<Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables> evpn_tables;


}; // Evpn


class FlowLabelTlvCodeEnum : public Enum
{
    public:
        static const Enum::Value Y_17;
        static const Enum::Value disable;

};

class BackupDisableEnum : public Enum
{
    public:
        static const Enum::Value never;
        static const Enum::Value delay;

};

class BgpRouteTargetFormatEnum : public Enum
{
    public:
        static const Enum::Value none;
        static const Enum::Value two_byte_as;
        static const Enum::Value four_byte_as;
        static const Enum::Value ipv4_address;

};

class LoadBalanceEnum : public Enum
{
    public:
        static const Enum::Value source_dest_mac;
        static const Enum::Value source_dest_ip;
        static const Enum::Value pseudowire_label;

};

class InterworkingEnum : public Enum
{
    public:
        static const Enum::Value ethernet;
        static const Enum::Value ipv4;

};

class PwSwitchingPointTlvEnum : public Enum
{
    public:
        static const Enum::Value hide;

};

class MacAgingEnum : public Enum
{
    public:
        static const Enum::Value absolute;
        static const Enum::Value inactivity;

};

class L2Tpv3SequencingEnum : public Enum
{
    public:
        static const Enum::Value off;
        static const Enum::Value both;

};

class ErpPort1Enum : public Enum
{
    public:
        static const Enum::Value port0;
        static const Enum::Value port1;

};

class InterfaceProfileEnum : public Enum
{
    public:
        static const Enum::Value snoop;
        static const Enum::Value dhcp_protocol;

};

class L2EncapsulationEnum : public Enum
{
    public:
        static const Enum::Value vlan;
        static const Enum::Value ethernet;

};

class InterfaceTrafficFloodEnum : public Enum
{
    public:
        static const Enum::Value traffic_flooding;
        static const Enum::Value enable_flooding;
        static const Enum::Value disable_flooding;

};

class L2VpnLoggingEnum : public Enum
{
    public:
        static const Enum::Value enable;
        static const Enum::Value disable;

};

class BgpRouteTargetRoleEnum : public Enum
{
    public:
        static const Enum::Value both;
        static const Enum::Value import;
        static const Enum::Value export_;

};

class ErpPortEnum : public Enum
{
    public:
        static const Enum::Value none;
        static const Enum::Value virtual_;
        static const Enum::Value interface;

};

class MacWithdrawBehaviorEnum : public Enum
{
    public:
        static const Enum::Value legacy;
        static const Enum::Value optimized;

};

class L2TpCookieSizeEnum : public Enum
{
    public:
        static const Enum::Value zero;
        static const Enum::Value four;
        static const Enum::Value eight;

};

class StormControlEnum : public Enum
{
    public:
        static const Enum::Value unicast;
        static const Enum::Value multicast;
        static const Enum::Value broadcast;

};

class L2TpSignalingProtocolEnum : public Enum
{
    public:
        static const Enum::Value none;
        static const Enum::Value l2tpv3;

};

class RplRoleEnum : public Enum
{
    public:
        static const Enum::Value owner;
        static const Enum::Value neighbor;
        static const Enum::Value next_neighbor;

};

class MacLimitActionEnum : public Enum
{
    public:
        static const Enum::Value none;
        static const Enum::Value flood;
        static const Enum::Value no_flood;
        static const Enum::Value shutdown;

};

class TypeOfServiceModeEnum : public Enum
{
    public:
        static const Enum::Value none;
        static const Enum::Value reflect;

};

class MacNotificationEnum : public Enum
{
    public:
        static const Enum::Value no_notif;
        static const Enum::Value syslog;
        static const Enum::Value trap;
        static const Enum::Value syslog_snmp;

};

class L2VpnVerificationEnum : public Enum
{
    public:
        static const Enum::Value enable;
        static const Enum::Value disable;

};

class LdpVplsIdEnum : public Enum
{
    public:
        static const Enum::Value two_byte_as;
        static const Enum::Value ipv4_address;

};

class MacLearnEnum : public Enum
{
    public:
        static const Enum::Value default_learning;
        static const Enum::Value enable_learning;
        static const Enum::Value disable_learning;

};

class PortDownFlushEnum : public Enum
{
    public:
        static const Enum::Value port_down_flush;
        static const Enum::Value enable_port_down_flush;
        static const Enum::Value disable_port_down_flush;

};

class L2VpnCapabilityModeEnum : public Enum
{
    public:
        static const Enum::Value high_mode;
        static const Enum::Value single_mode;

};

class MplsSignalingProtocolEnum : public Enum
{
    public:
        static const Enum::Value none;
        static const Enum::Value ldp;

};

class BgpRouteTargetEnum : public Enum
{
    public:
        static const Enum::Value no_stitching;
        static const Enum::Value stitching;

};

class ControlWordEnum : public Enum
{
    public:
        static const Enum::Value enable;
        static const Enum::Value disable;

};

class PreferredPathEnum : public Enum
{
    public:
        static const Enum::Value te_tunnel;
        static const Enum::Value ip_tunnel;
        static const Enum::Value tp_tunnel;

};

class BridgeDomainTransportModeEnum : public Enum
{
    public:
        static const Enum::Value vlan_passthrough;

};

class FlowLabelLoadBalanceEnum : public Enum
{
    public:
        static const Enum::Value off;
        static const Enum::Value receive;
        static const Enum::Value transmit;
        static const Enum::Value both;

};

class BgpRouteDistinguisherEnum : public Enum
{
    public:
        static const Enum::Value auto_;
        static const Enum::Value two_byte_as;
        static const Enum::Value four_byte_as;
        static const Enum::Value ipv4_address;

};

class ErpapsEnum : public Enum
{
    public:
        static const Enum::Value interface;
        static const Enum::Value bridge_domain;
        static const Enum::Value xconnect;
        static const Enum::Value none;

};

class VccvVerificationEnum : public Enum
{
    public:
        static const Enum::Value none;
        static const Enum::Value lsp_ping;

};

class TransportModeEnum : public Enum
{
    public:
        static const Enum::Value ethernet;
        static const Enum::Value vlan;
        static const Enum::Value vlan_passthrough;

};

class MplsSequencingEnum : public Enum
{
    public:
        static const Enum::Value off;
        static const Enum::Value transmit;
        static const Enum::Value receive;
        static const Enum::Value both;

};

class MacSecureActionEnum : public Enum
{
    public:
        static const Enum::Value restrict;
        static const Enum::Value none;
        static const Enum::Value shutdown;

};


}
}

#endif /* _CISCO_IOS_XR_L2VPN_CFG_ */

