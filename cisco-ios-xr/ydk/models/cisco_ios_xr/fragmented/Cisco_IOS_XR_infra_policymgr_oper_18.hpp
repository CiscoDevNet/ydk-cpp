#ifndef _CISCO_IOS_XR_INFRA_POLICYMGR_OPER_18_
#define _CISCO_IOS_XR_INFRA_POLICYMGR_OPER_18_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_infra_policymgr_oper_0.hpp"
#include "Cisco_IOS_XR_infra_policymgr_oper_11.hpp"
#include "Cisco_IOS_XR_infra_policymgr_oper_16.hpp"
#include "Cisco_IOS_XR_infra_policymgr_oper_17.hpp"

namespace ydk {
namespace Cisco_IOS_XR_infra_policymgr_oper {


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort : public Entity
{
    public:
        NasPort();
        ~NasPort();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class NasPortArray; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::NasPortArray

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::NasPortArray> > nas_port_array;


}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::NasPortArray : public Entity
{
    public:
        NasPortArray();
        ~NasPortArray();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sub_id; //type: MatchNasPortSubIdEnum
        YLeaf operator_; //type: MatchLogicalOperatorEnum
        YLeaf value_; //type: uint32



}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::NasPortArray


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceName : public Entity
{
    public:
        ServiceName();
        ~ServiceName();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList string_array; //type: list of  string



}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceName


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceNameRegex : public Entity
{
    public:
        ServiceNameRegex();
        ~ServiceNameRegex();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList string_array; //type: list of  string



}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceNameRegex


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4 : public Entity
{
    public:
        SrcAddrIpv4();
        ~SrcAddrIpv4();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Ipv4AddrArray; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::Ipv4AddrArray

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::Ipv4AddrArray> > ipv4_addr_array;


}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::Ipv4AddrArray : public Entity
{
    public:
        Ipv4AddrArray();
        ~Ipv4AddrArray();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix; //type: string
        YLeaf mask; //type: string



}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::Ipv4AddrArray


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4 : public Entity
{
    public:
        DstAddrIpv4();
        ~DstAddrIpv4();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Ipv4AddrArray; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::Ipv4AddrArray

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::Ipv4AddrArray> > ipv4_addr_array;


}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::Ipv4AddrArray : public Entity
{
    public:
        Ipv4AddrArray();
        ~Ipv4AddrArray();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix; //type: string
        YLeaf mask; //type: string



}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::Ipv4AddrArray


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6 : public Entity
{
    public:
        SrcAddrIpv6();
        ~SrcAddrIpv6();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Ipv6AddrArray; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6::Ipv6AddrArray

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6::Ipv6AddrArray> > ipv6_addr_array;


}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6::Ipv6AddrArray : public Entity
{
    public:
        Ipv6AddrArray();
        ~Ipv6AddrArray();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix; //type: string
        YLeaf mask; //type: uint32



}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6::Ipv6AddrArray


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6 : public Entity
{
    public:
        DstAddrIpv6();
        ~DstAddrIpv6();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Ipv6AddrArray; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::Ipv6AddrArray

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::Ipv6AddrArray> > ipv6_addr_array;


}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::Ipv6AddrArray : public Entity
{
    public:
        Ipv6AddrArray();
        ~Ipv6AddrArray();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix; //type: string
        YLeaf mask; //type: uint32



}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::Ipv6AddrArray


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac : public Entity
{
    public:
        SrcAddrMac();
        ~SrcAddrMac();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class MacAddrArray; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac::MacAddrArray

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac::MacAddrArray> > mac_addr_array;


}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac::MacAddrArray : public Entity
{
    public:
        MacAddrArray();
        ~MacAddrArray();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList mac_addr; //type: list of  uint16
        YLeafList mask; //type: list of  uint16



}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac::MacAddrArray


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Timer : public Entity
{
    public:
        Timer();
        ~Timer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList string_array; //type: list of  string



}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Timer


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TimerRegexp : public Entity
{
    public:
        TimerRegexp();
        ~TimerRegexp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList string_array; //type: list of  string



}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TimerRegexp


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelName : public Entity
{
    public:
        TunnelName();
        ~TunnelName();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList string_array; //type: list of  string



}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelName


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelNameRegex : public Entity
{
    public:
        TunnelNameRegex();
        ~TunnelNameRegex();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList string_array; //type: list of  string



}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelNameRegex


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserName : public Entity
{
    public:
        UserName();
        ~UserName();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList string_array; //type: list of  string



}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserName


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserNameRegex : public Entity
{
    public:
        UserNameRegex();
        ~UserNameRegex();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList string_array; //type: list of  string



}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserNameRegex


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsername : public Entity
{
    public:
        AuthUsername();
        ~AuthUsername();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList string_array; //type: list of  string



}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsername


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsernameRegex : public Entity
{
    public:
        AuthUsernameRegex();
        ~AuthUsernameRegex();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList string_array; //type: list of  string



}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsernameRegex


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsername : public Entity
{
    public:
        UnauthUsername();
        ~UnauthUsername();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList string_array; //type: list of  string



}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsername


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsernameRegex : public Entity
{
    public:
        UnauthUsernameRegex();
        ~UnauthUsernameRegex();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList string_array; //type: list of  string



}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsernameRegex


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomain : public Entity
{
    public:
        AuthDomain();
        ~AuthDomain();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList string_array; //type: list of  string



}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomain


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomainRegex : public Entity
{
    public:
        AuthDomainRegex();
        ~AuthDomainRegex();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList string_array; //type: list of  string



}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomainRegex


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomain : public Entity
{
    public:
        UnauthDomain();
        ~UnauthDomain();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList string_array; //type: list of  string



}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomain


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomainRegex : public Entity
{
    public:
        UnauthDomainRegex();
        ~UnauthDomainRegex();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList string_array; //type: list of  string



}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomainRegex


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorId : public Entity
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



}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorId


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorIdRegex : public Entity
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



}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorIdRegex


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AccessInterface : public Entity
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



}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AccessInterface


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputInterface : public Entity
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



}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputInterface


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputIntfhdl : public Entity
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



}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputIntfhdl


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype : public Entity
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



        class Uint16_Rng_Array; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::Uint16_Rng_Array

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::Uint16_Rng_Array> > uint16_rng_array;


}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::Uint16_Rng_Array : public Entity
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



}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::Uint16_Rng_Array


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData : public Entity
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

        class FlowKeys; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::FlowKeys

        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::FlowKeys> flow_keys;


}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::FlowKeys : public Entity
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



}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::FlowKeys


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientId : public Entity
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



}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientId


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientIdRegex : public Entity
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



}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientIdRegex


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitId : public Entity
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



}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitId


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitIdRegex : public Entity
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



}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitIdRegex


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteId : public Entity
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



}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteId


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteIdRegex : public Entity
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



}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteIdRegex


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort : public Entity
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



        class Uint16_Rng_Array; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::Uint16_Rng_Array

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::Uint16_Rng_Array> > uint16_rng_array;


}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::Uint16_Rng_Array : public Entity
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



}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::Uint16_Rng_Array


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort : public Entity
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



        class Uint16_Rng_Array; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::Uint16_Rng_Array

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::Uint16_Rng_Array> > uint16_rng_array;


}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::Uint16_Rng_Array : public Entity
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



}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::Uint16_Rng_Array


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop : public Entity
{
    public:
        ActInfop();
        ~ActInfop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PolicyActionInfoSt; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt> > policy_action_info_st;


}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt : public Entity
{
    public:
        PolicyActionInfoSt();
        ~PolicyActionInfoSt();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seq; //type: uint16
        YLeaf flags; //type: uint16

        class Actp; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp

        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp> actp;


}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp : public Entity
{
    public:
        Actp();
        ~Actp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: PolicyActionEnum
        YLeaf data_p; //type: uint32

        class Mark; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark
        class Mark2; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2
        class Wred; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred
        class Encap; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Encap
        class Prio; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Prio
        class Bwrem; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem
        class MinBw; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw
        class AuthenAaa; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AuthenAaa
        class CollectId; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::CollectId
        class DecodeId; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DecodeId
        class SetTimer; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::SetTimer
        class StopTimer; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::StopTimer
        class AcctAaaList; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AcctAaaList
        class QueryAncp; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::QueryAncp
        class PrepaidCfg; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::PrepaidCfg
        class TimeoutIdle; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::TimeoutIdle
        class ProxyAaa; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ProxyAaa
        class ActTemplate; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ActTemplate
        class DeactTemplate; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DeactTemplate
        class Qlimit; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit
        class AccountingEventAaa; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AccountingEventAaa
        class AuthorizeId; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AuthorizeId
        class AfmReact; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AfmReact
        class Httpr; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Httpr
        class Punt; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Punt
        class Copy; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Copy
        class Sfrag; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Sfrag
        class Redirect; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Redirect
        class OutIntf; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::OutIntf
        class ServFunc; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ServFunc
        class Police; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police
        class Shape; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Shape
        class ChildPolicy; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy
        class Cac; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac
        class Pfc; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc
        class FlowParm; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::FlowParm
        class Ipcbr; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr
        class Rtp; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Rtp
        class RtpMmr; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpMmr
        class RtpJ2K; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpJ2K
        class RtpVoice; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpVoice
        class Mdi; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi
        class MdiRtp; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp
        class Fmm; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Fmm
        class Pbf; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf
        class Ipv4Nh; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh
        class Ipv6Nh; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh

        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AccountingEventAaa> accounting_event_aaa;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AcctAaaList> acct_aaa_list;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ActTemplate> act_template;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AfmReact> afm_react;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AuthenAaa> authen_aaa;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AuthorizeId> authorize_id;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem> bwrem;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac> cac;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy> child_policy;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::CollectId> collect_id;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Copy> copy;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DeactTemplate> deact_template;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DecodeId> decode_id;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Encap> encap;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::FlowParm> flow_parm;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Fmm> fmm;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Httpr> httpr;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr> ipcbr;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh> ipv4_nh;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh> ipv6_nh;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark> mark;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2> mark2;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi> mdi;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp> mdi_rtp;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw> min_bw;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::OutIntf> out_intf;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf> pbf;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc> pfc;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police> police;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::PrepaidCfg> prepaid_cfg;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Prio> prio;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ProxyAaa> proxy_aaa;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Punt> punt;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit> qlimit;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::QueryAncp> query_ancp;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Redirect> redirect;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Rtp> rtp;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpJ2K> rtp_j2k;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpMmr> rtp_mmr;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpVoice> rtp_voice;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ServFunc> serv_func;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::SetTimer> set_timer;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Sfrag> sfrag;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Shape> shape;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::StopTimer> stop_timer;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::TimeoutIdle> timeout_idle;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred> wred;


}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark : public Entity
{
    public:
        Mark();
        ~Mark();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ActionMarkInfo; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark::ActionMarkInfo

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark::ActionMarkInfo> > action_mark_info;


}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark::ActionMarkInfo : public Entity
{
    public:
        ActionMarkInfo();
        ~ActionMarkInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: MarkEnum
        YLeaf mark_flags; //type: uint32
        YLeaf value_; //type: uint16



}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark::ActionMarkInfo


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2 : public Entity
{
    public:
        Mark2();
        ~Mark2();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ActionMark2Info; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2::ActionMark2Info

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2::ActionMark2Info> > action_mark2_info;


}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2::ActionMark2Info : public Entity
{
    public:
        ActionMark2Info();
        ~ActionMark2Info();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf value_overflow; //type: uint16
        YLeaf type; //type: uint8
        YLeaf mark_flags; //type: uint8



}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2::ActionMark2Info


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred : public Entity
{
    public:
        Wred();
        ~Wred();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ActionWredInfo; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo> > action_wred_info;


}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo : public Entity
{
    public:
        ActionWredInfo();
        ~ActionWredInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: WredEnum
        YLeaf wred_flags; //type: uint32
        YLeaf probability; //type: uint32

        class MatchRanges; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MatchRanges
        class MinThreshold; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MinThreshold
        class MaxThreshold; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MaxThreshold

        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MatchRanges> match_ranges;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MaxThreshold> max_threshold;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MinThreshold> min_threshold;


}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MatchRanges : public Entity
{
    public:
        MatchRanges();
        ~MatchRanges();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Uint8_Rng_Array; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MatchRanges::Uint8_Rng_Array

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MatchRanges::Uint8_Rng_Array> > uint8_rng_array;


}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MatchRanges


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MatchRanges::Uint8_Rng_Array : public Entity
{
    public:
        Uint8_Rng_Array();
        ~Uint8_Rng_Array();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf min; //type: uint8
        YLeaf max; //type: uint8



}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MatchRanges::Uint8_Rng_Array


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MinThreshold : public Entity
{
    public:
        MinThreshold();
        ~MinThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: PolicyParamUnitEnum



}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MinThreshold


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MaxThreshold : public Entity
{
    public:
        MaxThreshold();
        ~MaxThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: PolicyParamUnitEnum



}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MaxThreshold


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Encap : public Entity
{
    public:
        Encap();
        ~Encap();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seq; //type: uint8



}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Encap


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Prio : public Entity
{
    public:
        Prio();
        ~Prio();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prio_lvl; //type: uint32



}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Prio


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem : public Entity
{
    public:
        Bwrem();
        ~Bwrem();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Bwrem_; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::Bwrem_

        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::Bwrem_> bwrem;


}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::Bwrem_ : public Entity
{
    public:
        Bwrem_();
        ~Bwrem_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: PolicyParamUnitEnum



}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::Bwrem_


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw : public Entity
{
    public:
        MinBw();
        ~MinBw();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Bw; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::Bw

        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::Bw> bw;


}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::Bw : public Entity
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



}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::Bw


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AuthenAaa : public Entity
{
    public:
        AuthenAaa();
        ~AuthenAaa();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf aaa_list_name; //type: string
        YLeaf authen_password; //type: string



}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AuthenAaa


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::CollectId : public Entity
{
    public:
        CollectId();
        ~CollectId();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf id; //type: IdentifierEnum
        YLeaf aaa_list_name; //type: string



}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::CollectId


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DecodeId : public Entity
{
    public:
        DecodeId();
        ~DecodeId();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf id; //type: DecodeIdentifierEnum
        YLeaf format_name; //type: string



}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DecodeId


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::SetTimer : public Entity
{
    public:
        SetTimer();
        ~SetTimer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf timer_name; //type: string
        YLeaf duration; //type: uint32
        YLeaf absolute_time; //type: string



}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::SetTimer


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::StopTimer : public Entity
{
    public:
        StopTimer();
        ~StopTimer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf timer_name; //type: string



}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::StopTimer


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AcctAaaList : public Entity
{
    public:
        AcctAaaList();
        ~AcctAaaList();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf aaa_list_name; //type: string
        YLeaf secs; //type: uint32



}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AcctAaaList


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::QueryAncp : public Entity
{
    public:
        QueryAncp();
        ~QueryAncp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enable; //type: uint8



}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::QueryAncp


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::PrepaidCfg : public Entity
{
    public:
        PrepaidCfg();
        ~PrepaidCfg();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prepaid_config_profile_name; //type: string



}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::PrepaidCfg


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::TimeoutIdle : public Entity
{
    public:
        TimeoutIdle();
        ~TimeoutIdle();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf secs; //type: uint32



}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::TimeoutIdle


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ProxyAaa : public Entity
{
    public:
        ProxyAaa();
        ~ProxyAaa();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf aaa_list_name; //type: string



}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ProxyAaa


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ActTemplate : public Entity
{
    public:
        ActTemplate();
        ~ActTemplate();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf template_name; //type: string
        YLeaf aaa_list_name; //type: string
        YLeaf flags; //type: uint32



}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ActTemplate


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DeactTemplate : public Entity
{
    public:
        DeactTemplate();
        ~DeactTemplate();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf template_name; //type: string
        YLeaf aaa_list_name; //type: string
        YLeaf flags; //type: uint32



}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DeactTemplate


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit : public Entity
{
    public:
        Qlimit();
        ~Qlimit();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ActionQlimitInfoArray; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray> > action_qlimit_info_array;


}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray : public Entity
{
    public:
        ActionQlimitInfoArray();
        ~ActionQlimitInfoArray();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: QlimitEnum
        YLeaf qlimit_flags; //type: uint32

        class Qlim; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray::Qlim
        class AtmclpQlim; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray::AtmclpQlim
        class MatchValues; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray::MatchValues

        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray::AtmclpQlim> atmclp_qlim;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray::MatchValues> match_values;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray::Qlim> qlim;


}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray::Qlim : public Entity
{
    public:
        Qlim();
        ~Qlim();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: PolicyParamUnitEnum



}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray::Qlim


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray::AtmclpQlim : public Entity
{
    public:
        AtmclpQlim();
        ~AtmclpQlim();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: PolicyParamUnitEnum



}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray::AtmclpQlim


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray::MatchValues : public Entity
{
    public:
        MatchValues();
        ~MatchValues();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Uint8_Rng_Array; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray::MatchValues::Uint8_Rng_Array

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray::MatchValues::Uint8_Rng_Array> > uint8_rng_array;


}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray::MatchValues


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray::MatchValues::Uint8_Rng_Array : public Entity
{
    public:
        Uint8_Rng_Array();
        ~Uint8_Rng_Array();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf min; //type: uint8
        YLeaf max; //type: uint8



}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray::MatchValues::Uint8_Rng_Array


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AccountingEventAaa : public Entity
{
    public:
        AccountingEventAaa();
        ~AccountingEventAaa();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf action; //type: AcctEnum
        YLeaf aaa_list_name; //type: string



}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AccountingEventAaa


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AuthorizeId : public Entity
{
    public:
        AuthorizeId();
        ~AuthorizeId();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf id; //type: uint8
        YLeaf aaa_list_name; //type: string
        YLeaf format_name; //type: string
        YLeaf password; //type: string



}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AuthorizeId


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AfmReact : public Entity
{
    public:
        AfmReact();
        ~AfmReact();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ActionAfmonReactInfo; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AfmReact::ActionAfmonReactInfo

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AfmReact::ActionAfmonReactInfo> > action_afmon_react_info;


}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AfmReact


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AfmReact::ActionAfmonReactInfo : public Entity
{
    public:
        ActionAfmonReactInfo();
        ~ActionAfmonReactInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf oper_id; //type: uint32
        YLeaf description; //type: string
        YLeaf trig_num_intvls; //type: uint32
        YLeaf clone_ifh; //type: uint32
        YLeaf notif_actns; //type: uint8
        YLeaf criterion; //type: uint8
        YLeaf trig_type; //type: uint8
        YLeaf trig_relop; //type: uint8
        YLeaf trig_level_1; //type: string
        YLeaf trig_level_2; //type: string
        YLeaf alm_grp_thresh; //type: uint16
        YLeaf alm_type; //type: uint8
        YLeaf alm_severity; //type: uint8



}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AfmReact::ActionAfmonReactInfo


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Httpr : public Entity
{
    public:
        Httpr();
        ~Httpr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf redirect_url; //type: string



}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Httpr


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Punt : public Entity
{
    public:
        Punt();
        ~Punt();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sn_type; //type: DpssSnidEnum
        YLeaf sn_index; //type: uint32
        YLeaf sn_name; //type: string
        YLeaf app_id; //type: uint32
        YLeaf local_id; //type: uint32
        YLeaf vsnode_type; //type: VsvcServiceEnum



}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Punt


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Copy : public Entity
{
    public:
        Copy();
        ~Copy();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf num_byte; //type: uint32
        YLeaf sn_type; //type: DpssSnidEnum
        YLeaf sn_index; //type: uint32
        YLeaf sn_name; //type: string
        YLeaf app_id; //type: uint32
        YLeaf local_id; //type: uint32
        YLeaf vsnode_type; //type: VsvcServiceEnum



}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Copy


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Sfrag : public Entity
{
    public:
        Sfrag();
        ~Sfrag();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string



}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Sfrag


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Redirect : public Entity
{
    public:
        Redirect();
        ~Redirect();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf type; //type: uint8



}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Redirect


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::OutIntf : public Entity
{
    public:
        OutIntf();
        ~OutIntf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf out_ifname; //type: string



}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::OutIntf


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ServFunc : public Entity
{
    public:
        ServFunc();
        ~ServFunc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf path_id; //type: uint32
        YLeaf service_index; //type: uint8
        YLeaf meta_name; //type: string
        YLeaf vs_index; //type: uint32



}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ServFunc


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police : public Entity
{
    public:
        Police();
        ~Police();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf flags; //type: uint32
        YLeaf police_flags; //type: uint32
        YLeaf sbuck_name; //type: string
        YLeaf sbuck_type; //type: SharedBucketEnum

        class Rate; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::Rate
        class Burst; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::Burst
        class PeakRate; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::PeakRate
        class PeakBurst; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::PeakBurst
        class Cdvt; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::Cdvt
        class ConformActns; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConformActns
        class ExceedActns; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExceedActns
        class ViolateActns; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ViolateActns
        class ConfclassEncode; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode
        class ConfclassP; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassP
        class ExcdclassEncode; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassEncode
        class ExcdclassP; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP

        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::Burst> burst;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::Cdvt> cdvt;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode> confclass_encode;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassP> confclass_p;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConformActns> conform_actns;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassEncode> excdclass_encode;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP> excdclass_p;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExceedActns> exceed_actns;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::PeakBurst> peak_burst;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::PeakRate> peak_rate;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::Rate> rate;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ViolateActns> violate_actns;


}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::Rate : public Entity
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



}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::Rate


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::Burst : public Entity
{
    public:
        Burst();
        ~Burst();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: PolicyParamUnitEnum



}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::Burst


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::PeakRate : public Entity
{
    public:
        PeakRate();
        ~PeakRate();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: PolicyParamUnitEnum



}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::PeakRate


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::PeakBurst : public Entity
{
    public:
        PeakBurst();
        ~PeakBurst();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: PolicyParamUnitEnum



}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::PeakBurst


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::Cdvt : public Entity
{
    public:
        Cdvt();
        ~Cdvt();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: PolicyParamUnitEnum



}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::Cdvt


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConformActns : public Entity
{
    public:
        ConformActns();
        ~ConformActns();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PoliceActionArray; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConformActns::PoliceActionArray

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConformActns::PoliceActionArray> > police_action_array;


}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConformActns


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConformActns::PoliceActionArray : public Entity
{
    public:
        PoliceActionArray();
        ~PoliceActionArray();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: PoliceActionEnum

        class Mark; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConformActns::PoliceActionArray::Mark

        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConformActns::PoliceActionArray::Mark> mark;


}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConformActns::PoliceActionArray


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConformActns::PoliceActionArray::Mark : public Entity
{
    public:
        Mark();
        ~Mark();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: MarkEnum
        YLeaf mark_flags; //type: uint32
        YLeaf value_; //type: uint16



}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConformActns::PoliceActionArray::Mark


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExceedActns : public Entity
{
    public:
        ExceedActns();
        ~ExceedActns();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PoliceActionArray; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExceedActns::PoliceActionArray

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExceedActns::PoliceActionArray> > police_action_array;


}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExceedActns


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExceedActns::PoliceActionArray : public Entity
{
    public:
        PoliceActionArray();
        ~PoliceActionArray();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: PoliceActionEnum

        class Mark; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExceedActns::PoliceActionArray::Mark

        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExceedActns::PoliceActionArray::Mark> mark;


}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExceedActns::PoliceActionArray


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExceedActns::PoliceActionArray::Mark : public Entity
{
    public:
        Mark();
        ~Mark();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: MarkEnum
        YLeaf mark_flags; //type: uint32
        YLeaf value_; //type: uint16



}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExceedActns::PoliceActionArray::Mark


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ViolateActns : public Entity
{
    public:
        ViolateActns();
        ~ViolateActns();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PoliceActionArray; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ViolateActns::PoliceActionArray

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ViolateActns::PoliceActionArray> > police_action_array;


}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ViolateActns


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ViolateActns::PoliceActionArray : public Entity
{
    public:
        PoliceActionArray();
        ~PoliceActionArray();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: PoliceActionEnum

        class Mark; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ViolateActns::PoliceActionArray::Mark

        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ViolateActns::PoliceActionArray::Mark> mark;


}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ViolateActns::PoliceActionArray


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ViolateActns::PoliceActionArray::Mark : public Entity
{
    public:
        Mark();
        ~Mark();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: MarkEnum
        YLeaf mark_flags; //type: uint32
        YLeaf value_; //type: uint16



}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ViolateActns::PoliceActionArray::Mark


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode : public Entity
{
    public:
        ConfclassEncode();
        ~ConfclassEncode();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enc; //type: PolicyObjEncEnum
        YLeaf class_name; //type: string
        YLeaf hd; //type: uint64
        YLeaf idx; //type: uint8

        class InlineCmap; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap

        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap> inline_cmap;


}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap : public Entity
{
    public:
        InlineCmap();
        ~InlineCmap();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf mode; //type: ClassMapModeEnum
        YLeaf flags; //type: uint32
        YLeaf match_count; //type: uint32

        class MatchInfop; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop

        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop> match_infop;


}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop : public Entity
{
    public:
        MatchInfop();
        ~MatchInfop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ClassMatchInfoSt; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt> > class_match_info_st;


}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt : public Entity
{
    public:
        ClassMatchInfoSt();
        ~ClassMatchInfoSt();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf flags; //type: uint32

        class MatchData; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData

        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData> match_data;


}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData : public Entity
{
    public:
        MatchData();
        ~MatchData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: MatchEnum
        YLeaf mpls_top_eos; //type: uint8
        YLeaf fragment_type; //type: uint8
        YLeaf authen_status; //type: MatchAuthenStatusEnum
        YLeaf mlp_negotiated; //type: MatchMlpNegotiatedEnum

        class Ipv4Dscp; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp
        class Ipv6Dscp; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp
        class Dscp; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Dscp
        class Ipv4Prec; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Prec
        class Ipv6Prec; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Prec
        class Prec; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Prec
        class DiscardClass; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DiscardClass
        class QosGroup; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup
        class TrafficClass; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass
        class Proto; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Proto
        class IcmpV4; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV4
        class IcmpV6; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV6
        class Ipv4PacketLen; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen
        class Ipv6PacketLen; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen
        class PacketLen; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen
        class FlowTag; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag
        class TcpFlag; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::TcpFlag
        class Icmpv4Type; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type
        class Icmpv4Code; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code
        class Icmpv6Type; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type
        class Icmpv6Code; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code
        class MplsExp; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::MplsExp
        class MplsExpImp; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::MplsExpImp
        class MplsDispIpv4Acl; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv4Acl
        class MplsDispIpv6Acl; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv6Acl
        class MplsTopLabel; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel
        class Cos; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Cos
        class CosInr; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::CosInr
        class Dei; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Dei
        class DeiInr; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DeiInr
        class Vlan; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Vlan
        class VlanInr; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr
        class FrDlci; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci
        class SrcMac; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::SrcMac
        class DstMac; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstMac
        class AtmClp; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AtmClp
        class FrDe; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FrDe
        class Ipv4Acl; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Acl
        class Ipv6Acl; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Acl
        class EtherServiceAcl; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::EtherServiceAcl
        class AvailId; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AvailId
        class MediaType; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::MediaType
        class SubsProtocol; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::SubsProtocol
        class Dnis; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Dnis
        class DnisRegex; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DnisRegex
        class Domain; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Domain
        class DomainRegex; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex
        class NasPort; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::NasPort
        class ServiceName; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::ServiceName
        class ServiceNameRegex; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::ServiceNameRegex
        class SrcAddrIpv4; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4
        class DstAddrIpv4; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4
        class SrcAddrIpv6; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6
        class DstAddrIpv6; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6
        class SrcAddrMac; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac
        class Timer; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Timer
        class TimerRegexp; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::TimerRegexp
        class TunnelName; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::TunnelName
        class TunnelNameRegex; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::TunnelNameRegex
        class UserName; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::UserName
        class UserNameRegex; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::UserNameRegex
        class AuthUsername; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsername
        class AuthUsernameRegex; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsernameRegex
        class UnauthUsername; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsername
        class UnauthUsernameRegex; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsernameRegex
        class AuthDomain; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomain
        class AuthDomainRegex; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomainRegex
        class UnauthDomain; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomain
        class UnauthDomainRegex; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomainRegex
        class VendorId; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::VendorId
        class VendorIdRegex; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::VendorIdRegex
        class AccessInterface; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AccessInterface
        class InputInterface; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::InputInterface
        class InputIntfhdl; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::InputIntfhdl
        class Ethertype; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype
        class FlowKeyData; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData
        class DhcpClientId; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientId
        class DhcpClientIdRegex; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientIdRegex
        class CircuitId; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::CircuitId
        class CircuitIdRegex; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::CircuitIdRegex
        class RemoteId; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::RemoteId
        class RemoteIdRegex; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::RemoteIdRegex
        class SrcPort; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort
        class DstPort; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstPort

        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AccessInterface> access_interface;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AtmClp> atm_clp;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomain> auth_domain;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomainRegex> auth_domain_regex;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsername> auth_username;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsernameRegex> auth_username_regex;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AvailId> avail_id;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::CircuitId> circuit_id;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::CircuitIdRegex> circuit_id_regex;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Cos> cos;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::CosInr> cos_inr;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Dei> dei;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DeiInr> dei_inr;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientId> dhcp_client_id;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientIdRegex> dhcp_client_id_regex;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DiscardClass> discard_class;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Dnis> dnis;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DnisRegex> dnis_regex;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Domain> domain;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex> domain_regex;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Dscp> dscp;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4> dst_addr_ipv4;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6> dst_addr_ipv6;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstMac> dst_mac;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstPort> dst_port;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::EtherServiceAcl> ether_service_acl;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype> ethertype;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData> flow_key_data;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag> flow_tag;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FrDe> fr_de;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci> fr_dlci;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV4> icmp_v4;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV6> icmp_v6;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code> icmpv4_code;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type> icmpv4_type;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code> icmpv6_code;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type> icmpv6_type;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::InputInterface> input_interface;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::InputIntfhdl> input_intfhdl;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Acl> ipv4_acl;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp> ipv4_dscp;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen> ipv4_packet_len;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Prec> ipv4_prec;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Acl> ipv6_acl;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp> ipv6_dscp;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen> ipv6_packet_len;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Prec> ipv6_prec;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::MediaType> media_type;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv4Acl> mpls_disp_ipv4_acl;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv6Acl> mpls_disp_ipv6_acl;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::MplsExp> mpls_exp;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::MplsExpImp> mpls_exp_imp;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel> mpls_top_label;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::NasPort> nas_port;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen> packet_len;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Prec> prec;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Proto> proto;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup> qos_group;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::RemoteId> remote_id;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::RemoteIdRegex> remote_id_regex;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::ServiceName> service_name;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::ServiceNameRegex> service_name_regex;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4> src_addr_ipv4;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6> src_addr_ipv6;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac> src_addr_mac;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::SrcMac> src_mac;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort> src_port;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::SubsProtocol> subs_protocol;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::TcpFlag> tcp_flag;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Timer> timer;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::TimerRegexp> timer_regexp;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass> traffic_class;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::TunnelName> tunnel_name;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::TunnelNameRegex> tunnel_name_regex;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomain> unauth_domain;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomainRegex> unauth_domain_regex;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsername> unauth_username;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsernameRegex> unauth_username_regex;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::UserName> user_name;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::UserNameRegex> user_name_regex;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::VendorId> vendor_id;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::VendorIdRegex> vendor_id_regex;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Vlan> vlan;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr> vlan_inr;


}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp : public Entity
{
    public:
        Ipv4Dscp();
        ~Ipv4Dscp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Uint8_Rng_Array; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::Uint8_Rng_Array

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::Uint8_Rng_Array> > uint8_rng_array;


}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::Uint8_Rng_Array : public Entity
{
    public:
        Uint8_Rng_Array();
        ~Uint8_Rng_Array();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf min; //type: uint8
        YLeaf max; //type: uint8



}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::Uint8_Rng_Array


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp : public Entity
{
    public:
        Ipv6Dscp();
        ~Ipv6Dscp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Uint8_Rng_Array; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::Uint8_Rng_Array

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::Uint8_Rng_Array> > uint8_rng_array;


}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::Uint8_Rng_Array : public Entity
{
    public:
        Uint8_Rng_Array();
        ~Uint8_Rng_Array();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf min; //type: uint8
        YLeaf max; //type: uint8



}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::Uint8_Rng_Array


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Dscp : public Entity
{
    public:
        Dscp();
        ~Dscp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Uint8_Rng_Array; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::Uint8_Rng_Array

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::Uint8_Rng_Array> > uint8_rng_array;


}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Dscp


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::Uint8_Rng_Array : public Entity
{
    public:
        Uint8_Rng_Array();
        ~Uint8_Rng_Array();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf min; //type: uint8
        YLeaf max; //type: uint8



}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::Uint8_Rng_Array


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Prec : public Entity
{
    public:
        Ipv4Prec();
        ~Ipv4Prec();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList uint8_array; //type: list of  uint8



}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Prec


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Prec : public Entity
{
    public:
        Ipv6Prec();
        ~Ipv6Prec();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList uint8_array; //type: list of  uint8



}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Prec


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Prec : public Entity
{
    public:
        Prec();
        ~Prec();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList uint8_array; //type: list of  uint8



}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Prec


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DiscardClass : public Entity
{
    public:
        DiscardClass();
        ~DiscardClass();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList uint8_array; //type: list of  uint8



}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DiscardClass


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup : public Entity
{
    public:
        QosGroup();
        ~QosGroup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Uint16_Rng_Array; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::Uint16_Rng_Array

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::Uint16_Rng_Array> > uint16_rng_array;


}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::Uint16_Rng_Array : public Entity
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



}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::Uint16_Rng_Array


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass : public Entity
{
    public:
        TrafficClass();
        ~TrafficClass();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Uint8_Rng_Array; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::Uint8_Rng_Array

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::Uint8_Rng_Array> > uint8_rng_array;


}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::Uint8_Rng_Array : public Entity
{
    public:
        Uint8_Rng_Array();
        ~Uint8_Rng_Array();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf min; //type: uint8
        YLeaf max; //type: uint8



}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::Uint8_Rng_Array


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Proto : public Entity
{
    public:
        Proto();
        ~Proto();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Uint16_Rng_Array; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Proto::Uint16_Rng_Array

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Proto::Uint16_Rng_Array> > uint16_rng_array;


}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Proto


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Proto::Uint16_Rng_Array : public Entity
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



}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Proto::Uint16_Rng_Array


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV4 : public Entity
{
    public:
        IcmpV4();
        ~IcmpV4();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: uint8
        YLeaf code; //type: uint8



}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV4


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV6 : public Entity
{
    public:
        IcmpV6();
        ~IcmpV6();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: uint8
        YLeaf code; //type: uint8



}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV6


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen : public Entity
{
    public:
        Ipv4PacketLen();
        ~Ipv4PacketLen();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Uint16_Rng_Array; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::Uint16_Rng_Array

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::Uint16_Rng_Array> > uint16_rng_array;


}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::Uint16_Rng_Array : public Entity
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



}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::Uint16_Rng_Array


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen : public Entity
{
    public:
        Ipv6PacketLen();
        ~Ipv6PacketLen();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Uint16_Rng_Array; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::Uint16_Rng_Array

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::Uint16_Rng_Array> > uint16_rng_array;


}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::Uint16_Rng_Array : public Entity
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



}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::Uint16_Rng_Array


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen : public Entity
{
    public:
        PacketLen();
        ~PacketLen();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Uint16_Rng_Array; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::Uint16_Rng_Array

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::Uint16_Rng_Array> > uint16_rng_array;


}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::Uint16_Rng_Array : public Entity
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



}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::Uint16_Rng_Array


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag : public Entity
{
    public:
        FlowTag();
        ~FlowTag();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Uint8_Rng_Array; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::Uint8_Rng_Array

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::Uint8_Rng_Array> > uint8_rng_array;


}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::Uint8_Rng_Array : public Entity
{
    public:
        Uint8_Rng_Array();
        ~Uint8_Rng_Array();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf min; //type: uint8
        YLeaf max; //type: uint8



}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::Uint8_Rng_Array


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::TcpFlag : public Entity
{
    public:
        TcpFlag();
        ~TcpFlag();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint16
        YLeaf match_any; //type: boolean



}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::TcpFlag


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type : public Entity
{
    public:
        Icmpv4Type();
        ~Icmpv4Type();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Uint8_Rng_Array; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::Uint8_Rng_Array

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::Uint8_Rng_Array> > uint8_rng_array;


}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::Uint8_Rng_Array : public Entity
{
    public:
        Uint8_Rng_Array();
        ~Uint8_Rng_Array();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf min; //type: uint8
        YLeaf max; //type: uint8



}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::Uint8_Rng_Array


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code : public Entity
{
    public:
        Icmpv4Code();
        ~Icmpv4Code();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Uint8_Rng_Array; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::Uint8_Rng_Array

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::Uint8_Rng_Array> > uint8_rng_array;


}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::Uint8_Rng_Array : public Entity
{
    public:
        Uint8_Rng_Array();
        ~Uint8_Rng_Array();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf min; //type: uint8
        YLeaf max; //type: uint8



}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::Uint8_Rng_Array


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type : public Entity
{
    public:
        Icmpv6Type();
        ~Icmpv6Type();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Uint8_Rng_Array; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::Uint8_Rng_Array

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::Uint8_Rng_Array> > uint8_rng_array;


}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::Uint8_Rng_Array : public Entity
{
    public:
        Uint8_Rng_Array();
        ~Uint8_Rng_Array();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf min; //type: uint8
        YLeaf max; //type: uint8



}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::Uint8_Rng_Array


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code : public Entity
{
    public:
        Icmpv6Code();
        ~Icmpv6Code();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Uint8_Rng_Array; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::Uint8_Rng_Array

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::Uint8_Rng_Array> > uint8_rng_array;


}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::Uint8_Rng_Array : public Entity
{
    public:
        Uint8_Rng_Array();
        ~Uint8_Rng_Array();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf min; //type: uint8
        YLeaf max; //type: uint8



}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ConfclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::Uint8_Rng_Array


}
}

#endif /* _CISCO_IOS_XR_INFRA_POLICYMGR_OPER_18_ */

