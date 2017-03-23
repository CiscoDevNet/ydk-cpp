#ifndef _CISCO_IOS_XR_INFRA_POLICYMGR_OPER_68_
#define _CISCO_IOS_XR_INFRA_POLICYMGR_OPER_68_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_infra_policymgr_oper_0.hpp"
#include "Cisco_IOS_XR_infra_policymgr_oper_45.hpp"
#include "Cisco_IOS_XR_infra_policymgr_oper_46.hpp"
#include "Cisco_IOS_XR_infra_policymgr_oper_62.hpp"
#include "Cisco_IOS_XR_infra_policymgr_oper_64.hpp"
#include "Cisco_IOS_XR_infra_policymgr_oper_67.hpp"

namespace ydk {
namespace Cisco_IOS_XR_infra_policymgr_oper {


class PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorId : public Entity
{
    public:
        VendorId();
        ~VendorId();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList string_array; //type: list of  string



}; // PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorId


class PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorIdRegex : public Entity
{
    public:
        VendorIdRegex();
        ~VendorIdRegex();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList string_array; //type: list of  string



}; // PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorIdRegex


class PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AccessInterface : public Entity
{
    public:
        AccessInterface();
        ~AccessInterface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList string_array; //type: list of  string



}; // PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AccessInterface


class PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputInterface : public Entity
{
    public:
        InputInterface();
        ~InputInterface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList string_array; //type: list of  string



}; // PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputInterface


class PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputIntfhdl : public Entity
{
    public:
        InputIntfhdl();
        ~InputIntfhdl();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList uint64_array; //type: list of  uint64



}; // PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputIntfhdl


class PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype : public Entity
{
    public:
        Ethertype();
        ~Ethertype();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Uint16_Rng_Array; //type: PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::Uint16_Rng_Array

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::Uint16_Rng_Array> > uint16_rng_array;


}; // PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype


class PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::Uint16_Rng_Array : public Entity
{
    public:
        Uint16_Rng_Array();
        ~Uint16_Rng_Array();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf min; //type: uint16
        YLeaf max; //type: uint16



}; // PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::Uint16_Rng_Array


class PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData : public Entity
{
    public:
        FlowKeyData();
        ~FlowKeyData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf max_count; //type: uint16
        YLeaf idle_timeout; //type: uint16

        class FlowKeys; //type: PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::FlowKeys

        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::FlowKeys> flow_keys;


}; // PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData


class PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::FlowKeys : public Entity
{
    public:
        FlowKeys();
        ~FlowKeys();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf keys; //type: string
        YLeaf num; //type: uint8



}; // PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::FlowKeys


class PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientId : public Entity
{
    public:
        DhcpClientId();
        ~DhcpClientId();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList string_array; //type: list of  string



}; // PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientId


class PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientIdRegex : public Entity
{
    public:
        DhcpClientIdRegex();
        ~DhcpClientIdRegex();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList string_array; //type: list of  string



}; // PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientIdRegex


class PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitId : public Entity
{
    public:
        CircuitId();
        ~CircuitId();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList string_array; //type: list of  string



}; // PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitId


class PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitIdRegex : public Entity
{
    public:
        CircuitIdRegex();
        ~CircuitIdRegex();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList string_array; //type: list of  string



}; // PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitIdRegex


class PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteId : public Entity
{
    public:
        RemoteId();
        ~RemoteId();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList string_array; //type: list of  string



}; // PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteId


class PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteIdRegex : public Entity
{
    public:
        RemoteIdRegex();
        ~RemoteIdRegex();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList string_array; //type: list of  string



}; // PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteIdRegex


class PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort : public Entity
{
    public:
        SrcPort();
        ~SrcPort();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Uint16_Rng_Array; //type: PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::Uint16_Rng_Array

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::Uint16_Rng_Array> > uint16_rng_array;


}; // PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort


class PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::Uint16_Rng_Array : public Entity
{
    public:
        Uint16_Rng_Array();
        ~Uint16_Rng_Array();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf min; //type: uint16
        YLeaf max; //type: uint16



}; // PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::Uint16_Rng_Array


class PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort : public Entity
{
    public:
        DstPort();
        ~DstPort();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Uint16_Rng_Array; //type: PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::Uint16_Rng_Array

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::Uint16_Rng_Array> > uint16_rng_array;


}; // PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort


class PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::Uint16_Rng_Array : public Entity
{
    public:
        Uint16_Rng_Array();
        ~Uint16_Rng_Array();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf min; //type: uint16
        YLeaf max; //type: uint16



}; // PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::Uint16_Rng_Array


class PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Shape : public Entity
{
    public:
        Shape();
        ~Shape();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Bw; //type: PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Shape::Bw
        class Be; //type: PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Shape::Be

        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Shape::Be> be;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Shape::Bw> bw;


}; // PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Shape


class PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Shape::Bw : public Entity
{
    public:
        Bw();
        ~Bw();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: PolicyParamUnitEnum



}; // PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Shape::Bw


class PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Shape::Be : public Entity
{
    public:
        Be();
        ~Be();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: PolicyParamUnitEnum



}; // PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Shape::Be


class PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy : public Entity
{
    public:
        ChildPolicy();
        ~ChildPolicy();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enc; //type: PolicyObjEncEnum

        class Info; //type: PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::Info
        class HdInfo; //type: PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::HdInfo

        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::HdInfo> hd_info;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::Info> info;


}; // PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy


class PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::Info : public Entity
{
    public:
        Info();
        ~Info();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string
        YLeaf type; //type: PolicyMapEnum



}; // PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::Info


class PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::HdInfo : public Entity
{
    public:
        HdInfo();
        ~HdInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf hd; //type: uint64

        class DataHd; //type: PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::HdInfo::DataHd

        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::HdInfo::DataHd> data_hd;


}; // PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::HdInfo


class PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::HdInfo::DataHd : public Entity
{
    public:
        DataHd();
        ~DataHd();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;





}; // PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::HdInfo::DataHd


class PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac : public Entity
{
    public:
        Cac();
        ~Cac();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf cac_type; //type: uint8
        YLeaf idle_timeout; //type: uint16

        class FlowRate; //type: PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::FlowRate
        class Rate; //type: PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::Rate

        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::FlowRate> flow_rate;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::Rate> rate;


}; // PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac


class PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::FlowRate : public Entity
{
    public:
        FlowRate();
        ~FlowRate();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: PolicyParamUnitEnum



}; // PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::FlowRate


class PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::Rate : public Entity
{
    public:
        Rate();
        ~Rate();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: PolicyParamUnitEnum



}; // PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::Rate


class PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc : public Entity
{
    public:
        Pfc();
        ~Pfc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pfc_pause_set; //type: uint32
        YLeaf buffer_size_flag; //type: uint32

        class BufferSize; //type: PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::BufferSize
        class PauseThreshold; //type: PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::PauseThreshold
        class ResumeThreshold; //type: PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::ResumeThreshold

        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::BufferSize> buffer_size;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::PauseThreshold> pause_threshold;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::ResumeThreshold> resume_threshold;


}; // PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc


class PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::BufferSize : public Entity
{
    public:
        BufferSize();
        ~BufferSize();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: PolicyParamUnitEnum



}; // PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::BufferSize


class PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::PauseThreshold : public Entity
{
    public:
        PauseThreshold();
        ~PauseThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: PolicyParamUnitEnum



}; // PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::PauseThreshold


class PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::ResumeThreshold : public Entity
{
    public:
        ResumeThreshold();
        ~ResumeThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: PolicyParamUnitEnum



}; // PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::ResumeThreshold


class PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::FlowParm : public Entity
{
    public:
        FlowParm();
        ~FlowParm();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf max_mon_flows; //type: uint32
        YLeaf mon_interval; //type: uint32
        YLeaf intvl_hist; //type: uint32
        YLeaf flow_timeout; //type: uint32



}; // PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::FlowParm


class PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr : public Entity
{
    public:
        Ipcbr();
        ~Ipcbr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf action_metric_type; //type: PolicyActionEnum
        YLeaf ip_pkt_rate; //type: uint32
        YLeaf media_pkt_size; //type: uint32
        YLeaf media_pkts_per_ip; //type: uint32

        class IpBitRate; //type: PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::IpBitRate
        class MediaBitRate; //type: PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::MediaBitRate

        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::IpBitRate> ip_bit_rate;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::MediaBitRate> media_bit_rate;


}; // PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr


class PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::IpBitRate : public Entity
{
    public:
        IpBitRate();
        ~IpBitRate();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: PolicyParamUnitEnum



}; // PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::IpBitRate


class PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::MediaBitRate : public Entity
{
    public:
        MediaBitRate();
        ~MediaBitRate();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: PolicyParamUnitEnum



}; // PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::MediaBitRate


class PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Rtp : public Entity
{
    public:
        Rtp();
        ~Rtp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf action_metric_type; //type: PolicyActionEnum
        YLeaf min_sequential; //type: uint32
        YLeaf max_dropout; //type: uint32
        YLeaf max_misorder; //type: uint32
        YLeaf seq_ext_cop4; //type: uint32

        class ClockRate; //type: PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Rtp::ClockRate

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Rtp::ClockRate> > clock_rate;


}; // PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Rtp


class PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Rtp::ClockRate : public Entity
{
    public:
        ClockRate();
        ~ClockRate();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pt; //type: uint32
        YLeaf frequency; //type: uint32



}; // PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Rtp::ClockRate


class PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpMmr : public Entity
{
    public:
        RtpMmr();
        ~RtpMmr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf action_metric_type; //type: PolicyActionEnum
        YLeaf min_sequential; //type: uint32
        YLeaf max_dropout; //type: uint32
        YLeaf max_misorder; //type: uint32
        YLeaf seq_ext_cop4; //type: uint32

        class ClockRate; //type: PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpMmr::ClockRate

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpMmr::ClockRate> > clock_rate;


}; // PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpMmr


class PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpMmr::ClockRate : public Entity
{
    public:
        ClockRate();
        ~ClockRate();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pt; //type: uint32
        YLeaf frequency; //type: uint32



}; // PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpMmr::ClockRate


class PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpJ2K : public Entity
{
    public:
        RtpJ2K();
        ~RtpJ2K();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf action_metric_type; //type: PolicyActionEnum
        YLeaf min_sequential; //type: uint32
        YLeaf max_dropout; //type: uint32
        YLeaf max_misorder; //type: uint32
        YLeaf seq_ext_cop4; //type: uint32

        class ClockRate; //type: PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpJ2K::ClockRate

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpJ2K::ClockRate> > clock_rate;


}; // PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpJ2K


class PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpJ2K::ClockRate : public Entity
{
    public:
        ClockRate();
        ~ClockRate();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pt; //type: uint32
        YLeaf frequency; //type: uint32



}; // PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpJ2K::ClockRate


class PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpVoice : public Entity
{
    public:
        RtpVoice();
        ~RtpVoice();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf action_metric_type; //type: PolicyActionEnum
        YLeaf min_sequential; //type: uint32
        YLeaf max_dropout; //type: uint32
        YLeaf max_misorder; //type: uint32
        YLeaf seq_ext_cop4; //type: uint32

        class ClockRate; //type: PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpVoice::ClockRate

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpVoice::ClockRate> > clock_rate;


}; // PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpVoice


class PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpVoice::ClockRate : public Entity
{
    public:
        ClockRate();
        ~ClockRate();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pt; //type: uint32
        YLeaf frequency; //type: uint32



}; // PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpVoice::ClockRate


class PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi : public Entity
{
    public:
        Mdi();
        ~Mdi();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf action_metric_type; //type: PolicyActionEnum
        YLeaf filtered_pkt_rate; //type: uint32
        YLeaf ip_pkt_rate; //type: uint32
        YLeafList pids; //type: list of  uint32

        class IpBitRate; //type: PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::IpBitRate

        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::IpBitRate> ip_bit_rate;


}; // PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi


class PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::IpBitRate : public Entity
{
    public:
        IpBitRate();
        ~IpBitRate();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: PolicyParamUnitEnum



}; // PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::IpBitRate


class PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp : public Entity
{
    public:
        MdiRtp();
        ~MdiRtp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf action_metric_type; //type: PolicyActionEnum
        YLeaf filtered_pkt_rate; //type: uint32
        YLeaf ip_pkt_rate; //type: uint32
        YLeafList pids; //type: list of  uint32

        class IpBitRate; //type: PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::IpBitRate

        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::IpBitRate> ip_bit_rate;


}; // PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp


class PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::IpBitRate : public Entity
{
    public:
        IpBitRate();
        ~IpBitRate();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: PolicyParamUnitEnum



}; // PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::IpBitRate


class PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Fmm : public Entity
{
    public:
        Fmm();
        ~Fmm();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf fmm_name; //type: string



}; // PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Fmm


class PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf : public Entity
{
    public:
        Pbf();
        ~Pbf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ActionPbfInfoArray; //type: PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf::ActionPbfInfoArray

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf::ActionPbfInfoArray> > action_pbf_info_array;


}; // PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf


class PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf::ActionPbfInfoArray : public Entity
{
    public:
        ActionPbfInfoArray();
        ~ActionPbfInfoArray();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf addr; //type: string
        YLeaf vrf; //type: string
        YLeaf rt_type; //type: uint8
        YLeaf rt; //type: string



}; // PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf::ActionPbfInfoArray


class PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh : public Entity
{
    public:
        Ipv4Nh();
        ~Ipv4Nh();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ActionIpv4NhInfoArray; //type: PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh::ActionIpv4NhInfoArray

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh::ActionIpv4NhInfoArray> > action_ipv4_nh_info_array;


}; // PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh


class PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh::ActionIpv4NhInfoArray : public Entity
{
    public:
        ActionIpv4NhInfoArray();
        ~ActionIpv4NhInfoArray();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf nh_addr; //type: string
        YLeaf vrf_name; //type: string



}; // PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh::ActionIpv4NhInfoArray


class PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh : public Entity
{
    public:
        Ipv6Nh();
        ~Ipv6Nh();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ActionIpv6NhInfoArray; //type: PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh::ActionIpv6NhInfoArray

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh::ActionIpv6NhInfoArray> > action_ipv6_nh_info_array;


}; // PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh


class PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh::ActionIpv6NhInfoArray : public Entity
{
    public:
        ActionIpv6NhInfoArray();
        ~ActionIpv6NhInfoArray();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf nh_addr; //type: string
        YLeaf vrf_name; //type: string



}; // PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh::ActionIpv6NhInfoArray


class PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails : public Entity
{
    public:
        PolicyMapDetails();
        ~PolicyMapDetails();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PolicyMapDetail; //type: PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail> > policy_map_detail;


}; // PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails


class PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail : public Entity
{
    public:
        PolicyMapDetail();
        ~PolicyMapDetail();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf policy_map_name; //type: string
        YLeaf object_type; //type: PlmgrApplnEnum
        YLeaf total_objects; //type: uint32
        YLeaf transient; //type: boolean

        class Reference; //type: PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::Reference
        class Object; //type: PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::Object
        class ClassMapReference; //type: PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::ClassMapReference

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::ClassMapReference> > class_map_reference;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::Object> > object;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::Reference> > reference;


}; // PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail


class PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::Reference : public Entity
{
    public:
        Reference();
        ~Reference();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf total_internal_reference_objects; //type: uint32
        YLeaf total_class_maps; //type: uint32
        YLeaf total_flows; //type: uint32



}; // PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::Reference


class PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::Object : public Entity
{
    public:
        Object();
        ~Object();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf object_name; //type: string



}; // PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::Object


class PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::ClassMapReference : public Entity
{
    public:
        ClassMapReference();
        ~ClassMapReference();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf total_reference_objects; //type: uint32

        class PolicyMapReference; //type: PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::ClassMapReference::PolicyMapReference

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::ClassMapReference::PolicyMapReference> > policy_map_reference;


}; // PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::ClassMapReference


class PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::ClassMapReference::PolicyMapReference : public Entity
{
    public:
        PolicyMapReference();
        ~PolicyMapReference();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf object_type; //type: PlmgrApplnEnum
        YLeaf policy_map_name; //type: string



}; // PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::ClassMapReference::PolicyMapReference


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypes : public Entity
{
    public:
        TransientPolicyMapTypes();
        ~TransientPolicyMapTypes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class TransientPolicyMapType; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType> > transient_policy_map_type;


}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypes


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType : public Entity
{
    public:
        TransientPolicyMapType();
        ~TransientPolicyMapType();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: PolicymgrPolicyMapEnum

        class TransientListUnuseds; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds

        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds> transient_list_unuseds;


}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds : public Entity
{
    public:
        TransientListUnuseds();
        ~TransientListUnuseds();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class TransientListUnused; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused> > transient_list_unused;


}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused : public Entity
{
    public:
        TransientListUnused();
        ~TransientListUnused();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf policy_map_name; //type: string
        YLeaf object_type; //type: PlmgrApplnEnum
        YLeaf total_objects; //type: uint32
        YLeaf transient; //type: boolean

        class Reference; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::Reference
        class Object; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::Object
        class ClassMapReference; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::ClassMapReference

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::ClassMapReference> > class_map_reference;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::Object> > object;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::Reference> > reference;


}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::Reference : public Entity
{
    public:
        Reference();
        ~Reference();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf total_internal_reference_objects; //type: uint32
        YLeaf total_class_maps; //type: uint32
        YLeaf total_flows; //type: uint32



}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::Reference


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::Object : public Entity
{
    public:
        Object();
        ~Object();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf object_name; //type: string



}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::Object


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::ClassMapReference : public Entity
{
    public:
        ClassMapReference();
        ~ClassMapReference();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf total_reference_objects; //type: uint32

        class PolicyMapReference; //type: PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::ClassMapReference::PolicyMapReference

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::ClassMapReference::PolicyMapReference> > policy_map_reference;


}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::ClassMapReference


class PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::ClassMapReference::PolicyMapReference : public Entity
{
    public:
        PolicyMapReference();
        ~PolicyMapReference();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf object_type; //type: PlmgrApplnEnum
        YLeaf policy_map_name; //type: string



}; // PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::ClassMapReference::PolicyMapReference


class PolicyManager::Nodes::Node::Summary : public Entity
{
    public:
        Summary();
        ~Summary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf total_class_maps; //type: uint32
        YLeaf total_class_map_types; //type: uint32
        YLeaf total_policy_maps; //type: uint32
        YLeaf total_policy_map_types; //type: uint32

        class ClassMap; //type: PolicyManager::Nodes::Node::Summary::ClassMap
        class PolicyMap; //type: PolicyManager::Nodes::Node::Summary::PolicyMap

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::Summary::ClassMap> > class_map;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::Summary::PolicyMap> > policy_map;


}; // PolicyManager::Nodes::Node::Summary


class PolicyManager::Nodes::Node::Summary::ClassMap : public Entity
{
    public:
        ClassMap();
        ~ClassMap();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf object_type; //type: PlmgrApplnEnum
        YLeaf total_objects; //type: uint32
        YLeaf transient; //type: boolean

        class Reference; //type: PolicyManager::Nodes::Node::Summary::ClassMap::Reference
        class Object; //type: PolicyManager::Nodes::Node::Summary::ClassMap::Object
        class ClassMapReference; //type: PolicyManager::Nodes::Node::Summary::ClassMap::ClassMapReference

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::Summary::ClassMap::ClassMapReference> > class_map_reference;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::Summary::ClassMap::Object> > object;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::Summary::ClassMap::Reference> > reference;


}; // PolicyManager::Nodes::Node::Summary::ClassMap


class PolicyManager::Nodes::Node::Summary::ClassMap::Reference : public Entity
{
    public:
        Reference();
        ~Reference();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf total_internal_reference_objects; //type: uint32
        YLeaf total_class_maps; //type: uint32
        YLeaf total_flows; //type: uint32



}; // PolicyManager::Nodes::Node::Summary::ClassMap::Reference


class PolicyManager::Nodes::Node::Summary::ClassMap::Object : public Entity
{
    public:
        Object();
        ~Object();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf object_name; //type: string



}; // PolicyManager::Nodes::Node::Summary::ClassMap::Object


class PolicyManager::Nodes::Node::Summary::ClassMap::ClassMapReference : public Entity
{
    public:
        ClassMapReference();
        ~ClassMapReference();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf total_reference_objects; //type: uint32

        class PolicyMapReference; //type: PolicyManager::Nodes::Node::Summary::ClassMap::ClassMapReference::PolicyMapReference

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::Summary::ClassMap::ClassMapReference::PolicyMapReference> > policy_map_reference;


}; // PolicyManager::Nodes::Node::Summary::ClassMap::ClassMapReference


class PolicyManager::Nodes::Node::Summary::ClassMap::ClassMapReference::PolicyMapReference : public Entity
{
    public:
        PolicyMapReference();
        ~PolicyMapReference();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf object_type; //type: PlmgrApplnEnum
        YLeaf policy_map_name; //type: string



}; // PolicyManager::Nodes::Node::Summary::ClassMap::ClassMapReference::PolicyMapReference


class PolicyManager::Nodes::Node::Summary::PolicyMap : public Entity
{
    public:
        PolicyMap();
        ~PolicyMap();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf object_type; //type: PlmgrApplnEnum
        YLeaf total_objects; //type: uint32
        YLeaf transient; //type: boolean

        class Reference; //type: PolicyManager::Nodes::Node::Summary::PolicyMap::Reference
        class Object; //type: PolicyManager::Nodes::Node::Summary::PolicyMap::Object
        class ClassMapReference; //type: PolicyManager::Nodes::Node::Summary::PolicyMap::ClassMapReference

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::Summary::PolicyMap::ClassMapReference> > class_map_reference;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::Summary::PolicyMap::Object> > object;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::Summary::PolicyMap::Reference> > reference;


}; // PolicyManager::Nodes::Node::Summary::PolicyMap


class PolicyManager::Nodes::Node::Summary::PolicyMap::Reference : public Entity
{
    public:
        Reference();
        ~Reference();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf total_internal_reference_objects; //type: uint32
        YLeaf total_class_maps; //type: uint32
        YLeaf total_flows; //type: uint32



}; // PolicyManager::Nodes::Node::Summary::PolicyMap::Reference


class PolicyManager::Nodes::Node::Summary::PolicyMap::Object : public Entity
{
    public:
        Object();
        ~Object();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf object_name; //type: string



}; // PolicyManager::Nodes::Node::Summary::PolicyMap::Object


class PolicyManager::Nodes::Node::Summary::PolicyMap::ClassMapReference : public Entity
{
    public:
        ClassMapReference();
        ~ClassMapReference();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf total_reference_objects; //type: uint32

        class PolicyMapReference; //type: PolicyManager::Nodes::Node::Summary::PolicyMap::ClassMapReference::PolicyMapReference

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::Summary::PolicyMap::ClassMapReference::PolicyMapReference> > policy_map_reference;


}; // PolicyManager::Nodes::Node::Summary::PolicyMap::ClassMapReference


class PolicyManager::Nodes::Node::Summary::PolicyMap::ClassMapReference::PolicyMapReference : public Entity
{
    public:
        PolicyMapReference();
        ~PolicyMapReference();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf object_type; //type: PlmgrApplnEnum
        YLeaf policy_map_name; //type: string



}; // PolicyManager::Nodes::Node::Summary::PolicyMap::ClassMapReference::PolicyMapReference


}
}

#endif /* _CISCO_IOS_XR_INFRA_POLICYMGR_OPER_68_ */

