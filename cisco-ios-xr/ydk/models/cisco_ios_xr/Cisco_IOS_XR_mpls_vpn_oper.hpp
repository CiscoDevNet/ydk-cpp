#ifndef _CISCO_IOS_XR_MPLS_VPN_OPER_
#define _CISCO_IOS_XR_MPLS_VPN_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_mpls_vpn_oper {

class L3vpn : public ydk::Entity
{
    public:
        L3vpn();
        ~L3vpn();

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

        class InvalidVrfs; //type: L3vpn::InvalidVrfs
        class Vrfs; //type: L3vpn::Vrfs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_vpn_oper::L3vpn::InvalidVrfs> invalid_vrfs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_vpn_oper::L3vpn::Vrfs> vrfs;
        
}; // L3vpn


class L3vpn::InvalidVrfs : public ydk::Entity
{
    public:
        InvalidVrfs();
        ~InvalidVrfs();

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

        class InvalidVrf; //type: L3vpn::InvalidVrfs::InvalidVrf

        ydk::YList invalid_vrf;
        
}; // L3vpn::InvalidVrfs


class L3vpn::InvalidVrfs::InvalidVrf : public ydk::Entity
{
    public:
        InvalidVrf();
        ~InvalidVrf();

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

        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf vrf_name_xr; //type: string
        ydk::YLeaf vrf_description; //type: string
        ydk::YLeaf route_distinguisher; //type: string
        ydk::YLeaf is_big_vrf; //type: boolean
        class Interface; //type: L3vpn::InvalidVrfs::InvalidVrf::Interface
        class Af; //type: L3vpn::InvalidVrfs::InvalidVrf::Af

        ydk::YList interface;
        ydk::YList af;
        
}; // L3vpn::InvalidVrfs::InvalidVrf


class L3vpn::InvalidVrfs::InvalidVrf::Interface : public ydk::Entity
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

        ydk::YLeaf interface_name; //type: string

}; // L3vpn::InvalidVrfs::InvalidVrf::Interface


class L3vpn::InvalidVrfs::InvalidVrf::Af : public ydk::Entity
{
    public:
        Af();
        ~Af();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: MplsVpnAfi
        ydk::YLeaf saf_name; //type: MplsVpnSafi
        ydk::YLeaf import_route_policy; //type: string
        ydk::YLeaf export_route_policy; //type: string
        class RouteTarget; //type: L3vpn::InvalidVrfs::InvalidVrf::Af::RouteTarget

        ydk::YList route_target;
        
}; // L3vpn::InvalidVrfs::InvalidVrf::Af


class L3vpn::InvalidVrfs::InvalidVrf::Af::RouteTarget : public ydk::Entity
{
    public:
        RouteTarget();
        ~RouteTarget();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_target_type; //type: MplsVpnRt
        ydk::YLeaf route_target_value; //type: string
        ydk::YLeaf af_name; //type: MplsVpnAfi
        ydk::YLeaf saf_name; //type: MplsVpnSafi

}; // L3vpn::InvalidVrfs::InvalidVrf::Af::RouteTarget


class L3vpn::Vrfs : public ydk::Entity
{
    public:
        Vrfs();
        ~Vrfs();

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

        class Vrf; //type: L3vpn::Vrfs::Vrf

        ydk::YList vrf;
        
}; // L3vpn::Vrfs


class L3vpn::Vrfs::Vrf : public ydk::Entity
{
    public:
        Vrf();
        ~Vrf();

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

        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf vrf_name_xr; //type: string
        ydk::YLeaf vrf_description; //type: string
        ydk::YLeaf route_distinguisher; //type: string
        ydk::YLeaf is_big_vrf; //type: boolean
        class Interface; //type: L3vpn::Vrfs::Vrf::Interface
        class Af; //type: L3vpn::Vrfs::Vrf::Af

        ydk::YList interface;
        ydk::YList af;
        
}; // L3vpn::Vrfs::Vrf


class L3vpn::Vrfs::Vrf::Interface : public ydk::Entity
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

        ydk::YLeaf interface_name; //type: string

}; // L3vpn::Vrfs::Vrf::Interface


class L3vpn::Vrfs::Vrf::Af : public ydk::Entity
{
    public:
        Af();
        ~Af();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: MplsVpnAfi
        ydk::YLeaf saf_name; //type: MplsVpnSafi
        ydk::YLeaf import_route_policy; //type: string
        ydk::YLeaf export_route_policy; //type: string
        class RouteTarget; //type: L3vpn::Vrfs::Vrf::Af::RouteTarget

        ydk::YList route_target;
        
}; // L3vpn::Vrfs::Vrf::Af


class L3vpn::Vrfs::Vrf::Af::RouteTarget : public ydk::Entity
{
    public:
        RouteTarget();
        ~RouteTarget();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_target_type; //type: MplsVpnRt
        ydk::YLeaf route_target_value; //type: string
        ydk::YLeaf af_name; //type: MplsVpnAfi
        ydk::YLeaf saf_name; //type: MplsVpnSafi

}; // L3vpn::Vrfs::Vrf::Af::RouteTarget

class MplsVpnRt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf import;
        static const ydk::Enum::YLeaf export_;
        static const ydk::Enum::YLeaf both;

        static int get_enum_value(const std::string & name) {
            if (name == "import") return 1;
            if (name == "export") return 2;
            if (name == "both") return 3;
            return -1;
        }
};

class MplsVpnAfi : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv6;

        static int get_enum_value(const std::string & name) {
            if (name == "ipv4") return 1;
            if (name == "ipv6") return 2;
            return -1;
        }
};

class MplsVpnSafi : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unicast;
        static const ydk::Enum::YLeaf multicast;
        static const ydk::Enum::YLeaf flowspec;

        static int get_enum_value(const std::string & name) {
            if (name == "unicast") return 1;
            if (name == "multicast") return 2;
            if (name == "flowspec") return 133;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_MPLS_VPN_OPER_ */

