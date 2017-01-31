#ifndef _CISCO_IOS_XR_ICPE_INFRA_CFG_
#define _CISCO_IOS_XR_ICPE_INFRA_CFG_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_icpe_infra_cfg {

class NvSatellites : public Entity
{
    public:
        NvSatellites();
        ~NvSatellites();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;



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


            YLeaf satellite_id; //type: uint32
            YLeaf vrf; //type: string
            YLeaf upgrade_on_connect; //type: uint32
            YLeaf timeout_warning; //type: uint32
            YLeaf device_name; //type: string
            YLeaf description; //type: string
            YLeaf type; //type: string
            YLeaf enable; //type: empty
            YLeaf disc_timeout; //type: uint32
            YLeaf delayed_switchback; //type: uint32
            YLeaf serial_number; //type: string
            YLeaf secret; //type: string
            YLeaf ip_address; //type: string

        class CandidateFabricPorts : public Entity
        {
            public:
                CandidateFabricPorts();
                ~CandidateFabricPorts();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;



            class CandidateFabricPort : public Entity
            {
                public:
                    CandidateFabricPort();
                    ~CandidateFabricPort();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf port_type; //type: string
                    YLeaf slot; //type: uint32
                    YLeaf sub_slot; //type: uint32
                    YLeaf port_range; //type: string



            }; // NvSatellites::NvSatellite::CandidateFabricPorts::CandidateFabricPort


                std::vector<std::unique_ptr<Cisco_IOS_XR_icpe_infra_cfg::NvSatellites::NvSatellite::CandidateFabricPorts::CandidateFabricPort> > candidate_fabric_port;


        }; // NvSatellites::NvSatellite::CandidateFabricPorts


        class ConnectionInfo : public Entity
        {
            public:
                ConnectionInfo();
                ~ConnectionInfo();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf username; //type: string
                YLeaf password; //type: string



        }; // NvSatellites::NvSatellite::ConnectionInfo


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


                YLeaf host_priority; //type: uint32



        }; // NvSatellites::NvSatellite::Redundancy


            std::unique_ptr<Cisco_IOS_XR_icpe_infra_cfg::NvSatellites::NvSatellite::CandidateFabricPorts> candidate_fabric_ports;
            std::unique_ptr<Cisco_IOS_XR_icpe_infra_cfg::NvSatellites::NvSatellite::ConnectionInfo> connection_info;
            std::unique_ptr<Cisco_IOS_XR_icpe_infra_cfg::NvSatellites::NvSatellite::Redundancy> redundancy;


    }; // NvSatellites::NvSatellite


        std::vector<std::unique_ptr<Cisco_IOS_XR_icpe_infra_cfg::NvSatellites::NvSatellite> > nv_satellite;


}; // NvSatellites

class NvSatelliteGlobal : public Entity
{
    public:
        NvSatelliteGlobal();
        ~NvSatelliteGlobal();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;



    class ChassisMac : public Entity
    {
        public:
            ChassisMac();
            ~ChassisMac();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


            YLeaf mac1; //type: uint32
            YLeaf mac2; //type: uint32
            YLeaf mac3; //type: uint32



    }; // NvSatelliteGlobal::ChassisMac


        std::unique_ptr<Cisco_IOS_XR_icpe_infra_cfg::NvSatelliteGlobal::ChassisMac> chassis_mac;


}; // NvSatelliteGlobal



}
}

#endif /* _CISCO_IOS_XR_ICPE_INFRA_CFG_ */

