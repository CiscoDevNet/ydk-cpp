#ifndef _CISCO_IOS_XR_LMP_CFG_
#define _CISCO_IOS_XR_LMP_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_lmp_cfg {

class Lmp : public ydk::Entity
{
    public:
        Lmp();
        ~Lmp();

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

        ydk::YLeaf enable; //type: empty
        class GmplsUni; //type: Lmp::GmplsUni

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lmp_cfg::Lmp::GmplsUni> gmpls_uni;
        
}; // Lmp


class Lmp::GmplsUni : public ydk::Entity
{
    public:
        GmplsUni();
        ~GmplsUni();

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

        class Neighbors; //type: Lmp::GmplsUni::Neighbors
        class RouterId; //type: Lmp::GmplsUni::RouterId
        class Controllers; //type: Lmp::GmplsUni::Controllers

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lmp_cfg::Lmp::GmplsUni::Neighbors> neighbors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lmp_cfg::Lmp::GmplsUni::RouterId> router_id; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lmp_cfg::Lmp::GmplsUni::Controllers> controllers;
        
}; // Lmp::GmplsUni


class Lmp::GmplsUni::Neighbors : public ydk::Entity
{
    public:
        Neighbors();
        ~Neighbors();

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

        class Neighbor; //type: Lmp::GmplsUni::Neighbors::Neighbor

        ydk::YList neighbor;
        
}; // Lmp::GmplsUni::Neighbors


class Lmp::GmplsUni::Neighbors::Neighbor : public ydk::Entity
{
    public:
        Neighbor();
        ~Neighbor();

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

        ydk::YLeaf neighbor_name; //type: string
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf neighbor_router_id; //type: string
        class Ipcc; //type: Lmp::GmplsUni::Neighbors::Neighbor::Ipcc

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lmp_cfg::Lmp::GmplsUni::Neighbors::Neighbor::Ipcc> ipcc;
        
}; // Lmp::GmplsUni::Neighbors::Neighbor


class Lmp::GmplsUni::Neighbors::Neighbor::Ipcc : public ydk::Entity
{
    public:
        Ipcc();
        ~Ipcc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Routed; //type: Lmp::GmplsUni::Neighbors::Neighbor::Ipcc::Routed

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lmp_cfg::Lmp::GmplsUni::Neighbors::Neighbor::Ipcc::Routed> routed;
        
}; // Lmp::GmplsUni::Neighbors::Neighbor::Ipcc


class Lmp::GmplsUni::Neighbors::Neighbor::Ipcc::Routed : public ydk::Entity
{
    public:
        Routed();
        ~Routed();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: empty

}; // Lmp::GmplsUni::Neighbors::Neighbor::Ipcc::Routed


class Lmp::GmplsUni::RouterId : public ydk::Entity
{
    public:
        RouterId();
        ~RouterId();

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
        ydk::YLeaf address; //type: string

}; // Lmp::GmplsUni::RouterId


class Lmp::GmplsUni::Controllers : public ydk::Entity
{
    public:
        Controllers();
        ~Controllers();

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

        class Controller; //type: Lmp::GmplsUni::Controllers::Controller

        ydk::YList controller;
        
}; // Lmp::GmplsUni::Controllers


class Lmp::GmplsUni::Controllers::Controller : public ydk::Entity
{
    public:
        Controller();
        ~Controller();

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

        ydk::YLeaf controller_name; //type: string
        ydk::YLeaf enable; //type: empty
        class LocalLinkId; //type: Lmp::GmplsUni::Controllers::Controller::LocalLinkId
        class Adjacency; //type: Lmp::GmplsUni::Controllers::Controller::Adjacency

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lmp_cfg::Lmp::GmplsUni::Controllers::Controller::LocalLinkId> local_link_id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lmp_cfg::Lmp::GmplsUni::Controllers::Controller::Adjacency> adjacency;
        
}; // Lmp::GmplsUni::Controllers::Controller


class Lmp::GmplsUni::Controllers::Controller::LocalLinkId : public ydk::Entity
{
    public:
        LocalLinkId();
        ~LocalLinkId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_type; //type: OlmAddr
        ydk::YLeaf unnumbered; //type: uint32
        ydk::YLeaf address; //type: string

}; // Lmp::GmplsUni::Controllers::Controller::LocalLinkId


class Lmp::GmplsUni::Controllers::Controller::Adjacency : public ydk::Entity
{
    public:
        Adjacency();
        ~Adjacency();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RemoteNeighbor; //type: Lmp::GmplsUni::Controllers::Controller::Adjacency::RemoteNeighbor

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lmp_cfg::Lmp::GmplsUni::Controllers::Controller::Adjacency::RemoteNeighbor> remote_neighbor;
        
}; // Lmp::GmplsUni::Controllers::Controller::Adjacency


class Lmp::GmplsUni::Controllers::Controller::Adjacency::RemoteNeighbor : public ydk::Entity
{
    public:
        RemoteNeighbor();
        ~RemoteNeighbor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf neighbor_association; //type: string
        ydk::YLeaf link_switching_capability; //type: OlmSwitchingCap
        ydk::YLeaf flexi_grid_capable; //type: uint32
        class InterfaceId; //type: Lmp::GmplsUni::Controllers::Controller::Adjacency::RemoteNeighbor::InterfaceId
        class LinkId; //type: Lmp::GmplsUni::Controllers::Controller::Adjacency::RemoteNeighbor::LinkId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lmp_cfg::Lmp::GmplsUni::Controllers::Controller::Adjacency::RemoteNeighbor::InterfaceId> interface_id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lmp_cfg::Lmp::GmplsUni::Controllers::Controller::Adjacency::RemoteNeighbor::LinkId> link_id;
        
}; // Lmp::GmplsUni::Controllers::Controller::Adjacency::RemoteNeighbor


class Lmp::GmplsUni::Controllers::Controller::Adjacency::RemoteNeighbor::InterfaceId : public ydk::Entity
{
    public:
        InterfaceId();
        ~InterfaceId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_type; //type: OlmAddr
        ydk::YLeaf unnumbered; //type: uint32
        ydk::YLeaf address; //type: string

}; // Lmp::GmplsUni::Controllers::Controller::Adjacency::RemoteNeighbor::InterfaceId


class Lmp::GmplsUni::Controllers::Controller::Adjacency::RemoteNeighbor::LinkId : public ydk::Entity
{
    public:
        LinkId();
        ~LinkId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_type; //type: OlmAddr
        ydk::YLeaf unnumbered; //type: uint32
        ydk::YLeaf address; //type: string

}; // Lmp::GmplsUni::Controllers::Controller::Adjacency::RemoteNeighbor::LinkId

class OlmSwitchingCap : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lsc;
        static const ydk::Enum::YLeaf fsc;

        static int get_enum_value(const std::string & name) {
            if (name == "lsc") return 150;
            if (name == "fsc") return 200;
            return -1;
        }
};

class OlmAddr : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv6;
        static const ydk::Enum::YLeaf unnumbered;
        static const ydk::Enum::YLeaf nsap;

        static int get_enum_value(const std::string & name) {
            if (name == "ipv4") return 101;
            if (name == "ipv6") return 102;
            if (name == "unnumbered") return 103;
            if (name == "nsap") return 104;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_LMP_CFG_ */

