#ifndef _CISCO_IOS_XR_MPLS_TE_CFG_2_
#define _CISCO_IOS_XR_MPLS_TE_CFG_2_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_mpls_te_cfg_0.hpp"
#include "Cisco_IOS_XR_mpls_te_cfg_1.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_mpls_te_cfg {


class MplsTe::TransportProfile::Midpoints::Midpoint : public ydk::Entity
{
    public:
        Midpoint();
        ~Midpoint();

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

        ydk::YLeaf midpoint_name; //type: string
        ydk::YLeaf tunnel_name; //type: string
        ydk::YLeaf lsp_protect; //type: empty
        ydk::YLeaf lsp_id; //type: uint32
        class Source; //type: MplsTe::TransportProfile::Midpoints::Midpoint::Source
        class Destination; //type: MplsTe::TransportProfile::Midpoints::Midpoint::Destination
        class ForwardLsp; //type: MplsTe::TransportProfile::Midpoints::Midpoint::ForwardLsp
        class ReverseLsp; //type: MplsTe::TransportProfile::Midpoints::Midpoint::ReverseLsp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::TransportProfile::Midpoints::Midpoint::Destination> destination; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::TransportProfile::Midpoints::Midpoint::ForwardLsp> forward_lsp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::TransportProfile::Midpoints::Midpoint::ReverseLsp> reverse_lsp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::TransportProfile::Midpoints::Midpoint::Source> source; // presence node
        
}; // MplsTe::TransportProfile::Midpoints::Midpoint


class MplsTe::TransportProfile::Midpoints::Midpoint::Destination : public ydk::Entity
{
    public:
        Destination();
        ~Destination();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_id; //type: string
        ydk::YLeaf tunnel_id; //type: uint32
        ydk::YLeaf global_id; //type: uint32

}; // MplsTe::TransportProfile::Midpoints::Midpoint::Destination


class MplsTe::TransportProfile::Midpoints::Midpoint::ForwardLsp : public ydk::Entity
{
    public:
        ForwardLsp();
        ~ForwardLsp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf forward_bandwidth; //type: uint32
        class ForwardIoMap; //type: MplsTe::TransportProfile::Midpoints::Midpoint::ForwardLsp::ForwardIoMap

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::TransportProfile::Midpoints::Midpoint::ForwardLsp::ForwardIoMap> forward_io_map; // presence node
        
}; // MplsTe::TransportProfile::Midpoints::Midpoint::ForwardLsp


class MplsTe::TransportProfile::Midpoints::Midpoint::ForwardLsp::ForwardIoMap : public ydk::Entity
{
    public:
        ForwardIoMap();
        ~ForwardIoMap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in_label; //type: uint32
        ydk::YLeaf out_label; //type: uint32
        ydk::YLeaf out_link; //type: uint32

}; // MplsTe::TransportProfile::Midpoints::Midpoint::ForwardLsp::ForwardIoMap


class MplsTe::TransportProfile::Midpoints::Midpoint::ReverseLsp : public ydk::Entity
{
    public:
        ReverseLsp();
        ~ReverseLsp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reverse_bandwidth; //type: uint32
        class ReverseIoMap; //type: MplsTe::TransportProfile::Midpoints::Midpoint::ReverseLsp::ReverseIoMap

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::TransportProfile::Midpoints::Midpoint::ReverseLsp::ReverseIoMap> reverse_io_map; // presence node
        
}; // MplsTe::TransportProfile::Midpoints::Midpoint::ReverseLsp


class MplsTe::TransportProfile::Midpoints::Midpoint::ReverseLsp::ReverseIoMap : public ydk::Entity
{
    public:
        ReverseIoMap();
        ~ReverseIoMap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in_label; //type: uint32
        ydk::YLeaf out_label; //type: uint32
        ydk::YLeaf out_link; //type: uint32

}; // MplsTe::TransportProfile::Midpoints::Midpoint::ReverseLsp::ReverseIoMap


class MplsTe::TransportProfile::Midpoints::Midpoint::Source : public ydk::Entity
{
    public:
        Source();
        ~Source();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_id; //type: string
        ydk::YLeaf tunnel_id; //type: uint32
        ydk::YLeaf global_id; //type: uint32

}; // MplsTe::TransportProfile::Midpoints::Midpoint::Source


}
}

#endif /* _CISCO_IOS_XR_MPLS_TE_CFG_2_ */

