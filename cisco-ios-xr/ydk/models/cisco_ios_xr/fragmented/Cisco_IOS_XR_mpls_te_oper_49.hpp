#ifndef _CISCO_IOS_XR_MPLS_TE_OPER_49_
#define _CISCO_IOS_XR_MPLS_TE_OPER_49_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_mpls_te_oper_36.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_37.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_48.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_mpls_te_oper {


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::Tspec : public ydk::Entity
{
    public:
        Tspec();
        ~Tspec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf average_rate; //type: uint64
        ydk::YLeaf maximum_burst; //type: uint64
        ydk::YLeaf peak_rate; //type: uint64

}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::Tspec


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GenericTspec : public ydk::Entity
{
    public:
        GenericTspec();
        ~GenericTspec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tspec_type; //type: TeMgmtGenericTspec
        class Otntspec; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GenericTspec::Otntspec

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GenericTspec::Otntspec> otntspec;
        
}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GenericTspec


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GenericTspec::Otntspec : public ydk::Entity
{
    public:
        Otntspec();
        ~Otntspec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf signal_type; //type: uint8
        ydk::YLeaf nmc_or_tolerance; //type: uint16
        ydk::YLeaf nvc; //type: uint16
        ydk::YLeaf multiplier; //type: uint16
        ydk::YLeaf bit_rate; //type: uint32

}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GenericTspec::Otntspec


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::Fspec : public ydk::Entity
{
    public:
        Fspec();
        ~Fspec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf average_rate; //type: uint64
        ydk::YLeaf maximum_burst; //type: uint64
        ydk::YLeaf peak_rate; //type: uint64

}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::Fspec


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GenericFspec : public ydk::Entity
{
    public:
        GenericFspec();
        ~GenericFspec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fspec_type; //type: TeMgmtGenericFspec
        class Otnfspec; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GenericFspec::Otnfspec

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GenericFspec::Otnfspec> otnfspec;
        
}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GenericFspec


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GenericFspec::Otnfspec : public ydk::Entity
{
    public:
        Otnfspec();
        ~Otnfspec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf signal_type; //type: uint8
        ydk::YLeaf nmc_or_tolerance; //type: uint16
        ydk::YLeaf nvc; //type: uint16
        ydk::YLeaf multiplier; //type: uint16
        ydk::YLeaf bit_rate; //type: uint32

}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GenericFspec::Otnfspec


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::NextHopAddressGeneric : public ydk::Entity
{
    public:
        NextHopAddressGeneric();
        ~NextHopAddressGeneric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TeAddr; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::NextHopAddressGeneric::TeAddr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::NextHopAddressGeneric::TeAddr> te_addr;
        
}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::NextHopAddressGeneric


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::NextHopAddressGeneric::TeAddr : public ydk::Entity
{
    public:
        TeAddr();
        ~TeAddr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: TeAddr
        ydk::YLeaf ipv4_address; //type: string
        class Ipv4UnnumberedAddress; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::NextHopAddressGeneric::TeAddr::Ipv4UnnumberedAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::NextHopAddressGeneric::TeAddr::Ipv4UnnumberedAddress> ipv4_unnumbered_address;
        
}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::NextHopAddressGeneric::TeAddr


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::NextHopAddressGeneric::TeAddr::Ipv4UnnumberedAddress : public ydk::Entity
{
    public:
        Ipv4UnnumberedAddress();
        ~Ipv4UnnumberedAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf router_id; //type: string
        ydk::YLeaf interface_index; //type: uint32

}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::NextHopAddressGeneric::TeAddr::Ipv4UnnumberedAddress


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::PreviousHopAddressGeneric : public ydk::Entity
{
    public:
        PreviousHopAddressGeneric();
        ~PreviousHopAddressGeneric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TeAddr; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::PreviousHopAddressGeneric::TeAddr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::PreviousHopAddressGeneric::TeAddr> te_addr;
        
}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::PreviousHopAddressGeneric


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::PreviousHopAddressGeneric::TeAddr : public ydk::Entity
{
    public:
        TeAddr();
        ~TeAddr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: TeAddr
        ydk::YLeaf ipv4_address; //type: string
        class Ipv4UnnumberedAddress; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::PreviousHopAddressGeneric::TeAddr::Ipv4UnnumberedAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::PreviousHopAddressGeneric::TeAddr::Ipv4UnnumberedAddress> ipv4_unnumbered_address;
        
}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::PreviousHopAddressGeneric::TeAddr


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::PreviousHopAddressGeneric::TeAddr::Ipv4UnnumberedAddress : public ydk::Entity
{
    public:
        Ipv4UnnumberedAddress();
        ~Ipv4UnnumberedAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf router_id; //type: string
        ydk::YLeaf interface_index; //type: uint32

}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::PreviousHopAddressGeneric::TeAddr::Ipv4UnnumberedAddress


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::IncomingAddressGeneric : public ydk::Entity
{
    public:
        IncomingAddressGeneric();
        ~IncomingAddressGeneric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TeAddr; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::IncomingAddressGeneric::TeAddr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::IncomingAddressGeneric::TeAddr> te_addr;
        
}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::IncomingAddressGeneric


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::IncomingAddressGeneric::TeAddr : public ydk::Entity
{
    public:
        TeAddr();
        ~TeAddr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: TeAddr
        ydk::YLeaf ipv4_address; //type: string
        class Ipv4UnnumberedAddress; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::IncomingAddressGeneric::TeAddr::Ipv4UnnumberedAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::IncomingAddressGeneric::TeAddr::Ipv4UnnumberedAddress> ipv4_unnumbered_address;
        
}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::IncomingAddressGeneric::TeAddr


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::IncomingAddressGeneric::TeAddr::Ipv4UnnumberedAddress : public ydk::Entity
{
    public:
        Ipv4UnnumberedAddress();
        ~Ipv4UnnumberedAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf router_id; //type: string
        ydk::YLeaf interface_index; //type: uint32

}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::IncomingAddressGeneric::TeAddr::Ipv4UnnumberedAddress


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::S2LConvergence : public ydk::Entity
{
    public:
        S2LConvergence();
        ~S2LConvergence();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf path_in; //type: uint64
        ydk::YLeaf path_out; //type: uint64
        ydk::YLeaf resv_in; //type: uint64
        ydk::YLeaf resv_out; //type: uint64
        ydk::YLeaf label_rewrite; //type: uint64
        ydk::YLeaf tunnel_rewrite; //type: uint64
        ydk::YLeaf creation_time; //type: uint64

}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::S2LConvergence


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::SoftPreemption : public ydk::Entity
{
    public:
        SoftPreemption();
        ~SoftPreemption();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf status; //type: MplsTeSoftPreemptionState
        ydk::YLeaf soft_preemption_timestamp; //type: uint32
        ydk::YLeaf soft_preemption_link; //type: string
        ydk::YLeaf preempting_link_address; //type: string
        ydk::YLeaf time_to_hard_preemption; //type: uint16
        ydk::YLeaf fr_rrewrite; //type: boolean
        ydk::YLeaf fr_rrewrite_tunnel_name; //type: string

}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::SoftPreemption


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GmplsLabels : public ydk::Entity
{
    public:
        GmplsLabels();
        ~GmplsLabels();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PathIngressLabel; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GmplsLabels::PathIngressLabel
        class PathEgressLabel; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GmplsLabels::PathEgressLabel
        class ResvIngressLabel; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GmplsLabels::ResvIngressLabel
        class ResvEgressLabel; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GmplsLabels::ResvEgressLabel

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GmplsLabels::PathIngressLabel> path_ingress_label;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GmplsLabels::PathEgressLabel> path_egress_label;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GmplsLabels::ResvIngressLabel> resv_ingress_label;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GmplsLabels::ResvEgressLabel> resv_egress_label;
        
}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GmplsLabels


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GmplsLabels::PathIngressLabel : public ydk::Entity
{
    public:
        PathIngressLabel();
        ~PathIngressLabel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label_type; //type: MplsTeMgmtGmplsLabel
        class Wdm; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GmplsLabels::PathIngressLabel::Wdm
        class Otn; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GmplsLabels::PathIngressLabel::Otn

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GmplsLabels::PathIngressLabel::Wdm> wdm;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GmplsLabels::PathIngressLabel::Otn> otn;
        
}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GmplsLabels::PathIngressLabel


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GmplsLabels::PathIngressLabel::Wdm : public ydk::Entity
{
    public:
        Wdm();
        ~Wdm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label_set; //type: boolean
        ydk::YLeaf grid; //type: GmplsUniMgmtWdmGrid
        ydk::YLeaf channel_spacing; //type: GmplsUniMgmtDwdmCs
        ydk::YLeaf identifier; //type: uint16
        ydk::YLeaf channel; //type: int16

}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GmplsLabels::PathIngressLabel::Wdm


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GmplsLabels::PathIngressLabel::Otn : public ydk::Entity
{
    public:
        Otn();
        ~Otn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tpn; //type: uint16
        ydk::YLeaf bit_map_length; //type: uint16
        class BitMap; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GmplsLabels::PathIngressLabel::Otn::BitMap

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GmplsLabels::PathIngressLabel::Otn::BitMap> > bit_map;
        
}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GmplsLabels::PathIngressLabel::Otn


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GmplsLabels::PathIngressLabel::Otn::BitMap : public ydk::Entity
{
    public:
        BitMap();
        ~BitMap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint8

}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GmplsLabels::PathIngressLabel::Otn::BitMap


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GmplsLabels::PathEgressLabel : public ydk::Entity
{
    public:
        PathEgressLabel();
        ~PathEgressLabel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label_type; //type: MplsTeMgmtGmplsLabel
        class Wdm; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GmplsLabels::PathEgressLabel::Wdm
        class Otn; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GmplsLabels::PathEgressLabel::Otn

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GmplsLabels::PathEgressLabel::Wdm> wdm;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GmplsLabels::PathEgressLabel::Otn> otn;
        
}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GmplsLabels::PathEgressLabel


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GmplsLabels::PathEgressLabel::Wdm : public ydk::Entity
{
    public:
        Wdm();
        ~Wdm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label_set; //type: boolean
        ydk::YLeaf grid; //type: GmplsUniMgmtWdmGrid
        ydk::YLeaf channel_spacing; //type: GmplsUniMgmtDwdmCs
        ydk::YLeaf identifier; //type: uint16
        ydk::YLeaf channel; //type: int16

}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GmplsLabels::PathEgressLabel::Wdm


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GmplsLabels::PathEgressLabel::Otn : public ydk::Entity
{
    public:
        Otn();
        ~Otn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tpn; //type: uint16
        ydk::YLeaf bit_map_length; //type: uint16
        class BitMap; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GmplsLabels::PathEgressLabel::Otn::BitMap

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GmplsLabels::PathEgressLabel::Otn::BitMap> > bit_map;
        
}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GmplsLabels::PathEgressLabel::Otn


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GmplsLabels::PathEgressLabel::Otn::BitMap : public ydk::Entity
{
    public:
        BitMap();
        ~BitMap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint8

}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GmplsLabels::PathEgressLabel::Otn::BitMap


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GmplsLabels::ResvIngressLabel : public ydk::Entity
{
    public:
        ResvIngressLabel();
        ~ResvIngressLabel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label_type; //type: MplsTeMgmtGmplsLabel
        class Wdm; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GmplsLabels::ResvIngressLabel::Wdm
        class Otn; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GmplsLabels::ResvIngressLabel::Otn

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GmplsLabels::ResvIngressLabel::Wdm> wdm;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GmplsLabels::ResvIngressLabel::Otn> otn;
        
}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GmplsLabels::ResvIngressLabel


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GmplsLabels::ResvIngressLabel::Wdm : public ydk::Entity
{
    public:
        Wdm();
        ~Wdm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label_set; //type: boolean
        ydk::YLeaf grid; //type: GmplsUniMgmtWdmGrid
        ydk::YLeaf channel_spacing; //type: GmplsUniMgmtDwdmCs
        ydk::YLeaf identifier; //type: uint16
        ydk::YLeaf channel; //type: int16

}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GmplsLabels::ResvIngressLabel::Wdm


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GmplsLabels::ResvIngressLabel::Otn : public ydk::Entity
{
    public:
        Otn();
        ~Otn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tpn; //type: uint16
        ydk::YLeaf bit_map_length; //type: uint16
        class BitMap; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GmplsLabels::ResvIngressLabel::Otn::BitMap

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GmplsLabels::ResvIngressLabel::Otn::BitMap> > bit_map;
        
}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GmplsLabels::ResvIngressLabel::Otn


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GmplsLabels::ResvIngressLabel::Otn::BitMap : public ydk::Entity
{
    public:
        BitMap();
        ~BitMap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint8

}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GmplsLabels::ResvIngressLabel::Otn::BitMap


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GmplsLabels::ResvEgressLabel : public ydk::Entity
{
    public:
        ResvEgressLabel();
        ~ResvEgressLabel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label_type; //type: MplsTeMgmtGmplsLabel
        class Wdm; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GmplsLabels::ResvEgressLabel::Wdm
        class Otn; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GmplsLabels::ResvEgressLabel::Otn

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GmplsLabels::ResvEgressLabel::Wdm> wdm;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GmplsLabels::ResvEgressLabel::Otn> otn;
        
}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GmplsLabels::ResvEgressLabel


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GmplsLabels::ResvEgressLabel::Wdm : public ydk::Entity
{
    public:
        Wdm();
        ~Wdm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label_set; //type: boolean
        ydk::YLeaf grid; //type: GmplsUniMgmtWdmGrid
        ydk::YLeaf channel_spacing; //type: GmplsUniMgmtDwdmCs
        ydk::YLeaf identifier; //type: uint16
        ydk::YLeaf channel; //type: int16

}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GmplsLabels::ResvEgressLabel::Wdm


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GmplsLabels::ResvEgressLabel::Otn : public ydk::Entity
{
    public:
        Otn();
        ~Otn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tpn; //type: uint16
        ydk::YLeaf bit_map_length; //type: uint16
        class BitMap; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GmplsLabels::ResvEgressLabel::Otn::BitMap

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GmplsLabels::ResvEgressLabel::Otn::BitMap> > bit_map;
        
}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GmplsLabels::ResvEgressLabel::Otn


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GmplsLabels::ResvEgressLabel::Otn::BitMap : public ydk::Entity
{
    public:
        BitMap();
        ~BitMap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint8

}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GmplsLabels::ResvEgressLabel::Otn::BitMap


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L : public ydk::Entity
{
    public:
        OtnS2L();
        ~OtnS2L();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Otn; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn
        class Aps; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Aps

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn> otn;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Aps> aps;
        
}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn : public ydk::Entity
{
    public:
        Otn();
        ~Otn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf incoming_controller; //type: string
        ydk::YLeaf incoming_controller_state; //type: TeControllerState
        ydk::YLeaf incoming_sub_controller; //type: string
        ydk::YLeaf incoming_sub_controller_state; //type: TeControllerState
        ydk::YLeaf outgoing_controller; //type: string
        ydk::YLeaf outgoing_controller_state; //type: TeControllerState
        ydk::YLeaf outgoing_sub_controller; //type: string
        ydk::YLeaf outgoing_sub_controller_state; //type: TeControllerState
        ydk::YLeaf cross_connect_id; //type: uint32
        ydk::YLeaf is_connected; //type: boolean
        ydk::YLeaf uptime; //type: uint32
        ydk::YLeaf outgoing_controller_ifhandle; //type: string
        ydk::YLeaf outgoing_sub_controller_ifhandle; //type: string
        ydk::YLeaf incoming_controller_ifhandle; //type: string
        ydk::YLeaf incoming_sub_controller_ifhandle; //type: string
        ydk::YLeaf gpid; //type: uint16
        class Bandwidth; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Bandwidth
        class Labels; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Bandwidth> bandwidth;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels> labels;
        
}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Bandwidth : public ydk::Entity
{
    public:
        Bandwidth();
        ~Bandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf odu_level; //type: TeOduLevel
        class OduFlexCbr; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Bandwidth::OduFlexCbr
        class OduFlexGfpFRes; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Bandwidth::OduFlexGfpFRes
        class OduFlexGfpFNonRes; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Bandwidth::OduFlexGfpFNonRes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Bandwidth::OduFlexCbr> odu_flex_cbr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Bandwidth::OduFlexGfpFRes> odu_flex_gfp_f_res;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Bandwidth::OduFlexGfpFNonRes> odu_flex_gfp_f_non_res;
        
}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Bandwidth


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Bandwidth::OduFlexCbr : public ydk::Entity
{
    public:
        OduFlexCbr();
        ~OduFlexCbr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bit_rate; //type: uint32
        ydk::YLeaf tolerance; //type: uint16

}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Bandwidth::OduFlexCbr


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Bandwidth::OduFlexGfpFRes : public ydk::Entity
{
    public:
        OduFlexGfpFRes();
        ~OduFlexGfpFRes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bit_rate; //type: uint32

}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Bandwidth::OduFlexGfpFRes


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Bandwidth::OduFlexGfpFNonRes : public ydk::Entity
{
    public:
        OduFlexGfpFNonRes();
        ~OduFlexGfpFNonRes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bit_rate; //type: uint32

}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Bandwidth::OduFlexGfpFNonRes


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels : public ydk::Entity
{
    public:
        Labels();
        ~Labels();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PathIngressLabel; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel
        class PathEgressLabel; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel
        class ResvIngressLabel; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel
        class ResvEgressLabel; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel> path_ingress_label;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel> path_egress_label;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel> resv_ingress_label;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel> resv_egress_label;
        
}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel : public ydk::Entity
{
    public:
        PathIngressLabel();
        ~PathIngressLabel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label_type; //type: MplsTeMgmtGmplsLabel
        class Wdm; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel::Wdm
        class Otn_; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel::Otn_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel::Wdm> wdm;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel::Otn_> otn;
        
}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel::Wdm : public ydk::Entity
{
    public:
        Wdm();
        ~Wdm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label_set; //type: boolean
        ydk::YLeaf grid; //type: GmplsUniMgmtWdmGrid
        ydk::YLeaf channel_spacing; //type: GmplsUniMgmtDwdmCs
        ydk::YLeaf identifier; //type: uint16
        ydk::YLeaf channel; //type: int16

}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel::Wdm


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel::Otn_ : public ydk::Entity
{
    public:
        Otn_();
        ~Otn_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tpn; //type: uint16
        ydk::YLeaf bit_map_length; //type: uint16
        class BitMap; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel::Otn_::BitMap

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel::Otn_::BitMap> > bit_map;
        
}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel::Otn_


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel::Otn_::BitMap : public ydk::Entity
{
    public:
        BitMap();
        ~BitMap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint8

}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel::Otn_::BitMap


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel : public ydk::Entity
{
    public:
        PathEgressLabel();
        ~PathEgressLabel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label_type; //type: MplsTeMgmtGmplsLabel
        class Wdm; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel::Wdm
        class Otn_; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel::Otn_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel::Wdm> wdm;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel::Otn_> otn;
        
}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel::Wdm : public ydk::Entity
{
    public:
        Wdm();
        ~Wdm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label_set; //type: boolean
        ydk::YLeaf grid; //type: GmplsUniMgmtWdmGrid
        ydk::YLeaf channel_spacing; //type: GmplsUniMgmtDwdmCs
        ydk::YLeaf identifier; //type: uint16
        ydk::YLeaf channel; //type: int16

}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel::Wdm


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel::Otn_ : public ydk::Entity
{
    public:
        Otn_();
        ~Otn_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tpn; //type: uint16
        ydk::YLeaf bit_map_length; //type: uint16
        class BitMap; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel::Otn_::BitMap

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel::Otn_::BitMap> > bit_map;
        
}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel::Otn_


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel::Otn_::BitMap : public ydk::Entity
{
    public:
        BitMap();
        ~BitMap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint8

}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel::Otn_::BitMap


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel : public ydk::Entity
{
    public:
        ResvIngressLabel();
        ~ResvIngressLabel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label_type; //type: MplsTeMgmtGmplsLabel
        class Wdm; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Wdm
        class Otn_; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Otn_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Wdm> wdm;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Otn_> otn;
        
}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Wdm : public ydk::Entity
{
    public:
        Wdm();
        ~Wdm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label_set; //type: boolean
        ydk::YLeaf grid; //type: GmplsUniMgmtWdmGrid
        ydk::YLeaf channel_spacing; //type: GmplsUniMgmtDwdmCs
        ydk::YLeaf identifier; //type: uint16
        ydk::YLeaf channel; //type: int16

}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Wdm


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Otn_ : public ydk::Entity
{
    public:
        Otn_();
        ~Otn_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tpn; //type: uint16
        ydk::YLeaf bit_map_length; //type: uint16
        class BitMap; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Otn_::BitMap

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Otn_::BitMap> > bit_map;
        
}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Otn_


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Otn_::BitMap : public ydk::Entity
{
    public:
        BitMap();
        ~BitMap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint8

}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Otn_::BitMap


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel : public ydk::Entity
{
    public:
        ResvEgressLabel();
        ~ResvEgressLabel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label_type; //type: MplsTeMgmtGmplsLabel
        class Wdm; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::Wdm
        class Otn_; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::Otn_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::Wdm> wdm;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::Otn_> otn;
        
}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::Wdm : public ydk::Entity
{
    public:
        Wdm();
        ~Wdm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label_set; //type: boolean
        ydk::YLeaf grid; //type: GmplsUniMgmtWdmGrid
        ydk::YLeaf channel_spacing; //type: GmplsUniMgmtDwdmCs
        ydk::YLeaf identifier; //type: uint16
        ydk::YLeaf channel; //type: int16

}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::Wdm


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::Otn_ : public ydk::Entity
{
    public:
        Otn_();
        ~Otn_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tpn; //type: uint16
        ydk::YLeaf bit_map_length; //type: uint16
        class BitMap; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::Otn_::BitMap

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::Otn_::BitMap> > bit_map;
        
}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::Otn_


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::Otn_::BitMap : public ydk::Entity
{
    public:
        BitMap();
        ~BitMap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint8

}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::Otn_::BitMap


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Aps : public ydk::Entity
{
    public:
        Aps();
        ~Aps();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ProtectionInfo; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Aps::ProtectionInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Aps::ProtectionInfo> protection_info;
        
}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Aps


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Aps::ProtectionInfo : public ydk::Entity
{
    public:
        ProtectionInfo();
        ~ProtectionInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sbit; //type: boolean
        ydk::YLeaf pbit; //type: boolean
        ydk::YLeaf nbit; //type: boolean
        ydk::YLeaf obit; //type: boolean
        ydk::YLeaf protect_type; //type: TeProtect
        ydk::YLeaf is_wtr_present; //type: boolean
        ydk::YLeaf wtr_timeout; //type: uint32
        ydk::YLeaf is_hopresent; //type: boolean
        ydk::YLeaf ho_timeout; //type: uint32
        ydk::YLeaf is_snc_mode_present; //type: boolean
        ydk::YLeaf snc_mode; //type: TeApsSncMode
        ydk::YLeaf tcm_id; //type: uint32
        ydk::YLeaf path_prot_profile_type; //type: TePathProtProfile

}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Aps::ProtectionInfo


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::HeadEndBfdInfo : public ydk::Entity
{
    public:
        HeadEndBfdInfo();
        ~HeadEndBfdInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf creation_time; //type: uint32
        ydk::YLeaf lspbfd_type; //type: TeVifBfd
        ydk::YLeaf is_redundant; //type: boolean
        ydk::YLeaf bfd_reverse_path_stale; //type: boolean
        class SessionInfo; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::HeadEndBfdInfo::SessionInfo
        class DeletionHistory; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::HeadEndBfdInfo::DeletionHistory
        class BfdReversePathLabel; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::HeadEndBfdInfo::BfdReversePathLabel

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::HeadEndBfdInfo::SessionInfo> session_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::HeadEndBfdInfo::DeletionHistory> deletion_history;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::HeadEndBfdInfo::BfdReversePathLabel> > bfd_reverse_path_label;
        
}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::HeadEndBfdInfo


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::HeadEndBfdInfo::SessionInfo : public ydk::Entity
{
    public:
        SessionInfo();
        ~SessionInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf state; //type: TeBfdLspSessionState
        ydk::YLeaf state_change_time; //type: uint32

}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::HeadEndBfdInfo::SessionInfo


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::HeadEndBfdInfo::DeletionHistory : public ydk::Entity
{
    public:
        DeletionHistory();
        ~DeletionHistory();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsp_id; //type: uint16
        ydk::YLeaf deletion_time; //type: uint32
        ydk::YLeaf deletion_reason; //type: string
        ydk::YLeaf deletion_diagnostic_code; //type: uint32

}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::HeadEndBfdInfo::DeletionHistory


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::HeadEndBfdInfo::BfdReversePathLabel : public ydk::Entity
{
    public:
        BfdReversePathLabel();
        ~BfdReversePathLabel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::HeadEndBfdInfo::BfdReversePathLabel


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::TailEndBfdInfo : public ydk::Entity
{
    public:
        TailEndBfdInfo();
        ~TailEndBfdInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf failure_diagnostic_code; //type: uint32
        ydk::YLeaf failure_reason; //type: string
        ydk::YLeaf local_discriminator; //type: uint32
        ydk::YLeaf remote_discriminator; //type: uint32
        ydk::YLeaf min_interval; //type: uint32
        ydk::YLeaf min_interval_default; //type: boolean
        ydk::YLeaf multiplier; //type: uint8
        ydk::YLeaf multiplier_default; //type: boolean
        class SessionInfo; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::TailEndBfdInfo::SessionInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::TailEndBfdInfo::SessionInfo> session_info;
        
}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::TailEndBfdInfo


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::TailEndBfdInfo::SessionInfo : public ydk::Entity
{
    public:
        SessionInfo();
        ~SessionInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf state; //type: TeBfdLspSessionState
        ydk::YLeaf state_change_time; //type: uint32

}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::TailEndBfdInfo::SessionInfo


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::SrlgCollection : public ydk::Entity
{
    public:
        SrlgCollection();
        ~SrlgCollection();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf srlg_collect_type; //type: TeSrlgCollectRequest
        class DiscoveredSrlg; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::SrlgCollection::DiscoveredSrlg

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::SrlgCollection::DiscoveredSrlg> > discovered_srlg;
        
}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::SrlgCollection


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::SrlgCollection::DiscoveredSrlg : public ydk::Entity
{
    public:
        DiscoveredSrlg();
        ~DiscoveredSrlg();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::SrlgCollection::DiscoveredSrlg


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::Association : public ydk::Entity
{
    public:
        Association();
        ~Association();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf s2l_association_type; //type: uint16
        ydk::YLeaf s2l_association_tie_role; //type: TeAssociationTieRole
        ydk::YLeaf s2l_association_id; //type: uint16
        ydk::YLeaf s2l_association_source; //type: string
        ydk::YLeaf s2l_global_source; //type: uint32
        class S2LExtendedId; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::Association::S2LExtendedId

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::Association::S2LExtendedId> > s2l_extended_id;
        
}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::Association


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::Association::S2LExtendedId : public ydk::Entity
{
    public:
        S2LExtendedId();
        ~S2LExtendedId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::Association::S2LExtendedId


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::Protection : public ydk::Entity
{
    public:
        Protection();
        ~Protection();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf s2l_secondary; //type: boolean
        ydk::YLeaf s2l_protecting; //type: boolean
        ydk::YLeaf s2l_notification; //type: boolean
        ydk::YLeaf s2l_operational; //type: boolean
        ydk::YLeaf enhanced; //type: boolean
        ydk::YLeaf ded1_plus1; //type: boolean
        ydk::YLeaf ded1_to1; //type: boolean
        ydk::YLeaf shared; //type: boolean
        ydk::YLeaf link_unprotected; //type: boolean
        ydk::YLeaf extra_traffic; //type: boolean
        ydk::YLeaf any; //type: boolean
        ydk::YLeaf rerouting; //type: boolean
        ydk::YLeaf rerouting_no_et; //type: boolean
        ydk::YLeaf one_to_n_protection_et; //type: boolean
        ydk::YLeaf one_plus_one_uni; //type: boolean
        ydk::YLeaf one_plus_one_bi; //type: boolean
        ydk::YLeaf lsp_unprotected; //type: boolean

}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::Protection


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ReverseLspFec : public ydk::Entity
{
    public:
        ReverseLspFec();
        ~ReverseLspFec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fec_lsp_id; //type: uint16
        ydk::YLeaf fec_tunnel_id; //type: uint16
        ydk::YLeaf fec_extended_tunnel_id; //type: string
        ydk::YLeaf fec_source; //type: string
        ydk::YLeaf fec_vrf; //type: string
        class FecDestinationInfo; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ReverseLspFec::FecDestinationInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ReverseLspFec::FecDestinationInfo> fec_destination_info;
        
}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ReverseLspFec


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ReverseLspFec::FecDestinationInfo : public ydk::Entity
{
    public:
        FecDestinationInfo();
        ~FecDestinationInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fec_ctype; //type: MplsLibC
        ydk::YLeaf p2p_lsp_destination; //type: string
        ydk::YLeaf fec_destination_p2mp_id; //type: uint32

}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ReverseLspFec::FecDestinationInfo


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ReverseTspec : public ydk::Entity
{
    public:
        ReverseTspec();
        ~ReverseTspec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf average_rate; //type: uint64
        ydk::YLeaf maximum_burst; //type: uint64
        ydk::YLeaf peak_rate; //type: uint64

}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ReverseTspec


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::FlexInfo : public ydk::Entity
{
    public:
        FlexInfo();
        ~FlexInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry_exists; //type: boolean
        ydk::YLeaf in_label; //type: uint32
        ydk::YLeaf bfd_created; //type: boolean
        ydk::YLeaf bfd_up; //type: boolean
        ydk::YLeaf oam_created; //type: boolean
        ydk::YLeaf bfd_next_hop; //type: string
        ydk::YLeaf bfd_tun_ifh; //type: string
        ydk::YLeaf bfd_out_ifh; //type: string
        ydk::YLeaf bfd_int_label; //type: uint32
        ydk::YLeaf bfd_egress_label; //type: uint32
        ydk::YLeaf fault_ldi_lockout; //type: boolean
        ydk::YLeaf fault_ldi; //type: boolean
        ydk::YLeaf fault_lkr; //type: boolean
        ydk::YLeaf fault_ais; //type: boolean
        ydk::YLeaf fault_time; //type: uint32
        class FlexFec; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::FlexInfo::FlexFec

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::FlexInfo::FlexFec> flex_fec;
        
}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::FlexInfo


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::FlexInfo::FlexFec : public ydk::Entity
{
    public:
        FlexFec();
        ~FlexFec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf s2l_fec_subgroup_id; //type: uint16
        ydk::YLeaf s2l_fec_lsp_id; //type: uint16
        ydk::YLeaf s2l_fec_tunnel_id; //type: uint16
        ydk::YLeaf s2l_fec_extended_tunnel_id; //type: string
        ydk::YLeaf s2l_fec_source; //type: string
        ydk::YLeaf s2l_fec_dest; //type: string
        ydk::YLeaf s2l_fec_p2mp_id; //type: uint32
        ydk::YLeaf s2l_fec_subgroup_originator; //type: string
        ydk::YLeaf s2l_fec_ctype; //type: MplsLibC
        ydk::YLeaf s2l_fec_vrf; //type: string

}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::FlexInfo::FlexFec


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::LspWrapInfo : public ydk::Entity
{
    public:
        LspWrapInfo();
        ~LspWrapInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsp_wrap_protection_enable; //type: boolean
        ydk::YLeaf lsp_wrap_protection_label; //type: uint32
        ydk::YLeaf reverse_egress_interface; //type: string
        ydk::YLeaf reverse_lsp_label; //type: uint32
        ydk::YLeaf lsp_wrap_protection_state; //type: MplsTeLspWrapState

}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::LspWrapInfo


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::DiversityInfo : public ydk::Entity
{
    public:
        DiversityInfo();
        ~DiversityInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf diversity_type; //type: TePpDiversity

}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::DiversityInfo


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::S2LReverseLspSubObj : public ydk::Entity
{
    public:
        S2LReverseLspSubObj();
        ~S2LReverseLspSubObj();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint8

}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::S2LReverseLspSubObj


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::SharedRiskLinkGroup : public ydk::Entity
{
    public:
        SharedRiskLinkGroup();
        ~SharedRiskLinkGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf shared_risk_group; //type: uint32
        ydk::YLeaf srlg_name; //type: string

}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::SharedRiskLinkGroup


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OutEro : public ydk::Entity
{
    public:
        OutEro();
        ~OutEro();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ero_type; //type: RsvpMgmtEroSubobj
        class Ipv4EroSubObject; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OutEro::Ipv4EroSubObject
        class UnnumberedEroSubObject; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OutEro::UnnumberedEroSubObject

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OutEro::Ipv4EroSubObject> ipv4ero_sub_object;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OutEro::UnnumberedEroSubObject> unnumbered_ero_sub_object;
        
}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OutEro


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OutEro::Ipv4EroSubObject : public ydk::Entity
{
    public:
        Ipv4EroSubObject();
        ~Ipv4EroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_strict_route; //type: boolean
        ydk::YLeaf ero_address; //type: string
        ydk::YLeaf prefix_length; //type: uint8

}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OutEro::Ipv4EroSubObject


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OutEro::UnnumberedEroSubObject : public ydk::Entity
{
    public:
        UnnumberedEroSubObject();
        ~UnnumberedEroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_strict_route; //type: boolean
        ydk::YLeaf ero_interface_id; //type: uint32
        ydk::YLeaf ero_router_id; //type: string
        ydk::YLeaf status; //type: RsvpMgmtEroSubobjStatus

}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OutEro::UnnumberedEroSubObject


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::InEro : public ydk::Entity
{
    public:
        InEro();
        ~InEro();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ero_type; //type: RsvpMgmtEroSubobj
        class Ipv4EroSubObject; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::InEro::Ipv4EroSubObject
        class UnnumberedEroSubObject; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::InEro::UnnumberedEroSubObject

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::InEro::Ipv4EroSubObject> ipv4ero_sub_object;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::InEro::UnnumberedEroSubObject> unnumbered_ero_sub_object;
        
}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::InEro


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::InEro::Ipv4EroSubObject : public ydk::Entity
{
    public:
        Ipv4EroSubObject();
        ~Ipv4EroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_strict_route; //type: boolean
        ydk::YLeaf ero_address; //type: string
        ydk::YLeaf prefix_length; //type: uint8

}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::InEro::Ipv4EroSubObject


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::InEro::UnnumberedEroSubObject : public ydk::Entity
{
    public:
        UnnumberedEroSubObject();
        ~UnnumberedEroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_strict_route; //type: boolean
        ydk::YLeaf ero_interface_id; //type: uint32
        ydk::YLeaf ero_router_id; //type: string
        ydk::YLeaf status; //type: RsvpMgmtEroSubobjStatus

}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::InEro::UnnumberedEroSubObject


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::PathRro : public ydk::Entity
{
    public:
        PathRro();
        ~PathRro();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rro_type; //type: RsvpMgmtRroSubobj
        class Ipv4RroSubObject; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::PathRro::Ipv4RroSubObject
        class LabelRroSubObject; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::PathRro::LabelRroSubObject
        class UnnumberedRroSubObject; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::PathRro::UnnumberedRroSubObject
        class SrlgRroSubObject; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::PathRro::SrlgRroSubObject

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::PathRro::Ipv4RroSubObject> ipv4rro_sub_object;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::PathRro::LabelRroSubObject> label_rro_sub_object;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::PathRro::UnnumberedRroSubObject> unnumbered_rro_sub_object;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::PathRro::SrlgRroSubObject> srlg_rro_sub_object;
        
}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::PathRro


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::PathRro::Ipv4RroSubObject : public ydk::Entity
{
    public:
        Ipv4RroSubObject();
        ~Ipv4RroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rro_address; //type: string
        class Flags; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::PathRro::Ipv4RroSubObject::Flags

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::PathRro::Ipv4RroSubObject::Flags> flags;
        
}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::PathRro::Ipv4RroSubObject


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::PathRro::Ipv4RroSubObject::Flags : public ydk::Entity
{
    public:
        Flags();
        ~Flags();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_protection_available; //type: boolean
        ydk::YLeaf is_protection_in_use; //type: boolean
        ydk::YLeaf is_bandwidth_protected; //type: boolean
        ydk::YLeaf is_node_protection_available; //type: boolean
        ydk::YLeaf is_node_id; //type: boolean

}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::PathRro::Ipv4RroSubObject::Flags


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::PathRro::LabelRroSubObject : public ydk::Entity
{
    public:
        LabelRroSubObject();
        ~LabelRroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label; //type: uint32
        ydk::YLeaf is_label_variable_length; //type: boolean
        class Flags; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::PathRro::LabelRroSubObject::Flags
        class VariableLengthLabel; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::PathRro::LabelRroSubObject::VariableLengthLabel

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::PathRro::LabelRroSubObject::Flags> flags;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::PathRro::LabelRroSubObject::VariableLengthLabel> > variable_length_label;
        
}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::PathRro::LabelRroSubObject


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::PathRro::LabelRroSubObject::Flags : public ydk::Entity
{
    public:
        Flags();
        ~Flags();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_global_label; //type: boolean

}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::PathRro::LabelRroSubObject::Flags


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::PathRro::LabelRroSubObject::VariableLengthLabel : public ydk::Entity
{
    public:
        VariableLengthLabel();
        ~VariableLengthLabel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::PathRro::LabelRroSubObject::VariableLengthLabel


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::PathRro::UnnumberedRroSubObject : public ydk::Entity
{
    public:
        UnnumberedRroSubObject();
        ~UnnumberedRroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_address; //type: string
        ydk::YLeaf interface_id; //type: uint32
        class Flags; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::PathRro::UnnumberedRroSubObject::Flags

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::PathRro::UnnumberedRroSubObject::Flags> flags;
        
}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::PathRro::UnnumberedRroSubObject


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::PathRro::UnnumberedRroSubObject::Flags : public ydk::Entity
{
    public:
        Flags();
        ~Flags();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_protection_available; //type: boolean
        ydk::YLeaf is_protection_in_use; //type: boolean
        ydk::YLeaf is_bandwidth_protected; //type: boolean
        ydk::YLeaf is_node_protection_available; //type: boolean
        ydk::YLeaf is_node_id; //type: boolean

}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::PathRro::UnnumberedRroSubObject::Flags


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::PathRro::SrlgRroSubObject : public ydk::Entity
{
    public:
        SrlgRroSubObject();
        ~SrlgRroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SrlGs; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::PathRro::SrlgRroSubObject::SrlGs

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::PathRro::SrlgRroSubObject::SrlGs> > srl_gs;
        
}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::PathRro::SrlgRroSubObject


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::PathRro::SrlgRroSubObject::SrlGs : public ydk::Entity
{
    public:
        SrlGs();
        ~SrlGs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::PathRro::SrlgRroSubObject::SrlGs


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ResvRro : public ydk::Entity
{
    public:
        ResvRro();
        ~ResvRro();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rro_type; //type: RsvpMgmtRroSubobj
        class Ipv4RroSubObject; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ResvRro::Ipv4RroSubObject
        class LabelRroSubObject; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ResvRro::LabelRroSubObject
        class UnnumberedRroSubObject; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ResvRro::UnnumberedRroSubObject
        class SrlgRroSubObject; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ResvRro::SrlgRroSubObject

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ResvRro::Ipv4RroSubObject> ipv4rro_sub_object;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ResvRro::LabelRroSubObject> label_rro_sub_object;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ResvRro::UnnumberedRroSubObject> unnumbered_rro_sub_object;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ResvRro::SrlgRroSubObject> srlg_rro_sub_object;
        
}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ResvRro


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ResvRro::Ipv4RroSubObject : public ydk::Entity
{
    public:
        Ipv4RroSubObject();
        ~Ipv4RroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rro_address; //type: string
        class Flags; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ResvRro::Ipv4RroSubObject::Flags

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ResvRro::Ipv4RroSubObject::Flags> flags;
        
}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ResvRro::Ipv4RroSubObject


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ResvRro::Ipv4RroSubObject::Flags : public ydk::Entity
{
    public:
        Flags();
        ~Flags();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_protection_available; //type: boolean
        ydk::YLeaf is_protection_in_use; //type: boolean
        ydk::YLeaf is_bandwidth_protected; //type: boolean
        ydk::YLeaf is_node_protection_available; //type: boolean
        ydk::YLeaf is_node_id; //type: boolean

}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ResvRro::Ipv4RroSubObject::Flags


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ResvRro::LabelRroSubObject : public ydk::Entity
{
    public:
        LabelRroSubObject();
        ~LabelRroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label; //type: uint32
        ydk::YLeaf is_label_variable_length; //type: boolean
        class Flags; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ResvRro::LabelRroSubObject::Flags
        class VariableLengthLabel; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ResvRro::LabelRroSubObject::VariableLengthLabel

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ResvRro::LabelRroSubObject::Flags> flags;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ResvRro::LabelRroSubObject::VariableLengthLabel> > variable_length_label;
        
}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ResvRro::LabelRroSubObject


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ResvRro::LabelRroSubObject::Flags : public ydk::Entity
{
    public:
        Flags();
        ~Flags();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_global_label; //type: boolean

}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ResvRro::LabelRroSubObject::Flags


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ResvRro::LabelRroSubObject::VariableLengthLabel : public ydk::Entity
{
    public:
        VariableLengthLabel();
        ~VariableLengthLabel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ResvRro::LabelRroSubObject::VariableLengthLabel


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ResvRro::UnnumberedRroSubObject : public ydk::Entity
{
    public:
        UnnumberedRroSubObject();
        ~UnnumberedRroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_address; //type: string
        ydk::YLeaf interface_id; //type: uint32
        class Flags; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ResvRro::UnnumberedRroSubObject::Flags

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ResvRro::UnnumberedRroSubObject::Flags> flags;
        
}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ResvRro::UnnumberedRroSubObject


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ResvRro::UnnumberedRroSubObject::Flags : public ydk::Entity
{
    public:
        Flags();
        ~Flags();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_protection_available; //type: boolean
        ydk::YLeaf is_protection_in_use; //type: boolean
        ydk::YLeaf is_bandwidth_protected; //type: boolean
        ydk::YLeaf is_node_protection_available; //type: boolean
        ydk::YLeaf is_node_id; //type: boolean

}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ResvRro::UnnumberedRroSubObject::Flags


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ResvRro::SrlgRroSubObject : public ydk::Entity
{
    public:
        SrlgRroSubObject();
        ~SrlgRroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SrlGs; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ResvRro::SrlgRroSubObject::SrlGs

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ResvRro::SrlgRroSubObject::SrlGs> > srl_gs;
        
}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ResvRro::SrlgRroSubObject


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ResvRro::SrlgRroSubObject::SrlGs : public ydk::Entity
{
    public:
        SrlGs();
        ~SrlGs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ResvRro::SrlgRroSubObject::SrlGs


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::PathAffinityArray : public ydk::Entity
{
    public:
        PathAffinityArray();
        ~PathAffinityArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hop_address; //type: string
        ydk::YLeaf hop_affinity; //type: uint32
        class HopExtendedAffinity; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::PathAffinityArray::HopExtendedAffinity

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::PathAffinityArray::HopExtendedAffinity> > hop_extended_affinity;
        
}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::PathAffinityArray


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::PathAffinityArray::HopExtendedAffinity : public ydk::Entity
{
    public:
        HopExtendedAffinity();
        ~HopExtendedAffinity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::PathAffinityArray::HopExtendedAffinity


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ReverseEroIn : public ydk::Entity
{
    public:
        ReverseEroIn();
        ~ReverseEroIn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ero_type; //type: RsvpMgmtEroSubobj
        class Ipv4EroSubObject; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ReverseEroIn::Ipv4EroSubObject
        class UnnumberedEroSubObject; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ReverseEroIn::UnnumberedEroSubObject

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ReverseEroIn::Ipv4EroSubObject> ipv4ero_sub_object;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ReverseEroIn::UnnumberedEroSubObject> unnumbered_ero_sub_object;
        
}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ReverseEroIn


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ReverseEroIn::Ipv4EroSubObject : public ydk::Entity
{
    public:
        Ipv4EroSubObject();
        ~Ipv4EroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_strict_route; //type: boolean
        ydk::YLeaf ero_address; //type: string
        ydk::YLeaf prefix_length; //type: uint8

}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ReverseEroIn::Ipv4EroSubObject


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ReverseEroIn::UnnumberedEroSubObject : public ydk::Entity
{
    public:
        UnnumberedEroSubObject();
        ~UnnumberedEroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_strict_route; //type: boolean
        ydk::YLeaf ero_interface_id; //type: uint32
        ydk::YLeaf ero_router_id; //type: string
        ydk::YLeaf status; //type: RsvpMgmtEroSubobjStatus

}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ReverseEroIn::UnnumberedEroSubObject


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::S2LSegmentRoutingPath : public ydk::Entity
{
    public:
        S2LSegmentRoutingPath();
        ~S2LSegmentRoutingPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sid_type; //type: TeSrSid
        ydk::YLeaf has_ip_addresses; //type: boolean
        ydk::YLeaf local_addr; //type: string
        ydk::YLeaf remote_addr; //type: string
        ydk::YLeaf has_mpls_label; //type: boolean
        ydk::YLeaf mpls_label_value; //type: uint32
        ydk::YLeaf has_entropy_label; //type: boolean

}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::S2LSegmentRoutingPath


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::P2PInfo : public ydk::Entity
{
    public:
        P2PInfo();
        ~P2PInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_bidirectional; //type: boolean
        class AutoBandwidthStatus; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::P2PInfo::AutoBandwidthStatus
        class AutoBandwidthConfig; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::P2PInfo::AutoBandwidthConfig
        class AutoBandwidthOper; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::P2PInfo::AutoBandwidthOper

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::P2PInfo::AutoBandwidthStatus> auto_bandwidth_status;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::P2PInfo::AutoBandwidthConfig> auto_bandwidth_config;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::P2PInfo::AutoBandwidthOper> auto_bandwidth_oper;
        
}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::P2PInfo


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::P2PInfo::AutoBandwidthStatus : public ydk::Entity
{
    public:
        AutoBandwidthStatus();
        ~AutoBandwidthStatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_auto_bandwidth_enabled; //type: boolean
        ydk::YLeaf reactivation_time; //type: uint32

}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::P2PInfo::AutoBandwidthStatus


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::P2PInfo::AutoBandwidthConfig : public ydk::Entity
{
    public:
        AutoBandwidthConfig();
        ~AutoBandwidthConfig();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_auto_bandwidth_collect_only; //type: boolean
        ydk::YLeaf minimum_bandwidth; //type: uint32
        ydk::YLeaf maximum_bandwidth; //type: uint32
        ydk::YLeaf application_frequency; //type: uint32
        ydk::YLeaf collection_frequency; //type: uint32
        ydk::YLeaf adjustment_threshold_percent; //type: uint32
        ydk::YLeaf adjustment_threshold_value; //type: uint32
        ydk::YLeaf overflow_threshold_percent; //type: uint32
        ydk::YLeaf overflow_threshold_value; //type: uint32
        ydk::YLeaf overflow_threshold_limit; //type: uint32
        ydk::YLeaf underflow_threshold_percent; //type: uint32
        ydk::YLeaf underflow_threshold_value; //type: uint32
        ydk::YLeaf underflow_threshold_limit; //type: uint32

}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::P2PInfo::AutoBandwidthConfig


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::P2PInfo::AutoBandwidthOper : public ydk::Entity
{
    public:
        AutoBandwidthOper();
        ~AutoBandwidthOper();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf last_bandwidth_applied; //type: uint32
        ydk::YLeaf bandwidth_pool_type; //type: MplsTeBwPool
        ydk::YLeaf bandwidth_applications; //type: uint32
        ydk::YLeaf last_application_trigger; //type: TeAutobwAppTrigger
        ydk::YLeaf application_jitter; //type: uint32
        ydk::YLeaf time_left_application; //type: uint32
        ydk::YLeaf samples_collected; //type: uint32
        ydk::YLeaf time_left_collection; //type: uint32
        ydk::YLeaf highest_bandwidth; //type: uint32
        ydk::YLeaf underflow_highest_bandwidth; //type: uint32
        ydk::YLeaf threshold_overflows; //type: uint32
        ydk::YLeaf overflow_early_bw_applications; //type: uint32
        ydk::YLeaf threshold_underflows; //type: uint32
        ydk::YLeaf underflow_early_bw_applications; //type: uint32
        ydk::YLeaf collect_only_requested_bandwidth; //type: uint32
        ydk::YLeaf application_reject_reason; //type: TeAutobwAppRej

}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::P2PInfo::AutoBandwidthOper


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::History : public ydk::Entity
{
    public:
        History();
        ~History();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CurrentSetup; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::History::CurrentSetup
        class ReoptSetup; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::History::ReoptSetup
        class GmplsPathProtectSetup; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::History::GmplsPathProtectSetup
        class PreviousSetup; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::History::PreviousSetup
        class PreviousGmplsPathProtectSetup; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::History::PreviousGmplsPathProtectSetup
        class GmplsOtherSetup; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::History::GmplsOtherSetup
        class GmplsOtherProtectSetup; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::History::GmplsOtherProtectSetup
        class StandbySetup; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::History::StandbySetup
        class StandbyReoptSetup; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::History::StandbyReoptSetup
        class LastReOptFail; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::History::LastReOptFail
        class LastStdbyReOptFail; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::History::LastStdbyReOptFail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::History::CurrentSetup> current_setup;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::History::ReoptSetup> reopt_setup;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::History::GmplsPathProtectSetup> gmpls_path_protect_setup;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::History::PreviousSetup> previous_setup;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::History::PreviousGmplsPathProtectSetup> previous_gmpls_path_protect_setup;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::History::GmplsOtherSetup> gmpls_other_setup;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::History::GmplsOtherProtectSetup> gmpls_other_protect_setup;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::History::StandbySetup> standby_setup;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::History::StandbyReoptSetup> standby_reopt_setup;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::History::LastReOptFail> last_re_opt_fail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::History::LastStdbyReOptFail> last_stdby_re_opt_fail;
        
}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::History


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::History::CurrentSetup : public ydk::Entity
{
    public:
        CurrentSetup();
        ~CurrentSetup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf current_setup_timer; //type: uint32
        ydk::YLeaf selection_reason; //type: string
        ydk::YLeaf current_setup_last_error; //type: string
        class ConnectedUptimes; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::History::CurrentSetup::ConnectedUptimes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::History::CurrentSetup::ConnectedUptimes> connected_uptimes;
        
}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::History::CurrentSetup


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::History::CurrentSetup::ConnectedUptimes : public ydk::Entity
{
    public:
        ConnectedUptimes();
        ~ConnectedUptimes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf current_lsp_uptime; //type: uint32
        ydk::YLeaf current_uptime; //type: uint32

}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::History::CurrentSetup::ConnectedUptimes


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::History::ReoptSetup : public ydk::Entity
{
    public:
        ReoptSetup();
        ~ReoptSetup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reoptimized_setup_uptime; //type: uint32
        ydk::YLeaf reoptimized_setup_timer; //type: uint32
        ydk::YLeaf reoptimized_setup_last_error; //type: string

}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::History::ReoptSetup


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::History::GmplsPathProtectSetup : public ydk::Entity
{
    public:
        GmplsPathProtectSetup();
        ~GmplsPathProtectSetup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protecting_setup_uptime; //type: uint32
        ydk::YLeaf protecting_setup_timer; //type: uint32
        ydk::YLeaf protecting_setup_last_error; //type: string

}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::History::GmplsPathProtectSetup


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::History::PreviousSetup : public ydk::Entity
{
    public:
        PreviousSetup();
        ~PreviousSetup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf previous_path_option; //type: string
        ydk::YLeaf previous_tunnel_instance; //type: uint32
        ydk::YLeaf previous_fail_reason; //type: string
        ydk::YLeaf previous_setup_last_error; //type: string

}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::History::PreviousSetup


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::History::PreviousGmplsPathProtectSetup : public ydk::Entity
{
    public:
        PreviousGmplsPathProtectSetup();
        ~PreviousGmplsPathProtectSetup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf previous_protect_path_option; //type: string
        ydk::YLeaf previous_protect_tunnel_instance; //type: uint32
        ydk::YLeaf previous_protect_fail_reason; //type: string
        ydk::YLeaf previous_protect_setup_last_error; //type: string

}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::History::PreviousGmplsPathProtectSetup


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::History::GmplsOtherSetup : public ydk::Entity
{
    public:
        GmplsOtherSetup();
        ~GmplsOtherSetup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf path_option_index; //type: uint32
        ydk::YLeaf other_setup_error; //type: string

}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::History::GmplsOtherSetup


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::History::GmplsOtherProtectSetup : public ydk::Entity
{
    public:
        GmplsOtherProtectSetup();
        ~GmplsOtherProtectSetup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf path_option_index; //type: uint32
        ydk::YLeaf other_setup_error; //type: string

}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::History::GmplsOtherProtectSetup


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::History::StandbySetup : public ydk::Entity
{
    public:
        StandbySetup();
        ~StandbySetup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf standby_lsp_uptime; //type: uint32
        ydk::YLeaf standby_setup_timer; //type: uint32

}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::History::StandbySetup


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::History::StandbyReoptSetup : public ydk::Entity
{
    public:
        StandbyReoptSetup();
        ~StandbyReoptSetup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reoptimized_setup_uptime; //type: uint32
        ydk::YLeaf reoptimized_setup_timer; //type: uint32
        ydk::YLeaf reoptimized_setup_last_error; //type: string

}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::History::StandbyReoptSetup


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::History::LastReOptFail : public ydk::Entity
{
    public:
        LastReOptFail();
        ~LastReOptFail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf re_opt_last_fail_reason; //type: MplsTeReoptDecisionReason
        ydk::YLeaf re_opt_failed_destination; //type: string
        ydk::YLeaf re_opt_failed_timestamp; //type: uint32

}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::History::LastReOptFail


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::History::LastStdbyReOptFail : public ydk::Entity
{
    public:
        LastStdbyReOptFail();
        ~LastStdbyReOptFail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf re_opt_last_fail_reason; //type: MplsTeReoptDecisionReason
        ydk::YLeaf re_opt_failed_destination; //type: string
        ydk::YLeaf re_opt_failed_timestamp; //type: uint32

}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::History::LastStdbyReOptFail


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::PathProtection : public ydk::Entity
{
    public:
        PathProtection();
        ~PathProtection();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time_of_switchover_sec; //type: uint32
        ydk::YLeaf switchover_total; //type: uint16
        ydk::YLeaf switchover_ready; //type: uint16
        ydk::YLeaf standby_reoptimized_number; //type: uint16
        ydk::YLeaf switchover_reason; //type: uint16
        ydk::YLeaf diversity_type; //type: TePpDiversity
        ydk::YLeaf is_path_protect_configured; //type: boolean
        ydk::YLeaf path_protection_protected_by_id; //type: uint32
        ydk::YLeaf valid_path_protection_path_option_exists; //type: boolean
        ydk::YLeaf is_path_protect_switch_over_underway; //type: boolean
        ydk::YLeaf reoptimization_time_remaining; //type: uint32
        class Switchover; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::PathProtection::Switchover

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::PathProtection::Switchover> switchover;
        
}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::PathProtection


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::PathProtection::Switchover : public ydk::Entity
{
    public:
        Switchover();
        ~Switchover();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf path_protection_switchover_event_index; //type: uint32
        ydk::YLeaf path_protection_tunnel_id; //type: uint16
        ydk::YLeaf from_lsp_id; //type: uint16
        ydk::YLeaf to_lsp_id; //type: uint16
        ydk::YLeaf date_of_error_detection; //type: uint32
        ydk::YLeaf date_of_error_detection_millisec; //type: uint32
        ydk::YLeaf switchover_duration_millisec; //type: uint32
        ydk::YLeaf path_protection_switchover_reason; //type: TeP2MpS2LDeletionSubcause

}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::PathProtection::Switchover


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup : public ydk::Entity
{
    public:
        AutoBackup();
        ~AutoBackup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protected_ls_ps; //type: uint32
        ydk::YLeaf protected_s2_ls; //type: uint32
        ydk::YLeaf sharing_families; //type: uint32
        ydk::YLeaf ab_protection_type; //type: AutoBackupProtection
        ydk::YLeaf is_using_srlg; //type: boolean
        ydk::YLeaf srlg_prot_type; //type: AutoBackupSrlgMode
        ydk::YLeaf ab_protected_interface; //type: string
        ydk::YLeaf protected_address; //type: string
        ydk::YLeaf tunnel_attribute_set_name; //type: string
        ydk::YLeaf is_unused_removal_timer_running; //type: boolean
        ydk::YLeaf unused_removal_remaining_time; //type: uint32
        class WeightedSrlgInfo; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo
        class Iep; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::Iep

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo> weighted_srlg_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::Iep> > iep;
        
}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo : public ydk::Entity
{
    public:
        WeightedSrlgInfo();
        ~WeightedSrlgInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ProtectedInterfaceSrlg; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::ProtectedInterfaceSrlg
        class WeightedSrlgHop; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::ProtectedInterfaceSrlg> > protected_interface_srlg;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop> > weighted_srlg_hop;
        
}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::ProtectedInterfaceSrlg : public ydk::Entity
{
    public:
        ProtectedInterfaceSrlg();
        ~ProtectedInterfaceSrlg();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf srlg; //type: uint32
        ydk::YLeaf srlg_name; //type: string
        ydk::YLeaf admin_weight; //type: uint32

}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::ProtectedInterfaceSrlg


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop : public ydk::Entity
{
    public:
        WeightedSrlgHop();
        ~WeightedSrlgHop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf from_address; //type: string
        ydk::YLeaf to_address; //type: string
        ydk::YLeaf aggregate_admin_weight; //type: uint64
        class CommonSrlg; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop::CommonSrlg

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop::CommonSrlg> > common_srlg;
        
}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop::CommonSrlg : public ydk::Entity
{
    public:
        CommonSrlg();
        ~CommonSrlg();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop::CommonSrlg


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::Iep : public ydk::Entity
{
    public:
        Iep();
        ~Iep();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf path_option_id; //type: uint32
        class IepHop; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::Iep::IepHop

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::Iep::IepHop> > iep_hop;
        
}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::Iep


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::Iep::IepHop : public ydk::Entity
{
    public:
        IepHop();
        ~IepHop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hop_index; //type: uint32
        ydk::YLeaf iep_hop_type; //type: MplsTeIepHop
        ydk::YLeaf iep_hop_address; //type: string

}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::Iep::IepHop


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoMesh : public ydk::Entity
{
    public:
        AutoMesh();
        ~AutoMesh();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mesh_group_id; //type: uint32
        ydk::YLeaf tunnel_destination_list_name; //type: string
        ydk::YLeaf is_tunnel_unused_timer_running; //type: boolean
        ydk::YLeaf remaining_unused_time; //type: uint32
        ydk::YLeaf mesh_group_type; //type: TeMeshgroup

}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoMesh


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoPcc : public ydk::Entity
{
    public:
        AutoPcc();
        ~AutoPcc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf owner_address; //type: string
        ydk::YLeaf creator_address; //type: string
        ydk::YLeaf has_creator_id; //type: boolean
        ydk::YLeaf creator_id; //type: string
        ydk::YLeaf plspid; //type: uint32
        ydk::YLeaf symbolic_name; //type: string
        ydk::YLeaf operationally_up; //type: boolean

}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoPcc


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::PceDelegation : public ydk::Entity
{
    public:
        PceDelegation();
        ~PceDelegation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf plsp_id; //type: uint32
        ydk::YLeaf symbolic_name; //type: string
        ydk::YLeaf owner_address; //type: string
        ydk::YLeaf operationally_up; //type: boolean

}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::PceDelegation


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::SoftPreemption : public ydk::Entity
{
    public:
        SoftPreemption();
        ~SoftPreemption();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf status; //type: MplsTeSoftPreemptionState
        ydk::YLeaf time_in_preemption_pending; //type: uint16
        ydk::YLeaf preemption_pending_resolution; //type: MplsTeSoftPreemptionResolution
        class SoftPreemptionCounters; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::SoftPreemption::SoftPreemptionCounters
        class SoftPreemptionPathError; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::SoftPreemption::SoftPreemptionPathError

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::SoftPreemption::SoftPreemptionCounters> soft_preemption_counters;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::SoftPreemption::SoftPreemptionPathError> > soft_preemption_path_error;
        
}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::SoftPreemption


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::SoftPreemption::SoftPreemptionCounters : public ydk::Entity
{
    public:
        SoftPreemptionCounters();
        ~SoftPreemptionCounters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf soft_preemption_events; //type: uint32
        ydk::YLeaf reopt_completed_ls_ps; //type: uint32
        ydk::YLeaf torn_down_ls_ps; //type: uint32
        ydk::YLeaf path_protection_switchover_ls_ps; //type: uint32
        ydk::YLeaf frr_triggered_ls_ps; //type: uint32
        ydk::YLeaf time_in_preemption_pending_min; //type: uint16
        ydk::YLeaf time_in_preemption_pending_max; //type: uint16
        ydk::YLeaf time_in_preemption_pending_avg; //type: uint16

}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::SoftPreemption::SoftPreemptionCounters


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::SoftPreemption::SoftPreemptionPathError : public ydk::Entity
{
    public:
        SoftPreemptionPathError();
        ~SoftPreemptionPathError();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf timestamp; //type: uint32
        ydk::YLeaf preempting_link_address; //type: string

}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::SoftPreemption::SoftPreemptionPathError


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::WdmUnitunnel : public ydk::Entity
{
    public:
        WdmUnitunnel();
        ~WdmUnitunnel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel_state; //type: MplsTeTunnelState
        ydk::YLeaf tunnel_role; //type: MplsTeTunnelRole
        ydk::YLeaf tunnel_id; //type: uint16
        ydk::YLeaf lsp_id; //type: uint16
        ydk::YLeaf local_optical_router_id; //type: string
        ydk::YLeaf remote_optical_router_id; //type: string
        ydk::YLeaf controlled_interface; //type: string
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf extended_tunnel_id; //type: string
        ydk::YLeaf label_origin; //type: MplsTeMgmtGmplsLabelOrigin
        ydk::YLeaf srlg_discovery; //type: boolean

}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::WdmUnitunnel


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo : public ydk::Entity
{
    public:
        TransportTunnelInfo();
        ~TransportTunnelInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf status_homepath_working; //type: boolean
        class Otn; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::Otn
        class StaticUni; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::StaticUni
        class EgressStaticUni; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni
        class HomepathEro; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::HomepathEro
        class DiversityInfo; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::DiversityInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::Otn> otn;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::StaticUni> static_uni;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni> egress_static_uni;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::HomepathEro> > homepath_ero;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::DiversityInfo> > diversity_info;
        
}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::Otn : public ydk::Entity
{
    public:
        Otn();
        ~Otn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf config_bit_rate; //type: uint32
        class BandwidthCfg; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::Otn::BandwidthCfg

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::Otn::BandwidthCfg> bandwidth_cfg;
        
}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::Otn


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::Otn::BandwidthCfg : public ydk::Entity
{
    public:
        BandwidthCfg();
        ~BandwidthCfg();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf odu_level; //type: TeOduLevel
        class OduFlexCbr; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexCbr
        class OduFlexGfpFRes; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFRes
        class OduFlexGfpFNonRes; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFNonRes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexCbr> odu_flex_cbr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFRes> odu_flex_gfp_f_res;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFNonRes> odu_flex_gfp_f_non_res;
        
}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::Otn::BandwidthCfg


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexCbr : public ydk::Entity
{
    public:
        OduFlexCbr();
        ~OduFlexCbr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bit_rate; //type: uint32
        ydk::YLeaf tolerance; //type: uint16

}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexCbr


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFRes : public ydk::Entity
{
    public:
        OduFlexGfpFRes();
        ~OduFlexGfpFRes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bit_rate; //type: uint32

}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFRes


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFNonRes : public ydk::Entity
{
    public:
        OduFlexGfpFNonRes();
        ~OduFlexGfpFNonRes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bit_rate; //type: uint32

}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFNonRes


}
}

#endif /* _CISCO_IOS_XR_MPLS_TE_OPER_49_ */

