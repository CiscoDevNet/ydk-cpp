#ifndef _OPENCONFIG_MPLS_1_
#define _OPENCONFIG_MPLS_1_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "openconfig_mpls_0.hpp"

namespace openconfig {
namespace openconfig_mpls {


class Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf path_computation_method; //type: PATHCOMPUTATIONMETHOD
        ydk::YLeaf use_cspf; //type: boolean
        ydk::YLeaf cspf_tiebreaker; //type: CspfTieBreaking
        ydk::YLeaf path_computation_server; //type: string
        //type: string (refers to openconfig::openconfig_mpls::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::Config::name)
        ydk::YLeaf explicit_path_name;
        ydk::YLeaf preference; //type: uint8
        ydk::YLeaf setup_priority; //type: uint8
        ydk::YLeaf hold_priority; //type: uint8
        ydk::YLeaf retry_timer; //type: uint16
        //type: leafref (refers to openconfig::openconfig_mpls::Mpls::SignalingProtocols::RsvpTe::Sessions::Session::local_index)
        ydk::YLeaf associated_rsvp_session;

}; // Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::State


class Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::AdminGroups : public ydk::Entity
{
    public:
        AdminGroups();
        ~AdminGroups();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::AdminGroups::Config
        class State; //type: Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::AdminGroups::State

        std::shared_ptr<openconfig::openconfig_mpls::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::AdminGroups::Config> config;
        std::shared_ptr<openconfig::openconfig_mpls::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::AdminGroups::State> state;
        
}; // Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::AdminGroups


class Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::AdminGroups::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: list of  leafref (refers to openconfig::openconfig_mpls::Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::admin_group_name)
        ydk::YLeafList exclude_group;
        //type: list of  leafref (refers to openconfig::openconfig_mpls::Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::admin_group_name)
        ydk::YLeafList include_all_group;
        //type: list of  leafref (refers to openconfig::openconfig_mpls::Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::admin_group_name)
        ydk::YLeafList include_any_group;

}; // Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::AdminGroups::Config


class Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::AdminGroups::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: list of  leafref (refers to openconfig::openconfig_mpls::Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::admin_group_name)
        ydk::YLeafList exclude_group;
        //type: list of  leafref (refers to openconfig::openconfig_mpls::Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::admin_group_name)
        ydk::YLeafList include_all_group;
        //type: list of  leafref (refers to openconfig::openconfig_mpls::Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::admin_group_name)
        ydk::YLeafList include_any_group;

}; // Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::AdminGroups::State


class Mpls::Lsps::UnconstrainedPath : public ydk::Entity
{
    public:
        UnconstrainedPath();
        ~UnconstrainedPath();

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

        class PathSetupProtocol; //type: Mpls::Lsps::UnconstrainedPath::PathSetupProtocol

        std::shared_ptr<openconfig::openconfig_mpls::Mpls::Lsps::UnconstrainedPath::PathSetupProtocol> path_setup_protocol;
        
}; // Mpls::Lsps::UnconstrainedPath


class Mpls::Lsps::UnconstrainedPath::PathSetupProtocol : public ydk::Entity
{
    public:
        PathSetupProtocol();
        ~PathSetupProtocol();

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

        class Ldp; //type: Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp

        std::shared_ptr<openconfig::openconfig_mpls::Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp> ldp;
        
}; // Mpls::Lsps::UnconstrainedPath::PathSetupProtocol


class Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp : public ydk::Entity
{
    public:
        Ldp();
        ~Ldp();

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


}; // Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp


class Mpls::Lsps::StaticLsps : public ydk::Entity
{
    public:
        StaticLsps();
        ~StaticLsps();

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

        class StaticLsp; //type: Mpls::Lsps::StaticLsps::StaticLsp

        ydk::YList static_lsp;
        
}; // Mpls::Lsps::StaticLsps


class Mpls::Lsps::StaticLsps::StaticLsp : public ydk::Entity
{
    public:
        StaticLsp();
        ~StaticLsp();

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

        //type: string (refers to openconfig::openconfig_mpls::Mpls::Lsps::StaticLsps::StaticLsp::Config::name)
        ydk::YLeaf name;
        class Config; //type: Mpls::Lsps::StaticLsps::StaticLsp::Config
        class State; //type: Mpls::Lsps::StaticLsps::StaticLsp::State
        class Ingress; //type: Mpls::Lsps::StaticLsps::StaticLsp::Ingress
        class Transit; //type: Mpls::Lsps::StaticLsps::StaticLsp::Transit
        class Egress; //type: Mpls::Lsps::StaticLsps::StaticLsp::Egress

        std::shared_ptr<openconfig::openconfig_mpls::Mpls::Lsps::StaticLsps::StaticLsp::Config> config;
        std::shared_ptr<openconfig::openconfig_mpls::Mpls::Lsps::StaticLsps::StaticLsp::State> state;
        std::shared_ptr<openconfig::openconfig_mpls::Mpls::Lsps::StaticLsps::StaticLsp::Ingress> ingress;
        std::shared_ptr<openconfig::openconfig_mpls::Mpls::Lsps::StaticLsps::StaticLsp::Transit> transit;
        std::shared_ptr<openconfig::openconfig_mpls::Mpls::Lsps::StaticLsps::StaticLsp::Egress> egress;
        
}; // Mpls::Lsps::StaticLsps::StaticLsp


class Mpls::Lsps::StaticLsps::StaticLsp::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string

}; // Mpls::Lsps::StaticLsps::StaticLsp::Config


class Mpls::Lsps::StaticLsps::StaticLsp::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string

}; // Mpls::Lsps::StaticLsps::StaticLsp::State


class Mpls::Lsps::StaticLsps::StaticLsp::Ingress : public ydk::Entity
{
    public:
        Ingress();
        ~Ingress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Mpls::Lsps::StaticLsps::StaticLsp::Ingress::Config
        class State; //type: Mpls::Lsps::StaticLsps::StaticLsp::Ingress::State

        std::shared_ptr<openconfig::openconfig_mpls::Mpls::Lsps::StaticLsps::StaticLsp::Ingress::Config> config;
        std::shared_ptr<openconfig::openconfig_mpls::Mpls::Lsps::StaticLsps::StaticLsp::Ingress::State> state;
        
}; // Mpls::Lsps::StaticLsps::StaticLsp::Ingress


class Mpls::Lsps::StaticLsps::StaticLsp::Ingress::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf next_hop; //type: string
        ydk::YLeaf incoming_label; //type: one of uint32, enumeration
        ydk::YLeaf push_label; //type: one of uint32, enumeration

}; // Mpls::Lsps::StaticLsps::StaticLsp::Ingress::Config


class Mpls::Lsps::StaticLsps::StaticLsp::Ingress::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf next_hop; //type: string
        ydk::YLeaf incoming_label; //type: one of uint32, enumeration
        ydk::YLeaf push_label; //type: one of uint32, enumeration

}; // Mpls::Lsps::StaticLsps::StaticLsp::Ingress::State


class Mpls::Lsps::StaticLsps::StaticLsp::Transit : public ydk::Entity
{
    public:
        Transit();
        ~Transit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Mpls::Lsps::StaticLsps::StaticLsp::Transit::Config
        class State; //type: Mpls::Lsps::StaticLsps::StaticLsp::Transit::State

        std::shared_ptr<openconfig::openconfig_mpls::Mpls::Lsps::StaticLsps::StaticLsp::Transit::Config> config;
        std::shared_ptr<openconfig::openconfig_mpls::Mpls::Lsps::StaticLsps::StaticLsp::Transit::State> state;
        
}; // Mpls::Lsps::StaticLsps::StaticLsp::Transit


class Mpls::Lsps::StaticLsps::StaticLsp::Transit::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf next_hop; //type: string
        ydk::YLeaf incoming_label; //type: one of uint32, enumeration
        ydk::YLeaf push_label; //type: one of uint32, enumeration

}; // Mpls::Lsps::StaticLsps::StaticLsp::Transit::Config


class Mpls::Lsps::StaticLsps::StaticLsp::Transit::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf next_hop; //type: string
        ydk::YLeaf incoming_label; //type: one of uint32, enumeration
        ydk::YLeaf push_label; //type: one of uint32, enumeration

}; // Mpls::Lsps::StaticLsps::StaticLsp::Transit::State


class Mpls::Lsps::StaticLsps::StaticLsp::Egress : public ydk::Entity
{
    public:
        Egress();
        ~Egress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Mpls::Lsps::StaticLsps::StaticLsp::Egress::Config
        class State; //type: Mpls::Lsps::StaticLsps::StaticLsp::Egress::State

        std::shared_ptr<openconfig::openconfig_mpls::Mpls::Lsps::StaticLsps::StaticLsp::Egress::Config> config;
        std::shared_ptr<openconfig::openconfig_mpls::Mpls::Lsps::StaticLsps::StaticLsp::Egress::State> state;
        
}; // Mpls::Lsps::StaticLsps::StaticLsp::Egress


class Mpls::Lsps::StaticLsps::StaticLsp::Egress::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf next_hop; //type: string
        ydk::YLeaf incoming_label; //type: one of uint32, enumeration
        ydk::YLeaf push_label; //type: one of uint32, enumeration

}; // Mpls::Lsps::StaticLsps::StaticLsp::Egress::Config


class Mpls::Lsps::StaticLsps::StaticLsp::Egress::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf next_hop; //type: string
        ydk::YLeaf incoming_label; //type: one of uint32, enumeration
        ydk::YLeaf push_label; //type: one of uint32, enumeration

}; // Mpls::Lsps::StaticLsps::StaticLsp::Egress::State


}
}

#endif /* _OPENCONFIG_MPLS_1_ */

