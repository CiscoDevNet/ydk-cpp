#ifndef _CISCO_IOS_XR_TUNNEL_NVE_OPER_
#define _CISCO_IOS_XR_TUNNEL_NVE_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_tunnel_nve_oper {

class Nve : public Entity
{
    public:
        Nve();
        ~Nve();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


    class Vnis : public Entity
    {
        public:
            Vnis();
            ~Vnis();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class Vni : public Entity
        {
            public:
                Vni();
                ~Vni();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value vni; //type: string
                Value interface_name; //type: string
                Value vni_xr; //type: uint32
                Value state; //type: int8
                Value mcast_ipv4_address; //type: string
                Value flags; //type: uint32
                Value vni_min; //type: uint32
                Value vni_max; //type: uint32
                Value mcast_flags; //type: uint32
                Value udp_port; //type: uint32
                Value bvi_ifh; //type: uint32
                Value bvi_state; //type: uint8
                Value bvi_mac; //type: string
                Value vrf_name; //type: string
                Value vrf_id; //type: uint32
                Value ipv4_tbl_id; //type: uint32
                Value ipv6_tbl_id; //type: uint32
                Value vrf_vni; //type: uint32
                Value topo_valid; //type: boolean
                Value topo_id; //type: uint32
                Value topo_name; //type: string




        }; // Nve::Vnis::Vni


            std::vector<std::unique_ptr<Cisco_IOS_XR_tunnel_nve_oper::Nve::Vnis::Vni> > vni;


    }; // Nve::Vnis


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
                Value interface_name_xr; //type: string
                Value state; //type: int8
                Value admin_state; //type: int8
                Value flags; //type: uint32
                Value encap; //type: int8
                Value source_interface_name; //type: string
                Value source_ipv4_address; //type: string
                Value if_handle; //type: uint64
                Value source_state; //type: int8
                Value udp_port; //type: uint32
                Value any_cast_source_interface_name; //type: string
                Value any_cast_source_ipv4_address; //type: string
                Value any_cast_source_state; //type: int8
                Value sync_mcast_ipv4_address; //type: string
                Value sync_mcast_flags; //type: uint32




        }; // Nve::Interfaces::Interface


            std::vector<std::unique_ptr<Cisco_IOS_XR_tunnel_nve_oper::Nve::Interfaces::Interface> > interface;


    }; // Nve::Interfaces


        std::unique_ptr<Cisco_IOS_XR_tunnel_nve_oper::Nve::Interfaces> interfaces;
        std::unique_ptr<Cisco_IOS_XR_tunnel_nve_oper::Nve::Vnis> vnis;


}; // Nve



}
}

#endif /* _CISCO_IOS_XR_TUNNEL_NVE_OPER_ */

