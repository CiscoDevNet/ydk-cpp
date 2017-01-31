#ifndef _CISCO_IOS_XR_INFRA_RSI_CFG_
#define _CISCO_IOS_XR_INFRA_RSI_CFG_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"


namespace ydk {
namespace Cisco_IOS_XR_infra_rsi_cfg {

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
        std::unique_ptr<Entity> clone_ptr() override;



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
            YLeaf fallback_vrf; //type: string
            YLeaf remote_route_filter_disable; //type: empty
            YLeaf create; //type: empty
            YLeaf mode_big; //type: empty
            YLeaf description; //type: string

        class VpnId : public Entity
        {
            public:
                VpnId();
                ~VpnId();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf vpn_oui; //type: uint32
                YLeaf vpn_index; //type: uint32



        }; // Vrfs::Vrf::VpnId


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


                    YLeaf af_name; //type: VrfAddressFamilyEnum
                    YLeaf saf_name; //type: VrfSubAddressFamilyEnum
                    YLeaf topology_name; //type: string
                    YLeaf create; //type: empty

                class MaximumPrefix : public Entity
                {
                    public:
                        MaximumPrefix();
                        ~MaximumPrefix();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf prefix_limit; //type: uint32
                        YLeaf mid_threshold; //type: uint32



                }; // Vrfs::Vrf::Afs::Af::MaximumPrefix


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


                        YLeaf export_route_policy; //type: string
                        YLeaf import_route_policy; //type: string

                    class ImportRouteTargets : public Entity
                    {
                        public:
                            ImportRouteTargets();
                            ~ImportRouteTargets();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



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


                                    YLeaf type; //type: BgpVrfRouteTargetEnum

                                class AsOrFourByteAs : public Entity
                                {
                                    public:
                                        AsOrFourByteAs();
                                        ~AsOrFourByteAs();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                        YLeaf as_xx; //type: uint32
                                        YLeaf as; //type: uint32
                                        YLeaf as_index; //type: uint32
                                        YLeaf stitching_rt; //type: uint32



                                }; // Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::RouteTargets::RouteTarget::AsOrFourByteAs


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


                                        YLeaf address; //type: string
                                        YLeaf address_index; //type: uint32
                                        YLeaf stitching_rt; //type: uint32



                                }; // Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::RouteTargets::RouteTarget::Ipv4Address


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rsi_cfg::Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::RouteTargets::RouteTarget::AsOrFourByteAs> > as_or_four_byte_as;
                                    std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rsi_cfg::Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::RouteTargets::RouteTarget::Ipv4Address> > ipv4_address;


                            }; // Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::RouteTargets::RouteTarget


                                std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rsi_cfg::Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::RouteTargets::RouteTarget> > route_target;


                        }; // Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::RouteTargets


                            std::unique_ptr<Cisco_IOS_XR_infra_rsi_cfg::Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::RouteTargets> route_targets;


                    }; // Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets


                    class ExportRouteTargets : public Entity
                    {
                        public:
                            ExportRouteTargets();
                            ~ExportRouteTargets();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



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


                                    YLeaf type; //type: BgpVrfRouteTargetEnum

                                class AsOrFourByteAs : public Entity
                                {
                                    public:
                                        AsOrFourByteAs();
                                        ~AsOrFourByteAs();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                        YLeaf as_xx; //type: uint32
                                        YLeaf as; //type: uint32
                                        YLeaf as_index; //type: uint32
                                        YLeaf stitching_rt; //type: uint32



                                }; // Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::RouteTargets::RouteTarget::AsOrFourByteAs


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


                                        YLeaf address; //type: string
                                        YLeaf address_index; //type: uint32
                                        YLeaf stitching_rt; //type: uint32



                                }; // Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::RouteTargets::RouteTarget::Ipv4Address


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rsi_cfg::Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::RouteTargets::RouteTarget::AsOrFourByteAs> > as_or_four_byte_as;
                                    std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rsi_cfg::Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::RouteTargets::RouteTarget::Ipv4Address> > ipv4_address;


                            }; // Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::RouteTargets::RouteTarget


                                std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rsi_cfg::Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::RouteTargets::RouteTarget> > route_target;


                        }; // Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::RouteTargets


                            std::unique_ptr<Cisco_IOS_XR_infra_rsi_cfg::Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::RouteTargets> route_targets;


                    }; // Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets


                    class VrfToGlobalExportRoutePolicy : public Entity
                    {
                        public:
                            VrfToGlobalExportRoutePolicy();
                            ~VrfToGlobalExportRoutePolicy();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf route_policy_name; //type: string
                            YLeaf allow_imported_vpn; //type: boolean



                    }; // Vrfs::Vrf::Afs::Af::Bgp::VrfToGlobalExportRoutePolicy


                    class ExportVrfOptions : public Entity
                    {
                        public:
                            ExportVrfOptions();
                            ~ExportVrfOptions();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf allow_imported_vpn; //type: boolean
                            YLeaf import_stitching_rt; //type: boolean



                    }; // Vrfs::Vrf::Afs::Af::Bgp::ExportVrfOptions


                    class GlobalToVrfImportRoutePolicy : public Entity
                    {
                        public:
                            GlobalToVrfImportRoutePolicy();
                            ~GlobalToVrfImportRoutePolicy();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf route_policy_name; //type: string
                            YLeaf advertise_as_vpn; //type: boolean



                    }; // Vrfs::Vrf::Afs::Af::Bgp::GlobalToVrfImportRoutePolicy


                        std::unique_ptr<Cisco_IOS_XR_infra_rsi_cfg::Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets> export_route_targets;
                        std::unique_ptr<Cisco_IOS_XR_infra_rsi_cfg::Vrfs::Vrf::Afs::Af::Bgp::ExportVrfOptions> export_vrf_options;
                        std::unique_ptr<Cisco_IOS_XR_infra_rsi_cfg::Vrfs::Vrf::Afs::Af::Bgp::GlobalToVrfImportRoutePolicy> global_to_vrf_import_route_policy; // presence node
                        std::unique_ptr<Cisco_IOS_XR_infra_rsi_cfg::Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets> import_route_targets;
                        std::unique_ptr<Cisco_IOS_XR_infra_rsi_cfg::Vrfs::Vrf::Afs::Af::Bgp::VrfToGlobalExportRoutePolicy> vrf_to_global_export_route_policy; // presence node


                }; // Vrfs::Vrf::Afs::Af::Bgp


                    std::unique_ptr<Cisco_IOS_XR_infra_rsi_cfg::Vrfs::Vrf::Afs::Af::Bgp> bgp;
                    std::unique_ptr<Cisco_IOS_XR_infra_rsi_cfg::Vrfs::Vrf::Afs::Af::MaximumPrefix> maximum_prefix; // presence node


            }; // Vrfs::Vrf::Afs::Af


                std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rsi_cfg::Vrfs::Vrf::Afs::Af> > af;


        }; // Vrfs::Vrf::Afs


        class MulticastHost : public Entity
        {
            public:
                MulticastHost();
                ~MulticastHost();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;



            class Ipv4 : public Entity
            {
                public:
                    Ipv4();
                    ~Ipv4();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf interface; //type: string



            }; // Vrfs::Vrf::MulticastHost::Ipv4


            class Ipv6 : public Entity
            {
                public:
                    Ipv6();
                    ~Ipv6();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf interface; //type: string



            }; // Vrfs::Vrf::MulticastHost::Ipv6


                std::unique_ptr<Cisco_IOS_XR_infra_rsi_cfg::Vrfs::Vrf::MulticastHost::Ipv4> ipv4;
                std::unique_ptr<Cisco_IOS_XR_infra_rsi_cfg::Vrfs::Vrf::MulticastHost::Ipv6> ipv6;


        }; // Vrfs::Vrf::MulticastHost


            std::unique_ptr<Cisco_IOS_XR_infra_rsi_cfg::Vrfs::Vrf::Afs> afs;
            std::unique_ptr<Cisco_IOS_XR_infra_rsi_cfg::Vrfs::Vrf::MulticastHost> multicast_host;
            std::unique_ptr<Cisco_IOS_XR_infra_rsi_cfg::Vrfs::Vrf::VpnId> vpn_id; // presence node


    }; // Vrfs::Vrf


        std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rsi_cfg::Vrfs::Vrf> > vrf;


}; // Vrfs

class GlobalAf : public Entity
{
    public:
        GlobalAf();
        ~GlobalAf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;



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


                YLeaf af_name; //type: VrfAddressFamilyEnum
                YLeaf saf_name; //type: VrfSubAddressFamilyEnum
                YLeaf topology_name; //type: string
                YLeaf create; //type: empty



        }; // GlobalAf::Afs::Af


            std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rsi_cfg::GlobalAf::Afs::Af> > af;


    }; // GlobalAf::Afs


        std::unique_ptr<Cisco_IOS_XR_infra_rsi_cfg::GlobalAf::Afs> afs;


}; // GlobalAf

class Srlg : public Entity
{
    public:
        Srlg();
        ~Srlg();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


        YLeaf enable; //type: empty

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


                YLeaf interface_name; //type: string
                YLeaf enable; //type: empty

            class IncludeOptical : public Entity
            {
                public:
                    IncludeOptical();
                    ~IncludeOptical();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf enable; //type: empty
                    YLeaf priority; //type: SrlgPriorityEnum



            }; // Srlg::Interfaces::Interface::IncludeOptical


            class InterfaceGroup : public Entity
            {
                public:
                    InterfaceGroup();
                    ~InterfaceGroup();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf enable; //type: empty

                class GroupNames : public Entity
                {
                    public:
                        GroupNames();
                        ~GroupNames();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class GroupName : public Entity
                    {
                        public:
                            GroupName();
                            ~GroupName();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf group_name_index; //type: uint32
                            YLeaf group_name; //type: string
                            YLeaf srlg_priority; //type: SrlgPriorityEnum



                    }; // Srlg::Interfaces::Interface::InterfaceGroup::GroupNames::GroupName


                        std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rsi_cfg::Srlg::Interfaces::Interface::InterfaceGroup::GroupNames::GroupName> > group_name;


                }; // Srlg::Interfaces::Interface::InterfaceGroup::GroupNames


                    std::unique_ptr<Cisco_IOS_XR_infra_rsi_cfg::Srlg::Interfaces::Interface::InterfaceGroup::GroupNames> group_names;


            }; // Srlg::Interfaces::Interface::InterfaceGroup


            class Values : public Entity
            {
                public:
                    Values();
                    ~Values();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class Value_ : public Entity
                {
                    public:
                        Value_();
                        ~Value_();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf srlg_index; //type: uint32
                        YLeaf srlg_value; //type: uint32
                        YLeaf srlg_priority; //type: SrlgPriorityEnum



                }; // Srlg::Interfaces::Interface::Values::Value_


                    std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rsi_cfg::Srlg::Interfaces::Interface::Values::Value_> > value_;


            }; // Srlg::Interfaces::Interface::Values


            class InterfaceSrlgNames : public Entity
            {
                public:
                    InterfaceSrlgNames();
                    ~InterfaceSrlgNames();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class InterfaceSrlgName : public Entity
                {
                    public:
                        InterfaceSrlgName();
                        ~InterfaceSrlgName();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf srlg_name; //type: string



                }; // Srlg::Interfaces::Interface::InterfaceSrlgNames::InterfaceSrlgName


                    std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rsi_cfg::Srlg::Interfaces::Interface::InterfaceSrlgNames::InterfaceSrlgName> > interface_srlg_name;


            }; // Srlg::Interfaces::Interface::InterfaceSrlgNames


                std::unique_ptr<Cisco_IOS_XR_infra_rsi_cfg::Srlg::Interfaces::Interface::IncludeOptical> include_optical;
                std::unique_ptr<Cisco_IOS_XR_infra_rsi_cfg::Srlg::Interfaces::Interface::InterfaceGroup> interface_group;
                std::unique_ptr<Cisco_IOS_XR_infra_rsi_cfg::Srlg::Interfaces::Interface::InterfaceSrlgNames> interface_srlg_names;
                std::unique_ptr<Cisco_IOS_XR_infra_rsi_cfg::Srlg::Interfaces::Interface::Values> values;


        }; // Srlg::Interfaces::Interface


            std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rsi_cfg::Srlg::Interfaces::Interface> > interface;


    }; // Srlg::Interfaces


    class SrlgNames : public Entity
    {
        public:
            SrlgNames();
            ~SrlgNames();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



        class SrlgName : public Entity
        {
            public:
                SrlgName();
                ~SrlgName();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf srlg_name; //type: string
                YLeaf srlg_value; //type: uint32



        }; // Srlg::SrlgNames::SrlgName


            std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rsi_cfg::Srlg::SrlgNames::SrlgName> > srlg_name;


    }; // Srlg::SrlgNames


    class Groups : public Entity
    {
        public:
            Groups();
            ~Groups();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



        class Group : public Entity
        {
            public:
                Group();
                ~Group();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf group_name; //type: string
                YLeaf enable; //type: empty

            class GroupValues : public Entity
            {
                public:
                    GroupValues();
                    ~GroupValues();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class GroupValue : public Entity
                {
                    public:
                        GroupValue();
                        ~GroupValue();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf srlg_index; //type: uint32
                        YLeaf srlg_value; //type: uint32
                        YLeaf srlg_priority; //type: SrlgPriorityEnum



                }; // Srlg::Groups::Group::GroupValues::GroupValue


                    std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rsi_cfg::Srlg::Groups::Group::GroupValues::GroupValue> > group_value;


            }; // Srlg::Groups::Group::GroupValues


                std::unique_ptr<Cisco_IOS_XR_infra_rsi_cfg::Srlg::Groups::Group::GroupValues> group_values;


        }; // Srlg::Groups::Group


            std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rsi_cfg::Srlg::Groups::Group> > group;


    }; // Srlg::Groups


    class InheritNodes : public Entity
    {
        public:
            InheritNodes();
            ~InheritNodes();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



        class InheritNode : public Entity
        {
            public:
                InheritNode();
                ~InheritNode();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf inherit_node_name; //type: string
                YLeaf enable; //type: empty

            class InheritNodeValues : public Entity
            {
                public:
                    InheritNodeValues();
                    ~InheritNodeValues();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class InheritNodeValue : public Entity
                {
                    public:
                        InheritNodeValue();
                        ~InheritNodeValue();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf srlg_index; //type: uint32
                        YLeaf srlg_value; //type: uint32
                        YLeaf srlg_priority; //type: SrlgPriorityEnum



                }; // Srlg::InheritNodes::InheritNode::InheritNodeValues::InheritNodeValue


                    std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rsi_cfg::Srlg::InheritNodes::InheritNode::InheritNodeValues::InheritNodeValue> > inherit_node_value;


            }; // Srlg::InheritNodes::InheritNode::InheritNodeValues


                std::unique_ptr<Cisco_IOS_XR_infra_rsi_cfg::Srlg::InheritNodes::InheritNode::InheritNodeValues> inherit_node_values;


        }; // Srlg::InheritNodes::InheritNode


            std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rsi_cfg::Srlg::InheritNodes::InheritNode> > inherit_node;


    }; // Srlg::InheritNodes


        std::unique_ptr<Cisco_IOS_XR_infra_rsi_cfg::Srlg::Groups> groups;
        std::unique_ptr<Cisco_IOS_XR_infra_rsi_cfg::Srlg::InheritNodes> inherit_nodes;
        std::unique_ptr<Cisco_IOS_XR_infra_rsi_cfg::Srlg::Interfaces> interfaces;
        std::unique_ptr<Cisco_IOS_XR_infra_rsi_cfg::Srlg::SrlgNames> srlg_names;


}; // Srlg

class VrfGroups : public Entity
{
    public:
        VrfGroups();
        ~VrfGroups();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;



    class VrfGroup : public Entity
    {
        public:
            VrfGroup();
            ~VrfGroup();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


            YLeaf vrf_group_name; //type: string
            YLeaf enable; //type: empty

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



            }; // VrfGroups::VrfGroup::Vrfs::Vrf


                std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rsi_cfg::VrfGroups::VrfGroup::Vrfs::Vrf> > vrf;


        }; // VrfGroups::VrfGroup::Vrfs


            std::unique_ptr<Cisco_IOS_XR_infra_rsi_cfg::VrfGroups::VrfGroup::Vrfs> vrfs;


    }; // VrfGroups::VrfGroup


        std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rsi_cfg::VrfGroups::VrfGroup> > vrf_group;


}; // VrfGroups

class SelectiveVrfDownload : public Entity
{
    public:
        SelectiveVrfDownload();
        ~SelectiveVrfDownload();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


        YLeaf disable; //type: empty



}; // SelectiveVrfDownload


class VrfAddressFamilyEnum : public Enum
{
    public:
        static const Enum::YLeaf ipv4;
        static const Enum::YLeaf ipv6;

};

class SrlgPriorityEnum : public Enum
{
    public:
        static const Enum::YLeaf critical;
        static const Enum::YLeaf high;
        static const Enum::YLeaf default_;
        static const Enum::YLeaf low;
        static const Enum::YLeaf very_low;

};

class VrfSubAddressFamilyEnum : public Enum
{
    public:
        static const Enum::YLeaf unicast;
        static const Enum::YLeaf multicast;
        static const Enum::YLeaf flow_spec;

};


}
}

#endif /* _CISCO_IOS_XR_INFRA_RSI_CFG_ */

