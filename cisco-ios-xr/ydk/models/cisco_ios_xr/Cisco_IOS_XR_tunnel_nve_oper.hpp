#ifndef _CISCO_IOS_XR_TUNNEL_NVE_OPER_
#define _CISCO_IOS_XR_TUNNEL_NVE_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_tunnel_nve_oper {

class Nve : public ydk::Entity
{
    public:
        Nve();
        ~Nve();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::shared_ptr<ydk::Entity> clone_ptr() const override;
        ydk::augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;
        std::map<std::pair<std::string, std::string>, std::string> get_namespace_identity_lookup() const override;

        class Vnis; //type: Nve::Vnis
        class Interfaces; //type: Nve::Interfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_nve_oper::Nve::Vnis> vnis;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_nve_oper::Nve::Interfaces> interfaces;
        
}; // Nve


class Nve::Vnis : public ydk::Entity
{
    public:
        Vnis();
        ~Vnis();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Vni; //type: Nve::Vnis::Vni

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_nve_oper::Nve::Vnis::Vni> > vni;
        
}; // Nve::Vnis


class Nve::Vnis::Vni : public ydk::Entity
{
    public:
        Vni();
        ~Vni();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf vni; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf vni_xr; //type: uint32
        ydk::YLeaf state; //type: int8
        ydk::YLeaf mcast_ipv4_address; //type: string
        ydk::YLeaf flags; //type: uint32
        ydk::YLeaf vni_min; //type: uint32
        ydk::YLeaf vni_max; //type: uint32
        ydk::YLeaf mcast_flags; //type: uint32
        ydk::YLeaf udp_port; //type: uint32
        ydk::YLeaf bvi_ifh; //type: uint32
        ydk::YLeaf bvi_state; //type: uint8
        ydk::YLeaf bvi_mac; //type: string
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf vrf_id; //type: uint32
        ydk::YLeaf ipv4_tbl_id; //type: uint32
        ydk::YLeaf ipv6_tbl_id; //type: uint32
        ydk::YLeaf vrf_vni; //type: uint32
        ydk::YLeaf topo_valid; //type: boolean
        ydk::YLeaf topo_id; //type: uint32
        ydk::YLeaf topo_name; //type: string

}; // Nve::Vnis::Vni


class Nve::Interfaces : public ydk::Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Interface; //type: Nve::Interfaces::Interface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_nve_oper::Nve::Interfaces::Interface> > interface;
        
}; // Nve::Interfaces


class Nve::Interfaces::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf interface_name_xr; //type: string
        ydk::YLeaf state; //type: int8
        ydk::YLeaf admin_state; //type: int8
        ydk::YLeaf flags; //type: uint32
        ydk::YLeaf encap; //type: int8
        ydk::YLeaf source_interface_name; //type: string
        ydk::YLeaf source_ipv4_address; //type: string
        ydk::YLeaf if_handle; //type: uint64
        ydk::YLeaf source_state; //type: int8
        ydk::YLeaf udp_port; //type: uint32
        ydk::YLeaf any_cast_source_interface_name; //type: string
        ydk::YLeaf any_cast_source_ipv4_address; //type: string
        ydk::YLeaf any_cast_source_state; //type: int8
        ydk::YLeaf sync_mcast_ipv4_address; //type: string
        ydk::YLeaf sync_mcast_flags; //type: uint32

}; // Nve::Interfaces::Interface


}
}

#endif /* _CISCO_IOS_XR_TUNNEL_NVE_OPER_ */

