#ifndef _CISCO_IOS_XR_IP_MOBILEIP_CFG_
#define _CISCO_IOS_XR_IP_MOBILEIP_CFG_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ip_mobileip_cfg {

class MobileIp : public Entity
{
    public:
        MobileIp();
        ~MobileIp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;



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


                YLeaf domain_name; //type: string
                YLeaf enable; //type: empty

            class Mags : public Entity
            {
                public:
                    Mags();
                    ~Mags();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class Mag : public Entity
                {
                    public:
                        Mag();
                        ~Mag();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf mag_name; //type: string



                }; // MobileIp::Domains::Domain::Mags::Mag


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Domains::Domain::Mags::Mag> > mag;


            }; // MobileIp::Domains::Domain::Mags


            class Nais : public Entity
            {
                public:
                    Nais();
                    ~Nais();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class Nai : public Entity
                {
                    public:
                        Nai();
                        ~Nai();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf nai_name; //type: string
                        YLeaf lma; //type: string
                        YLeaf apn; //type: string
                        YLeaf customer; //type: string
                        YLeaf service; //type: ServiceTypeEnum
                        YLeaf network; //type: string



                }; // MobileIp::Domains::Domain::Nais::Nai


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Domains::Domain::Nais::Nai> > nai;


            }; // MobileIp::Domains::Domain::Nais


            class AuthenticateOption : public Entity
            {
                public:
                    AuthenticateOption();
                    ~AuthenticateOption();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf spi; //type: string
                    YLeaf key; //type: string



            }; // MobileIp::Domains::Domain::AuthenticateOption


            class Lmas : public Entity
            {
                public:
                    Lmas();
                    ~Lmas();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class Lma : public Entity
                {
                    public:
                        Lma();
                        ~Lma();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf lma_name; //type: string



                }; // MobileIp::Domains::Domain::Lmas::Lma


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Domains::Domain::Lmas::Lma> > lma;


            }; // MobileIp::Domains::Domain::Lmas


                std::unique_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Domains::Domain::AuthenticateOption> authenticate_option;
                std::unique_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Domains::Domain::Lmas> lmas;
                std::unique_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Domains::Domain::Mags> mags;
                std::unique_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Domains::Domain::Nais> nais;


        }; // MobileIp::Domains::Domain


            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Domains::Domain> > domain;


    }; // MobileIp::Domains


    class Lmas : public Entity
    {
        public:
            Lmas();
            ~Lmas();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



        class Lma : public Entity
        {
            public:
                Lma();
                ~Lma();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf lma_name; //type: string
                YLeaf domain_name; //type: string
                YLeaf generate; //type: empty
                YLeaf mobile_route_ad; //type: uint32
                YLeaf ani; //type: empty
                YLeaf multipath; //type: empty
                YLeaf dynamic; //type: empty
                YLeaf enforce; //type: empty
                YLeaf default_profile; //type: string
                YLeaf interface; //type: string
                YLeaf mobile_map; //type: string
                YLeaf pgw_subs_cont; //type: empty

            class BindingRevocationAttributes : public Entity
            {
                public:
                    BindingRevocationAttributes();
                    ~BindingRevocationAttributes();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf retry; //type: uint32

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


                        YLeaf minimum; //type: uint32
                        YLeaf maximum; //type: uint32



                }; // MobileIp::Lmas::Lma::BindingRevocationAttributes::Delay


                    std::unique_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::BindingRevocationAttributes::Delay> delay;


            }; // MobileIp::Lmas::Lma::BindingRevocationAttributes


            class RatAttributes : public Entity
            {
                public:
                    RatAttributes();
                    ~RatAttributes();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf lma_rat; //type: LmaRatEnum
                    YLeaf priority_value; //type: uint32



            }; // MobileIp::Lmas::Lma::RatAttributes


            class HeartBeatAttributes : public Entity
            {
                public:
                    HeartBeatAttributes();
                    ~HeartBeatAttributes();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf interval; //type: uint32
                    YLeaf retries; //type: uint32
                    YLeaf timeout; //type: uint32



            }; // MobileIp::Lmas::Lma::HeartBeatAttributes


            class Lmaipv6Addresses : public Entity
            {
                public:
                    Lmaipv6Addresses();
                    ~Lmaipv6Addresses();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class Lmaipv6Address : public Entity
                {
                    public:
                        Lmaipv6Address();
                        ~Lmaipv6Address();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf address; //type: string



                }; // MobileIp::Lmas::Lma::Lmaipv6Addresses::Lmaipv6Address


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Lmaipv6Addresses::Lmaipv6Address> > lmaipv6_address;


            }; // MobileIp::Lmas::Lma::Lmaipv6Addresses


            class Hnp : public Entity
            {
                public:
                    Hnp();
                    ~Hnp();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf maximum; //type: uint32



            }; // MobileIp::Lmas::Lma::Hnp


            class Redistribute : public Entity
            {
                public:
                    Redistribute();
                    ~Redistribute();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf redist_type; //type: int32
                    YLeaf redist_sub_type; //type: int32



            }; // MobileIp::Lmas::Lma::Redistribute


            class Dscp : public Entity
            {
                public:
                    Dscp();
                    ~Dscp();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf value_; //type: uint32
                    YLeaf force; //type: int32



            }; // MobileIp::Lmas::Lma::Dscp


            class Lmaipv4Addresses : public Entity
            {
                public:
                    Lmaipv4Addresses();
                    ~Lmaipv4Addresses();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class Lmaipv4Address : public Entity
                {
                    public:
                        Lmaipv4Address();
                        ~Lmaipv4Address();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf address; //type: string



                }; // MobileIp::Lmas::Lma::Lmaipv4Addresses::Lmaipv4Address


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Lmaipv4Addresses::Lmaipv4Address> > lmaipv4_address;


            }; // MobileIp::Lmas::Lma::Lmaipv4Addresses


            class Roles : public Entity
            {
                public:
                    Roles();
                    ~Roles();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class Role : public Entity
                {
                    public:
                        Role();
                        ~Role();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf lma_role; //type: LmaRoleEnum



                }; // MobileIp::Lmas::Lma::Roles::Role


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Roles::Role> > role;


            }; // MobileIp::Lmas::Lma::Roles


            class BindingAttributes : public Entity
            {
                public:
                    BindingAttributes();
                    ~BindingAttributes();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf refresh_time; //type: uint32
                    YLeaf delete_wait_interval; //type: uint32
                    YLeaf create_wait_interval; //type: uint32
                    YLeaf max_life_time; //type: uint32
                    YLeaf maximum; //type: uint32



            }; // MobileIp::Lmas::Lma::BindingAttributes


            class Aaa : public Entity
            {
                public:
                    Aaa();
                    ~Aaa();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf enable; //type: int32
                    YLeaf interim_interval; //type: int32



            }; // MobileIp::Lmas::Lma::Aaa


            class Mags : public Entity
            {
                public:
                    Mags();
                    ~Mags();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class Mag : public Entity
                {
                    public:
                        Mag();
                        ~Mag();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf mag_name; //type: string
                        YLeaf domain_name; //type: string
                        YLeaf encap_option; //type: EncapOptEnum
                        YLeaf ipv4_address; //type: string
                        YLeaf ipv6_address; //type: string
                        YLeaf tunnel; //type: string

                    class AuthenticateOption : public Entity
                    {
                        public:
                            AuthenticateOption();
                            ~AuthenticateOption();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf spi; //type: string
                            YLeaf key; //type: string



                    }; // MobileIp::Lmas::Lma::Mags::Mag::AuthenticateOption


                    class Dscp : public Entity
                    {
                        public:
                            Dscp();
                            ~Dscp();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf value_; //type: uint32
                            YLeaf force; //type: int32



                    }; // MobileIp::Lmas::Lma::Mags::Mag::Dscp


                        std::unique_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Mags::Mag::AuthenticateOption> authenticate_option;
                        std::unique_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Mags::Mag::Dscp> dscp;


                }; // MobileIp::Lmas::Lma::Mags::Mag


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Mags::Mag> > mag;


            }; // MobileIp::Lmas::Lma::Mags


            class TunnelAttributes : public Entity
            {
                public:
                    TunnelAttributes();
                    ~TunnelAttributes();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf mtu; //type: uint32
                    YLeaf acl; //type: string



            }; // MobileIp::Lmas::Lma::TunnelAttributes


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


                        YLeaf lma_service; //type: LmaServiceEnum
                        YLeaf ignore; //type: empty
                        YLeaf mnp_customer; //type: uint32
                        YLeaf mnp_ipv4_lmn; //type: uint32
                        YLeaf mnp_ipv6_lmn; //type: uint32
                        YLeaf mnp_lmn; //type: uint32
                        YLeaf mnp_ipv4_customer; //type: uint32
                        YLeaf mnp_ipv6_customer; //type: uint32

                    class Customers : public Entity
                    {
                        public:
                            Customers();
                            ~Customers();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class Customer : public Entity
                        {
                            public:
                                Customer();
                                ~Customer();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf customer_name; //type: string
                                YLeaf vrf_name; //type: string
                                YLeaf mnp_customer; //type: uint32
                                YLeaf mnp_ipv4_lmn; //type: uint32
                                YLeaf mnp_ipv6_lmn; //type: uint32
                                YLeaf mnp_lmn; //type: uint32
                                YLeaf mnp_ipv4_customer; //type: uint32
                                YLeaf mnp_ipv6_customer; //type: uint32
                                YLeaf mobile_route_ad; //type: uint32
                                YLeaf bandwidth_aggregate; //type: int32

                            class AuthenticateOption : public Entity
                            {
                                public:
                                    AuthenticateOption();
                                    ~AuthenticateOption();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf spi; //type: string
                                    YLeaf key; //type: string



                            }; // MobileIp::Lmas::Lma::Services::Service::Customers::Customer::AuthenticateOption


                            class HeartBeatAttributes : public Entity
                            {
                                public:
                                    HeartBeatAttributes();
                                    ~HeartBeatAttributes();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf interval; //type: uint32
                                    YLeaf retries; //type: uint32
                                    YLeaf timeout; //type: uint32



                            }; // MobileIp::Lmas::Lma::Services::Service::Customers::Customer::HeartBeatAttributes


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


                                        YLeaf vrf_name; //type: string
                                        YLeaf ipv4_address; //type: string
                                        YLeaf ipv6_address; //type: string



                                }; // MobileIp::Lmas::Lma::Services::Service::Customers::Customer::Transports::Transport


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Services::Service::Customers::Customer::Transports::Transport> > transport;


                            }; // MobileIp::Lmas::Lma::Services::Service::Customers::Customer::Transports


                            class NetworkAttributes : public Entity
                            {
                                public:
                                    NetworkAttributes();
                                    ~NetworkAttributes();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf unauthorize; //type: empty

                                class Authorizes : public Entity
                                {
                                    public:
                                        Authorizes();
                                        ~Authorizes();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;



                                    class Authorize : public Entity
                                    {
                                        public:
                                            Authorize();
                                            ~Authorize();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                            YLeaf name; //type: string

                                        class PoolAttributes : public Entity
                                        {
                                            public:
                                                PoolAttributes();
                                                ~PoolAttributes();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;



                                            class MobileNode : public Entity
                                            {
                                                public:
                                                    MobileNode();
                                                    ~MobileNode();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;



                                                class Ipv4Pool : public Entity
                                                {
                                                    public:
                                                        Ipv4Pool();
                                                        ~Ipv4Pool();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;


                                                        YLeaf start_address; //type: string
                                                        YLeaf pool_prefix; //type: uint32



                                                }; // MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNode::Ipv4Pool


                                                class Ipv6Pool : public Entity
                                                {
                                                    public:
                                                        Ipv6Pool();
                                                        ~Ipv6Pool();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;


                                                        YLeaf start_address; //type: string
                                                        YLeaf pool_prefix; //type: uint32



                                                }; // MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNode::Ipv6Pool


                                                    std::unique_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNode::Ipv4Pool> ipv4_pool;
                                                    std::unique_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNode::Ipv6Pool> ipv6_pool;


                                            }; // MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNode


                                            class MobileNetwork : public Entity
                                            {
                                                public:
                                                    MobileNetwork();
                                                    ~MobileNetwork();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;



                                                class Mripv4Pools : public Entity
                                                {
                                                    public:
                                                        Mripv4Pools();
                                                        ~Mripv4Pools();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;



                                                    class Mripv4Pool : public Entity
                                                    {
                                                        public:
                                                            Mripv4Pool();
                                                            ~Mripv4Pool();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;


                                                            YLeaf start_address; //type: string
                                                            YLeaf pool_prefix; //type: uint32
                                                            YLeaf network_prefix; //type: uint32



                                                    }; // MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv4Pools::Mripv4Pool


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv4Pools::Mripv4Pool> > mripv4_pool;


                                                }; // MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv4Pools


                                                class Mripv6Pools : public Entity
                                                {
                                                    public:
                                                        Mripv6Pools();
                                                        ~Mripv6Pools();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;



                                                    class Mripv6Pool : public Entity
                                                    {
                                                        public:
                                                            Mripv6Pool();
                                                            ~Mripv6Pool();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;


                                                            YLeaf start_address; //type: string
                                                            YLeaf pool_prefix; //type: uint32
                                                            YLeaf network_prefix; //type: uint32



                                                    }; // MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv6Pools::Mripv6Pool


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv6Pools::Mripv6Pool> > mripv6_pool;


                                                }; // MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv6Pools


                                                    std::unique_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv4Pools> mripv4_pools;
                                                    std::unique_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv6Pools> mripv6_pools;


                                            }; // MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork


                                                std::unique_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork> mobile_network;
                                                std::unique_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNode> mobile_node;


                                        }; // MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes


                                            std::unique_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes> pool_attributes;


                                    }; // MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize> > authorize;


                                }; // MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes


                                    std::unique_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes> authorizes;


                            }; // MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes


                            class GreKey : public Entity
                            {
                                public:
                                    GreKey();
                                    ~GreKey();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf gre_key_type; //type: int32
                                    YLeaf gre_key_value; //type: int32



                            }; // MobileIp::Lmas::Lma::Services::Service::Customers::Customer::GreKey


                            class BindingAttributes : public Entity
                            {
                                public:
                                    BindingAttributes();
                                    ~BindingAttributes();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf max_life_time; //type: uint32



                            }; // MobileIp::Lmas::Lma::Services::Service::Customers::Customer::BindingAttributes


                                std::unique_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Services::Service::Customers::Customer::AuthenticateOption> authenticate_option;
                                std::unique_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Services::Service::Customers::Customer::BindingAttributes> binding_attributes;
                                std::unique_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Services::Service::Customers::Customer::GreKey> gre_key;
                                std::unique_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Services::Service::Customers::Customer::HeartBeatAttributes> heart_beat_attributes;
                                std::unique_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes> network_attributes;
                                std::unique_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Services::Service::Customers::Customer::Transports> transports;


                        }; // MobileIp::Lmas::Lma::Services::Service::Customers::Customer


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Services::Service::Customers::Customer> > customer;


                    }; // MobileIp::Lmas::Lma::Services::Service::Customers


                        std::unique_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Services::Service::Customers> customers;


                }; // MobileIp::Lmas::Lma::Services::Service


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Services::Service> > service;


            }; // MobileIp::Lmas::Lma::Services


            class ReplayProtection : public Entity
            {
                public:
                    ReplayProtection();
                    ~ReplayProtection();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf validity_window; //type: uint32
                    YLeaf ignore; //type: int32



            }; // MobileIp::Lmas::Lma::ReplayProtection


            class Networks : public Entity
            {
                public:
                    Networks();
                    ~Networks();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class Network : public Entity
                {
                    public:
                        Network();
                        ~Network();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf lma_network; //type: string

                    class PoolAttributes : public Entity
                    {
                        public:
                            PoolAttributes();
                            ~PoolAttributes();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class MobileNode : public Entity
                        {
                            public:
                                MobileNode();
                                ~MobileNode();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;



                            class Ipv4Pool : public Entity
                            {
                                public:
                                    Ipv4Pool();
                                    ~Ipv4Pool();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf start_address; //type: string
                                    YLeaf pool_prefix; //type: uint32



                            }; // MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNode::Ipv4Pool


                            class Ipv6Pool : public Entity
                            {
                                public:
                                    Ipv6Pool();
                                    ~Ipv6Pool();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf start_address; //type: string
                                    YLeaf pool_prefix; //type: uint32



                            }; // MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNode::Ipv6Pool


                                std::unique_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNode::Ipv4Pool> ipv4_pool;
                                std::unique_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNode::Ipv6Pool> ipv6_pool;


                        }; // MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNode


                        class MobileNetwork : public Entity
                        {
                            public:
                                MobileNetwork();
                                ~MobileNetwork();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;



                            class Mripv6Pools : public Entity
                            {
                                public:
                                    Mripv6Pools();
                                    ~Mripv6Pools();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;



                                class Mripv6Pool : public Entity
                                {
                                    public:
                                        Mripv6Pool();
                                        ~Mripv6Pool();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                        YLeaf start_address; //type: string
                                        YLeaf pool_prefix; //type: uint32
                                        YLeaf network_prefix; //type: uint32



                                }; // MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv6Pools::Mripv6Pool


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv6Pools::Mripv6Pool> > mripv6_pool;


                            }; // MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv6Pools


                            class Mripv4Pools : public Entity
                            {
                                public:
                                    Mripv4Pools();
                                    ~Mripv4Pools();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;



                                class Mripv4Pool : public Entity
                                {
                                    public:
                                        Mripv4Pool();
                                        ~Mripv4Pool();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                        YLeaf start_address; //type: string
                                        YLeaf pool_prefix; //type: uint32
                                        YLeaf network_prefix; //type: uint32



                                }; // MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv4Pools::Mripv4Pool


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv4Pools::Mripv4Pool> > mripv4_pool;


                            }; // MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv4Pools


                                std::unique_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv4Pools> mripv4_pools;
                                std::unique_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv6Pools> mripv6_pools;


                        }; // MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork


                            std::unique_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork> mobile_network;
                            std::unique_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNode> mobile_node;


                    }; // MobileIp::Lmas::Lma::Networks::Network::PoolAttributes


                        std::unique_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Networks::Network::PoolAttributes> pool_attributes;


                }; // MobileIp::Lmas::Lma::Networks::Network


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Networks::Network> > network;


            }; // MobileIp::Lmas::Lma::Networks


                std::unique_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Aaa> aaa;
                std::unique_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::BindingAttributes> binding_attributes;
                std::unique_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::BindingRevocationAttributes> binding_revocation_attributes;
                std::unique_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Dscp> dscp;
                std::unique_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::HeartBeatAttributes> heart_beat_attributes;
                std::unique_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Hnp> hnp;
                std::unique_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Lmaipv4Addresses> lmaipv4_addresses;
                std::unique_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Lmaipv6Addresses> lmaipv6_addresses;
                std::unique_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Mags> mags;
                std::unique_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Networks> networks;
                std::unique_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::RatAttributes> rat_attributes;
                std::unique_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Redistribute> redistribute;
                std::unique_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::ReplayProtection> replay_protection;
                std::unique_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Roles> roles;
                std::unique_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Services> services;
                std::unique_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::TunnelAttributes> tunnel_attributes;


        }; // MobileIp::Lmas::Lma


            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma> > lma;


    }; // MobileIp::Lmas


        std::unique_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Domains> domains;
        std::unique_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas> lmas;


}; // MobileIp


class LmaRatEnum : public Enum
{
    public:
        static const Enum::YLeaf virtual_;
        static const Enum::YLeaf ppp;
        static const Enum::YLeaf ethernet;
        static const Enum::YLeaf wlan;
        static const Enum::YLeaf wi_max;
        static const Enum::YLeaf Y_3gppgeran;
        static const Enum::YLeaf Y_3gpputran;
        static const Enum::YLeaf Y_3gppeutran;
        static const Enum::YLeaf Y_3gpp2ehrpd;
        static const Enum::YLeaf Y_3gpp2hrpd;
        static const Enum::YLeaf Y_3gpp21rtt;
        static const Enum::YLeaf Y_3gpp2umb;

};

class ServiceTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf ipv4;
        static const Enum::YLeaf ipv6;
        static const Enum::YLeaf dual;

};

class LmaServiceEnum : public Enum
{
    public:
        static const Enum::YLeaf service_mll;

};

class EncapOptEnum : public Enum
{
    public:
        static const Enum::YLeaf greipv4;
        static const Enum::YLeaf greipv6;
        static const Enum::YLeaf mgreipv4;
        static const Enum::YLeaf mgreipv6;

};

class LmaRoleEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_3gma;

};


}
}

#endif /* _CISCO_IOS_XR_IP_MOBILEIP_CFG_ */

