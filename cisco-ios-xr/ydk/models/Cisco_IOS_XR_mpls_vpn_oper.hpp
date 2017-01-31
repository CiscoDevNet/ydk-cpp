#ifndef _CISCO_IOS_XR_MPLS_VPN_OPER_
#define _CISCO_IOS_XR_MPLS_VPN_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_mpls_vpn_oper {

class L3Vpn : public Entity
{
    public:
        L3Vpn();
        ~L3Vpn();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;



    class InvalidVrfs : public Entity
    {
        public:
            InvalidVrfs();
            ~InvalidVrfs();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



        class InvalidVrf : public Entity
        {
            public:
                InvalidVrf();
                ~InvalidVrf();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf vrf_name; //type: string
                YLeaf vrf_name_xr; //type: string
                YLeaf vrf_description; //type: string
                YLeaf route_distinguisher; //type: string
                YLeaf is_big_vrf; //type: boolean

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


                    YLeaf interface_name; //type: string



            }; // L3Vpn::InvalidVrfs::InvalidVrf::Interface


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


                    YLeaf af_name; //type: MplsVpnAfiEnum
                    YLeaf saf_name; //type: MplsVpnSafiEnum
                    YLeaf import_route_policy; //type: string
                    YLeaf export_route_policy; //type: string

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


                        YLeaf route_target_type; //type: MplsVpnRtEnum
                        YLeaf route_target_value; //type: string
                        YLeaf af_name; //type: MplsVpnAfiEnum
                        YLeaf saf_name; //type: MplsVpnSafiEnum



                }; // L3Vpn::InvalidVrfs::InvalidVrf::Af::RouteTarget


                    std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_vpn_oper::L3Vpn::InvalidVrfs::InvalidVrf::Af::RouteTarget> > route_target;


            }; // L3Vpn::InvalidVrfs::InvalidVrf::Af


                std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_vpn_oper::L3Vpn::InvalidVrfs::InvalidVrf::Af> > af;
                std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_vpn_oper::L3Vpn::InvalidVrfs::InvalidVrf::Interface> > interface;


        }; // L3Vpn::InvalidVrfs::InvalidVrf


            std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_vpn_oper::L3Vpn::InvalidVrfs::InvalidVrf> > invalid_vrf;


    }; // L3Vpn::InvalidVrfs


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


                YLeaf vrf_name; //type: string
                YLeaf vrf_name_xr; //type: string
                YLeaf vrf_description; //type: string
                YLeaf route_distinguisher; //type: string
                YLeaf is_big_vrf; //type: boolean

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


                    YLeaf interface_name; //type: string



            }; // L3Vpn::Vrfs::Vrf::Interface


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


                    YLeaf af_name; //type: MplsVpnAfiEnum
                    YLeaf saf_name; //type: MplsVpnSafiEnum
                    YLeaf import_route_policy; //type: string
                    YLeaf export_route_policy; //type: string

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


                        YLeaf route_target_type; //type: MplsVpnRtEnum
                        YLeaf route_target_value; //type: string
                        YLeaf af_name; //type: MplsVpnAfiEnum
                        YLeaf saf_name; //type: MplsVpnSafiEnum



                }; // L3Vpn::Vrfs::Vrf::Af::RouteTarget


                    std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_vpn_oper::L3Vpn::Vrfs::Vrf::Af::RouteTarget> > route_target;


            }; // L3Vpn::Vrfs::Vrf::Af


                std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_vpn_oper::L3Vpn::Vrfs::Vrf::Af> > af;
                std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_vpn_oper::L3Vpn::Vrfs::Vrf::Interface> > interface;


        }; // L3Vpn::Vrfs::Vrf


            std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_vpn_oper::L3Vpn::Vrfs::Vrf> > vrf;


    }; // L3Vpn::Vrfs


        std::unique_ptr<Cisco_IOS_XR_mpls_vpn_oper::L3Vpn::InvalidVrfs> invalid_vrfs;
        std::unique_ptr<Cisco_IOS_XR_mpls_vpn_oper::L3Vpn::Vrfs> vrfs;


}; // L3Vpn


class MplsVpnRtEnum : public Enum
{
    public:
        static const Enum::YLeaf import;
        static const Enum::YLeaf export_;
        static const Enum::YLeaf both;

};

class MplsVpnAfiEnum : public Enum
{
    public:
        static const Enum::YLeaf ipv4;
        static const Enum::YLeaf ipv6;

};

class MplsVpnSafiEnum : public Enum
{
    public:
        static const Enum::YLeaf unicast;
        static const Enum::YLeaf multicast;
        static const Enum::YLeaf flowspec;

};


}
}

#endif /* _CISCO_IOS_XR_MPLS_VPN_OPER_ */

