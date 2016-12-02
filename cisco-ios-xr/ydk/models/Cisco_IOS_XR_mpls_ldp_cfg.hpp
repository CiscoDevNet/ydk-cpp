#ifndef _CISCO_IOS_XR_MPLS_LDP_CFG_
#define _CISCO_IOS_XR_MPLS_LDP_CFG_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_mpls_ldp_cfg {

class MplsLdp : public Entity
{
    public:
        MplsLdp();
        ~MplsLdp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;
        Value enable; //type: empty


    class DefaultVrf : public Entity
    {
        public:
            DefaultVrf();
            ~DefaultVrf();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class Afs : public Entity
        {
            public:
                Afs();
                ~Afs();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class Af : public Entity
            {
                public:
                    Af();
                    ~Af();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value af_name; //type: MplsLdpafNameEnum
                    Value enable; //type: empty


                class Label : public Entity
                {
                    public:
                        Label();
                        ~Label();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class Remote : public Entity
                    {
                        public:
                            Remote();
                            ~Remote();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class Accept : public Entity
                        {
                            public:
                                Accept();
                                ~Accept();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class PeerAcceptPolicies : public Entity
                            {
                                public:
                                    PeerAcceptPolicies();
                                    ~PeerAcceptPolicies();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class PeerAcceptPolicy : public Entity
                                {
                                    public:
                                        PeerAcceptPolicy();
                                        ~PeerAcceptPolicy();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value lsr_id; //type: string
                                        Value label_space_id; //type: uint32
                                        Value prefix_acl_name; //type: string




                                }; // MplsLdp::DefaultVrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::DefaultVrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy> > peer_accept_policy;


                            }; // MplsLdp::DefaultVrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies


                                std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::DefaultVrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies> peer_accept_policies;


                        }; // MplsLdp::DefaultVrf::Afs::Af::Label::Remote::Accept


                            std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::DefaultVrf::Afs::Af::Label::Remote::Accept> accept;


                    }; // MplsLdp::DefaultVrf::Afs::Af::Label::Remote


                    class Local : public Entity
                    {
                        public:
                            Local();
                            ~Local();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value implicit_null_override; //type: string
                            Value default_route; //type: empty


                        class Advertise : public Entity
                        {
                            public:
                                Advertise();
                                ~Advertise();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value disable; //type: empty


                            class PeerAdvertisePolicies : public Entity
                            {
                                public:
                                    PeerAdvertisePolicies();
                                    ~PeerAdvertisePolicies();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class PeerAdvertisePolicy : public Entity
                                {
                                    public:
                                        PeerAdvertisePolicy();
                                        ~PeerAdvertisePolicy();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value lsr_id; //type: string
                                        Value label_space_id; //type: uint32
                                        Value prefix_acl_name; //type: string




                                }; // MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy> > peer_advertise_policy;


                            }; // MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies


                            class PrefixAdvertisePolicies : public Entity
                            {
                                public:
                                    PrefixAdvertisePolicies();
                                    ~PrefixAdvertisePolicies();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class PrefixAdvertisePolicy : public Entity
                                {
                                    public:
                                        PrefixAdvertisePolicy();
                                        ~PrefixAdvertisePolicy();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value prefix_acl_name; //type: string
                                        Value advertise_type; //type: MplsLdpLabelAdvertiseEnum
                                        Value peer_acl_name; //type: string


                                        class MplsLdpLabelAdvertiseEnum;


                                }; // MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PrefixAdvertisePolicies::PrefixAdvertisePolicy


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PrefixAdvertisePolicies::PrefixAdvertisePolicy> > prefix_advertise_policy;


                            }; // MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PrefixAdvertisePolicies


                            class ExplicitNull : public Entity
                            {
                                public:
                                    ExplicitNull();
                                    ~ExplicitNull();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value explicit_null_type; //type: MplsLdpExpNullEnum
                                    Value prefix_acl_name; //type: string
                                    Value peer_acl_name; //type: string


                                    class MplsLdpExpNullEnum;


                            }; // MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::ExplicitNull


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




                                }; // MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::Interfaces::Interface


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::Interfaces::Interface> > interface;


                            }; // MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::Interfaces


                                std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::ExplicitNull> explicit_null;
                                std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::Interfaces> interfaces;
                                std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies> peer_advertise_policies;
                                std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PrefixAdvertisePolicies> prefix_advertise_policies;


                        }; // MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise


                        class Allocate : public Entity
                        {
                            public:
                                Allocate();
                                ~Allocate();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value allocation_type; //type: MplsLdpLabelAllocationEnum
                                Value prefix_acl_name; //type: string


                                class MplsLdpLabelAllocationEnum;


                        }; // MplsLdp::DefaultVrf::Afs::Af::Label::Local::Allocate


                            std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise> advertise;
                            std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::DefaultVrf::Afs::Af::Label::Local::Allocate> allocate;


                    }; // MplsLdp::DefaultVrf::Afs::Af::Label::Local


                        std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::DefaultVrf::Afs::Af::Label::Local> local;
                        std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::DefaultVrf::Afs::Af::Label::Remote> remote;


                }; // MplsLdp::DefaultVrf::Afs::Af::Label


                class Discovery : public Entity
                {
                    public:
                        Discovery();
                        ~Discovery();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value transport_address; //type: string


                    class TargetedHelloAccept : public Entity
                    {
                        public:
                            TargetedHelloAccept();
                            ~TargetedHelloAccept();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value accept_type; //type: MplsLdpTargetedAcceptEnum
                            Value peer_acl_name; //type: string


                            class MplsLdpTargetedAcceptEnum;


                    }; // MplsLdp::DefaultVrf::Afs::Af::Discovery::TargetedHelloAccept


                        std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::DefaultVrf::Afs::Af::Discovery::TargetedHelloAccept> targeted_hello_accept;


                }; // MplsLdp::DefaultVrf::Afs::Af::Discovery


                class TrafficEngineering : public Entity
                {
                    public:
                        TrafficEngineering();
                        ~TrafficEngineering();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class AutoTunnelMesh : public Entity
                    {
                        public:
                            AutoTunnelMesh();
                            ~AutoTunnelMesh();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value group_all; //type: empty


                        class GroupIds : public Entity
                        {
                            public:
                                GroupIds();
                                ~GroupIds();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class GroupId : public Entity
                            {
                                public:
                                    GroupId();
                                    ~GroupId();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value mesh_group_id; //type: uint32




                            }; // MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::AutoTunnelMesh::GroupIds::GroupId


                                std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::AutoTunnelMesh::GroupIds::GroupId> > group_id;


                        }; // MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::AutoTunnelMesh::GroupIds


                            std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::AutoTunnelMesh::GroupIds> group_ids;


                    }; // MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::AutoTunnelMesh


                        std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::AutoTunnelMesh> auto_tunnel_mesh;


                }; // MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering


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


                    class Addresses : public Entity
                    {
                        public:
                            Addresses();
                            ~Addresses();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class Address : public Entity
                        {
                            public:
                                Address();
                                ~Address();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value ip_address; //type: string
                                Value targeted; //type: empty




                        }; // MplsLdp::DefaultVrf::Afs::Af::Neighbor::Addresses::Address


                            std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::DefaultVrf::Afs::Af::Neighbor::Addresses::Address> > address;


                    }; // MplsLdp::DefaultVrf::Afs::Af::Neighbor::Addresses


                        std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::DefaultVrf::Afs::Af::Neighbor::Addresses> addresses;


                }; // MplsLdp::DefaultVrf::Afs::Af::Neighbor


                class RedistributionProtocol : public Entity
                {
                    public:
                        RedistributionProtocol();
                        ~RedistributionProtocol();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class Bgp : public Entity
                    {
                        public:
                            Bgp();
                            ~Bgp();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class As : public Entity
                        {
                            public:
                                As();
                                ~As();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value as_xx; //type: uint32
                                Value as_yy; //type: uint32




                        }; // MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp::As


                        class AdvertiseTo : public Entity
                        {
                            public:
                                AdvertiseTo();
                                ~AdvertiseTo();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value type; //type: MplsLdpAdvertiseBgpaclEnum
                                Value peer_acl_name; //type: string


                                class MplsLdpAdvertiseBgpaclEnum;


                        }; // MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp::AdvertiseTo


                            std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp::AdvertiseTo> advertise_to;
                            std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp::As> as;


                    }; // MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp


                        std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp> bgp;


                }; // MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol


                    std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::DefaultVrf::Afs::Af::Discovery> discovery;
                    std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::DefaultVrf::Afs::Af::Label> label;
                    std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::DefaultVrf::Afs::Af::Neighbor> neighbor;
                    std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol> redistribution_protocol;
                    std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering> traffic_engineering;
                    class MplsLdpafNameEnum;


            }; // MplsLdp::DefaultVrf::Afs::Af


                std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::DefaultVrf::Afs::Af> > af;


        }; // MplsLdp::DefaultVrf::Afs


        class Global : public Entity
        {
            public:
                Global();
                ~Global();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value router_id; //type: string


            class Session : public Entity
            {
                public:
                    Session();
                    ~Session();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class Protection : public Entity
                {
                    public:
                        Protection();
                        ~Protection();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value protection_type; //type: MplsLdpSessionProtectionEnum
                        Value peer_acl_name; //type: string
                        Value duration; //type: uint32


                        class MplsLdpSessionProtectionEnum;


                }; // MplsLdp::DefaultVrf::Global::Session::Protection


                class DownstreamOnDemand : public Entity
                {
                    public:
                        DownstreamOnDemand();
                        ~DownstreamOnDemand();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value type; //type: MplsLdpDownstreamOnDemandEnum
                        Value peer_acl_name; //type: string


                        class MplsLdpDownstreamOnDemandEnum;


                }; // MplsLdp::DefaultVrf::Global::Session::DownstreamOnDemand


                    std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::DefaultVrf::Global::Session::DownstreamOnDemand> downstream_on_demand;
                    std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::DefaultVrf::Global::Session::Protection> protection;


            }; // MplsLdp::DefaultVrf::Global::Session


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
                    Value password; //type: string


                class LdpIds : public Entity
                {
                    public:
                        LdpIds();
                        ~LdpIds();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class LdpId : public Entity
                    {
                        public:
                            LdpId();
                            ~LdpId();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value lsr_id; //type: string
                            Value label_space_id; //type: uint32


                        class Password : public Entity
                        {
                            public:
                                Password();
                                ~Password();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value command_type; //type: MplsLdpNbrPasswordEnum
                                Value password; //type: string


                                class MplsLdpNbrPasswordEnum;


                        }; // MplsLdp::DefaultVrf::Global::Neighbor::LdpIds::LdpId::Password


                            std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::DefaultVrf::Global::Neighbor::LdpIds::LdpId::Password> password;


                    }; // MplsLdp::DefaultVrf::Global::Neighbor::LdpIds::LdpId


                        std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::DefaultVrf::Global::Neighbor::LdpIds::LdpId> > ldp_id;


                }; // MplsLdp::DefaultVrf::Global::Neighbor::LdpIds


                class DualStack : public Entity
                {
                    public:
                        DualStack();
                        ~DualStack();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value tlv_compliance; //type: empty


                    class TransportConnection : public Entity
                    {
                        public:
                            TransportConnection();
                            ~TransportConnection();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value max_wait; //type: uint32


                        class Prefer : public Entity
                        {
                            public:
                                Prefer();
                                ~Prefer();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value ipv4; //type: empty




                        }; // MplsLdp::DefaultVrf::Global::Neighbor::DualStack::TransportConnection::Prefer


                            std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::DefaultVrf::Global::Neighbor::DualStack::TransportConnection::Prefer> prefer;


                    }; // MplsLdp::DefaultVrf::Global::Neighbor::DualStack::TransportConnection


                        std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::DefaultVrf::Global::Neighbor::DualStack::TransportConnection> transport_connection;


                }; // MplsLdp::DefaultVrf::Global::Neighbor::DualStack


                    std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::DefaultVrf::Global::Neighbor::DualStack> dual_stack;
                    std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::DefaultVrf::Global::Neighbor::LdpIds> ldp_ids;


            }; // MplsLdp::DefaultVrf::Global::Neighbor


            class GracefulRestart : public Entity
            {
                public:
                    GracefulRestart();
                    ~GracefulRestart();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class HelperPeer : public Entity
                {
                    public:
                        HelperPeer();
                        ~HelperPeer();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value maintain_on_local_reset; //type: string




                }; // MplsLdp::DefaultVrf::Global::GracefulRestart::HelperPeer


                    std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::DefaultVrf::Global::GracefulRestart::HelperPeer> helper_peer;


            }; // MplsLdp::DefaultVrf::Global::GracefulRestart


                std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::DefaultVrf::Global::GracefulRestart> graceful_restart;
                std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::DefaultVrf::Global::Neighbor> neighbor;
                std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::DefaultVrf::Global::Session> session;


        }; // MplsLdp::DefaultVrf::Global


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


                class Afs : public Entity
                {
                    public:
                        Afs();
                        ~Afs();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class Af : public Entity
                    {
                        public:
                            Af();
                            ~Af();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value af_name; //type: MplsLdpafNameEnum
                            Value enable; //type: empty


                        class Discovery : public Entity
                        {
                            public:
                                Discovery();
                                ~Discovery();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class TransportAddress : public Entity
                            {
                                public:
                                    TransportAddress();
                                    ~TransportAddress();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value address_type; //type: MplsLdpTransportAddressEnum
                                    Value address; //type: string


                                    class MplsLdpTransportAddressEnum;


                            }; // MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Discovery::TransportAddress


                                std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Discovery::TransportAddress> transport_address;


                        }; // MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Discovery


                        class Igp : public Entity
                        {
                            public:
                                Igp();
                                ~Igp();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value disable_auto_config; //type: empty




                        }; // MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Igp


                        class Mldp : public Entity
                        {
                            public:
                                Mldp();
                                ~Mldp();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value disable; //type: empty




                        }; // MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Mldp


                            std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Discovery> discovery;
                            std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Igp> igp;
                            std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Mldp> mldp;
                            class MplsLdpafNameEnum;


                    }; // MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af


                        std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af> > af;


                }; // MplsLdp::DefaultVrf::Interfaces::Interface::Afs


                class Global : public Entity
                {
                    public:
                        Global();
                        ~Global();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class Discovery : public Entity
                    {
                        public:
                            Discovery();
                            ~Discovery();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value disable_quick_start; //type: empty


                        class LinkHello : public Entity
                        {
                            public:
                                LinkHello();
                                ~LinkHello();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value interval; //type: uint32
                                Value dual_stack; //type: MplsLdpafNameEnum
                                Value hold_time; //type: uint32


                                class MplsLdpafNameEnum;


                        }; // MplsLdp::DefaultVrf::Interfaces::Interface::Global::Discovery::LinkHello


                            std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::DefaultVrf::Interfaces::Interface::Global::Discovery::LinkHello> link_hello;


                    }; // MplsLdp::DefaultVrf::Interfaces::Interface::Global::Discovery


                    class Igp : public Entity
                    {
                        public:
                            Igp();
                            ~Igp();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class Sync : public Entity
                        {
                            public:
                                Sync();
                                ~Sync();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class Delay : public Entity
                            {
                                public:
                                    Delay();
                                    ~Delay();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class OnSessionUp : public Entity
                                {
                                    public:
                                        OnSessionUp();
                                        ~OnSessionUp();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value disable; //type: empty
                                        Value timeout; //type: uint32




                                }; // MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::Sync::Delay::OnSessionUp


                                    std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::Sync::Delay::OnSessionUp> on_session_up;


                            }; // MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::Sync::Delay


                                std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::Sync::Delay> delay;


                        }; // MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::Sync


                            std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::Sync> sync;


                    }; // MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp


                        std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::DefaultVrf::Interfaces::Interface::Global::Discovery> discovery;
                        std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp> igp;


                }; // MplsLdp::DefaultVrf::Interfaces::Interface::Global


                    std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::DefaultVrf::Interfaces::Interface::Afs> afs;
                    std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::DefaultVrf::Interfaces::Interface::Global> global;


            }; // MplsLdp::DefaultVrf::Interfaces::Interface


                std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::DefaultVrf::Interfaces::Interface> > interface;


        }; // MplsLdp::DefaultVrf::Interfaces


            std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::DefaultVrf::Afs> afs;
            std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::DefaultVrf::Global> global;
            std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::DefaultVrf::Interfaces> interfaces;


    }; // MplsLdp::DefaultVrf


    class Vrfs : public Entity
    {
        public:
            Vrfs();
            ~Vrfs();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class Vrf : public Entity
        {
            public:
                Vrf();
                ~Vrf();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value vrf_name; //type: string
                Value enable; //type: empty


            class Global : public Entity
            {
                public:
                    Global();
                    ~Global();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value router_id; //type: string


                class Session : public Entity
                {
                    public:
                        Session();
                        ~Session();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class DownstreamOnDemand : public Entity
                    {
                        public:
                            DownstreamOnDemand();
                            ~DownstreamOnDemand();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value type; //type: MplsLdpDownstreamOnDemandEnum
                            Value peer_acl_name; //type: string


                            class MplsLdpDownstreamOnDemandEnum;


                    }; // MplsLdp::Vrfs::Vrf::Global::Session::DownstreamOnDemand


                        std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Vrfs::Vrf::Global::Session::DownstreamOnDemand> downstream_on_demand;


                }; // MplsLdp::Vrfs::Vrf::Global::Session


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
                        Value password; //type: string


                    class LdpIds : public Entity
                    {
                        public:
                            LdpIds();
                            ~LdpIds();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class LdpId : public Entity
                        {
                            public:
                                LdpId();
                                ~LdpId();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value lsr_id; //type: string
                                Value label_space_id; //type: uint32


                            class Password : public Entity
                            {
                                public:
                                    Password();
                                    ~Password();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value command_type; //type: MplsLdpNbrPasswordEnum
                                    Value password; //type: string


                                    class MplsLdpNbrPasswordEnum;


                            }; // MplsLdp::Vrfs::Vrf::Global::Neighbor::LdpIds::LdpId::Password


                                std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Vrfs::Vrf::Global::Neighbor::LdpIds::LdpId::Password> password;


                        }; // MplsLdp::Vrfs::Vrf::Global::Neighbor::LdpIds::LdpId


                            std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Vrfs::Vrf::Global::Neighbor::LdpIds::LdpId> > ldp_id;


                    }; // MplsLdp::Vrfs::Vrf::Global::Neighbor::LdpIds


                        std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Vrfs::Vrf::Global::Neighbor::LdpIds> ldp_ids;


                }; // MplsLdp::Vrfs::Vrf::Global::Neighbor


                class GracefulRestart : public Entity
                {
                    public:
                        GracefulRestart();
                        ~GracefulRestart();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class HelperPeer : public Entity
                    {
                        public:
                            HelperPeer();
                            ~HelperPeer();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value maintain_on_local_reset; //type: string




                    }; // MplsLdp::Vrfs::Vrf::Global::GracefulRestart::HelperPeer


                        std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Vrfs::Vrf::Global::GracefulRestart::HelperPeer> helper_peer;


                }; // MplsLdp::Vrfs::Vrf::Global::GracefulRestart


                    std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Vrfs::Vrf::Global::GracefulRestart> graceful_restart;
                    std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Vrfs::Vrf::Global::Neighbor> neighbor;
                    std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Vrfs::Vrf::Global::Session> session;


            }; // MplsLdp::Vrfs::Vrf::Global


            class Afs : public Entity
            {
                public:
                    Afs();
                    ~Afs();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class Af : public Entity
                {
                    public:
                        Af();
                        ~Af();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value af_name; //type: MplsLdpafNameEnum
                        Value enable; //type: empty


                    class Discovery : public Entity
                    {
                        public:
                            Discovery();
                            ~Discovery();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value transport_address; //type: string




                    }; // MplsLdp::Vrfs::Vrf::Afs::Af::Discovery


                    class Label : public Entity
                    {
                        public:
                            Label();
                            ~Label();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class Remote : public Entity
                        {
                            public:
                                Remote();
                                ~Remote();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class Accept : public Entity
                            {
                                public:
                                    Accept();
                                    ~Accept();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class PeerAcceptPolicies : public Entity
                                {
                                    public:
                                        PeerAcceptPolicies();
                                        ~PeerAcceptPolicies();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                    class PeerAcceptPolicy : public Entity
                                    {
                                        public:
                                            PeerAcceptPolicy();
                                            ~PeerAcceptPolicy();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value label_space_id; //type: uint32


                                        class PeerAcceptPolicyData : public Entity
                                        {
                                            public:
                                                PeerAcceptPolicyData();
                                                ~PeerAcceptPolicyData();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value prefix_acl_name; //type: string




                                        }; // MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::PeerAcceptPolicyData


                                        class LsrId : public Entity
                                        {
                                            public:
                                                LsrId();
                                                ~LsrId();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value lsr_id; //type: string
                                                Value prefix_acl_name; //type: string




                                        }; // MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::LsrId


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::LsrId> > lsr_id;
                                            std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::PeerAcceptPolicyData> peer_accept_policy_data;


                                    }; // MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy> > peer_accept_policy;


                                }; // MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies


                                    std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies> peer_accept_policies;


                            }; // MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept


                                std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept> accept;


                        }; // MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote


                        class Local : public Entity
                        {
                            public:
                                Local();
                                ~Local();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value implicit_null_override; //type: string
                                Value default_route; //type: empty


                            class Advertise : public Entity
                            {
                                public:
                                    Advertise();
                                    ~Advertise();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value disable; //type: empty


                                class PeerAdvertisePolicies : public Entity
                                {
                                    public:
                                        PeerAdvertisePolicies();
                                        ~PeerAdvertisePolicies();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                    class PeerAdvertisePolicy : public Entity
                                    {
                                        public:
                                            PeerAdvertisePolicy();
                                            ~PeerAdvertisePolicy();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value label_space_id; //type: uint32


                                        class PeerAdvertisePolicyData : public Entity
                                        {
                                            public:
                                                PeerAdvertisePolicyData();
                                                ~PeerAdvertisePolicyData();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value prefix_acl_name; //type: string




                                        }; // MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::PeerAdvertisePolicyData


                                        class LsrId : public Entity
                                        {
                                            public:
                                                LsrId();
                                                ~LsrId();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value lsr_id; //type: string
                                                Value prefix_acl_name; //type: string




                                        }; // MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::LsrId


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::LsrId> > lsr_id;
                                            std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::PeerAdvertisePolicyData> peer_advertise_policy_data;


                                    }; // MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy> > peer_advertise_policy;


                                }; // MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies


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




                                    }; // MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::Interfaces::Interface


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::Interfaces::Interface> > interface;


                                }; // MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::Interfaces


                                class ExplicitNull : public Entity
                                {
                                    public:
                                        ExplicitNull();
                                        ~ExplicitNull();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value explicit_null_type; //type: MplsLdpExpNullEnum
                                        Value prefix_acl_name; //type: string
                                        Value peer_acl_name; //type: string


                                        class MplsLdpExpNullEnum;


                                }; // MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::ExplicitNull


                                    std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::ExplicitNull> explicit_null;
                                    std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::Interfaces> interfaces;
                                    std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies> peer_advertise_policies;


                            }; // MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise


                            class Allocate : public Entity
                            {
                                public:
                                    Allocate();
                                    ~Allocate();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value allocation_type; //type: MplsLdpLabelAllocationEnum
                                    Value prefix_acl_name; //type: string


                                    class MplsLdpLabelAllocationEnum;


                            }; // MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Allocate


                                std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise> advertise;
                                std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Allocate> allocate;


                        }; // MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local


                            std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local> local;
                            std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote> remote;


                    }; // MplsLdp::Vrfs::Vrf::Afs::Af::Label


                        std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Vrfs::Vrf::Afs::Af::Discovery> discovery;
                        std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Vrfs::Vrf::Afs::Af::Label> label;
                        class MplsLdpafNameEnum;


                }; // MplsLdp::Vrfs::Vrf::Afs::Af


                    std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Vrfs::Vrf::Afs::Af> > af;


            }; // MplsLdp::Vrfs::Vrf::Afs


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


                    class Afs : public Entity
                    {
                        public:
                            Afs();
                            ~Afs();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class Af : public Entity
                        {
                            public:
                                Af();
                                ~Af();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value af_name; //type: MplsLdpafNameEnum
                                Value enable; //type: empty


                            class Discovery : public Entity
                            {
                                public:
                                    Discovery();
                                    ~Discovery();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class TransportAddress : public Entity
                                {
                                    public:
                                        TransportAddress();
                                        ~TransportAddress();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value address_type; //type: MplsLdpTransportAddressEnum
                                        Value address; //type: string


                                        class MplsLdpTransportAddressEnum;


                                }; // MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::Af::Discovery::TransportAddress


                                    std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::Af::Discovery::TransportAddress> transport_address;


                            }; // MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::Af::Discovery


                                std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::Af::Discovery> discovery;
                                class MplsLdpafNameEnum;


                        }; // MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::Af


                            std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::Af> > af;


                    }; // MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs


                        std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs> afs;


                }; // MplsLdp::Vrfs::Vrf::Interfaces::Interface


                    std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Vrfs::Vrf::Interfaces::Interface> > interface;


            }; // MplsLdp::Vrfs::Vrf::Interfaces


                std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Vrfs::Vrf::Afs> afs;
                std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Vrfs::Vrf::Global> global;
                std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Vrfs::Vrf::Interfaces> interfaces;


        }; // MplsLdp::Vrfs::Vrf


            std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Vrfs::Vrf> > vrf;


    }; // MplsLdp::Vrfs


    class Global : public Entity
    {
        public:
            Global();
            ~Global();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;
            Value disable_implicit_ipv4; //type: empty
            Value ltrace_buf_multiplier; //type: uint32


        class EntropyLabel : public Entity
        {
            public:
                EntropyLabel();
                ~EntropyLabel();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value enable; //type: empty




        }; // MplsLdp::Global::EntropyLabel


        class Session : public Entity
        {
            public:
                Session();
                ~Session();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value hold_time; //type: uint32


            class BackoffTime : public Entity
            {
                public:
                    BackoffTime();
                    ~BackoffTime();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value initial_backoff_time; //type: uint32
                    Value max_backoff_time; //type: uint32




            }; // MplsLdp::Global::Session::BackoffTime


                std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Global::Session::BackoffTime> backoff_time;


        }; // MplsLdp::Global::Session


        class Igp : public Entity
        {
            public:
                Igp();
                ~Igp();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class Sync : public Entity
            {
                public:
                    Sync();
                    ~Sync();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class Delay : public Entity
                {
                    public:
                        Delay();
                        ~Delay();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value on_session_up; //type: uint32
                        Value on_proc_restart; //type: uint32




                }; // MplsLdp::Global::Igp::Sync::Delay


                    std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Global::Igp::Sync::Delay> delay;


            }; // MplsLdp::Global::Igp::Sync


                std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Global::Igp::Sync> sync;


        }; // MplsLdp::Global::Igp


        class EnableLogging : public Entity
        {
            public:
                EnableLogging();
                ~EnableLogging();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value nsr; //type: empty
                Value neighbor_changes; //type: empty
                Value adjacency; //type: empty
                Value session_protection; //type: empty
                Value gr_session_changes; //type: empty




        }; // MplsLdp::Global::EnableLogging


        class Signalling : public Entity
        {
            public:
                Signalling();
                ~Signalling();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value dscp; //type: uint32




        }; // MplsLdp::Global::Signalling


        class Nsr : public Entity
        {
            public:
                Nsr();
                ~Nsr();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value enable; //type: empty




        }; // MplsLdp::Global::Nsr


        class GracefulRestart : public Entity
        {
            public:
                GracefulRestart();
                ~GracefulRestart();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value reconnect_timeout; //type: uint32
                Value enable; //type: empty
                Value forwarding_hold_time; //type: uint32




        }; // MplsLdp::Global::GracefulRestart


        class Discovery : public Entity
        {
            public:
                Discovery();
                ~Discovery();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value disable_instance_tlv; //type: empty
                Value disable_quick_start; //type: empty


            class LinkHello : public Entity
            {
                public:
                    LinkHello();
                    ~LinkHello();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value interval; //type: uint32
                    Value hold_time; //type: uint32




            }; // MplsLdp::Global::Discovery::LinkHello


            class TargetedHello : public Entity
            {
                public:
                    TargetedHello();
                    ~TargetedHello();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value interval; //type: uint32
                    Value hold_time; //type: uint32




            }; // MplsLdp::Global::Discovery::TargetedHello


                std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Global::Discovery::LinkHello> link_hello;
                std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Global::Discovery::TargetedHello> targeted_hello;


        }; // MplsLdp::Global::Discovery


        class Mldp : public Entity
        {
            public:
                Mldp();
                ~Mldp();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value enable; //type: empty


            class Vrfs : public Entity
            {
                public:
                    Vrfs();
                    ~Vrfs();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class Vrf : public Entity
                {
                    public:
                        Vrf();
                        ~Vrf();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value vrf_name; //type: string


                    class Afs : public Entity
                    {
                        public:
                            Afs();
                            ~Afs();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class Af : public Entity
                        {
                            public:
                                Af();
                                ~Af();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value af_name; //type: MplsLdpafNameEnum
                                Value enable; //type: empty
                                Value mldp_rib_unicast_always; //type: empty


                            class MldpRecursiveFec : public Entity
                            {
                                public:
                                    MldpRecursiveFec();
                                    ~MldpRecursiveFec();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value enable_mldp_recursive_fec; //type: empty




                            }; // MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MldpRecursiveFec


                            class MoFrr : public Entity
                            {
                                public:
                                    MoFrr();
                                    ~MoFrr();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value enable_mo_frr; //type: empty




                            }; // MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MoFrr


                            class MakeBeforeBreak : public Entity
                            {
                                public:
                                    MakeBeforeBreak();
                                    ~MakeBeforeBreak();

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
                                        Value forward_delay; //type: uint32
                                        Value delete_delay; //type: uint32




                                }; // MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MakeBeforeBreak::Signaling


                                    std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MakeBeforeBreak::Signaling> signaling;


                            }; // MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MakeBeforeBreak


                            class Csc : public Entity
                            {
                                public:
                                    Csc();
                                    ~Csc();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value enable_csc; //type: empty




                            }; // MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::Csc


                                std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::Csc> csc;
                                std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MakeBeforeBreak> make_before_break;
                                std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MldpRecursiveFec> mldp_recursive_fec;
                                std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MoFrr> mo_frr;
                                class MplsLdpafNameEnum;


                        }; // MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af


                            std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af> > af;


                    }; // MplsLdp::Global::Mldp::Vrfs::Vrf::Afs


                        std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Global::Mldp::Vrfs::Vrf::Afs> afs;


                }; // MplsLdp::Global::Mldp::Vrfs::Vrf


                    std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Global::Mldp::Vrfs::Vrf> > vrf;


            }; // MplsLdp::Global::Mldp::Vrfs


            class DefaultVrf : public Entity
            {
                public:
                    DefaultVrf();
                    ~DefaultVrf();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class Afs : public Entity
                {
                    public:
                        Afs();
                        ~Afs();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class Af : public Entity
                    {
                        public:
                            Af();
                            ~Af();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value af_name; //type: MplsLdpafNameEnum
                            Value enable; //type: empty
                            Value mldp_rib_unicast_always; //type: empty


                        class MldpRecursiveFec : public Entity
                        {
                            public:
                                MldpRecursiveFec();
                                ~MldpRecursiveFec();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value enable_mldp_recursive_fec; //type: empty




                        }; // MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MldpRecursiveFec


                        class MoFrr : public Entity
                        {
                            public:
                                MoFrr();
                                ~MoFrr();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value enable_mo_frr; //type: empty




                        }; // MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MoFrr


                        class MakeBeforeBreak : public Entity
                        {
                            public:
                                MakeBeforeBreak();
                                ~MakeBeforeBreak();

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
                                    Value forward_delay; //type: uint32
                                    Value delete_delay; //type: uint32




                            }; // MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MakeBeforeBreak::Signaling


                                std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MakeBeforeBreak::Signaling> signaling;


                        }; // MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MakeBeforeBreak


                        class Csc : public Entity
                        {
                            public:
                                Csc();
                                ~Csc();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value enable_csc; //type: empty




                        }; // MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::Csc


                            std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::Csc> csc;
                            std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MakeBeforeBreak> make_before_break;
                            std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MldpRecursiveFec> mldp_recursive_fec;
                            std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MoFrr> mo_frr;
                            class MplsLdpafNameEnum;


                    }; // MplsLdp::Global::Mldp::DefaultVrf::Afs::Af


                        std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Global::Mldp::DefaultVrf::Afs::Af> > af;


                }; // MplsLdp::Global::Mldp::DefaultVrf::Afs


                    std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Global::Mldp::DefaultVrf::Afs> afs;


            }; // MplsLdp::Global::Mldp::DefaultVrf


            class MldpGlobal : public Entity
            {
                public:
                    MldpGlobal();
                    ~MldpGlobal();

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
                        Value notifications; //type: empty




                }; // MplsLdp::Global::Mldp::MldpGlobal::Logging


                    std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Global::Mldp::MldpGlobal::Logging> logging;


            }; // MplsLdp::Global::Mldp::MldpGlobal


                std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Global::Mldp::DefaultVrf> default_vrf;
                std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Global::Mldp::MldpGlobal> mldp_global;
                std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Global::Mldp::Vrfs> vrfs;


        }; // MplsLdp::Global::Mldp


            std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Global::Discovery> discovery;
            std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Global::EnableLogging> enable_logging;
            std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Global::EntropyLabel> entropy_label;
            std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Global::GracefulRestart> graceful_restart;
            std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Global::Igp> igp;
            std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Global::Mldp> mldp;
            std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Global::Nsr> nsr;
            std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Global::Session> session;
            std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Global::Signalling> signalling;


    }; // MplsLdp::Global


        std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::DefaultVrf> default_vrf;
        std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Global> global;
        std::unique_ptr<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp::Vrfs> vrfs;


}; // MplsLdp


class MplsLdpAdvertiseBgpaclEnum : public Enum
{
    public:
        static const Enum::Value peer_acl;

};

class MplsLdpLabelAdvertiseEnum : public Enum
{
    public:
        static const Enum::Value for_;
        static const Enum::Value for_to;

};

class MplsLdpLabelAllocationEnum : public Enum
{
    public:
        static const Enum::Value acl;
        static const Enum::Value host;

};

class MplsLdpTargetedAcceptEnum : public Enum
{
    public:
        static const Enum::Value all;
        static const Enum::Value from;

};

class MplsLdpNbrPasswordEnum : public Enum
{
    public:
        static const Enum::Value disable;
        static const Enum::Value specified;

};

class MplsLdpDownstreamOnDemandEnum : public Enum
{
    public:
        static const Enum::Value peer_acl;

};

class MplsLdpExpNullEnum : public Enum
{
    public:
        static const Enum::Value all;
        static const Enum::Value for_;
        static const Enum::Value to;
        static const Enum::Value for_to;

};

class MplsLdpafNameEnum : public Enum
{
    public:
        static const Enum::Value ipv4;
        static const Enum::Value ipv6;

};

class MplsLdpTransportAddressEnum : public Enum
{
    public:
        static const Enum::Value interface;
        static const Enum::Value address;

};

class MplsLdpSessionProtectionEnum : public Enum
{
    public:
        static const Enum::Value all;
        static const Enum::Value for_;
        static const Enum::Value all_with_duration;
        static const Enum::Value for_with_duration;
        static const Enum::Value all_with_forever;
        static const Enum::Value for_with_forever;

};


}
}

#endif /* _CISCO_IOS_XR_MPLS_LDP_CFG_ */

