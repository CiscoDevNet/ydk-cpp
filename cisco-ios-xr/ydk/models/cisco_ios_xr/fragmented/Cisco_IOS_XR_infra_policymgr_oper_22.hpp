#ifndef _CISCO_IOS_XR_INFRA_POLICYMGR_OPER_22_
#define _CISCO_IOS_XR_INFRA_POLICYMGR_OPER_22_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_infra_policymgr_oper_0.hpp"
#include "Cisco_IOS_XR_infra_policymgr_oper_11.hpp"
#include "Cisco_IOS_XR_infra_policymgr_oper_16.hpp"
#include "Cisco_IOS_XR_infra_policymgr_oper_18.hpp"

namespace ydk {
namespace Cisco_IOS_XR_infra_policymgr_oper {


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::FlowParm : public Entity
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



}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::FlowParm


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr : public Entity
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

        class IpBitRate; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::IpBitRate
        class MediaBitRate; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::MediaBitRate

        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::IpBitRate> ip_bit_rate;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::MediaBitRate> media_bit_rate;


}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::IpBitRate : public Entity
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



}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::IpBitRate


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::MediaBitRate : public Entity
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



}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::MediaBitRate


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Rtp : public Entity
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

        class ClockRate; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Rtp::ClockRate

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Rtp::ClockRate> > clock_rate;


}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Rtp


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Rtp::ClockRate : public Entity
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



}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Rtp::ClockRate


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpMmr : public Entity
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

        class ClockRate; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpMmr::ClockRate

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpMmr::ClockRate> > clock_rate;


}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpMmr


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpMmr::ClockRate : public Entity
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



}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpMmr::ClockRate


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpJ2K : public Entity
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

        class ClockRate; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpJ2K::ClockRate

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpJ2K::ClockRate> > clock_rate;


}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpJ2K


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpJ2K::ClockRate : public Entity
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



}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpJ2K::ClockRate


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpVoice : public Entity
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

        class ClockRate; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpVoice::ClockRate

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpVoice::ClockRate> > clock_rate;


}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpVoice


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpVoice::ClockRate : public Entity
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



}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpVoice::ClockRate


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi : public Entity
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

        class IpBitRate; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::IpBitRate

        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::IpBitRate> ip_bit_rate;


}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::IpBitRate : public Entity
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



}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::IpBitRate


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp : public Entity
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

        class IpBitRate; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::IpBitRate

        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::IpBitRate> ip_bit_rate;


}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::IpBitRate : public Entity
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



}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::IpBitRate


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Fmm : public Entity
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



}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Fmm


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf : public Entity
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



        class ActionPbfInfoArray; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf::ActionPbfInfoArray

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf::ActionPbfInfoArray> > action_pbf_info_array;


}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf::ActionPbfInfoArray : public Entity
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



}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf::ActionPbfInfoArray


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh : public Entity
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



        class ActionIpv4NhInfoArray; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh::ActionIpv4NhInfoArray

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh::ActionIpv4NhInfoArray> > action_ipv4_nh_info_array;


}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh::ActionIpv4NhInfoArray : public Entity
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



}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh::ActionIpv4NhInfoArray


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh : public Entity
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



        class ActionIpv6NhInfoArray; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh::ActionIpv6NhInfoArray

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh::ActionIpv6NhInfoArray> > action_ipv6_nh_info_array;


}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh::ActionIpv6NhInfoArray : public Entity
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



}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh::ActionIpv6NhInfoArray


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::PmapVar : public Entity
{
    public:
        PmapVar();
        ~PmapVar();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Var; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::PmapVar::Var

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::PmapVar::Var> > var;


}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::PmapVar


class PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::PmapVar::Var : public Entity
{
    public:
        Var();
        ~Var();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: PlmgrVarEnum
        YLeaf class_name; //type: string
        YLeaf uint8_val; //type: uint8
        YLeaf uint16_val; //type: uint16
        YLeaf uint32_val; //type: uint32
        YLeaf param_uint32_val; //type: uint32
        YLeaf dscp_val; //type: uint8
        YLeaf prec_val; //type: uint8



}; // PolicyManager::Global::TransientPolicyMapAppliedTypes::TransientPolicyMapAppliedType::TransientInterfaceNames::TransientInterfaceName::TransientInput::Detail::PmapVar::Var


class PolicyManager::Global::TargetPolicyMapTypes : public Entity
{
    public:
        TargetPolicyMapTypes();
        ~TargetPolicyMapTypes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class TargetPolicyMapType; //type: PolicyManager::Global::TargetPolicyMapTypes::TargetPolicyMapType

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TargetPolicyMapTypes::TargetPolicyMapType> > target_policy_map_type;


}; // PolicyManager::Global::TargetPolicyMapTypes


class PolicyManager::Global::TargetPolicyMapTypes::TargetPolicyMapType : public Entity
{
    public:
        TargetPolicyMapType();
        ~TargetPolicyMapType();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: PolicymgrPolicyMapEnum

        class PolicyMapTargets; //type: PolicyManager::Global::TargetPolicyMapTypes::TargetPolicyMapType::PolicyMapTargets
        class PolicyMapTargetSummary; //type: PolicyManager::Global::TargetPolicyMapTypes::TargetPolicyMapType::PolicyMapTargetSummary
        class TargetSummaryPerPolicyMaps; //type: PolicyManager::Global::TargetPolicyMapTypes::TargetPolicyMapType::TargetSummaryPerPolicyMaps

        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TargetPolicyMapTypes::TargetPolicyMapType::PolicyMapTargetSummary> policy_map_target_summary;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TargetPolicyMapTypes::TargetPolicyMapType::PolicyMapTargets> policy_map_targets;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TargetPolicyMapTypes::TargetPolicyMapType::TargetSummaryPerPolicyMaps> target_summary_per_policy_maps;


}; // PolicyManager::Global::TargetPolicyMapTypes::TargetPolicyMapType


class PolicyManager::Global::TargetPolicyMapTypes::TargetPolicyMapType::PolicyMapTargets : public Entity
{
    public:
        PolicyMapTargets();
        ~PolicyMapTargets();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PolicyMapTarget; //type: PolicyManager::Global::TargetPolicyMapTypes::TargetPolicyMapType::PolicyMapTargets::PolicyMapTarget

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TargetPolicyMapTypes::TargetPolicyMapType::PolicyMapTargets::PolicyMapTarget> > policy_map_target;


}; // PolicyManager::Global::TargetPolicyMapTypes::TargetPolicyMapType::PolicyMapTargets


class PolicyManager::Global::TargetPolicyMapTypes::TargetPolicyMapType::PolicyMapTargets::PolicyMapTarget : public Entity
{
    public:
        PolicyMapTarget();
        ~PolicyMapTarget();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf policy_map_name; //type: string
        YLeafList target; //type: list of  string
        YLeafList parent_target; //type: list of  string



}; // PolicyManager::Global::TargetPolicyMapTypes::TargetPolicyMapType::PolicyMapTargets::PolicyMapTarget


class PolicyManager::Global::TargetPolicyMapTypes::TargetPolicyMapType::PolicyMapTargetSummary : public Entity
{
    public:
        PolicyMapTargetSummary();
        ~PolicyMapTargetSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf total_policy_maps_input_direction; //type: uint32
        YLeaf total_policy_maps_output_direction; //type: uint32
        YLeaf total_child_policy_maps_input_direction; //type: uint32
        YLeaf total_child_policy_maps_output_direction; //type: uint32
        YLeaf total_interfaces_input_direction; //type: uint32
        YLeaf total_interfaces_output_direction; //type: uint32



}; // PolicyManager::Global::TargetPolicyMapTypes::TargetPolicyMapType::PolicyMapTargetSummary


class PolicyManager::Global::TargetPolicyMapTypes::TargetPolicyMapType::TargetSummaryPerPolicyMaps : public Entity
{
    public:
        TargetSummaryPerPolicyMaps();
        ~TargetSummaryPerPolicyMaps();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class TargetSummaryPerPolicyMap; //type: PolicyManager::Global::TargetPolicyMapTypes::TargetPolicyMapType::TargetSummaryPerPolicyMaps::TargetSummaryPerPolicyMap

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TargetPolicyMapTypes::TargetPolicyMapType::TargetSummaryPerPolicyMaps::TargetSummaryPerPolicyMap> > target_summary_per_policy_map;


}; // PolicyManager::Global::TargetPolicyMapTypes::TargetPolicyMapType::TargetSummaryPerPolicyMaps


class PolicyManager::Global::TargetPolicyMapTypes::TargetPolicyMapType::TargetSummaryPerPolicyMaps::TargetSummaryPerPolicyMap : public Entity
{
    public:
        TargetSummaryPerPolicyMap();
        ~TargetSummaryPerPolicyMap();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf policy_map_name; //type: string
        YLeaf total_policy_maps_input_direction; //type: uint32
        YLeaf total_policy_maps_output_direction; //type: uint32
        YLeaf total_child_policy_maps_input_direction; //type: uint32
        YLeaf total_child_policy_maps_output_direction; //type: uint32
        YLeaf total_interfaces_input_direction; //type: uint32
        YLeaf total_interfaces_output_direction; //type: uint32



}; // PolicyManager::Global::TargetPolicyMapTypes::TargetPolicyMapType::TargetSummaryPerPolicyMaps::TargetSummaryPerPolicyMap


class PolicyManager::Global::ClassMap : public Entity
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



        class ClassMapTypes; //type: PolicyManager::Global::ClassMap::ClassMapTypes

        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes> class_map_types;


}; // PolicyManager::Global::ClassMap


class PolicyManager::Global::ClassMap::ClassMapTypes : public Entity
{
    public:
        ClassMapTypes();
        ~ClassMapTypes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ClassMapType; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType> > class_map_type;


}; // PolicyManager::Global::ClassMap::ClassMapTypes


class PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType : public Entity
{
    public:
        ClassMapType();
        ~ClassMapType();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: PolicymgrClassMapEnum

        class ClassMapDetails; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails
        class ClassMaps; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps
        class ClassMapBriefs; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMapBriefs

        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMapBriefs> class_map_briefs;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails> class_map_details;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps> class_maps;


}; // PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType


class PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails : public Entity
{
    public:
        ClassMapDetails();
        ~ClassMapDetails();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ClassMapDetail; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail> > class_map_detail;


}; // PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails


class PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail : public Entity
{
    public:
        ClassMapDetail();
        ~ClassMapDetail();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf class_map_name; //type: string
        YLeaf object_type; //type: PlmgrApplnEnum
        YLeaf total_objects; //type: uint32
        YLeaf transient; //type: boolean

        class Reference; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::Reference
        class Object; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::Object
        class ClassMapReference; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::ClassMapReference

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::ClassMapReference> > class_map_reference;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::Object> > object;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::Reference> > reference;


}; // PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail


class PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::Reference : public Entity
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



}; // PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::Reference


class PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::Object : public Entity
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



}; // PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::Object


class PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::ClassMapReference : public Entity
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

        class PolicyMapReference; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::ClassMapReference::PolicyMapReference

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::ClassMapReference::PolicyMapReference> > policy_map_reference;


}; // PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::ClassMapReference


class PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::ClassMapReference::PolicyMapReference : public Entity
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



}; // PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::ClassMapReference::PolicyMapReference


class PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps : public Entity
{
    public:
        ClassMaps();
        ~ClassMaps();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ClassMap_; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_> > class_map;


}; // PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps


class PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_ : public Entity
{
    public:
        ClassMap_();
        ~ClassMap_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf class_map_name; //type: string

        class ClassMapBg; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg> > class_map_bg;


}; // PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_


class PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg : public Entity
{
    public:
        ClassMapBg();
        ~ClassMapBg();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf magic; //type: uint32
        YLeaf name; //type: string
        YLeaf type; //type: ClassMapEnum
        YLeaf mode; //type: ClassMapModeEnum
        YLeaf flags; //type: uint32
        YLeaf match_count; //type: uint32
        YLeaf chk_sum; //type: string
        YLeaf description; //type: string

        class MatchInfop; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop

        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop> match_infop;


}; // PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg


class PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop : public Entity
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



        class ClassMatchInfoSt; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt> > class_match_info_st;


}; // PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop


class PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt : public Entity
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

        class MatchData; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData

        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData> match_data;


}; // PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt


class PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData : public Entity
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

        class Ipv4Dscp; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp
        class Ipv6Dscp; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp
        class Dscp; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp
        class Ipv4Prec; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Prec
        class Ipv6Prec; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Prec
        class Prec; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Prec
        class DiscardClass; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DiscardClass
        class QosGroup; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup
        class TrafficClass; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass
        class Proto; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto
        class IcmpV4; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV4
        class IcmpV6; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV6
        class Ipv4PacketLen; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen
        class Ipv6PacketLen; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen
        class PacketLen; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen
        class FlowTag; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag
        class TcpFlag; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TcpFlag
        class Icmpv4Type; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type
        class Icmpv4Code; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code
        class Icmpv6Type; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type
        class Icmpv6Code; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code
        class MplsExp; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExp
        class MplsExpImp; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExpImp
        class MplsDispIpv4Acl; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv4Acl
        class MplsDispIpv6Acl; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv6Acl
        class MplsTopLabel; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel
        class Cos; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Cos
        class CosInr; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CosInr
        class Dei; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dei
        class DeiInr; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DeiInr
        class Vlan; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan
        class VlanInr; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr
        class FrDlci; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci
        class SrcMac; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcMac
        class DstMac; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstMac
        class AtmClp; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AtmClp
        class FrDe; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDe
        class Ipv4Acl; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Acl
        class Ipv6Acl; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Acl
        class EtherServiceAcl; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::EtherServiceAcl
        class AvailId; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AvailId
        class MediaType; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MediaType
        class SubsProtocol; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SubsProtocol
        class Dnis; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dnis
        class DnisRegex; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DnisRegex
        class Domain; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain
        class DomainRegex; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex
        class NasPort; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort
        class ServiceName; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceName
        class ServiceNameRegex; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceNameRegex
        class SrcAddrIpv4; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4
        class DstAddrIpv4; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4
        class SrcAddrIpv6; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6
        class DstAddrIpv6; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6
        class SrcAddrMac; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac
        class Timer; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Timer
        class TimerRegexp; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TimerRegexp
        class TunnelName; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelName
        class TunnelNameRegex; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelNameRegex
        class UserName; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserName
        class UserNameRegex; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserNameRegex
        class AuthUsername; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsername
        class AuthUsernameRegex; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsernameRegex
        class UnauthUsername; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsername
        class UnauthUsernameRegex; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsernameRegex
        class AuthDomain; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomain
        class AuthDomainRegex; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomainRegex
        class UnauthDomain; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomain
        class UnauthDomainRegex; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomainRegex
        class VendorId; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorId
        class VendorIdRegex; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorIdRegex
        class AccessInterface; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AccessInterface
        class InputInterface; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputInterface
        class InputIntfhdl; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputIntfhdl
        class Ethertype; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype
        class FlowKeyData; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData
        class DhcpClientId; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientId
        class DhcpClientIdRegex; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientIdRegex
        class CircuitId; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitId
        class CircuitIdRegex; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitIdRegex
        class RemoteId; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteId
        class RemoteIdRegex; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteIdRegex
        class SrcPort; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort
        class DstPort; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort

        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AccessInterface> access_interface;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AtmClp> atm_clp;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomain> auth_domain;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomainRegex> auth_domain_regex;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsername> auth_username;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsernameRegex> auth_username_regex;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AvailId> avail_id;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitId> circuit_id;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitIdRegex> circuit_id_regex;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Cos> cos;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CosInr> cos_inr;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dei> dei;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DeiInr> dei_inr;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientId> dhcp_client_id;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientIdRegex> dhcp_client_id_regex;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DiscardClass> discard_class;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dnis> dnis;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DnisRegex> dnis_regex;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain> domain;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex> domain_regex;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp> dscp;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4> dst_addr_ipv4;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6> dst_addr_ipv6;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstMac> dst_mac;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort> dst_port;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::EtherServiceAcl> ether_service_acl;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype> ethertype;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData> flow_key_data;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag> flow_tag;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDe> fr_de;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci> fr_dlci;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV4> icmp_v4;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV6> icmp_v6;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code> icmpv4_code;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type> icmpv4_type;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code> icmpv6_code;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type> icmpv6_type;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputInterface> input_interface;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputIntfhdl> input_intfhdl;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Acl> ipv4_acl;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp> ipv4_dscp;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen> ipv4_packet_len;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Prec> ipv4_prec;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Acl> ipv6_acl;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp> ipv6_dscp;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen> ipv6_packet_len;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Prec> ipv6_prec;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MediaType> media_type;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv4Acl> mpls_disp_ipv4_acl;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv6Acl> mpls_disp_ipv6_acl;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExp> mpls_exp;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExpImp> mpls_exp_imp;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel> mpls_top_label;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort> nas_port;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen> packet_len;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Prec> prec;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto> proto;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup> qos_group;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteId> remote_id;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteIdRegex> remote_id_regex;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceName> service_name;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceNameRegex> service_name_regex;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4> src_addr_ipv4;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6> src_addr_ipv6;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac> src_addr_mac;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcMac> src_mac;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort> src_port;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SubsProtocol> subs_protocol;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TcpFlag> tcp_flag;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Timer> timer;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TimerRegexp> timer_regexp;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass> traffic_class;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelName> tunnel_name;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelNameRegex> tunnel_name_regex;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomain> unauth_domain;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomainRegex> unauth_domain_regex;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsername> unauth_username;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsernameRegex> unauth_username_regex;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserName> user_name;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserNameRegex> user_name_regex;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorId> vendor_id;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorIdRegex> vendor_id_regex;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan> vlan;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr> vlan_inr;


}; // PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData


class PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp : public Entity
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



        class Uint8_Rng_Array; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::Uint8_Rng_Array

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::Uint8_Rng_Array> > uint8_rng_array;


}; // PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp


class PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::Uint8_Rng_Array : public Entity
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



}; // PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::Uint8_Rng_Array


class PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp : public Entity
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



        class Uint8_Rng_Array; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::Uint8_Rng_Array

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::Uint8_Rng_Array> > uint8_rng_array;


}; // PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp


class PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::Uint8_Rng_Array : public Entity
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



}; // PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::Uint8_Rng_Array


class PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp : public Entity
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



        class Uint8_Rng_Array; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::Uint8_Rng_Array

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::Uint8_Rng_Array> > uint8_rng_array;


}; // PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp


class PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::Uint8_Rng_Array : public Entity
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



}; // PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::Uint8_Rng_Array


class PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Prec : public Entity
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



}; // PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Prec


class PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Prec : public Entity
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



}; // PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Prec


class PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Prec : public Entity
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



}; // PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Prec


class PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DiscardClass : public Entity
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



}; // PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DiscardClass


class PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup : public Entity
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



        class Uint16_Rng_Array; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::Uint16_Rng_Array

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::Uint16_Rng_Array> > uint16_rng_array;


}; // PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup


class PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::Uint16_Rng_Array : public Entity
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



}; // PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::Uint16_Rng_Array


class PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass : public Entity
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



        class Uint8_Rng_Array; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::Uint8_Rng_Array

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::Uint8_Rng_Array> > uint8_rng_array;


}; // PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass


class PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::Uint8_Rng_Array : public Entity
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



}; // PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::Uint8_Rng_Array


class PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto : public Entity
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



        class Uint16_Rng_Array; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::Uint16_Rng_Array

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::Uint16_Rng_Array> > uint16_rng_array;


}; // PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto


class PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::Uint16_Rng_Array : public Entity
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



}; // PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::Uint16_Rng_Array


class PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV4 : public Entity
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



}; // PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV4


class PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV6 : public Entity
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



}; // PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV6


class PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen : public Entity
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



        class Uint16_Rng_Array; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::Uint16_Rng_Array

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::Uint16_Rng_Array> > uint16_rng_array;


}; // PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen


class PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::Uint16_Rng_Array : public Entity
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



}; // PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::Uint16_Rng_Array


class PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen : public Entity
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



        class Uint16_Rng_Array; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::Uint16_Rng_Array

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::Uint16_Rng_Array> > uint16_rng_array;


}; // PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen


class PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::Uint16_Rng_Array : public Entity
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



}; // PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::Uint16_Rng_Array


class PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen : public Entity
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



        class Uint16_Rng_Array; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::Uint16_Rng_Array

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::Uint16_Rng_Array> > uint16_rng_array;


}; // PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen


class PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::Uint16_Rng_Array : public Entity
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



}; // PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::Uint16_Rng_Array


class PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag : public Entity
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



        class Uint8_Rng_Array; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::Uint8_Rng_Array

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::Uint8_Rng_Array> > uint8_rng_array;


}; // PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag


class PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::Uint8_Rng_Array : public Entity
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



}; // PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::Uint8_Rng_Array


class PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TcpFlag : public Entity
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



}; // PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TcpFlag


class PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type : public Entity
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



        class Uint8_Rng_Array; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::Uint8_Rng_Array

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::Uint8_Rng_Array> > uint8_rng_array;


}; // PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type


class PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::Uint8_Rng_Array : public Entity
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



}; // PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::Uint8_Rng_Array


class PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code : public Entity
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



        class Uint8_Rng_Array; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::Uint8_Rng_Array

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::Uint8_Rng_Array> > uint8_rng_array;


}; // PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code


class PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::Uint8_Rng_Array : public Entity
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



}; // PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::Uint8_Rng_Array


class PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type : public Entity
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



        class Uint8_Rng_Array; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::Uint8_Rng_Array

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::Uint8_Rng_Array> > uint8_rng_array;


}; // PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type


class PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::Uint8_Rng_Array : public Entity
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



}; // PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::Uint8_Rng_Array


class PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code : public Entity
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



        class Uint8_Rng_Array; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::Uint8_Rng_Array

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::Uint8_Rng_Array> > uint8_rng_array;


}; // PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code


class PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::Uint8_Rng_Array : public Entity
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



}; // PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::Uint8_Rng_Array


class PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExp : public Entity
{
    public:
        MplsExp();
        ~MplsExp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList uint8_array; //type: list of  uint8



}; // PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExp


class PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExpImp : public Entity
{
    public:
        MplsExpImp();
        ~MplsExpImp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList uint8_array; //type: list of  uint8



}; // PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExpImp


class PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv4Acl : public Entity
{
    public:
        MplsDispIpv4Acl();
        ~MplsDispIpv4Acl();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList string_array; //type: list of  string



}; // PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv4Acl


class PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv6Acl : public Entity
{
    public:
        MplsDispIpv6Acl();
        ~MplsDispIpv6Acl();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList string_array; //type: list of  string



}; // PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv6Acl


class PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel : public Entity
{
    public:
        MplsTopLabel();
        ~MplsTopLabel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Uint32_Rng_Array; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::Uint32_Rng_Array

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::Uint32_Rng_Array> > uint32_rng_array;


}; // PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel


class PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::Uint32_Rng_Array : public Entity
{
    public:
        Uint32_Rng_Array();
        ~Uint32_Rng_Array();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf min; //type: uint32
        YLeaf max; //type: uint32



}; // PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::Uint32_Rng_Array


class PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Cos : public Entity
{
    public:
        Cos();
        ~Cos();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList uint8_array; //type: list of  uint8



}; // PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Cos


class PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CosInr : public Entity
{
    public:
        CosInr();
        ~CosInr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList uint8_array; //type: list of  uint8



}; // PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CosInr


class PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dei : public Entity
{
    public:
        Dei();
        ~Dei();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bit_value; //type: uint32



}; // PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dei


class PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DeiInr : public Entity
{
    public:
        DeiInr();
        ~DeiInr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bit_value; //type: uint32



}; // PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DeiInr


class PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan : public Entity
{
    public:
        Vlan();
        ~Vlan();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class VlanIdArray; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::VlanIdArray

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::VlanIdArray> > vlan_id_array;


}; // PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan


class PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::VlanIdArray : public Entity
{
    public:
        VlanIdArray();
        ~VlanIdArray();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf min; //type: uint16
        YLeaf max; //type: uint16
        YLeaf mask; //type: uint16



}; // PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::VlanIdArray


class PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr : public Entity
{
    public:
        VlanInr();
        ~VlanInr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Uint16_Rng_Array; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::Uint16_Rng_Array

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::Uint16_Rng_Array> > uint16_rng_array;


}; // PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr


class PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::Uint16_Rng_Array : public Entity
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



}; // PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::Uint16_Rng_Array


class PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci : public Entity
{
    public:
        FrDlci();
        ~FrDlci();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Uint16_Rng_Array; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::Uint16_Rng_Array

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::Uint16_Rng_Array> > uint16_rng_array;


}; // PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci


class PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::Uint16_Rng_Array : public Entity
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



}; // PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::Uint16_Rng_Array


class PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcMac : public Entity
{
    public:
        SrcMac();
        ~SrcMac();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList mac_addr; //type: list of  uint16
        YLeafList mask; //type: list of  uint16



}; // PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcMac


class PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstMac : public Entity
{
    public:
        DstMac();
        ~DstMac();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList mac_addr; //type: list of  uint16
        YLeafList mask; //type: list of  uint16



}; // PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstMac


class PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AtmClp : public Entity
{
    public:
        AtmClp();
        ~AtmClp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList uint8_array; //type: list of  uint8



}; // PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AtmClp


class PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDe : public Entity
{
    public:
        FrDe();
        ~FrDe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList uint8_array; //type: list of  uint8



}; // PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDe


class PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Acl : public Entity
{
    public:
        Ipv4Acl();
        ~Ipv4Acl();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList string_array; //type: list of  string



}; // PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Acl


class PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Acl : public Entity
{
    public:
        Ipv6Acl();
        ~Ipv6Acl();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList string_array; //type: list of  string



}; // PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Acl


class PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::EtherServiceAcl : public Entity
{
    public:
        EtherServiceAcl();
        ~EtherServiceAcl();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList string_array; //type: list of  string



}; // PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::EtherServiceAcl


class PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AvailId : public Entity
{
    public:
        AvailId();
        ~AvailId();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList uint8_array; //type: list of  uint8



}; // PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AvailId


class PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MediaType : public Entity
{
    public:
        MediaType();
        ~MediaType();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList uint8_array; //type: list of  uint8



}; // PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MediaType


class PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SubsProtocol : public Entity
{
    public:
        SubsProtocol();
        ~SubsProtocol();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList uint8_array; //type: list of  uint8



}; // PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SubsProtocol


class PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dnis : public Entity
{
    public:
        Dnis();
        ~Dnis();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList string_array; //type: list of  string



}; // PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dnis


class PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DnisRegex : public Entity
{
    public:
        DnisRegex();
        ~DnisRegex();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList string_array; //type: list of  string



}; // PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DnisRegex


class PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain : public Entity
{
    public:
        Domain();
        ~Domain();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class DomainArray; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain::DomainArray

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain::DomainArray> > domain_array;


}; // PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain


class PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain::DomainArray : public Entity
{
    public:
        DomainArray();
        ~DomainArray();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf domain_name; //type: string
        YLeaf format_name; //type: string



}; // PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain::DomainArray


class PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex : public Entity
{
    public:
        DomainRegex();
        ~DomainRegex();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class DomainArray; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::DomainArray

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::DomainArray> > domain_array;


}; // PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex


class PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::DomainArray : public Entity
{
    public:
        DomainArray();
        ~DomainArray();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf domain_name; //type: string
        YLeaf format_name; //type: string



}; // PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::DomainArray


class PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort : public Entity
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



        class NasPortArray; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::NasPortArray

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::NasPortArray> > nas_port_array;


}; // PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort


class PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::NasPortArray : public Entity
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



}; // PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::NasPortArray


class PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceName : public Entity
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



}; // PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceName


class PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceNameRegex : public Entity
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



}; // PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceNameRegex


class PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4 : public Entity
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



        class Ipv4AddrArray; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::Ipv4AddrArray

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::Ipv4AddrArray> > ipv4_addr_array;


}; // PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4


class PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::Ipv4AddrArray : public Entity
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



}; // PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::Ipv4AddrArray


class PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4 : public Entity
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



        class Ipv4AddrArray; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::Ipv4AddrArray

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::Ipv4AddrArray> > ipv4_addr_array;


}; // PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4


class PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::Ipv4AddrArray : public Entity
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



}; // PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::Ipv4AddrArray


class PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6 : public Entity
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



        class Ipv6AddrArray; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6::Ipv6AddrArray

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6::Ipv6AddrArray> > ipv6_addr_array;


}; // PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6


class PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6::Ipv6AddrArray : public Entity
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



}; // PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6::Ipv6AddrArray


class PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6 : public Entity
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



        class Ipv6AddrArray; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::Ipv6AddrArray

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::Ipv6AddrArray> > ipv6_addr_array;


}; // PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6


class PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::Ipv6AddrArray : public Entity
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



}; // PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::Ipv6AddrArray


class PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac : public Entity
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



        class MacAddrArray; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac::MacAddrArray

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac::MacAddrArray> > mac_addr_array;


}; // PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac


class PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac::MacAddrArray : public Entity
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



}; // PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac::MacAddrArray


class PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Timer : public Entity
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



}; // PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Timer


class PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TimerRegexp : public Entity
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



}; // PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TimerRegexp


class PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelName : public Entity
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



}; // PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelName


class PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelNameRegex : public Entity
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



}; // PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelNameRegex


class PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserName : public Entity
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



}; // PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserName


class PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserNameRegex : public Entity
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



}; // PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserNameRegex


class PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsername : public Entity
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



}; // PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsername


class PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsernameRegex : public Entity
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



}; // PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsernameRegex


class PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsername : public Entity
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



}; // PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsername


class PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsernameRegex : public Entity
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



}; // PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsernameRegex


class PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomain : public Entity
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



}; // PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomain


class PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomainRegex : public Entity
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



}; // PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomainRegex


class PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomain : public Entity
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



}; // PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomain


class PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomainRegex : public Entity
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



}; // PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomainRegex


class PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorId : public Entity
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



}; // PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorId


class PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorIdRegex : public Entity
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



}; // PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorIdRegex


class PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AccessInterface : public Entity
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



}; // PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AccessInterface


class PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputInterface : public Entity
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



}; // PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputInterface


class PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputIntfhdl : public Entity
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



}; // PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputIntfhdl


class PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype : public Entity
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



        class Uint16_Rng_Array; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::Uint16_Rng_Array

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::Uint16_Rng_Array> > uint16_rng_array;


}; // PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype


class PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::Uint16_Rng_Array : public Entity
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



}; // PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::Uint16_Rng_Array


class PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData : public Entity
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

        class FlowKeys; //type: PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::FlowKeys

        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::FlowKeys> flow_keys;


}; // PolicyManager::Global::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData


}
}

#endif /* _CISCO_IOS_XR_INFRA_POLICYMGR_OPER_22_ */

