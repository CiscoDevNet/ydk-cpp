#ifndef _OPENCONFIG_NETWORK_INSTANCE_7_
#define _OPENCONFIG_NETWORK_INSTANCE_7_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "openconfig_network_instance_0.hpp"
#include "openconfig_network_instance_2.hpp"
#include "openconfig_network_instance_4.hpp"
#include "openconfig_network_instance_6.hpp"

namespace openconfig {
namespace openconfig_network_instance {


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::LinkAttributes::State : public ydk::Entity
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

        ydk::YLeafList local_protection; //type: list of  LocalProtection
        class LocalProtection;

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::LinkAttributes::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::LinkProtectionType : public ydk::Entity
{
    public:
        LinkProtectionType();
        ~LinkProtectionType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::LinkProtectionType::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::LinkProtectionType::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::LinkProtectionType


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::LinkProtectionType::State : public ydk::Entity
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

        ydk::YLeafList link_protection_type; //type: list of  LinkProtectionType_
        class LinkProtectionType_;

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::LinkProtectionType::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::BandwidthConstraints : public ydk::Entity
{
    public:
        BandwidthConstraints();
        ~BandwidthConstraints();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BandwidthConstraint; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::BandwidthConstraints::BandwidthConstraint

        ydk::YList bandwidth_constraint;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::BandwidthConstraints


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::BandwidthConstraints::BandwidthConstraint : public ydk::Entity
{
    public:
        BandwidthConstraint();
        ~BandwidthConstraint();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: uint8 (refers to openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::BandwidthConstraints::BandwidthConstraint::State::model_id)
        ydk::YLeaf model_id;
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::BandwidthConstraints::BandwidthConstraint::State
        class Constraints; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::BandwidthConstraints::BandwidthConstraint::Constraints

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::BandwidthConstraints::BandwidthConstraint::State> state;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::BandwidthConstraints::BandwidthConstraint::Constraints> constraints;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::BandwidthConstraints::BandwidthConstraint


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::BandwidthConstraints::BandwidthConstraint::State : public ydk::Entity
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

        ydk::YLeaf model_id; //type: uint8

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::BandwidthConstraints::BandwidthConstraint::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::BandwidthConstraints::BandwidthConstraint::Constraints : public ydk::Entity
{
    public:
        Constraints();
        ~Constraints();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Constraint; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::BandwidthConstraints::BandwidthConstraint::Constraints::Constraint

        ydk::YList constraint;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::BandwidthConstraints::BandwidthConstraint::Constraints


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::BandwidthConstraints::BandwidthConstraint::Constraints::Constraint : public ydk::Entity
{
    public:
        Constraint();
        ~Constraint();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: uint32 (refers to openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::BandwidthConstraints::BandwidthConstraint::Constraints::Constraint::State::constraint_id)
        ydk::YLeaf constraint_id;
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::BandwidthConstraints::BandwidthConstraint::Constraints::Constraint::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::BandwidthConstraints::BandwidthConstraint::Constraints::Constraint::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::BandwidthConstraints::BandwidthConstraint::Constraints::Constraint


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::BandwidthConstraints::BandwidthConstraint::Constraints::Constraint::State : public ydk::Entity
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

        ydk::YLeaf constraint_id; //type: uint32
        ydk::YLeaf bandwidth; //type: binary

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::BandwidthConstraints::BandwidthConstraint::Constraints::Constraint::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::UnconstrainedLsp : public ydk::Entity
{
    public:
        UnconstrainedLsp();
        ~UnconstrainedLsp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::UnconstrainedLsp::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::UnconstrainedLsp::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::UnconstrainedLsp


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::UnconstrainedLsp::State : public ydk::Entity
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

        ydk::YLeaf type; //type: ISISSUBTLVTYPE
        ydk::YLeaf unconstrained_lsp; //type: uint16

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::UnconstrainedLsp::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::AdjacencySids : public ydk::Entity
{
    public:
        AdjacencySids();
        ~AdjacencySids();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AdjacencySid; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::AdjacencySids::AdjacencySid

        ydk::YList adjacency_sid;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::AdjacencySids


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::AdjacencySids::AdjacencySid : public ydk::Entity
{
    public:
        AdjacencySid();
        ~AdjacencySid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: uint32 (refers to openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::AdjacencySids::AdjacencySid::State::value_)
        ydk::YLeaf value_;
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::AdjacencySids::AdjacencySid::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::AdjacencySids::AdjacencySid::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::AdjacencySids::AdjacencySid


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::AdjacencySids::AdjacencySid::State : public ydk::Entity
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

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf weight; //type: uint8
        ydk::YLeafList flags; //type: list of  Flags
        class Flags;

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::AdjacencySids::AdjacencySid::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::LanAdjacencySids : public ydk::Entity
{
    public:
        LanAdjacencySids();
        ~LanAdjacencySids();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LanAdjacencySid; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::LanAdjacencySids::LanAdjacencySid

        ydk::YList lan_adjacency_sid;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::LanAdjacencySids


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::LanAdjacencySids::LanAdjacencySid : public ydk::Entity
{
    public:
        LanAdjacencySid();
        ~LanAdjacencySid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: uint32 (refers to openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::LanAdjacencySids::LanAdjacencySid::State::value_)
        ydk::YLeaf value_;
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::LanAdjacencySids::LanAdjacencySid::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::LanAdjacencySids::LanAdjacencySid::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::LanAdjacencySids::LanAdjacencySid


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::LanAdjacencySids::LanAdjacencySid::State : public ydk::Entity
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

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf weight; //type: uint8
        ydk::YLeaf neighbor_id; //type: string
        ydk::YLeafList flags; //type: list of  Flags
        class Flags;

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::LanAdjacencySids::LanAdjacencySid::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::LinkDelay : public ydk::Entity
{
    public:
        LinkDelay();
        ~LinkDelay();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::LinkDelay::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::LinkDelay::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::LinkDelay


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::LinkDelay::State : public ydk::Entity
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

        ydk::YLeaf a_bit; //type: boolean
        ydk::YLeaf delay; //type: uint32

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::LinkDelay::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::MinMaxLinkDelay : public ydk::Entity
{
    public:
        MinMaxLinkDelay();
        ~MinMaxLinkDelay();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::MinMaxLinkDelay::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::MinMaxLinkDelay::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::MinMaxLinkDelay


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::MinMaxLinkDelay::State : public ydk::Entity
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

        ydk::YLeaf a_bit; //type: boolean
        ydk::YLeaf min_delay; //type: uint32
        ydk::YLeaf max_delay; //type: uint32

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::MinMaxLinkDelay::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::LinkDelayVariation : public ydk::Entity
{
    public:
        LinkDelayVariation();
        ~LinkDelayVariation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::LinkDelayVariation::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::LinkDelayVariation::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::LinkDelayVariation


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::LinkDelayVariation::State : public ydk::Entity
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

        ydk::YLeaf delay; //type: uint32

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::LinkDelayVariation::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::LinkLoss : public ydk::Entity
{
    public:
        LinkLoss();
        ~LinkLoss();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::LinkLoss::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::LinkLoss::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::LinkLoss


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::LinkLoss::State : public ydk::Entity
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

        ydk::YLeaf a_bit; //type: boolean
        ydk::YLeaf link_loss; //type: uint32

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::LinkLoss::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::ResidualBandwidth : public ydk::Entity
{
    public:
        ResidualBandwidth();
        ~ResidualBandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::ResidualBandwidth::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::ResidualBandwidth::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::ResidualBandwidth


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::ResidualBandwidth::State : public ydk::Entity
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

        ydk::YLeaf residual_bandwidth; //type: binary

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::ResidualBandwidth::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::AvailableBandwidth : public ydk::Entity
{
    public:
        AvailableBandwidth();
        ~AvailableBandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::AvailableBandwidth::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::AvailableBandwidth::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::AvailableBandwidth


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::AvailableBandwidth::State : public ydk::Entity
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

        ydk::YLeaf type; //type: ISISSUBTLVTYPE
        ydk::YLeaf available_bandwidth; //type: binary

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::AvailableBandwidth::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::UtilizedBandwidth : public ydk::Entity
{
    public:
        UtilizedBandwidth();
        ~UtilizedBandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::UtilizedBandwidth::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::UtilizedBandwidth::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::UtilizedBandwidth


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::UtilizedBandwidth::State : public ydk::Entity
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

        ydk::YLeaf type; //type: ISISSUBTLVTYPE
        ydk::YLeaf utilized_bandwidth; //type: binary

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::UtilizedBandwidth::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIsisNeighborAttribute::Neighbors::Neighbor::UndefinedSubtlvs : public ydk::Entity
{
    public:
        UndefinedSubtlvs();
        ~UndefinedSubtlvs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UndefinedSubtlv; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIsisNeighborAttribute::Neighbors::Neighbor::UndefinedSubtlvs::UndefinedSubtlv

        ydk::YList undefined_subtlv;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIsisNeighborAttribute::Neighbors::Neighbor::UndefinedSubtlvs


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIsisNeighborAttribute::Neighbors::Neighbor::UndefinedSubtlvs::UndefinedSubtlv : public ydk::Entity
{
    public:
        UndefinedSubtlv();
        ~UndefinedSubtlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: uint8 (refers to openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIsisNeighborAttribute::Neighbors::Neighbor::UndefinedSubtlvs::UndefinedSubtlv::State::type)
        ydk::YLeaf type;
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIsisNeighborAttribute::Neighbors::Neighbor::UndefinedSubtlvs::UndefinedSubtlv::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIsisNeighborAttribute::Neighbors::Neighbor::UndefinedSubtlvs::UndefinedSubtlv::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIsisNeighborAttribute::Neighbors::Neighbor::UndefinedSubtlvs::UndefinedSubtlv


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIsisNeighborAttribute::Neighbors::Neighbor::UndefinedSubtlvs::UndefinedSubtlv::State : public ydk::Entity
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

        ydk::YLeaf type; //type: uint8
        ydk::YLeaf length; //type: uint8
        ydk::YLeaf value_; //type: binary

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIsisNeighborAttribute::Neighbors::Neighbor::UndefinedSubtlvs::UndefinedSubtlv::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv4Reachability : public ydk::Entity
{
    public:
        MtIpv4Reachability();
        ~MtIpv4Reachability();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Prefixes; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv4Reachability::Prefixes

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv4Reachability::Prefixes> prefixes;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv4Reachability


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv4Reachability::Prefixes : public ydk::Entity
{
    public:
        Prefixes();
        ~Prefixes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Prefix; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv4Reachability::Prefixes::Prefix

        ydk::YList prefix;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv4Reachability::Prefixes


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv4Reachability::Prefixes::Prefix : public ydk::Entity
{
    public:
        Prefix();
        ~Prefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: uint16 (refers to openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv4Reachability::Prefixes::Prefix::State::mt_id)
        ydk::YLeaf mt_id;
        //type: string (refers to openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv4Reachability::Prefixes::Prefix::State::prefix)
        ydk::YLeaf prefix;
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv4Reachability::Prefixes::Prefix::State
        class Subtlvs; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv4Reachability::Prefixes::Prefix::Subtlvs
        class UndefinedSubtlvs; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv4Reachability::Prefixes::Prefix::UndefinedSubtlvs

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv4Reachability::Prefixes::Prefix::State> state;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv4Reachability::Prefixes::Prefix::Subtlvs> subtlvs;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv4Reachability::Prefixes::Prefix::UndefinedSubtlvs> undefined_subtlvs;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv4Reachability::Prefixes::Prefix


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv4Reachability::Prefixes::Prefix::State : public ydk::Entity
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

        ydk::YLeaf up_down; //type: boolean
        ydk::YLeaf s_bit; //type: boolean
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf mt_id; //type: uint16

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv4Reachability::Prefixes::Prefix::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv4Reachability::Prefixes::Prefix::Subtlvs : public ydk::Entity
{
    public:
        Subtlvs();
        ~Subtlvs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Subtlv; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv

        ydk::YList subtlv;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv4Reachability::Prefixes::Prefix::Subtlvs


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv : public ydk::Entity
{
    public:
        Subtlv();
        ~Subtlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: ISISSUBTLVTYPE
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::State
        class Tag; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Tag
        class Tag64; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Tag64
        class Flags; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Flags
        class Ipv4SourceRouterId; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Ipv4SourceRouterId
        class Ipv6SourceRouterId; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Ipv6SourceRouterId
        class PrefixSids; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::PrefixSids

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::State> state;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Tag> tag;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Tag64> tag64;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Flags> flags;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Ipv4SourceRouterId> ipv4_source_router_id;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Ipv6SourceRouterId> ipv6_source_router_id;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::PrefixSids> prefix_sids;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::State : public ydk::Entity
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

        ydk::YLeaf type; //type: ISISSUBTLVTYPE

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Tag : public ydk::Entity
{
    public:
        Tag();
        ~Tag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Tag::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Tag::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Tag


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Tag::State : public ydk::Entity
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

        ydk::YLeafList tag32; //type: list of  uint32

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Tag::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Tag64 : public ydk::Entity
{
    public:
        Tag64();
        ~Tag64();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Tag64::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Tag64::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Tag64


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Tag64::State : public ydk::Entity
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

        ydk::YLeafList tag64; //type: list of  uint64

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Tag64::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Flags : public ydk::Entity
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

        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Flags::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Flags::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Flags


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Flags::State : public ydk::Entity
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

        ydk::YLeaf type; //type: ISISSUBTLVTYPE
        ydk::YLeafList flags; //type: list of  Flags_
        class Flags_;

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Flags::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Ipv4SourceRouterId : public ydk::Entity
{
    public:
        Ipv4SourceRouterId();
        ~Ipv4SourceRouterId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Ipv4SourceRouterId::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Ipv4SourceRouterId::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Ipv4SourceRouterId


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Ipv4SourceRouterId::State : public ydk::Entity
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

        ydk::YLeaf type; //type: ISISSUBTLVTYPE
        ydk::YLeaf ipv4_source_router_id; //type: string

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Ipv4SourceRouterId::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Ipv6SourceRouterId : public ydk::Entity
{
    public:
        Ipv6SourceRouterId();
        ~Ipv6SourceRouterId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Ipv6SourceRouterId::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Ipv6SourceRouterId::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Ipv6SourceRouterId


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Ipv6SourceRouterId::State : public ydk::Entity
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

        ydk::YLeaf type; //type: ISISSUBTLVTYPE
        ydk::YLeaf ipv6_source_router_id; //type: string

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Ipv6SourceRouterId::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::PrefixSids : public ydk::Entity
{
    public:
        PrefixSids();
        ~PrefixSids();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrefixSid; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::PrefixSids::PrefixSid

        ydk::YList prefix_sid;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::PrefixSids


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::PrefixSids::PrefixSid : public ydk::Entity
{
    public:
        PrefixSid();
        ~PrefixSid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: uint32 (refers to openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::PrefixSids::PrefixSid::State::value_)
        ydk::YLeaf value_;
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::PrefixSids::PrefixSid::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::PrefixSids::PrefixSid::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::PrefixSids::PrefixSid


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::PrefixSids::PrefixSid::State : public ydk::Entity
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

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf algorithm; //type: uint8
        ydk::YLeafList flags; //type: list of  Flags
        class Flags;

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::PrefixSids::PrefixSid::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv4Reachability::Prefixes::Prefix::UndefinedSubtlvs : public ydk::Entity
{
    public:
        UndefinedSubtlvs();
        ~UndefinedSubtlvs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UndefinedSubtlv; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv4Reachability::Prefixes::Prefix::UndefinedSubtlvs::UndefinedSubtlv

        ydk::YList undefined_subtlv;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv4Reachability::Prefixes::Prefix::UndefinedSubtlvs


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv4Reachability::Prefixes::Prefix::UndefinedSubtlvs::UndefinedSubtlv : public ydk::Entity
{
    public:
        UndefinedSubtlv();
        ~UndefinedSubtlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: uint8 (refers to openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv4Reachability::Prefixes::Prefix::UndefinedSubtlvs::UndefinedSubtlv::State::type)
        ydk::YLeaf type;
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv4Reachability::Prefixes::Prefix::UndefinedSubtlvs::UndefinedSubtlv::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv4Reachability::Prefixes::Prefix::UndefinedSubtlvs::UndefinedSubtlv::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv4Reachability::Prefixes::Prefix::UndefinedSubtlvs::UndefinedSubtlv


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv4Reachability::Prefixes::Prefix::UndefinedSubtlvs::UndefinedSubtlv::State : public ydk::Entity
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

        ydk::YLeaf type; //type: uint8
        ydk::YLeaf length; //type: uint8
        ydk::YLeaf value_; //type: binary

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv4Reachability::Prefixes::Prefix::UndefinedSubtlvs::UndefinedSubtlv::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv6Reachability : public ydk::Entity
{
    public:
        MtIpv6Reachability();
        ~MtIpv6Reachability();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Prefixes; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv6Reachability::Prefixes

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv6Reachability::Prefixes> prefixes;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv6Reachability


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv6Reachability::Prefixes : public ydk::Entity
{
    public:
        Prefixes();
        ~Prefixes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Prefix; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv6Reachability::Prefixes::Prefix

        ydk::YList prefix;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv6Reachability::Prefixes


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv6Reachability::Prefixes::Prefix : public ydk::Entity
{
    public:
        Prefix();
        ~Prefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: string (refers to openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv6Reachability::Prefixes::Prefix::State::prefix)
        ydk::YLeaf prefix;
        //type: uint16 (refers to openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv6Reachability::Prefixes::Prefix::State::mt_id)
        ydk::YLeaf mt_id;
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv6Reachability::Prefixes::Prefix::State
        class Subtlvs; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv6Reachability::Prefixes::Prefix::Subtlvs
        class UndefinedSubtlvs; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv6Reachability::Prefixes::Prefix::UndefinedSubtlvs

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv6Reachability::Prefixes::Prefix::State> state;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv6Reachability::Prefixes::Prefix::Subtlvs> subtlvs;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv6Reachability::Prefixes::Prefix::UndefinedSubtlvs> undefined_subtlvs;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv6Reachability::Prefixes::Prefix


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv6Reachability::Prefixes::Prefix::State : public ydk::Entity
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

        ydk::YLeaf up_down; //type: boolean
        ydk::YLeaf x_bit; //type: boolean
        ydk::YLeaf s_bit; //type: boolean
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf mt_id; //type: uint16

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv6Reachability::Prefixes::Prefix::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv6Reachability::Prefixes::Prefix::Subtlvs : public ydk::Entity
{
    public:
        Subtlvs();
        ~Subtlvs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Subtlv; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv6Reachability::Prefixes::Prefix::Subtlvs::Subtlv

        ydk::YList subtlv;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv6Reachability::Prefixes::Prefix::Subtlvs


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv6Reachability::Prefixes::Prefix::Subtlvs::Subtlv : public ydk::Entity
{
    public:
        Subtlv();
        ~Subtlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: ISISSUBTLVTYPE
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv6Reachability::Prefixes::Prefix::Subtlvs::Subtlv::State
        class Tag; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv6Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Tag
        class Tag64; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv6Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Tag64
        class Flags; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv6Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Flags
        class Ipv4SourceRouterId; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv6Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Ipv4SourceRouterId
        class Ipv6SourceRouterId; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv6Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Ipv6SourceRouterId
        class PrefixSids; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv6Reachability::Prefixes::Prefix::Subtlvs::Subtlv::PrefixSids

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv6Reachability::Prefixes::Prefix::Subtlvs::Subtlv::State> state;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv6Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Tag> tag;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv6Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Tag64> tag64;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv6Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Flags> flags;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv6Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Ipv4SourceRouterId> ipv4_source_router_id;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv6Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Ipv6SourceRouterId> ipv6_source_router_id;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv6Reachability::Prefixes::Prefix::Subtlvs::Subtlv::PrefixSids> prefix_sids;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv6Reachability::Prefixes::Prefix::Subtlvs::Subtlv


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv6Reachability::Prefixes::Prefix::Subtlvs::Subtlv::State : public ydk::Entity
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

        ydk::YLeaf type; //type: ISISSUBTLVTYPE

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv6Reachability::Prefixes::Prefix::Subtlvs::Subtlv::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv6Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Tag : public ydk::Entity
{
    public:
        Tag();
        ~Tag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv6Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Tag::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv6Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Tag::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv6Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Tag


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv6Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Tag::State : public ydk::Entity
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

        ydk::YLeafList tag32; //type: list of  uint32

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv6Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Tag::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv6Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Tag64 : public ydk::Entity
{
    public:
        Tag64();
        ~Tag64();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv6Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Tag64::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv6Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Tag64::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv6Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Tag64


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv6Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Tag64::State : public ydk::Entity
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

        ydk::YLeafList tag64; //type: list of  uint64

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv6Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Tag64::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv6Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Flags : public ydk::Entity
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

        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv6Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Flags::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv6Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Flags::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv6Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Flags


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv6Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Flags::State : public ydk::Entity
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

        ydk::YLeaf type; //type: ISISSUBTLVTYPE
        ydk::YLeafList flags; //type: list of  Flags_
        class Flags_;

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv6Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Flags::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv6Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Ipv4SourceRouterId : public ydk::Entity
{
    public:
        Ipv4SourceRouterId();
        ~Ipv4SourceRouterId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv6Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Ipv4SourceRouterId::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv6Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Ipv4SourceRouterId::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv6Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Ipv4SourceRouterId


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv6Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Ipv4SourceRouterId::State : public ydk::Entity
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

        ydk::YLeaf type; //type: ISISSUBTLVTYPE
        ydk::YLeaf ipv4_source_router_id; //type: string

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv6Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Ipv4SourceRouterId::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv6Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Ipv6SourceRouterId : public ydk::Entity
{
    public:
        Ipv6SourceRouterId();
        ~Ipv6SourceRouterId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv6Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Ipv6SourceRouterId::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv6Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Ipv6SourceRouterId::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv6Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Ipv6SourceRouterId


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv6Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Ipv6SourceRouterId::State : public ydk::Entity
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

        ydk::YLeaf type; //type: ISISSUBTLVTYPE
        ydk::YLeaf ipv6_source_router_id; //type: string

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv6Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Ipv6SourceRouterId::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv6Reachability::Prefixes::Prefix::Subtlvs::Subtlv::PrefixSids : public ydk::Entity
{
    public:
        PrefixSids();
        ~PrefixSids();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrefixSid; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv6Reachability::Prefixes::Prefix::Subtlvs::Subtlv::PrefixSids::PrefixSid

        ydk::YList prefix_sid;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv6Reachability::Prefixes::Prefix::Subtlvs::Subtlv::PrefixSids


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv6Reachability::Prefixes::Prefix::Subtlvs::Subtlv::PrefixSids::PrefixSid : public ydk::Entity
{
    public:
        PrefixSid();
        ~PrefixSid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: uint32 (refers to openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv6Reachability::Prefixes::Prefix::Subtlvs::Subtlv::PrefixSids::PrefixSid::State::value_)
        ydk::YLeaf value_;
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv6Reachability::Prefixes::Prefix::Subtlvs::Subtlv::PrefixSids::PrefixSid::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv6Reachability::Prefixes::Prefix::Subtlvs::Subtlv::PrefixSids::PrefixSid::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv6Reachability::Prefixes::Prefix::Subtlvs::Subtlv::PrefixSids::PrefixSid


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv6Reachability::Prefixes::Prefix::Subtlvs::Subtlv::PrefixSids::PrefixSid::State : public ydk::Entity
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

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf algorithm; //type: uint8
        ydk::YLeafList flags; //type: list of  Flags
        class Flags;

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv6Reachability::Prefixes::Prefix::Subtlvs::Subtlv::PrefixSids::PrefixSid::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv6Reachability::Prefixes::Prefix::UndefinedSubtlvs : public ydk::Entity
{
    public:
        UndefinedSubtlvs();
        ~UndefinedSubtlvs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UndefinedSubtlv; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv6Reachability::Prefixes::Prefix::UndefinedSubtlvs::UndefinedSubtlv

        ydk::YList undefined_subtlv;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv6Reachability::Prefixes::Prefix::UndefinedSubtlvs


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv6Reachability::Prefixes::Prefix::UndefinedSubtlvs::UndefinedSubtlv : public ydk::Entity
{
    public:
        UndefinedSubtlv();
        ~UndefinedSubtlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: uint8 (refers to openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv6Reachability::Prefixes::Prefix::UndefinedSubtlvs::UndefinedSubtlv::State::type)
        ydk::YLeaf type;
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv6Reachability::Prefixes::Prefix::UndefinedSubtlvs::UndefinedSubtlv::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv6Reachability::Prefixes::Prefix::UndefinedSubtlvs::UndefinedSubtlv::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv6Reachability::Prefixes::Prefix::UndefinedSubtlvs::UndefinedSubtlv


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv6Reachability::Prefixes::Prefix::UndefinedSubtlvs::UndefinedSubtlv::State : public ydk::Entity
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

        ydk::YLeaf type; //type: uint8
        ydk::YLeaf length; //type: uint8
        ydk::YLeaf value_; //type: binary

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv6Reachability::Prefixes::Prefix::UndefinedSubtlvs::UndefinedSubtlv::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::UndefinedTlvs : public ydk::Entity
{
    public:
        UndefinedTlvs();
        ~UndefinedTlvs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UndefinedTlv; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::UndefinedTlvs::UndefinedTlv

        ydk::YList undefined_tlv;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::UndefinedTlvs


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::UndefinedTlvs::UndefinedTlv : public ydk::Entity
{
    public:
        UndefinedTlv();
        ~UndefinedTlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: uint8 (refers to openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::UndefinedTlvs::UndefinedTlv::State::type)
        ydk::YLeaf type;
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::UndefinedTlvs::UndefinedTlv::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::UndefinedTlvs::UndefinedTlv::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::UndefinedTlvs::UndefinedTlv


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::UndefinedTlvs::UndefinedTlv::State : public ydk::Entity
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

        ydk::YLeaf type; //type: uint8
        ydk::YLeaf length; //type: uint8
        ydk::YLeaf value_; //type: binary

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::UndefinedTlvs::UndefinedTlv::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::TrafficEngineering : public ydk::Entity
{
    public:
        TrafficEngineering();
        ~TrafficEngineering();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::TrafficEngineering::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::TrafficEngineering::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::TrafficEngineering::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::TrafficEngineering::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::TrafficEngineering


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::TrafficEngineering::Config : public ydk::Entity
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

        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf ipv4_router_id; //type: string
        ydk::YLeaf ipv6_router_id; //type: string

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::TrafficEngineering::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::TrafficEngineering::State : public ydk::Entity
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

        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf ipv4_router_id; //type: string
        ydk::YLeaf ipv6_router_id; //type: string

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::TrafficEngineering::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::RoutePreference : public ydk::Entity
{
    public:
        RoutePreference();
        ~RoutePreference();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::RoutePreference::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::RoutePreference::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::RoutePreference::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::RoutePreference::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::RoutePreference


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::RoutePreference::Config : public ydk::Entity
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

        ydk::YLeaf external_route_preference; //type: uint8
        ydk::YLeaf internal_route_preference; //type: uint8

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::RoutePreference::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::RoutePreference::State : public ydk::Entity
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

        ydk::YLeaf external_route_preference; //type: uint8
        ydk::YLeaf internal_route_preference; //type: uint8

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::RoutePreference::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::Authentication : public ydk::Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::Authentication::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::Authentication::State
        class Key; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::Authentication::Key
        class Keychain; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::Authentication::Keychain

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::Authentication::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::Authentication::State> state;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::Authentication::Key> key;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::Authentication::Keychain> keychain;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::Authentication


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::Authentication::Config : public ydk::Entity
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

        ydk::YLeaf csnp_authentication; //type: boolean
        ydk::YLeaf psnp_authentication; //type: boolean
        ydk::YLeaf lsp_authentication; //type: boolean

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::Authentication::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::Authentication::State : public ydk::Entity
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

        ydk::YLeaf csnp_authentication; //type: boolean
        ydk::YLeaf psnp_authentication; //type: boolean
        ydk::YLeaf lsp_authentication; //type: boolean

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::Authentication::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::Authentication::Key : public ydk::Entity
{
    public:
        Key();
        ~Key();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::Authentication::Key::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::Authentication::Key::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::Authentication::Key::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::Authentication::Key::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::Authentication::Key


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::Authentication::Key::Config : public ydk::Entity
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

        ydk::YLeaf auth_password; //type: string

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::Authentication::Key::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::Authentication::Key::State : public ydk::Entity
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

        ydk::YLeaf auth_password; //type: string

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::Authentication::Key::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::Authentication::Keychain : public ydk::Entity
{
    public:
        Keychain();
        ~Keychain();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::Authentication::Keychain


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces : public ydk::Entity
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

        class Interface; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface

        ydk::YList interface;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface : public ydk::Entity
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

        //type: string (refers to openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Config::interface_id)
        ydk::YLeaf interface_id;
        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::State
        class CircuitCounters; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::CircuitCounters
        class Authentication; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Authentication
        class AfiSafi; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::AfiSafi
        class Levels; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels
        class Timers; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Timers
        class Bfd; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Bfd
        class InterfaceRef; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::InterfaceRef

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::State> state;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::CircuitCounters> circuit_counters;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Authentication> authentication;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::AfiSafi> afi_safi;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels> levels;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Timers> timers;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Bfd> bfd;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::InterfaceRef> interface_ref;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Config : public ydk::Entity
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

        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf interface_id; //type: string
        ydk::YLeaf passive; //type: boolean
        ydk::YLeaf hello_padding; //type: HelloPaddingType
        ydk::YLeaf circuit_type; //type: CircuitType

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::State : public ydk::Entity
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

        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf interface_id; //type: string
        ydk::YLeaf passive; //type: boolean
        ydk::YLeaf hello_padding; //type: HelloPaddingType
        ydk::YLeaf circuit_type; //type: CircuitType

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::CircuitCounters : public ydk::Entity
{
    public:
        CircuitCounters();
        ~CircuitCounters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::CircuitCounters::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::CircuitCounters::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::CircuitCounters


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::CircuitCounters::State : public ydk::Entity
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

        ydk::YLeaf adj_changes; //type: uint32
        ydk::YLeaf init_fails; //type: uint32
        ydk::YLeaf rejected_adj; //type: uint32
        ydk::YLeaf id_field_len_mismatches; //type: uint32
        ydk::YLeaf max_area_address_mismatches; //type: uint32
        ydk::YLeaf auth_type_fails; //type: uint32
        ydk::YLeaf auth_fails; //type: uint32
        ydk::YLeaf lan_dis_changes; //type: uint32
        ydk::YLeaf adj_number; //type: uint32

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::CircuitCounters::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Authentication : public ydk::Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Authentication::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Authentication::State
        class Key; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Authentication::Key
        class Keychain; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Authentication::Keychain

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Authentication::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Authentication::State> state;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Authentication::Key> key;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Authentication::Keychain> keychain;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Authentication


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Authentication::Config : public ydk::Entity
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

        ydk::YLeaf hello_authentication; //type: boolean

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Authentication::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Authentication::State : public ydk::Entity
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

        ydk::YLeaf hello_authentication; //type: boolean

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Authentication::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Authentication::Key : public ydk::Entity
{
    public:
        Key();
        ~Key();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Authentication::Key::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Authentication::Key::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Authentication::Key::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Authentication::Key::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Authentication::Key


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Authentication::Key::Config : public ydk::Entity
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

        ydk::YLeaf auth_password; //type: string

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Authentication::Key::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Authentication::Key::State : public ydk::Entity
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

        ydk::YLeaf auth_password; //type: string

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Authentication::Key::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Authentication::Keychain : public ydk::Entity
{
    public:
        Keychain();
        ~Keychain();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Authentication::Keychain


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::AfiSafi : public ydk::Entity
{
    public:
        AfiSafi();
        ~AfiSafi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Af; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::AfiSafi::Af

        ydk::YList af;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::AfiSafi


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::AfiSafi::Af : public ydk::Entity
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

        ydk::YLeaf afi_name; //type: AFITYPE
        ydk::YLeaf safi_name; //type: SAFITYPE
        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::AfiSafi::Af::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::AfiSafi::Af::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::AfiSafi::Af::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::AfiSafi::Af::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::AfiSafi::Af


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::AfiSafi::Af::Config : public ydk::Entity
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

        ydk::YLeaf afi_name; //type: AFITYPE
        ydk::YLeaf safi_name; //type: SAFITYPE
        ydk::YLeaf enabled; //type: boolean

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::AfiSafi::Af::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::AfiSafi::Af::State : public ydk::Entity
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

        ydk::YLeaf afi_name; //type: AFITYPE
        ydk::YLeaf safi_name; //type: SAFITYPE
        ydk::YLeaf enabled; //type: boolean

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::AfiSafi::Af::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels : public ydk::Entity
{
    public:
        Levels();
        ~Levels();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Level; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level

        ydk::YList level;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level : public ydk::Entity
{
    public:
        Level();
        ~Level();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: uint8 (refers to openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::Config::level_number)
        ydk::YLeaf level_number;
        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::State
        class PacketCounters; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::PacketCounters
        class Adjacencies; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::Adjacencies
        class Timers; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::Timers
        class AfiSafi; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::AfiSafi
        class HelloAuthentication; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::HelloAuthentication

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::State> state;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::PacketCounters> packet_counters;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::Adjacencies> adjacencies;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::Timers> timers;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::AfiSafi> afi_safi;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::HelloAuthentication> hello_authentication;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::Config : public ydk::Entity
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

        ydk::YLeaf level_number; //type: uint8
        ydk::YLeaf passive; //type: boolean
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf enabled; //type: boolean

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::State : public ydk::Entity
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

        ydk::YLeaf level_number; //type: uint8
        ydk::YLeaf passive; //type: boolean
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf enabled; //type: boolean

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::PacketCounters : public ydk::Entity
{
    public:
        PacketCounters();
        ~PacketCounters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Lsp; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::PacketCounters::Lsp
        class Iih; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::PacketCounters::Iih
        class Ish; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::PacketCounters::Ish
        class Esh; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::PacketCounters::Esh
        class Psnp; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::PacketCounters::Psnp
        class Cnsp; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::PacketCounters::Cnsp
        class Unknown; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::PacketCounters::Unknown

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::PacketCounters::Lsp> lsp;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::PacketCounters::Iih> iih;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::PacketCounters::Ish> ish;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::PacketCounters::Esh> esh;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::PacketCounters::Psnp> psnp;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::PacketCounters::Cnsp> cnsp;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::PacketCounters::Unknown> unknown;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::PacketCounters


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::PacketCounters::Lsp : public ydk::Entity
{
    public:
        Lsp();
        ~Lsp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::PacketCounters::Lsp::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::PacketCounters::Lsp::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::PacketCounters::Lsp


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::PacketCounters::Lsp::State : public ydk::Entity
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

        ydk::YLeaf received; //type: uint32
        ydk::YLeaf processed; //type: uint32
        ydk::YLeaf dropped; //type: uint32
        ydk::YLeaf sent; //type: uint32
        ydk::YLeaf retransmit; //type: uint32

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::PacketCounters::Lsp::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::PacketCounters::Iih : public ydk::Entity
{
    public:
        Iih();
        ~Iih();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::PacketCounters::Iih::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::PacketCounters::Iih::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::PacketCounters::Iih


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::PacketCounters::Iih::State : public ydk::Entity
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

        ydk::YLeaf received; //type: uint32
        ydk::YLeaf processed; //type: uint32
        ydk::YLeaf dropped; //type: uint32
        ydk::YLeaf sent; //type: uint32
        ydk::YLeaf retransmit; //type: uint32

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::PacketCounters::Iih::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::PacketCounters::Ish : public ydk::Entity
{
    public:
        Ish();
        ~Ish();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::PacketCounters::Ish::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::PacketCounters::Ish::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::PacketCounters::Ish


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::PacketCounters::Ish::State : public ydk::Entity
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

        ydk::YLeaf received; //type: uint32
        ydk::YLeaf processed; //type: uint32
        ydk::YLeaf dropped; //type: uint32
        ydk::YLeaf sent; //type: uint32
        ydk::YLeaf retransmit; //type: uint32

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::PacketCounters::Ish::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::PacketCounters::Esh : public ydk::Entity
{
    public:
        Esh();
        ~Esh();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::PacketCounters::Esh::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::PacketCounters::Esh::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::PacketCounters::Esh


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::PacketCounters::Esh::State : public ydk::Entity
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

        ydk::YLeaf received; //type: uint32
        ydk::YLeaf processed; //type: uint32
        ydk::YLeaf dropped; //type: uint32
        ydk::YLeaf sent; //type: uint32
        ydk::YLeaf retransmit; //type: uint32

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::PacketCounters::Esh::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::PacketCounters::Psnp : public ydk::Entity
{
    public:
        Psnp();
        ~Psnp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::PacketCounters::Psnp::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::PacketCounters::Psnp::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::PacketCounters::Psnp


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::PacketCounters::Psnp::State : public ydk::Entity
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

        ydk::YLeaf received; //type: uint32
        ydk::YLeaf processed; //type: uint32
        ydk::YLeaf dropped; //type: uint32
        ydk::YLeaf sent; //type: uint32
        ydk::YLeaf retransmit; //type: uint32

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::PacketCounters::Psnp::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::PacketCounters::Cnsp : public ydk::Entity
{
    public:
        Cnsp();
        ~Cnsp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::PacketCounters::Cnsp::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::PacketCounters::Cnsp::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::PacketCounters::Cnsp


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::PacketCounters::Cnsp::State : public ydk::Entity
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

        ydk::YLeaf received; //type: uint32
        ydk::YLeaf processed; //type: uint32
        ydk::YLeaf dropped; //type: uint32
        ydk::YLeaf sent; //type: uint32
        ydk::YLeaf retransmit; //type: uint32

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::PacketCounters::Cnsp::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::PacketCounters::Unknown : public ydk::Entity
{
    public:
        Unknown();
        ~Unknown();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::PacketCounters::Unknown::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::PacketCounters::Unknown::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::PacketCounters::Unknown


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::PacketCounters::Unknown::State : public ydk::Entity
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

        ydk::YLeaf received; //type: uint32
        ydk::YLeaf processed; //type: uint32
        ydk::YLeaf dropped; //type: uint32
        ydk::YLeaf sent; //type: uint32
        ydk::YLeaf retransmit; //type: uint32

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::PacketCounters::Unknown::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::Adjacencies : public ydk::Entity
{
    public:
        Adjacencies();
        ~Adjacencies();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Adjacency; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::Adjacencies::Adjacency

        ydk::YList adjacency;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::Adjacencies


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::Adjacencies::Adjacency : public ydk::Entity
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

        //type: string (refers to openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::Adjacencies::Adjacency::State::system_id)
        ydk::YLeaf system_id;
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::Adjacencies::Adjacency::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::Adjacencies::Adjacency::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::Adjacencies::Adjacency


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::Adjacencies::Adjacency::State : public ydk::Entity
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

        ydk::YLeaf system_id; //type: string
        ydk::YLeaf neighbor_ipv4_address; //type: string
        ydk::YLeaf neighbor_ipv6_address; //type: string
        ydk::YLeaf neighbor_snpa; //type: string
        ydk::YLeaf local_extended_circuit_id; //type: uint32
        ydk::YLeaf neighbor_extended_circuit_id; //type: uint32
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf dis_system_id; //type: string
        ydk::YLeaf neighbor_circuit_type; //type: LevelType
        ydk::YLeaf adjacency_type; //type: LevelType
        ydk::YLeaf adjacency_state; //type: IsisInterfaceAdjState
        ydk::YLeaf remaining_hold_time; //type: uint16
        ydk::YLeaf up_time; //type: uint32
        ydk::YLeaf multi_topology; //type: boolean
        ydk::YLeaf restart_support; //type: boolean
        ydk::YLeaf restart_suppress; //type: boolean
        ydk::YLeaf restart_status; //type: boolean
        ydk::YLeafList topology; //type: list of  AFISAFITYPE
        ydk::YLeafList area_address; //type: list of  string
        ydk::YLeafList nlpid; //type: list of  Nlpid
        class Nlpid;

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::Adjacencies::Adjacency::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::Timers : public ydk::Entity
{
    public:
        Timers();
        ~Timers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::Timers::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::Timers::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::Timers::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::Timers::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::Timers


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::Timers::Config : public ydk::Entity
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

        ydk::YLeaf hello_interval; //type: uint32
        ydk::YLeaf hello_multiplier; //type: uint8

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::Timers::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::Timers::State : public ydk::Entity
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

        ydk::YLeaf hello_interval; //type: uint32
        ydk::YLeaf hello_multiplier; //type: uint8

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::Timers::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::AfiSafi : public ydk::Entity
{
    public:
        AfiSafi();
        ~AfiSafi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Af; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::AfiSafi::Af

        ydk::YList af;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::AfiSafi


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::AfiSafi::Af : public ydk::Entity
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

        ydk::YLeaf afi_name; //type: AFITYPE
        ydk::YLeaf safi_name; //type: SAFITYPE
        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::AfiSafi::Af::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::AfiSafi::Af::State
        class SegmentRouting; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::AfiSafi::Af::SegmentRouting

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::AfiSafi::Af::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::AfiSafi::Af::State> state;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::AfiSafi::Af::SegmentRouting> segment_routing;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::AfiSafi::Af


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::AfiSafi::Af::Config : public ydk::Entity
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

        ydk::YLeaf afi_name; //type: AFITYPE
        ydk::YLeaf safi_name; //type: SAFITYPE
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf enabled; //type: boolean

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::AfiSafi::Af::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::AfiSafi::Af::State : public ydk::Entity
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

        ydk::YLeaf afi_name; //type: AFITYPE
        ydk::YLeaf safi_name; //type: SAFITYPE
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf enabled; //type: boolean

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::AfiSafi::Af::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::AfiSafi::Af::SegmentRouting : public ydk::Entity
{
    public:
        SegmentRouting();
        ~SegmentRouting();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrefixSids; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::AfiSafi::Af::SegmentRouting::PrefixSids
        class AdjacencySids; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::AfiSafi::Af::SegmentRouting::AdjacencySids

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::AfiSafi::Af::SegmentRouting::PrefixSids> prefix_sids;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::AfiSafi::Af::SegmentRouting::AdjacencySids> adjacency_sids;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::AfiSafi::Af::SegmentRouting


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::AfiSafi::Af::SegmentRouting::PrefixSids : public ydk::Entity
{
    public:
        PrefixSids();
        ~PrefixSids();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrefixSid; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::AfiSafi::Af::SegmentRouting::PrefixSids::PrefixSid

        ydk::YList prefix_sid;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::AfiSafi::Af::SegmentRouting::PrefixSids


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::AfiSafi::Af::SegmentRouting::PrefixSids::PrefixSid : public ydk::Entity
{
    public:
        PrefixSid();
        ~PrefixSid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: union (refers to openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::AfiSafi::Af::SegmentRouting::PrefixSids::PrefixSid::Config::prefix)
        ydk::YLeaf prefix;
        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::AfiSafi::Af::SegmentRouting::PrefixSids::PrefixSid::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::AfiSafi::Af::SegmentRouting::PrefixSids::PrefixSid::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::AfiSafi::Af::SegmentRouting::PrefixSids::PrefixSid::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::AfiSafi::Af::SegmentRouting::PrefixSids::PrefixSid::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::AfiSafi::Af::SegmentRouting::PrefixSids::PrefixSid


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::AfiSafi::Af::SegmentRouting::PrefixSids::PrefixSid::Config : public ydk::Entity
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

        ydk::YLeaf prefix; //type: string
        ydk::YLeaf sid_id; //type: one of union, string
        ydk::YLeaf label_options; //type: LabelOptions
        class LabelOptions;

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::AfiSafi::Af::SegmentRouting::PrefixSids::PrefixSid::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::AfiSafi::Af::SegmentRouting::PrefixSids::PrefixSid::State : public ydk::Entity
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

        ydk::YLeaf prefix; //type: string
        ydk::YLeaf sid_id; //type: one of union, string
        ydk::YLeaf label_options; //type: LabelOptions
        class LabelOptions;

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::AfiSafi::Af::SegmentRouting::PrefixSids::PrefixSid::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::AfiSafi::Af::SegmentRouting::AdjacencySids : public ydk::Entity
{
    public:
        AdjacencySids();
        ~AdjacencySids();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AdjacencySid; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::AfiSafi::Af::SegmentRouting::AdjacencySids::AdjacencySid

        ydk::YList adjacency_sid;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::AfiSafi::Af::SegmentRouting::AdjacencySids


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::AfiSafi::Af::SegmentRouting::AdjacencySids::AdjacencySid : public ydk::Entity
{
    public:
        AdjacencySid();
        ~AdjacencySid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: union (refers to openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::AfiSafi::Af::SegmentRouting::AdjacencySids::AdjacencySid::Config::neighbor)
        ydk::YLeaf neighbor;
        //type: union (refers to openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::AfiSafi::Af::SegmentRouting::AdjacencySids::AdjacencySid::Config::sid_id)
        ydk::YLeaf sid_id;
        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::AfiSafi::Af::SegmentRouting::AdjacencySids::AdjacencySid::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::AfiSafi::Af::SegmentRouting::AdjacencySids::AdjacencySid::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::AfiSafi::Af::SegmentRouting::AdjacencySids::AdjacencySid::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::AfiSafi::Af::SegmentRouting::AdjacencySids::AdjacencySid::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::AfiSafi::Af::SegmentRouting::AdjacencySids::AdjacencySid


class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::AfiSafi::Af::SegmentRouting::AdjacencySids::AdjacencySid::Config : public ydk::Entity
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

        ydk::YLeaf sid_id; //type: one of union, enumeration
        ydk::YLeaf protection_eligible; //type: boolean
        ydk::YLeaf group; //type: boolean
        ydk::YLeaf neighbor; //type: string
        class SidId;

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::AfiSafi::Af::SegmentRouting::AdjacencySids::AdjacencySid::Config

class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::LinkAttributes::State::LocalProtection : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf LOCAL_PROTECTION;
        static const ydk::Enum::YLeaf LINK_EXCLUDED;

        static int get_enum_value(const std::string & name) {
            if (name == "LOCAL_PROTECTION") return 0;
            if (name == "LINK_EXCLUDED") return 1;
            return -1;
        }
};

class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::LinkProtectionType::State::LinkProtectionType_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf EXTRA_TRAFFIC;
        static const ydk::Enum::YLeaf UNPROTECTED;
        static const ydk::Enum::YLeaf SHARED;
        static const ydk::Enum::YLeaf ONE_ONE;
        static const ydk::Enum::YLeaf PLUS_ONE;
        static const ydk::Enum::YLeaf ENHANCED;

        static int get_enum_value(const std::string & name) {
            if (name == "EXTRA_TRAFFIC") return 0;
            if (name == "UNPROTECTED") return 1;
            if (name == "SHARED") return 2;
            if (name == "ONE_ONE") return 3;
            if (name == "PLUS_ONE") return 4;
            if (name == "ENHANCED") return 5;
            return -1;
        }
};

class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::AdjacencySids::AdjacencySid::State::Flags : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ADDRESS_FAMILY;
        static const ydk::Enum::YLeaf BACKUP;
        static const ydk::Enum::YLeaf VALUE;
        static const ydk::Enum::YLeaf LOCAL;
        static const ydk::Enum::YLeaf SET;

        static int get_enum_value(const std::string & name) {
            if (name == "ADDRESS_FAMILY") return 0;
            if (name == "BACKUP") return 1;
            if (name == "VALUE") return 2;
            if (name == "LOCAL") return 3;
            if (name == "SET") return 4;
            return -1;
        }
};

class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::LanAdjacencySids::LanAdjacencySid::State::Flags : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ADDRESS_FAMILY;
        static const ydk::Enum::YLeaf BACKUP;
        static const ydk::Enum::YLeaf VALUE;
        static const ydk::Enum::YLeaf LOCAL;
        static const ydk::Enum::YLeaf SET;

        static int get_enum_value(const std::string & name) {
            if (name == "ADDRESS_FAMILY") return 0;
            if (name == "BACKUP") return 1;
            if (name == "VALUE") return 2;
            if (name == "LOCAL") return 3;
            if (name == "SET") return 4;
            return -1;
        }
};

class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Flags::State::Flags_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf EXTERNAL_FLAG;
        static const ydk::Enum::YLeaf READVERTISEMENT_FLAG;
        static const ydk::Enum::YLeaf NODE_FLAG;

        static int get_enum_value(const std::string & name) {
            if (name == "EXTERNAL_FLAG") return 0;
            if (name == "READVERTISEMENT_FLAG") return 1;
            if (name == "NODE_FLAG") return 2;
            return -1;
        }
};

class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::PrefixSids::PrefixSid::State::Flags : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf READVERTISEMENT;
        static const ydk::Enum::YLeaf NODE;
        static const ydk::Enum::YLeaf PHP;
        static const ydk::Enum::YLeaf EXPLICIT_NULL;
        static const ydk::Enum::YLeaf VALUE;
        static const ydk::Enum::YLeaf LOCAL;

        static int get_enum_value(const std::string & name) {
            if (name == "READVERTISEMENT") return 0;
            if (name == "NODE") return 1;
            if (name == "PHP") return 2;
            if (name == "EXPLICIT_NULL") return 3;
            if (name == "VALUE") return 4;
            if (name == "LOCAL") return 5;
            return -1;
        }
};

class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv6Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Flags::State::Flags_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf EXTERNAL_FLAG;
        static const ydk::Enum::YLeaf READVERTISEMENT_FLAG;
        static const ydk::Enum::YLeaf NODE_FLAG;

        static int get_enum_value(const std::string & name) {
            if (name == "EXTERNAL_FLAG") return 0;
            if (name == "READVERTISEMENT_FLAG") return 1;
            if (name == "NODE_FLAG") return 2;
            return -1;
        }
};

class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv6Reachability::Prefixes::Prefix::Subtlvs::Subtlv::PrefixSids::PrefixSid::State::Flags : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf READVERTISEMENT;
        static const ydk::Enum::YLeaf NODE;
        static const ydk::Enum::YLeaf PHP;
        static const ydk::Enum::YLeaf EXPLICIT_NULL;
        static const ydk::Enum::YLeaf VALUE;
        static const ydk::Enum::YLeaf LOCAL;

        static int get_enum_value(const std::string & name) {
            if (name == "READVERTISEMENT") return 0;
            if (name == "NODE") return 1;
            if (name == "PHP") return 2;
            if (name == "EXPLICIT_NULL") return 3;
            if (name == "VALUE") return 4;
            if (name == "LOCAL") return 5;
            return -1;
        }
};

class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::Adjacencies::Adjacency::State::Nlpid : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf IPV4;
        static const ydk::Enum::YLeaf IPV6;

        static int get_enum_value(const std::string & name) {
            if (name == "IPV4") return 0;
            if (name == "IPV6") return 1;
            return -1;
        }
};

class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::AfiSafi::Af::SegmentRouting::PrefixSids::PrefixSid::Config::LabelOptions : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf NO_PHP;
        static const ydk::Enum::YLeaf EXPLICIT_NULL;

        static int get_enum_value(const std::string & name) {
            if (name == "NO_PHP") return 0;
            if (name == "EXPLICIT_NULL") return 1;
            return -1;
        }
};

class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::AfiSafi::Af::SegmentRouting::PrefixSids::PrefixSid::State::LabelOptions : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf NO_PHP;
        static const ydk::Enum::YLeaf EXPLICIT_NULL;

        static int get_enum_value(const std::string & name) {
            if (name == "NO_PHP") return 0;
            if (name == "EXPLICIT_NULL") return 1;
            return -1;
        }
};

class NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces::Interface::Levels::Level::AfiSafi::Af::SegmentRouting::AdjacencySids::AdjacencySid::Config::SidId : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf DYNAMIC;

        static int get_enum_value(const std::string & name) {
            if (name == "DYNAMIC") return 0;
            return -1;
        }
};


}
}

#endif /* _OPENCONFIG_NETWORK_INSTANCE_7_ */

