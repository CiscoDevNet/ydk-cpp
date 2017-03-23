#ifndef _CISCO_IOS_XR_TUNNEL_NVE_OPER_
#define _CISCO_IOS_XR_TUNNEL_NVE_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

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
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;



        class Vnis; //type: Nve::Vnis
        class Interfaces; //type: Nve::Interfaces

        std::shared_ptr<Cisco_IOS_XR_tunnel_nve_oper::Nve::Interfaces> interfaces;
        std::shared_ptr<Cisco_IOS_XR_tunnel_nve_oper::Nve::Vnis> vnis;


}; // Nve


class Nve::Vnis : public Entity
{
    public:
        Vnis();
        ~Vnis();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Vni; //type: Nve::Vnis::Vni

        std::vector<std::shared_ptr<Cisco_IOS_XR_tunnel_nve_oper::Nve::Vnis::Vni> > vni;


}; // Nve::Vnis


class Nve::Vnis::Vni : public Entity
{
    public:
        Vni();
        ~Vni();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf vni; //type: string
        YLeaf interface_name; //type: string
        YLeaf vni_xr; //type: uint32
        YLeaf state; //type: int8
        YLeaf mcast_ipv4_address; //type: string
        YLeaf flags; //type: uint32
        YLeaf vni_min; //type: uint32
        YLeaf vni_max; //type: uint32
        YLeaf mcast_flags; //type: uint32
        YLeaf udp_port; //type: uint32
        YLeaf bvi_ifh; //type: uint32
        YLeaf bvi_state; //type: uint8
        YLeaf bvi_mac; //type: string
        YLeaf vrf_name; //type: string
        YLeaf vrf_id; //type: uint32
        YLeaf ipv4_tbl_id; //type: uint32
        YLeaf ipv6_tbl_id; //type: uint32
        YLeaf vrf_vni; //type: uint32
        YLeaf topo_valid; //type: boolean
        YLeaf topo_id; //type: uint32
        YLeaf topo_name; //type: string



}; // Nve::Vnis::Vni


class Nve::Interfaces : public Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Interface; //type: Nve::Interfaces::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_tunnel_nve_oper::Nve::Interfaces::Interface> > interface;


}; // Nve::Interfaces


class Nve::Interfaces::Interface : public Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf interface_name_xr; //type: string
        YLeaf state; //type: int8
        YLeaf admin_state; //type: int8
        YLeaf flags; //type: uint32
        YLeaf encap; //type: int8
        YLeaf source_interface_name; //type: string
        YLeaf source_ipv4_address; //type: string
        YLeaf if_handle; //type: uint64
        YLeaf source_state; //type: int8
        YLeaf udp_port; //type: uint32
        YLeaf any_cast_source_interface_name; //type: string
        YLeaf any_cast_source_ipv4_address; //type: string
        YLeaf any_cast_source_state; //type: int8
        YLeaf sync_mcast_ipv4_address; //type: string
        YLeaf sync_mcast_flags; //type: uint32



}; // Nve::Interfaces::Interface


}
}

#endif /* _CISCO_IOS_XR_TUNNEL_NVE_OPER_ */

