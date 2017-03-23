#ifndef _CISCO_IOS_XR_CLNS_ISIS_CFG_1_
#define _CISCO_IOS_XR_CLNS_ISIS_CFG_1_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_clns_isis_cfg_0.hpp"

namespace ydk {
namespace Cisco_IOS_XR_clns_isis_cfg {


class Isis::Instances::Instance::Interfaces::Interface::Priorities::Priority : public Entity
{
    public:
        Priority();
        ~Priority();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf level; //type: IsisInternalLevelEnum
        YLeaf priority_value; //type: uint32



}; // Isis::Instances::Instance::Interfaces::Interface::Priorities::Priority


class Isis::Instances::Instance::Interfaces::Interface::HelloAcceptPasswords : public Entity
{
    public:
        HelloAcceptPasswords();
        ~HelloAcceptPasswords();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class HelloAcceptPassword; //type: Isis::Instances::Instance::Interfaces::Interface::HelloAcceptPasswords::HelloAcceptPassword

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::HelloAcceptPasswords::HelloAcceptPassword> > hello_accept_password;


}; // Isis::Instances::Instance::Interfaces::Interface::HelloAcceptPasswords


class Isis::Instances::Instance::Interfaces::Interface::HelloAcceptPasswords::HelloAcceptPassword : public Entity
{
    public:
        HelloAcceptPassword();
        ~HelloAcceptPassword();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf level; //type: IsisInternalLevelEnum
        YLeaf password; //type: string



}; // Isis::Instances::Instance::Interfaces::Interface::HelloAcceptPasswords::HelloAcceptPassword


class Isis::Instances::Instance::Interfaces::Interface::HelloPasswords : public Entity
{
    public:
        HelloPasswords();
        ~HelloPasswords();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class HelloPassword; //type: Isis::Instances::Instance::Interfaces::Interface::HelloPasswords::HelloPassword

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::HelloPasswords::HelloPassword> > hello_password;


}; // Isis::Instances::Instance::Interfaces::Interface::HelloPasswords


class Isis::Instances::Instance::Interfaces::Interface::HelloPasswords::HelloPassword : public Entity
{
    public:
        HelloPassword();
        ~HelloPassword();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf level; //type: IsisInternalLevelEnum
        YLeaf algorithm; //type: IsisAuthenticationAlgorithmEnum
        YLeaf failure_mode; //type: IsisAuthenticationFailureModeEnum
        YLeaf password; //type: string



}; // Isis::Instances::Instance::Interfaces::Interface::HelloPasswords::HelloPassword


class Isis::Instances::Instance::Interfaces::Interface::HelloPaddings : public Entity
{
    public:
        HelloPaddings();
        ~HelloPaddings();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class HelloPadding; //type: Isis::Instances::Instance::Interfaces::Interface::HelloPaddings::HelloPadding

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::HelloPaddings::HelloPadding> > hello_padding;


}; // Isis::Instances::Instance::Interfaces::Interface::HelloPaddings


class Isis::Instances::Instance::Interfaces::Interface::HelloPaddings::HelloPadding : public Entity
{
    public:
        HelloPadding();
        ~HelloPadding();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf level; //type: IsisInternalLevelEnum
        YLeaf padding_type; //type: IsisHelloPaddingEnum



}; // Isis::Instances::Instance::Interfaces::Interface::HelloPaddings::HelloPadding


class Isis::Instances::Instance::Interfaces::Interface::HelloMultipliers : public Entity
{
    public:
        HelloMultipliers();
        ~HelloMultipliers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class HelloMultiplier; //type: Isis::Instances::Instance::Interfaces::Interface::HelloMultipliers::HelloMultiplier

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::HelloMultipliers::HelloMultiplier> > hello_multiplier;


}; // Isis::Instances::Instance::Interfaces::Interface::HelloMultipliers


class Isis::Instances::Instance::Interfaces::Interface::HelloMultipliers::HelloMultiplier : public Entity
{
    public:
        HelloMultiplier();
        ~HelloMultiplier();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf level; //type: IsisInternalLevelEnum
        YLeaf multiplier; //type: uint32



}; // Isis::Instances::Instance::Interfaces::Interface::HelloMultipliers::HelloMultiplier


class Isis::Instances::Instance::Interfaces::Interface::LspFastFloodThresholds : public Entity
{
    public:
        LspFastFloodThresholds();
        ~LspFastFloodThresholds();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class LspFastFloodThreshold; //type: Isis::Instances::Instance::Interfaces::Interface::LspFastFloodThresholds::LspFastFloodThreshold

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::LspFastFloodThresholds::LspFastFloodThreshold> > lsp_fast_flood_threshold;


}; // Isis::Instances::Instance::Interfaces::Interface::LspFastFloodThresholds


class Isis::Instances::Instance::Interfaces::Interface::LspFastFloodThresholds::LspFastFloodThreshold : public Entity
{
    public:
        LspFastFloodThreshold();
        ~LspFastFloodThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf level; //type: IsisInternalLevelEnum
        YLeaf count; //type: uint32



}; // Isis::Instances::Instance::Interfaces::Interface::LspFastFloodThresholds::LspFastFloodThreshold


class Isis::Instances::Instance::Interfaces::Interface::PrefixAttributeNFlagClears : public Entity
{
    public:
        PrefixAttributeNFlagClears();
        ~PrefixAttributeNFlagClears();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PrefixAttributeNFlagClear; //type: Isis::Instances::Instance::Interfaces::Interface::PrefixAttributeNFlagClears::PrefixAttributeNFlagClear

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::PrefixAttributeNFlagClears::PrefixAttributeNFlagClear> > prefix_attribute_n_flag_clear;


}; // Isis::Instances::Instance::Interfaces::Interface::PrefixAttributeNFlagClears


class Isis::Instances::Instance::Interfaces::Interface::PrefixAttributeNFlagClears::PrefixAttributeNFlagClear : public Entity
{
    public:
        PrefixAttributeNFlagClear();
        ~PrefixAttributeNFlagClear();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf level; //type: IsisInternalLevelEnum



}; // Isis::Instances::Instance::Interfaces::Interface::PrefixAttributeNFlagClears::PrefixAttributeNFlagClear


class Isis::Instances::Instance::Interfaces::Interface::HelloIntervals : public Entity
{
    public:
        HelloIntervals();
        ~HelloIntervals();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class HelloInterval; //type: Isis::Instances::Instance::Interfaces::Interface::HelloIntervals::HelloInterval

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::HelloIntervals::HelloInterval> > hello_interval;


}; // Isis::Instances::Instance::Interfaces::Interface::HelloIntervals


class Isis::Instances::Instance::Interfaces::Interface::HelloIntervals::HelloInterval : public Entity
{
    public:
        HelloInterval();
        ~HelloInterval();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf level; //type: IsisInternalLevelEnum
        YLeaf interval; //type: uint32



}; // Isis::Instances::Instance::Interfaces::Interface::HelloIntervals::HelloInterval


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs : public Entity
{
    public:
        InterfaceAfs();
        ~InterfaceAfs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class InterfaceAf; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf> > interface_af;


}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf : public Entity
{
    public:
        InterfaceAf();
        ~InterfaceAf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: IsisAddressFamilyEnum
        YLeaf saf_name; //type: IsisSubAddressFamilyEnum

        class InterfaceAfData; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData
        class TopologyName; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName

        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData> interface_af_data;
        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName> > topology_name;


}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData : public Entity
{
    public:
        InterfaceAfData();
        ~InterfaceAfData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_af_state; //type: IsisInterfaceAfStateEnum
        YLeaf running; //type: empty

        class PrefixSid; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::PrefixSid
        class InterfaceFrrTable; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable
        class MplsLdp; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::MplsLdp
        class PrefixSspfsid; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::PrefixSspfsid
        class AutoMetrics; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AutoMetrics
        class AdminTags; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AdminTags
        class InterfaceLinkGroup; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceLinkGroup
        class Metrics; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Metrics
        class Weights; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Weights

        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AdminTags> admin_tags;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AutoMetrics> auto_metrics;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable> interface_frr_table;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceLinkGroup> interface_link_group; // presence node
        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Metrics> metrics;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::MplsLdp> mpls_ldp;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::PrefixSid> prefix_sid; // presence node
        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::PrefixSspfsid> prefix_sspfsid; // presence node
        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Weights> weights;


}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::PrefixSid : public Entity
{
    public:
        PrefixSid();
        ~PrefixSid();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: IsissidEnum
        YLeaf value_; //type: uint32
        YLeaf php; //type: IsisphpFlagEnum
        YLeaf explicit_null; //type: IsisexplicitNullFlagEnum
        YLeaf nflag_clear; //type: NflagClearEnum



}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::PrefixSid


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable : public Entity
{
    public:
        InterfaceFrrTable();
        ~InterfaceFrrTable();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class FrrlfaCandidateInterfaces; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrlfaCandidateInterfaces
        class FrrRemoteLfaMaxMetrics; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaMaxMetrics
        class FrrTypes; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrTypes
        class FrrRemoteLfaTypes; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaTypes
        class InterfaceFrrTiebreakerDefaults; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults
        class FrrtilfaTypes; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrtilfaTypes
        class FrrExcludeInterfaces; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrExcludeInterfaces
        class InterfaceFrrTiebreakers; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakers

        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrExcludeInterfaces> frr_exclude_interfaces;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaMaxMetrics> frr_remote_lfa_max_metrics;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaTypes> frr_remote_lfa_types;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrTypes> frr_types;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrlfaCandidateInterfaces> frrlfa_candidate_interfaces;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrtilfaTypes> frrtilfa_types;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults> interface_frr_tiebreaker_defaults;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakers> interface_frr_tiebreakers;


}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrlfaCandidateInterfaces : public Entity
{
    public:
        FrrlfaCandidateInterfaces();
        ~FrrlfaCandidateInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class FrrlfaCandidateInterface; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrlfaCandidateInterfaces::FrrlfaCandidateInterface

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrlfaCandidateInterfaces::FrrlfaCandidateInterface> > frrlfa_candidate_interface;


}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrlfaCandidateInterfaces


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrlfaCandidateInterfaces::FrrlfaCandidateInterface : public Entity
{
    public:
        FrrlfaCandidateInterface();
        ~FrrlfaCandidateInterface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf frr_type; //type: IsisfrrEnum
        YLeaf level; //type: uint32



}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrlfaCandidateInterfaces::FrrlfaCandidateInterface


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaMaxMetrics : public Entity
{
    public:
        FrrRemoteLfaMaxMetrics();
        ~FrrRemoteLfaMaxMetrics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class FrrRemoteLfaMaxMetric; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::FrrRemoteLfaMaxMetric

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::FrrRemoteLfaMaxMetric> > frr_remote_lfa_max_metric;


}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaMaxMetrics


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::FrrRemoteLfaMaxMetric : public Entity
{
    public:
        FrrRemoteLfaMaxMetric();
        ~FrrRemoteLfaMaxMetric();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf level; //type: IsisInternalLevelEnum
        YLeaf max_metric; //type: uint32



}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::FrrRemoteLfaMaxMetric


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrTypes : public Entity
{
    public:
        FrrTypes();
        ~FrrTypes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class FrrType; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrTypes::FrrType

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrTypes::FrrType> > frr_type;


}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrTypes


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrTypes::FrrType : public Entity
{
    public:
        FrrType();
        ~FrrType();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf level; //type: IsisInternalLevelEnum
        YLeaf type; //type: IsisfrrEnum



}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrTypes::FrrType


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaTypes : public Entity
{
    public:
        FrrRemoteLfaTypes();
        ~FrrRemoteLfaTypes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class FrrRemoteLfaType; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaTypes::FrrRemoteLfaType

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaTypes::FrrRemoteLfaType> > frr_remote_lfa_type;


}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaTypes


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaTypes::FrrRemoteLfaType : public Entity
{
    public:
        FrrRemoteLfaType();
        ~FrrRemoteLfaType();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf level; //type: IsisInternalLevelEnum
        YLeaf type; //type: IsisRemoteLfaEnum



}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaTypes::FrrRemoteLfaType


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults : public Entity
{
    public:
        InterfaceFrrTiebreakerDefaults();
        ~InterfaceFrrTiebreakerDefaults();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class InterfaceFrrTiebreakerDefault; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::InterfaceFrrTiebreakerDefault

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::InterfaceFrrTiebreakerDefault> > interface_frr_tiebreaker_default;


}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::InterfaceFrrTiebreakerDefault : public Entity
{
    public:
        InterfaceFrrTiebreakerDefault();
        ~InterfaceFrrTiebreakerDefault();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf level; //type: IsisInternalLevelEnum



}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::InterfaceFrrTiebreakerDefault


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrtilfaTypes : public Entity
{
    public:
        FrrtilfaTypes();
        ~FrrtilfaTypes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class FrrtilfaType; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrtilfaTypes::FrrtilfaType

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrtilfaTypes::FrrtilfaType> > frrtilfa_type;


}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrtilfaTypes


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrtilfaTypes::FrrtilfaType : public Entity
{
    public:
        FrrtilfaType();
        ~FrrtilfaType();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf level; //type: IsisInternalLevelEnum



}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrtilfaTypes::FrrtilfaType


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrExcludeInterfaces : public Entity
{
    public:
        FrrExcludeInterfaces();
        ~FrrExcludeInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class FrrExcludeInterface; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrExcludeInterfaces::FrrExcludeInterface

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrExcludeInterfaces::FrrExcludeInterface> > frr_exclude_interface;


}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrExcludeInterfaces


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrExcludeInterfaces::FrrExcludeInterface : public Entity
{
    public:
        FrrExcludeInterface();
        ~FrrExcludeInterface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf frr_type; //type: IsisfrrEnum
        YLeaf level; //type: uint32



}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrExcludeInterfaces::FrrExcludeInterface


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakers : public Entity
{
    public:
        InterfaceFrrTiebreakers();
        ~InterfaceFrrTiebreakers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class InterfaceFrrTiebreaker; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakers::InterfaceFrrTiebreaker

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakers::InterfaceFrrTiebreaker> > interface_frr_tiebreaker;


}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakers


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakers::InterfaceFrrTiebreaker : public Entity
{
    public:
        InterfaceFrrTiebreaker();
        ~InterfaceFrrTiebreaker();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf level; //type: IsisInternalLevelEnum
        YLeaf tiebreaker; //type: IsisInterfaceFrrTiebreakerEnum
        YLeaf index_; //type: uint32



}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakers::InterfaceFrrTiebreaker


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::MplsLdp : public Entity
{
    public:
        MplsLdp();
        ~MplsLdp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sync_level; //type: uint32



}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::MplsLdp


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::PrefixSspfsid : public Entity
{
    public:
        PrefixSspfsid();
        ~PrefixSspfsid();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: IsissidEnum
        YLeaf value_; //type: uint32
        YLeaf php; //type: IsisphpFlagEnum
        YLeaf explicit_null; //type: IsisexplicitNullFlagEnum
        YLeaf nflag_clear; //type: NflagClearEnum



}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::PrefixSspfsid


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AutoMetrics : public Entity
{
    public:
        AutoMetrics();
        ~AutoMetrics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class AutoMetric; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AutoMetrics::AutoMetric

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AutoMetrics::AutoMetric> > auto_metric;


}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AutoMetrics


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AutoMetrics::AutoMetric : public Entity
{
    public:
        AutoMetric();
        ~AutoMetric();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf level; //type: IsisInternalLevelEnum
        YLeaf proactive_protect; //type: uint32



}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AutoMetrics::AutoMetric


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AdminTags : public Entity
{
    public:
        AdminTags();
        ~AdminTags();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class AdminTag; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AdminTags::AdminTag

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AdminTags::AdminTag> > admin_tag;


}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AdminTags


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AdminTags::AdminTag : public Entity
{
    public:
        AdminTag();
        ~AdminTag();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf level; //type: IsisInternalLevelEnum
        YLeaf admin_tag; //type: uint32



}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AdminTags::AdminTag


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceLinkGroup : public Entity
{
    public:
        InterfaceLinkGroup();
        ~InterfaceLinkGroup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf link_group; //type: string
        YLeaf level; //type: uint32



}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceLinkGroup


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Metrics : public Entity
{
    public:
        Metrics();
        ~Metrics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Metric; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Metrics::Metric

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Metrics::Metric> > metric;


}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Metrics


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Metrics::Metric : public Entity
{
    public:
        Metric();
        ~Metric();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf level; //type: IsisInternalLevelEnum
        YLeaf metric; //type: one of uint32, enumeration

        class MetricEnum;


}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Metrics::Metric


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Weights : public Entity
{
    public:
        Weights();
        ~Weights();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Weight; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Weights::Weight

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Weights::Weight> > weight;


}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Weights


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Weights::Weight : public Entity
{
    public:
        Weight();
        ~Weight();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf level; //type: IsisInternalLevelEnum
        YLeaf weight; //type: uint32



}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Weights::Weight


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName : public Entity
{
    public:
        TopologyName();
        ~TopologyName();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf topology_name; //type: string
        YLeaf interface_af_state; //type: IsisInterfaceAfStateEnum
        YLeaf running; //type: empty

        class PrefixSid; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::PrefixSid
        class InterfaceFrrTable; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable
        class MplsLdp; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::MplsLdp
        class PrefixSspfsid; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::PrefixSspfsid
        class AutoMetrics; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AutoMetrics
        class AdminTags; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AdminTags
        class InterfaceLinkGroup; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceLinkGroup
        class Metrics; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Metrics
        class Weights; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Weights

        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AdminTags> admin_tags;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AutoMetrics> auto_metrics;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable> interface_frr_table;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceLinkGroup> interface_link_group; // presence node
        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Metrics> metrics;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::MplsLdp> mpls_ldp;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::PrefixSid> prefix_sid; // presence node
        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::PrefixSspfsid> prefix_sspfsid; // presence node
        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Weights> weights;


}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::PrefixSid : public Entity
{
    public:
        PrefixSid();
        ~PrefixSid();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: IsissidEnum
        YLeaf value_; //type: uint32
        YLeaf php; //type: IsisphpFlagEnum
        YLeaf explicit_null; //type: IsisexplicitNullFlagEnum
        YLeaf nflag_clear; //type: NflagClearEnum



}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::PrefixSid


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable : public Entity
{
    public:
        InterfaceFrrTable();
        ~InterfaceFrrTable();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class FrrlfaCandidateInterfaces; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrlfaCandidateInterfaces
        class FrrRemoteLfaMaxMetrics; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaMaxMetrics
        class FrrTypes; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrTypes
        class FrrRemoteLfaTypes; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaTypes
        class InterfaceFrrTiebreakerDefaults; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults
        class FrrtilfaTypes; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrtilfaTypes
        class FrrExcludeInterfaces; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrExcludeInterfaces
        class InterfaceFrrTiebreakers; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakers

        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrExcludeInterfaces> frr_exclude_interfaces;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaMaxMetrics> frr_remote_lfa_max_metrics;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaTypes> frr_remote_lfa_types;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrTypes> frr_types;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrlfaCandidateInterfaces> frrlfa_candidate_interfaces;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrtilfaTypes> frrtilfa_types;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults> interface_frr_tiebreaker_defaults;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakers> interface_frr_tiebreakers;


}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrlfaCandidateInterfaces : public Entity
{
    public:
        FrrlfaCandidateInterfaces();
        ~FrrlfaCandidateInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class FrrlfaCandidateInterface; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrlfaCandidateInterfaces::FrrlfaCandidateInterface

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrlfaCandidateInterfaces::FrrlfaCandidateInterface> > frrlfa_candidate_interface;


}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrlfaCandidateInterfaces


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrlfaCandidateInterfaces::FrrlfaCandidateInterface : public Entity
{
    public:
        FrrlfaCandidateInterface();
        ~FrrlfaCandidateInterface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf frr_type; //type: IsisfrrEnum
        YLeaf level; //type: uint32



}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrlfaCandidateInterfaces::FrrlfaCandidateInterface


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaMaxMetrics : public Entity
{
    public:
        FrrRemoteLfaMaxMetrics();
        ~FrrRemoteLfaMaxMetrics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class FrrRemoteLfaMaxMetric; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::FrrRemoteLfaMaxMetric

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::FrrRemoteLfaMaxMetric> > frr_remote_lfa_max_metric;


}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaMaxMetrics


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::FrrRemoteLfaMaxMetric : public Entity
{
    public:
        FrrRemoteLfaMaxMetric();
        ~FrrRemoteLfaMaxMetric();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf level; //type: IsisInternalLevelEnum
        YLeaf max_metric; //type: uint32



}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::FrrRemoteLfaMaxMetric


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrTypes : public Entity
{
    public:
        FrrTypes();
        ~FrrTypes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class FrrType; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrTypes::FrrType

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrTypes::FrrType> > frr_type;


}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrTypes


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrTypes::FrrType : public Entity
{
    public:
        FrrType();
        ~FrrType();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf level; //type: IsisInternalLevelEnum
        YLeaf type; //type: IsisfrrEnum



}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrTypes::FrrType


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaTypes : public Entity
{
    public:
        FrrRemoteLfaTypes();
        ~FrrRemoteLfaTypes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class FrrRemoteLfaType; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaTypes::FrrRemoteLfaType

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaTypes::FrrRemoteLfaType> > frr_remote_lfa_type;


}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaTypes


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaTypes::FrrRemoteLfaType : public Entity
{
    public:
        FrrRemoteLfaType();
        ~FrrRemoteLfaType();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf level; //type: IsisInternalLevelEnum
        YLeaf type; //type: IsisRemoteLfaEnum



}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaTypes::FrrRemoteLfaType


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults : public Entity
{
    public:
        InterfaceFrrTiebreakerDefaults();
        ~InterfaceFrrTiebreakerDefaults();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class InterfaceFrrTiebreakerDefault; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::InterfaceFrrTiebreakerDefault

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::InterfaceFrrTiebreakerDefault> > interface_frr_tiebreaker_default;


}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::InterfaceFrrTiebreakerDefault : public Entity
{
    public:
        InterfaceFrrTiebreakerDefault();
        ~InterfaceFrrTiebreakerDefault();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf level; //type: IsisInternalLevelEnum



}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::InterfaceFrrTiebreakerDefault


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrtilfaTypes : public Entity
{
    public:
        FrrtilfaTypes();
        ~FrrtilfaTypes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class FrrtilfaType; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrtilfaTypes::FrrtilfaType

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrtilfaTypes::FrrtilfaType> > frrtilfa_type;


}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrtilfaTypes


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrtilfaTypes::FrrtilfaType : public Entity
{
    public:
        FrrtilfaType();
        ~FrrtilfaType();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf level; //type: IsisInternalLevelEnum



}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrtilfaTypes::FrrtilfaType


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrExcludeInterfaces : public Entity
{
    public:
        FrrExcludeInterfaces();
        ~FrrExcludeInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class FrrExcludeInterface; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrExcludeInterfaces::FrrExcludeInterface

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrExcludeInterfaces::FrrExcludeInterface> > frr_exclude_interface;


}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrExcludeInterfaces


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrExcludeInterfaces::FrrExcludeInterface : public Entity
{
    public:
        FrrExcludeInterface();
        ~FrrExcludeInterface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf frr_type; //type: IsisfrrEnum
        YLeaf level; //type: uint32



}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrExcludeInterfaces::FrrExcludeInterface


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakers : public Entity
{
    public:
        InterfaceFrrTiebreakers();
        ~InterfaceFrrTiebreakers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class InterfaceFrrTiebreaker; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakers::InterfaceFrrTiebreaker

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakers::InterfaceFrrTiebreaker> > interface_frr_tiebreaker;


}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakers


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakers::InterfaceFrrTiebreaker : public Entity
{
    public:
        InterfaceFrrTiebreaker();
        ~InterfaceFrrTiebreaker();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf level; //type: IsisInternalLevelEnum
        YLeaf tiebreaker; //type: IsisInterfaceFrrTiebreakerEnum
        YLeaf index_; //type: uint32



}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakers::InterfaceFrrTiebreaker


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::MplsLdp : public Entity
{
    public:
        MplsLdp();
        ~MplsLdp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sync_level; //type: uint32



}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::MplsLdp


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::PrefixSspfsid : public Entity
{
    public:
        PrefixSspfsid();
        ~PrefixSspfsid();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: IsissidEnum
        YLeaf value_; //type: uint32
        YLeaf php; //type: IsisphpFlagEnum
        YLeaf explicit_null; //type: IsisexplicitNullFlagEnum
        YLeaf nflag_clear; //type: NflagClearEnum



}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::PrefixSspfsid


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AutoMetrics : public Entity
{
    public:
        AutoMetrics();
        ~AutoMetrics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class AutoMetric; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AutoMetrics::AutoMetric

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AutoMetrics::AutoMetric> > auto_metric;


}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AutoMetrics


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AutoMetrics::AutoMetric : public Entity
{
    public:
        AutoMetric();
        ~AutoMetric();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf level; //type: IsisInternalLevelEnum
        YLeaf proactive_protect; //type: uint32



}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AutoMetrics::AutoMetric


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AdminTags : public Entity
{
    public:
        AdminTags();
        ~AdminTags();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class AdminTag; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AdminTags::AdminTag

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AdminTags::AdminTag> > admin_tag;


}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AdminTags


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AdminTags::AdminTag : public Entity
{
    public:
        AdminTag();
        ~AdminTag();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf level; //type: IsisInternalLevelEnum
        YLeaf admin_tag; //type: uint32



}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AdminTags::AdminTag


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceLinkGroup : public Entity
{
    public:
        InterfaceLinkGroup();
        ~InterfaceLinkGroup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf link_group; //type: string
        YLeaf level; //type: uint32



}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceLinkGroup


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Metrics : public Entity
{
    public:
        Metrics();
        ~Metrics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Metric; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Metrics::Metric

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Metrics::Metric> > metric;


}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Metrics


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Metrics::Metric : public Entity
{
    public:
        Metric();
        ~Metric();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf level; //type: IsisInternalLevelEnum
        YLeaf metric; //type: one of uint32, enumeration

        class MetricEnum;


}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Metrics::Metric


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Weights : public Entity
{
    public:
        Weights();
        ~Weights();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Weight; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Weights::Weight

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Weights::Weight> > weight;


}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Weights


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Weights::Weight : public Entity
{
    public:
        Weight();
        ~Weight();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf level; //type: IsisInternalLevelEnum
        YLeaf weight; //type: uint32



}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Weights::Weight


class Isis::Instances::Instance::Interfaces::Interface::CsnpIntervals : public Entity
{
    public:
        CsnpIntervals();
        ~CsnpIntervals();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class CsnpInterval; //type: Isis::Instances::Instance::Interfaces::Interface::CsnpIntervals::CsnpInterval

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::CsnpIntervals::CsnpInterval> > csnp_interval;


}; // Isis::Instances::Instance::Interfaces::Interface::CsnpIntervals


class Isis::Instances::Instance::Interfaces::Interface::CsnpIntervals::CsnpInterval : public Entity
{
    public:
        CsnpInterval();
        ~CsnpInterval();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf level; //type: IsisInternalLevelEnum
        YLeaf interval; //type: uint32



}; // Isis::Instances::Instance::Interfaces::Interface::CsnpIntervals::CsnpInterval


class Isis::Instances::Instance::Interfaces::Interface::LspIntervals : public Entity
{
    public:
        LspIntervals();
        ~LspIntervals();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class LspInterval; //type: Isis::Instances::Instance::Interfaces::Interface::LspIntervals::LspInterval

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::LspIntervals::LspInterval> > lsp_interval;


}; // Isis::Instances::Instance::Interfaces::Interface::LspIntervals


class Isis::Instances::Instance::Interfaces::Interface::LspIntervals::LspInterval : public Entity
{
    public:
        LspInterval();
        ~LspInterval();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf level; //type: IsisInternalLevelEnum
        YLeaf interval; //type: uint32



}; // Isis::Instances::Instance::Interfaces::Interface::LspIntervals::LspInterval

class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Metrics::Metric::MetricEnum : public Enum
{
    public:
        static const Enum::YLeaf maximum;

};

class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Metrics::Metric::MetricEnum : public Enum
{
    public:
        static const Enum::YLeaf maximum;

};


}
}

#endif /* _CISCO_IOS_XR_CLNS_ISIS_CFG_1_ */

