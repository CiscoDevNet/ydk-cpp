#ifndef _CISCO_IOS_XR_INFRA_POLICYMGR_OPER_45_
#define _CISCO_IOS_XR_INFRA_POLICYMGR_OPER_45_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_infra_policymgr_oper_0.hpp"
#include "Cisco_IOS_XR_infra_policymgr_oper_23.hpp"
#include "Cisco_IOS_XR_infra_policymgr_oper_39.hpp"
#include "Cisco_IOS_XR_infra_policymgr_oper_41.hpp"

namespace ydk {
namespace Cisco_IOS_XR_infra_policymgr_oper {


class PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc : public Entity
{
    public:
        Pfc();
        ~Pfc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pfc_pause_set; //type: uint32
        YLeaf buffer_size_flag; //type: uint32
        class BufferSize; //type: PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::BufferSize
        class PauseThreshold; //type: PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::PauseThreshold
        class ResumeThreshold; //type: PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::ResumeThreshold

        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::BufferSize> buffer_size;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::PauseThreshold> pause_threshold;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::ResumeThreshold> resume_threshold;
        
}; // PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc


class PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::BufferSize : public Entity
{
    public:
        BufferSize();
        ~BufferSize();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: uint32
        YLeaf unit; //type: PolicyParamUnitEnum

}; // PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::BufferSize


class PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::PauseThreshold : public Entity
{
    public:
        PauseThreshold();
        ~PauseThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: uint32
        YLeaf unit; //type: PolicyParamUnitEnum

}; // PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::PauseThreshold


class PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::ResumeThreshold : public Entity
{
    public:
        ResumeThreshold();
        ~ResumeThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: uint32
        YLeaf unit; //type: PolicyParamUnitEnum

}; // PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::ResumeThreshold


class PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::FlowParm : public Entity
{
    public:
        FlowParm();
        ~FlowParm();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max_mon_flows; //type: uint32
        YLeaf mon_interval; //type: uint32
        YLeaf intvl_hist; //type: uint32
        YLeaf flow_timeout; //type: uint32

}; // PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::FlowParm


class PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr : public Entity
{
    public:
        Ipcbr();
        ~Ipcbr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf action_metric_type; //type: PolicyActionEnum
        YLeaf ip_pkt_rate; //type: uint32
        YLeaf media_pkt_size; //type: uint32
        YLeaf media_pkts_per_ip; //type: uint32
        class IpBitRate; //type: PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::IpBitRate
        class MediaBitRate; //type: PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::MediaBitRate

        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::IpBitRate> ip_bit_rate;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::MediaBitRate> media_bit_rate;
        
}; // PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr


class PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::IpBitRate : public Entity
{
    public:
        IpBitRate();
        ~IpBitRate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: uint32
        YLeaf unit; //type: PolicyParamUnitEnum

}; // PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::IpBitRate


class PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::MediaBitRate : public Entity
{
    public:
        MediaBitRate();
        ~MediaBitRate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: uint32
        YLeaf unit; //type: PolicyParamUnitEnum

}; // PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::MediaBitRate


class PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Rtp : public Entity
{
    public:
        Rtp();
        ~Rtp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf action_metric_type; //type: PolicyActionEnum
        YLeaf min_sequential; //type: uint32
        YLeaf max_dropout; //type: uint32
        YLeaf max_misorder; //type: uint32
        YLeaf seq_ext_cop4; //type: uint32
        class ClockRate; //type: PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Rtp::ClockRate

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Rtp::ClockRate> > clock_rate;
        
}; // PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Rtp


class PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Rtp::ClockRate : public Entity
{
    public:
        ClockRate();
        ~ClockRate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pt; //type: uint32
        YLeaf frequency; //type: uint32

}; // PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Rtp::ClockRate


class PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpMmr : public Entity
{
    public:
        RtpMmr();
        ~RtpMmr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf action_metric_type; //type: PolicyActionEnum
        YLeaf min_sequential; //type: uint32
        YLeaf max_dropout; //type: uint32
        YLeaf max_misorder; //type: uint32
        YLeaf seq_ext_cop4; //type: uint32
        class ClockRate; //type: PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpMmr::ClockRate

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpMmr::ClockRate> > clock_rate;
        
}; // PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpMmr


class PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpMmr::ClockRate : public Entity
{
    public:
        ClockRate();
        ~ClockRate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pt; //type: uint32
        YLeaf frequency; //type: uint32

}; // PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpMmr::ClockRate


class PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpJ2K : public Entity
{
    public:
        RtpJ2K();
        ~RtpJ2K();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf action_metric_type; //type: PolicyActionEnum
        YLeaf min_sequential; //type: uint32
        YLeaf max_dropout; //type: uint32
        YLeaf max_misorder; //type: uint32
        YLeaf seq_ext_cop4; //type: uint32
        class ClockRate; //type: PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpJ2K::ClockRate

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpJ2K::ClockRate> > clock_rate;
        
}; // PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpJ2K


class PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpJ2K::ClockRate : public Entity
{
    public:
        ClockRate();
        ~ClockRate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pt; //type: uint32
        YLeaf frequency; //type: uint32

}; // PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpJ2K::ClockRate


class PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpVoice : public Entity
{
    public:
        RtpVoice();
        ~RtpVoice();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf action_metric_type; //type: PolicyActionEnum
        YLeaf min_sequential; //type: uint32
        YLeaf max_dropout; //type: uint32
        YLeaf max_misorder; //type: uint32
        YLeaf seq_ext_cop4; //type: uint32
        class ClockRate; //type: PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpVoice::ClockRate

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpVoice::ClockRate> > clock_rate;
        
}; // PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpVoice


class PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpVoice::ClockRate : public Entity
{
    public:
        ClockRate();
        ~ClockRate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pt; //type: uint32
        YLeaf frequency; //type: uint32

}; // PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpVoice::ClockRate


class PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi : public Entity
{
    public:
        Mdi();
        ~Mdi();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf action_metric_type; //type: PolicyActionEnum
        YLeaf filtered_pkt_rate; //type: uint32
        YLeaf ip_pkt_rate; //type: uint32
        YLeafList pids; //type: list of  uint32
        class IpBitRate; //type: PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::IpBitRate

        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::IpBitRate> ip_bit_rate;
        
}; // PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi


class PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::IpBitRate : public Entity
{
    public:
        IpBitRate();
        ~IpBitRate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: uint32
        YLeaf unit; //type: PolicyParamUnitEnum

}; // PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::IpBitRate


class PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp : public Entity
{
    public:
        MdiRtp();
        ~MdiRtp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf action_metric_type; //type: PolicyActionEnum
        YLeaf filtered_pkt_rate; //type: uint32
        YLeaf ip_pkt_rate; //type: uint32
        YLeafList pids; //type: list of  uint32
        class IpBitRate; //type: PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::IpBitRate

        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::IpBitRate> ip_bit_rate;
        
}; // PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp


class PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::IpBitRate : public Entity
{
    public:
        IpBitRate();
        ~IpBitRate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: uint32
        YLeaf unit; //type: PolicyParamUnitEnum

}; // PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::IpBitRate


class PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Fmm : public Entity
{
    public:
        Fmm();
        ~Fmm();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf fmm_name; //type: string

}; // PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Fmm


class PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf : public Entity
{
    public:
        Pbf();
        ~Pbf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ActionPbfInfoArray; //type: PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf::ActionPbfInfoArray

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf::ActionPbfInfoArray> > action_pbf_info_array;
        
}; // PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf


class PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf::ActionPbfInfoArray : public Entity
{
    public:
        ActionPbfInfoArray();
        ~ActionPbfInfoArray();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf addr; //type: string
        YLeaf vrf; //type: string
        YLeaf rt_type; //type: uint8
        YLeaf rt; //type: string

}; // PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf::ActionPbfInfoArray


class PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh : public Entity
{
    public:
        Ipv4Nh();
        ~Ipv4Nh();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ActionIpv4NhInfoArray; //type: PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh::ActionIpv4NhInfoArray

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh::ActionIpv4NhInfoArray> > action_ipv4_nh_info_array;
        
}; // PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh


class PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh::ActionIpv4NhInfoArray : public Entity
{
    public:
        ActionIpv4NhInfoArray();
        ~ActionIpv4NhInfoArray();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf nh_addr; //type: string
        YLeaf vrf_name; //type: string

}; // PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh::ActionIpv4NhInfoArray


class PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh : public Entity
{
    public:
        Ipv6Nh();
        ~Ipv6Nh();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ActionIpv6NhInfoArray; //type: PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh::ActionIpv6NhInfoArray

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh::ActionIpv6NhInfoArray> > action_ipv6_nh_info_array;
        
}; // PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh


class PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh::ActionIpv6NhInfoArray : public Entity
{
    public:
        ActionIpv6NhInfoArray();
        ~ActionIpv6NhInfoArray();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf nh_addr; //type: string
        YLeaf vrf_name; //type: string

}; // PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh::ActionIpv6NhInfoArray


class PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails : public Entity
{
    public:
        PolicyMapDetails();
        ~PolicyMapDetails();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class PolicyMapDetail; //type: PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail> > policy_map_detail;
        
}; // PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails


class PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail : public Entity
{
    public:
        PolicyMapDetail();
        ~PolicyMapDetail();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf policy_map_name; //type: string
        YLeaf object_type; //type: PlmgrApplnEnum
        YLeaf total_objects; //type: uint32
        YLeaf transient; //type: boolean
        class Reference; //type: PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::Reference
        class Object; //type: PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::Object
        class ClassMapReference; //type: PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::ClassMapReference

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::ClassMapReference> > class_map_reference;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::Object> > object;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::Reference> > reference;
        
}; // PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail


class PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::Reference : public Entity
{
    public:
        Reference();
        ~Reference();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf total_internal_reference_objects; //type: uint32
        YLeaf total_class_maps; //type: uint32
        YLeaf total_flows; //type: uint32

}; // PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::Reference


class PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::Object : public Entity
{
    public:
        Object();
        ~Object();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf object_name; //type: string

}; // PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::Object


class PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::ClassMapReference : public Entity
{
    public:
        ClassMapReference();
        ~ClassMapReference();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf total_reference_objects; //type: uint32
        class PolicyMapReference; //type: PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::ClassMapReference::PolicyMapReference

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::ClassMapReference::PolicyMapReference> > policy_map_reference;
        
}; // PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::ClassMapReference


class PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::ClassMapReference::PolicyMapReference : public Entity
{
    public:
        PolicyMapReference();
        ~PolicyMapReference();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf object_type; //type: PlmgrApplnEnum
        YLeaf policy_map_name; //type: string

}; // PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::ClassMapReference::PolicyMapReference


class PolicyManager::Global::PolicyMap::TransientPolicyMapTypes : public Entity
{
    public:
        TransientPolicyMapTypes();
        ~TransientPolicyMapTypes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class TransientPolicyMapType; //type: PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType> > transient_policy_map_type;
        
}; // PolicyManager::Global::PolicyMap::TransientPolicyMapTypes


class PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType : public Entity
{
    public:
        TransientPolicyMapType();
        ~TransientPolicyMapType();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf type; //type: PolicymgrPolicyMapEnum
        class TransientListUnuseds; //type: PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds

        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds> transient_list_unuseds;
        
}; // PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType


class PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds : public Entity
{
    public:
        TransientListUnuseds();
        ~TransientListUnuseds();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class TransientListUnused; //type: PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused> > transient_list_unused;
        
}; // PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds


class PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused : public Entity
{
    public:
        TransientListUnused();
        ~TransientListUnused();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf policy_map_name; //type: string
        YLeaf object_type; //type: PlmgrApplnEnum
        YLeaf total_objects; //type: uint32
        YLeaf transient; //type: boolean
        class Reference; //type: PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::Reference
        class Object; //type: PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::Object
        class ClassMapReference; //type: PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::ClassMapReference

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::ClassMapReference> > class_map_reference;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::Object> > object;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::Reference> > reference;
        
}; // PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused


class PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::Reference : public Entity
{
    public:
        Reference();
        ~Reference();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf total_internal_reference_objects; //type: uint32
        YLeaf total_class_maps; //type: uint32
        YLeaf total_flows; //type: uint32

}; // PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::Reference


class PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::Object : public Entity
{
    public:
        Object();
        ~Object();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf object_name; //type: string

}; // PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::Object


class PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::ClassMapReference : public Entity
{
    public:
        ClassMapReference();
        ~ClassMapReference();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf total_reference_objects; //type: uint32
        class PolicyMapReference; //type: PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::ClassMapReference::PolicyMapReference

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::ClassMapReference::PolicyMapReference> > policy_map_reference;
        
}; // PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::ClassMapReference


class PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::ClassMapReference::PolicyMapReference : public Entity
{
    public:
        PolicyMapReference();
        ~PolicyMapReference();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf object_type; //type: PlmgrApplnEnum
        YLeaf policy_map_name; //type: string

}; // PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::ClassMapReference::PolicyMapReference


class PolicyManager::Global::Summary : public Entity
{
    public:
        Summary();
        ~Summary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf total_class_maps; //type: uint32
        YLeaf total_class_map_types; //type: uint32
        YLeaf total_policy_maps; //type: uint32
        YLeaf total_policy_map_types; //type: uint32
        class ClassMap; //type: PolicyManager::Global::Summary::ClassMap
        class PolicyMap; //type: PolicyManager::Global::Summary::PolicyMap

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::Summary::ClassMap> > class_map;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::Summary::PolicyMap> > policy_map;
        
}; // PolicyManager::Global::Summary


class PolicyManager::Global::Summary::ClassMap : public Entity
{
    public:
        ClassMap();
        ~ClassMap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf object_type; //type: PlmgrApplnEnum
        YLeaf total_objects; //type: uint32
        YLeaf transient; //type: boolean
        class Reference; //type: PolicyManager::Global::Summary::ClassMap::Reference
        class Object; //type: PolicyManager::Global::Summary::ClassMap::Object
        class ClassMapReference; //type: PolicyManager::Global::Summary::ClassMap::ClassMapReference

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::Summary::ClassMap::ClassMapReference> > class_map_reference;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::Summary::ClassMap::Object> > object;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::Summary::ClassMap::Reference> > reference;
        
}; // PolicyManager::Global::Summary::ClassMap


class PolicyManager::Global::Summary::ClassMap::Reference : public Entity
{
    public:
        Reference();
        ~Reference();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf total_internal_reference_objects; //type: uint32
        YLeaf total_class_maps; //type: uint32
        YLeaf total_flows; //type: uint32

}; // PolicyManager::Global::Summary::ClassMap::Reference


class PolicyManager::Global::Summary::ClassMap::Object : public Entity
{
    public:
        Object();
        ~Object();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf object_name; //type: string

}; // PolicyManager::Global::Summary::ClassMap::Object


class PolicyManager::Global::Summary::ClassMap::ClassMapReference : public Entity
{
    public:
        ClassMapReference();
        ~ClassMapReference();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf total_reference_objects; //type: uint32
        class PolicyMapReference; //type: PolicyManager::Global::Summary::ClassMap::ClassMapReference::PolicyMapReference

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::Summary::ClassMap::ClassMapReference::PolicyMapReference> > policy_map_reference;
        
}; // PolicyManager::Global::Summary::ClassMap::ClassMapReference


class PolicyManager::Global::Summary::ClassMap::ClassMapReference::PolicyMapReference : public Entity
{
    public:
        PolicyMapReference();
        ~PolicyMapReference();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf object_type; //type: PlmgrApplnEnum
        YLeaf policy_map_name; //type: string

}; // PolicyManager::Global::Summary::ClassMap::ClassMapReference::PolicyMapReference


class PolicyManager::Global::Summary::PolicyMap : public Entity
{
    public:
        PolicyMap();
        ~PolicyMap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf object_type; //type: PlmgrApplnEnum
        YLeaf total_objects; //type: uint32
        YLeaf transient; //type: boolean
        class Reference; //type: PolicyManager::Global::Summary::PolicyMap::Reference
        class Object; //type: PolicyManager::Global::Summary::PolicyMap::Object
        class ClassMapReference; //type: PolicyManager::Global::Summary::PolicyMap::ClassMapReference

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::Summary::PolicyMap::ClassMapReference> > class_map_reference;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::Summary::PolicyMap::Object> > object;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::Summary::PolicyMap::Reference> > reference;
        
}; // PolicyManager::Global::Summary::PolicyMap


class PolicyManager::Global::Summary::PolicyMap::Reference : public Entity
{
    public:
        Reference();
        ~Reference();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf total_internal_reference_objects; //type: uint32
        YLeaf total_class_maps; //type: uint32
        YLeaf total_flows; //type: uint32

}; // PolicyManager::Global::Summary::PolicyMap::Reference


class PolicyManager::Global::Summary::PolicyMap::Object : public Entity
{
    public:
        Object();
        ~Object();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf object_name; //type: string

}; // PolicyManager::Global::Summary::PolicyMap::Object


class PolicyManager::Global::Summary::PolicyMap::ClassMapReference : public Entity
{
    public:
        ClassMapReference();
        ~ClassMapReference();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf total_reference_objects; //type: uint32
        class PolicyMapReference; //type: PolicyManager::Global::Summary::PolicyMap::ClassMapReference::PolicyMapReference

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::Summary::PolicyMap::ClassMapReference::PolicyMapReference> > policy_map_reference;
        
}; // PolicyManager::Global::Summary::PolicyMap::ClassMapReference


class PolicyManager::Global::Summary::PolicyMap::ClassMapReference::PolicyMapReference : public Entity
{
    public:
        PolicyMapReference();
        ~PolicyMapReference();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf object_type; //type: PlmgrApplnEnum
        YLeaf policy_map_name; //type: string

}; // PolicyManager::Global::Summary::PolicyMap::ClassMapReference::PolicyMapReference


class PolicyManager::Nodes : public Entity
{
    public:
        Nodes();
        ~Nodes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Node; //type: PolicyManager::Nodes::Node

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node> > node;
        
}; // PolicyManager::Nodes


class PolicyManager::Nodes::Node : public Entity
{
    public:
        Node();
        ~Node();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf node_name; //type: string
        class TargetPolicyMapTypes; //type: PolicyManager::Nodes::Node::TargetPolicyMapTypes
        class ClassMap; //type: PolicyManager::Nodes::Node::ClassMap
        class PolicyMap; //type: PolicyManager::Nodes::Node::PolicyMap
        class Summary; //type: PolicyManager::Nodes::Node::Summary

        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap> class_map;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::PolicyMap> policy_map;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::Summary> summary;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::TargetPolicyMapTypes> target_policy_map_types;
        
}; // PolicyManager::Nodes::Node


class PolicyManager::Nodes::Node::TargetPolicyMapTypes : public Entity
{
    public:
        TargetPolicyMapTypes();
        ~TargetPolicyMapTypes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class TargetPolicyMapType; //type: PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType> > target_policy_map_type;
        
}; // PolicyManager::Nodes::Node::TargetPolicyMapTypes


class PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType : public Entity
{
    public:
        TargetPolicyMapType();
        ~TargetPolicyMapType();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf type; //type: PolicymgrPolicyMapEnum
        class PolicyMapTargets; //type: PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::PolicyMapTargets
        class PolicyMapTargetSummary; //type: PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::PolicyMapTargetSummary
        class TargetSummaryPerPolicyMaps; //type: PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::TargetSummaryPerPolicyMaps

        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::PolicyMapTargetSummary> policy_map_target_summary;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::PolicyMapTargets> policy_map_targets;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::TargetSummaryPerPolicyMaps> target_summary_per_policy_maps;
        
}; // PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType


class PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::PolicyMapTargets : public Entity
{
    public:
        PolicyMapTargets();
        ~PolicyMapTargets();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class PolicyMapTarget; //type: PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::PolicyMapTargets::PolicyMapTarget

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::PolicyMapTargets::PolicyMapTarget> > policy_map_target;
        
}; // PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::PolicyMapTargets


class PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::PolicyMapTargets::PolicyMapTarget : public Entity
{
    public:
        PolicyMapTarget();
        ~PolicyMapTarget();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf policy_map_name; //type: string
        YLeafList target; //type: list of  string
        YLeafList parent_target; //type: list of  string

}; // PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::PolicyMapTargets::PolicyMapTarget


class PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::PolicyMapTargetSummary : public Entity
{
    public:
        PolicyMapTargetSummary();
        ~PolicyMapTargetSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf total_policy_maps_input_direction; //type: uint32
        YLeaf total_policy_maps_output_direction; //type: uint32
        YLeaf total_child_policy_maps_input_direction; //type: uint32
        YLeaf total_child_policy_maps_output_direction; //type: uint32
        YLeaf total_interfaces_input_direction; //type: uint32
        YLeaf total_interfaces_output_direction; //type: uint32

}; // PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::PolicyMapTargetSummary


class PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::TargetSummaryPerPolicyMaps : public Entity
{
    public:
        TargetSummaryPerPolicyMaps();
        ~TargetSummaryPerPolicyMaps();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class TargetSummaryPerPolicyMap; //type: PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::TargetSummaryPerPolicyMaps::TargetSummaryPerPolicyMap

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::TargetSummaryPerPolicyMaps::TargetSummaryPerPolicyMap> > target_summary_per_policy_map;
        
}; // PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::TargetSummaryPerPolicyMaps


class PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::TargetSummaryPerPolicyMaps::TargetSummaryPerPolicyMap : public Entity
{
    public:
        TargetSummaryPerPolicyMap();
        ~TargetSummaryPerPolicyMap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf policy_map_name; //type: string
        YLeaf total_policy_maps_input_direction; //type: uint32
        YLeaf total_policy_maps_output_direction; //type: uint32
        YLeaf total_child_policy_maps_input_direction; //type: uint32
        YLeaf total_child_policy_maps_output_direction; //type: uint32
        YLeaf total_interfaces_input_direction; //type: uint32
        YLeaf total_interfaces_output_direction; //type: uint32

}; // PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::TargetSummaryPerPolicyMaps::TargetSummaryPerPolicyMap


class PolicyManager::Nodes::Node::ClassMap : public Entity
{
    public:
        ClassMap();
        ~ClassMap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ClassMapTypes; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes

        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes> class_map_types;
        
}; // PolicyManager::Nodes::Node::ClassMap


class PolicyManager::Nodes::Node::ClassMap::ClassMapTypes : public Entity
{
    public:
        ClassMapTypes();
        ~ClassMapTypes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ClassMapType; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType> > class_map_type;
        
}; // PolicyManager::Nodes::Node::ClassMap::ClassMapTypes


class PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType : public Entity
{
    public:
        ClassMapType();
        ~ClassMapType();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf type; //type: PolicymgrClassMapEnum
        class ClassMapDetails; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails
        class ClassMaps; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps
        class ClassMapBriefs; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapBriefs

        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapBriefs> class_map_briefs;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails> class_map_details;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps> class_maps;
        
}; // PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType


class PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails : public Entity
{
    public:
        ClassMapDetails();
        ~ClassMapDetails();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ClassMapDetail; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail> > class_map_detail;
        
}; // PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails


class PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail : public Entity
{
    public:
        ClassMapDetail();
        ~ClassMapDetail();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf class_map_name; //type: string
        YLeaf object_type; //type: PlmgrApplnEnum
        YLeaf total_objects; //type: uint32
        YLeaf transient; //type: boolean
        class Reference; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::Reference
        class Object; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::Object
        class ClassMapReference; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::ClassMapReference

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::ClassMapReference> > class_map_reference;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::Object> > object;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::Reference> > reference;
        
}; // PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail


class PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::Reference : public Entity
{
    public:
        Reference();
        ~Reference();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf total_internal_reference_objects; //type: uint32
        YLeaf total_class_maps; //type: uint32
        YLeaf total_flows; //type: uint32

}; // PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::Reference


class PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::Object : public Entity
{
    public:
        Object();
        ~Object();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf object_name; //type: string

}; // PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::Object


class PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::ClassMapReference : public Entity
{
    public:
        ClassMapReference();
        ~ClassMapReference();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf total_reference_objects; //type: uint32
        class PolicyMapReference; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::ClassMapReference::PolicyMapReference

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::ClassMapReference::PolicyMapReference> > policy_map_reference;
        
}; // PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::ClassMapReference


class PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::ClassMapReference::PolicyMapReference : public Entity
{
    public:
        PolicyMapReference();
        ~PolicyMapReference();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf object_type; //type: PlmgrApplnEnum
        YLeaf policy_map_name; //type: string

}; // PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::ClassMapReference::PolicyMapReference


class PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps : public Entity
{
    public:
        ClassMaps();
        ~ClassMaps();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ClassMap_; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_> > class_map;
        
}; // PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps


class PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_ : public Entity
{
    public:
        ClassMap_();
        ~ClassMap_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf class_map_name; //type: string
        class ClassMapBg; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg> > class_map_bg;
        
}; // PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_


class PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg : public Entity
{
    public:
        ClassMapBg();
        ~ClassMapBg();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf magic; //type: uint32
        YLeaf name; //type: string
        YLeaf type; //type: ClassMapEnum
        YLeaf mode; //type: ClassMapModeEnum
        YLeaf flags; //type: uint32
        YLeaf match_count; //type: uint32
        YLeaf chk_sum; //type: string
        YLeaf description; //type: string
        class MatchInfop; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop

        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop> match_infop;
        
}; // PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg


class PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop : public Entity
{
    public:
        MatchInfop();
        ~MatchInfop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ClassMatchInfoSt; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt> > class_match_info_st;
        
}; // PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop


class PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt : public Entity
{
    public:
        ClassMatchInfoSt();
        ~ClassMatchInfoSt();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf flags; //type: uint32
        class MatchData; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData

        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData> match_data;
        
}; // PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt


class PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData : public Entity
{
    public:
        MatchData();
        ~MatchData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf type; //type: MatchEnum
        YLeaf mpls_top_eos; //type: uint8
        YLeaf fragment_type; //type: uint8
        YLeaf authen_status; //type: MatchAuthenStatusEnum
        YLeaf mlp_negotiated; //type: MatchMlpNegotiatedEnum
        class Ipv4Dscp; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp
        class Ipv6Dscp; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp
        class Dscp; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp
        class Ipv4Prec; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Prec
        class Ipv6Prec; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Prec
        class Prec; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Prec
        class DiscardClass; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DiscardClass
        class QosGroup; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup
        class TrafficClass; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass
        class Proto; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto
        class IcmpV4; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV4
        class IcmpV6; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV6
        class Ipv4PacketLen; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen
        class Ipv6PacketLen; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen
        class PacketLen; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen
        class FlowTag; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag
        class TcpFlag; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TcpFlag
        class Icmpv4Type; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type
        class Icmpv4Code; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code
        class Icmpv6Type; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type
        class Icmpv6Code; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code
        class MplsExp; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExp
        class MplsExpImp; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExpImp
        class MplsDispIpv4Acl; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv4Acl
        class MplsDispIpv6Acl; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv6Acl
        class MplsTopLabel; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel
        class Cos; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Cos
        class CosInr; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CosInr
        class Dei; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dei
        class DeiInr; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DeiInr
        class Vlan; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan
        class VlanInr; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr
        class FrDlci; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci
        class SrcMac; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcMac
        class DstMac; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstMac
        class AtmClp; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AtmClp
        class FrDe; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDe
        class Ipv4Acl; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Acl
        class Ipv6Acl; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Acl
        class EtherServiceAcl; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::EtherServiceAcl
        class AvailId; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AvailId
        class MediaType; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MediaType
        class SubsProtocol; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SubsProtocol
        class Dnis; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dnis
        class DnisRegex; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DnisRegex
        class Domain; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain
        class DomainRegex; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex
        class NasPort; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort
        class ServiceName; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceName
        class ServiceNameRegex; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceNameRegex
        class SrcAddrIpv4; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4
        class DstAddrIpv4; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4
        class SrcAddrIpv6; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6
        class DstAddrIpv6; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6
        class SrcAddrMac; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac
        class Timer; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Timer
        class TimerRegexp; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TimerRegexp
        class TunnelName; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelName
        class TunnelNameRegex; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelNameRegex
        class UserName; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserName
        class UserNameRegex; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserNameRegex
        class AuthUsername; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsername
        class AuthUsernameRegex; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsernameRegex
        class UnauthUsername; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsername
        class UnauthUsernameRegex; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsernameRegex
        class AuthDomain; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomain
        class AuthDomainRegex; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomainRegex
        class UnauthDomain; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomain
        class UnauthDomainRegex; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomainRegex
        class VendorId; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorId
        class VendorIdRegex; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorIdRegex
        class AccessInterface; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AccessInterface
        class InputInterface; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputInterface
        class InputIntfhdl; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputIntfhdl
        class Ethertype; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype
        class FlowKeyData; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData
        class DhcpClientId; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientId
        class DhcpClientIdRegex; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientIdRegex
        class CircuitId; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitId
        class CircuitIdRegex; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitIdRegex
        class RemoteId; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteId
        class RemoteIdRegex; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteIdRegex
        class SrcPort; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort
        class DstPort; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort

        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AccessInterface> access_interface;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AtmClp> atm_clp;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomain> auth_domain;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomainRegex> auth_domain_regex;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsername> auth_username;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsernameRegex> auth_username_regex;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AvailId> avail_id;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitId> circuit_id;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitIdRegex> circuit_id_regex;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Cos> cos;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CosInr> cos_inr;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dei> dei;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DeiInr> dei_inr;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientId> dhcp_client_id;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientIdRegex> dhcp_client_id_regex;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DiscardClass> discard_class;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dnis> dnis;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DnisRegex> dnis_regex;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain> domain;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex> domain_regex;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp> dscp;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4> dst_addr_ipv4;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6> dst_addr_ipv6;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstMac> dst_mac;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort> dst_port;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::EtherServiceAcl> ether_service_acl;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype> ethertype;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData> flow_key_data;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag> flow_tag;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDe> fr_de;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci> fr_dlci;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV4> icmp_v4;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV6> icmp_v6;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code> icmpv4_code;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type> icmpv4_type;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code> icmpv6_code;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type> icmpv6_type;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputInterface> input_interface;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputIntfhdl> input_intfhdl;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Acl> ipv4_acl;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp> ipv4_dscp;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen> ipv4_packet_len;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Prec> ipv4_prec;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Acl> ipv6_acl;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp> ipv6_dscp;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen> ipv6_packet_len;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Prec> ipv6_prec;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MediaType> media_type;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv4Acl> mpls_disp_ipv4_acl;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv6Acl> mpls_disp_ipv6_acl;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExp> mpls_exp;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExpImp> mpls_exp_imp;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel> mpls_top_label;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort> nas_port;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen> packet_len;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Prec> prec;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto> proto;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup> qos_group;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteId> remote_id;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteIdRegex> remote_id_regex;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceName> service_name;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceNameRegex> service_name_regex;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4> src_addr_ipv4;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6> src_addr_ipv6;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac> src_addr_mac;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcMac> src_mac;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort> src_port;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SubsProtocol> subs_protocol;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TcpFlag> tcp_flag;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Timer> timer;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TimerRegexp> timer_regexp;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass> traffic_class;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelName> tunnel_name;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelNameRegex> tunnel_name_regex;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomain> unauth_domain;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomainRegex> unauth_domain_regex;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsername> unauth_username;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsernameRegex> unauth_username_regex;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserName> user_name;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserNameRegex> user_name_regex;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorId> vendor_id;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorIdRegex> vendor_id_regex;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan> vlan;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr> vlan_inr;
        
}; // PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData


class PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp : public Entity
{
    public:
        Ipv4Dscp();
        ~Ipv4Dscp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Uint8_Rng_Array; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::Uint8_Rng_Array

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::Uint8_Rng_Array> > uint8_rng_array;
        
}; // PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp


class PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::Uint8_Rng_Array : public Entity
{
    public:
        Uint8_Rng_Array();
        ~Uint8_Rng_Array();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf min; //type: uint8
        YLeaf max; //type: uint8

}; // PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::Uint8_Rng_Array


class PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp : public Entity
{
    public:
        Ipv6Dscp();
        ~Ipv6Dscp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Uint8_Rng_Array; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::Uint8_Rng_Array

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::Uint8_Rng_Array> > uint8_rng_array;
        
}; // PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp


class PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::Uint8_Rng_Array : public Entity
{
    public:
        Uint8_Rng_Array();
        ~Uint8_Rng_Array();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf min; //type: uint8
        YLeaf max; //type: uint8

}; // PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::Uint8_Rng_Array


class PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp : public Entity
{
    public:
        Dscp();
        ~Dscp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Uint8_Rng_Array; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::Uint8_Rng_Array

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::Uint8_Rng_Array> > uint8_rng_array;
        
}; // PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp


class PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::Uint8_Rng_Array : public Entity
{
    public:
        Uint8_Rng_Array();
        ~Uint8_Rng_Array();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf min; //type: uint8
        YLeaf max; //type: uint8

}; // PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::Uint8_Rng_Array


class PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Prec : public Entity
{
    public:
        Ipv4Prec();
        ~Ipv4Prec();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList uint8_array; //type: list of  uint8

}; // PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Prec


class PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Prec : public Entity
{
    public:
        Ipv6Prec();
        ~Ipv6Prec();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList uint8_array; //type: list of  uint8

}; // PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Prec


class PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Prec : public Entity
{
    public:
        Prec();
        ~Prec();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList uint8_array; //type: list of  uint8

}; // PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Prec


class PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DiscardClass : public Entity
{
    public:
        DiscardClass();
        ~DiscardClass();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList uint8_array; //type: list of  uint8

}; // PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DiscardClass


class PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup : public Entity
{
    public:
        QosGroup();
        ~QosGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Uint16_Rng_Array; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::Uint16_Rng_Array

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::Uint16_Rng_Array> > uint16_rng_array;
        
}; // PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup


class PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::Uint16_Rng_Array : public Entity
{
    public:
        Uint16_Rng_Array();
        ~Uint16_Rng_Array();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf min; //type: uint16
        YLeaf max; //type: uint16

}; // PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::Uint16_Rng_Array


class PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass : public Entity
{
    public:
        TrafficClass();
        ~TrafficClass();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Uint8_Rng_Array; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::Uint8_Rng_Array

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::Uint8_Rng_Array> > uint8_rng_array;
        
}; // PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass


class PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::Uint8_Rng_Array : public Entity
{
    public:
        Uint8_Rng_Array();
        ~Uint8_Rng_Array();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf min; //type: uint8
        YLeaf max; //type: uint8

}; // PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::Uint8_Rng_Array


class PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto : public Entity
{
    public:
        Proto();
        ~Proto();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Uint16_Rng_Array; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::Uint16_Rng_Array

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::Uint16_Rng_Array> > uint16_rng_array;
        
}; // PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto


class PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::Uint16_Rng_Array : public Entity
{
    public:
        Uint16_Rng_Array();
        ~Uint16_Rng_Array();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf min; //type: uint16
        YLeaf max; //type: uint16

}; // PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::Uint16_Rng_Array


class PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV4 : public Entity
{
    public:
        IcmpV4();
        ~IcmpV4();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf type; //type: uint8
        YLeaf code; //type: uint8

}; // PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV4


class PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV6 : public Entity
{
    public:
        IcmpV6();
        ~IcmpV6();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf type; //type: uint8
        YLeaf code; //type: uint8

}; // PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV6


class PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen : public Entity
{
    public:
        Ipv4PacketLen();
        ~Ipv4PacketLen();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Uint16_Rng_Array; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::Uint16_Rng_Array

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::Uint16_Rng_Array> > uint16_rng_array;
        
}; // PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen


class PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::Uint16_Rng_Array : public Entity
{
    public:
        Uint16_Rng_Array();
        ~Uint16_Rng_Array();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf min; //type: uint16
        YLeaf max; //type: uint16

}; // PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::Uint16_Rng_Array


class PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen : public Entity
{
    public:
        Ipv6PacketLen();
        ~Ipv6PacketLen();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Uint16_Rng_Array; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::Uint16_Rng_Array

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::Uint16_Rng_Array> > uint16_rng_array;
        
}; // PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen


class PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::Uint16_Rng_Array : public Entity
{
    public:
        Uint16_Rng_Array();
        ~Uint16_Rng_Array();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf min; //type: uint16
        YLeaf max; //type: uint16

}; // PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::Uint16_Rng_Array


class PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen : public Entity
{
    public:
        PacketLen();
        ~PacketLen();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Uint16_Rng_Array; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::Uint16_Rng_Array

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::Uint16_Rng_Array> > uint16_rng_array;
        
}; // PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen


class PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::Uint16_Rng_Array : public Entity
{
    public:
        Uint16_Rng_Array();
        ~Uint16_Rng_Array();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf min; //type: uint16
        YLeaf max; //type: uint16

}; // PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::Uint16_Rng_Array


class PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag : public Entity
{
    public:
        FlowTag();
        ~FlowTag();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Uint8_Rng_Array; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::Uint8_Rng_Array

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::Uint8_Rng_Array> > uint8_rng_array;
        
}; // PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag


class PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::Uint8_Rng_Array : public Entity
{
    public:
        Uint8_Rng_Array();
        ~Uint8_Rng_Array();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf min; //type: uint8
        YLeaf max; //type: uint8

}; // PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::Uint8_Rng_Array


class PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TcpFlag : public Entity
{
    public:
        TcpFlag();
        ~TcpFlag();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: uint16
        YLeaf match_any; //type: boolean

}; // PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TcpFlag


class PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type : public Entity
{
    public:
        Icmpv4Type();
        ~Icmpv4Type();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Uint8_Rng_Array; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::Uint8_Rng_Array

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::Uint8_Rng_Array> > uint8_rng_array;
        
}; // PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type


class PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::Uint8_Rng_Array : public Entity
{
    public:
        Uint8_Rng_Array();
        ~Uint8_Rng_Array();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf min; //type: uint8
        YLeaf max; //type: uint8

}; // PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::Uint8_Rng_Array


class PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code : public Entity
{
    public:
        Icmpv4Code();
        ~Icmpv4Code();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Uint8_Rng_Array; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::Uint8_Rng_Array

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::Uint8_Rng_Array> > uint8_rng_array;
        
}; // PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code


class PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::Uint8_Rng_Array : public Entity
{
    public:
        Uint8_Rng_Array();
        ~Uint8_Rng_Array();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf min; //type: uint8
        YLeaf max; //type: uint8

}; // PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::Uint8_Rng_Array


class PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type : public Entity
{
    public:
        Icmpv6Type();
        ~Icmpv6Type();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Uint8_Rng_Array; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::Uint8_Rng_Array

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::Uint8_Rng_Array> > uint8_rng_array;
        
}; // PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type


class PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::Uint8_Rng_Array : public Entity
{
    public:
        Uint8_Rng_Array();
        ~Uint8_Rng_Array();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf min; //type: uint8
        YLeaf max; //type: uint8

}; // PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::Uint8_Rng_Array


class PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code : public Entity
{
    public:
        Icmpv6Code();
        ~Icmpv6Code();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Uint8_Rng_Array; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::Uint8_Rng_Array

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::Uint8_Rng_Array> > uint8_rng_array;
        
}; // PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code


class PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::Uint8_Rng_Array : public Entity
{
    public:
        Uint8_Rng_Array();
        ~Uint8_Rng_Array();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf min; //type: uint8
        YLeaf max; //type: uint8

}; // PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::Uint8_Rng_Array


class PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExp : public Entity
{
    public:
        MplsExp();
        ~MplsExp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList uint8_array; //type: list of  uint8

}; // PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExp


class PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExpImp : public Entity
{
    public:
        MplsExpImp();
        ~MplsExpImp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList uint8_array; //type: list of  uint8

}; // PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExpImp


class PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv4Acl : public Entity
{
    public:
        MplsDispIpv4Acl();
        ~MplsDispIpv4Acl();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList string_array; //type: list of  string

}; // PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv4Acl


class PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv6Acl : public Entity
{
    public:
        MplsDispIpv6Acl();
        ~MplsDispIpv6Acl();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList string_array; //type: list of  string

}; // PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv6Acl


class PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel : public Entity
{
    public:
        MplsTopLabel();
        ~MplsTopLabel();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Uint32_Rng_Array; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::Uint32_Rng_Array

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::Uint32_Rng_Array> > uint32_rng_array;
        
}; // PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel


class PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::Uint32_Rng_Array : public Entity
{
    public:
        Uint32_Rng_Array();
        ~Uint32_Rng_Array();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf min; //type: uint32
        YLeaf max; //type: uint32

}; // PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::Uint32_Rng_Array


class PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Cos : public Entity
{
    public:
        Cos();
        ~Cos();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList uint8_array; //type: list of  uint8

}; // PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Cos


class PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CosInr : public Entity
{
    public:
        CosInr();
        ~CosInr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList uint8_array; //type: list of  uint8

}; // PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CosInr


class PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dei : public Entity
{
    public:
        Dei();
        ~Dei();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bit_value; //type: uint32

}; // PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dei


class PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DeiInr : public Entity
{
    public:
        DeiInr();
        ~DeiInr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bit_value; //type: uint32

}; // PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DeiInr


class PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan : public Entity
{
    public:
        Vlan();
        ~Vlan();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class VlanIdArray; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::VlanIdArray

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::VlanIdArray> > vlan_id_array;
        
}; // PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan


class PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::VlanIdArray : public Entity
{
    public:
        VlanIdArray();
        ~VlanIdArray();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf min; //type: uint16
        YLeaf max; //type: uint16
        YLeaf mask; //type: uint16

}; // PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::VlanIdArray


class PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr : public Entity
{
    public:
        VlanInr();
        ~VlanInr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Uint16_Rng_Array; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::Uint16_Rng_Array

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::Uint16_Rng_Array> > uint16_rng_array;
        
}; // PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr


class PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::Uint16_Rng_Array : public Entity
{
    public:
        Uint16_Rng_Array();
        ~Uint16_Rng_Array();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf min; //type: uint16
        YLeaf max; //type: uint16

}; // PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::Uint16_Rng_Array


class PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci : public Entity
{
    public:
        FrDlci();
        ~FrDlci();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Uint16_Rng_Array; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::Uint16_Rng_Array

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::Uint16_Rng_Array> > uint16_rng_array;
        
}; // PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci


class PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::Uint16_Rng_Array : public Entity
{
    public:
        Uint16_Rng_Array();
        ~Uint16_Rng_Array();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf min; //type: uint16
        YLeaf max; //type: uint16

}; // PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::Uint16_Rng_Array


class PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcMac : public Entity
{
    public:
        SrcMac();
        ~SrcMac();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList mac_addr; //type: list of  uint16
        YLeafList mask; //type: list of  uint16

}; // PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcMac


class PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstMac : public Entity
{
    public:
        DstMac();
        ~DstMac();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList mac_addr; //type: list of  uint16
        YLeafList mask; //type: list of  uint16

}; // PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstMac


class PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AtmClp : public Entity
{
    public:
        AtmClp();
        ~AtmClp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList uint8_array; //type: list of  uint8

}; // PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AtmClp


class PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDe : public Entity
{
    public:
        FrDe();
        ~FrDe();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList uint8_array; //type: list of  uint8

}; // PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDe


class PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Acl : public Entity
{
    public:
        Ipv4Acl();
        ~Ipv4Acl();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList string_array; //type: list of  string

}; // PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Acl


class PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Acl : public Entity
{
    public:
        Ipv6Acl();
        ~Ipv6Acl();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList string_array; //type: list of  string

}; // PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Acl


class PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::EtherServiceAcl : public Entity
{
    public:
        EtherServiceAcl();
        ~EtherServiceAcl();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList string_array; //type: list of  string

}; // PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::EtherServiceAcl


class PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AvailId : public Entity
{
    public:
        AvailId();
        ~AvailId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList uint8_array; //type: list of  uint8

}; // PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AvailId


class PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MediaType : public Entity
{
    public:
        MediaType();
        ~MediaType();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList uint8_array; //type: list of  uint8

}; // PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MediaType


class PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SubsProtocol : public Entity
{
    public:
        SubsProtocol();
        ~SubsProtocol();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList uint8_array; //type: list of  uint8

}; // PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SubsProtocol


class PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dnis : public Entity
{
    public:
        Dnis();
        ~Dnis();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList string_array; //type: list of  string

}; // PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dnis


class PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DnisRegex : public Entity
{
    public:
        DnisRegex();
        ~DnisRegex();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList string_array; //type: list of  string

}; // PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DnisRegex


class PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain : public Entity
{
    public:
        Domain();
        ~Domain();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class DomainArray; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain::DomainArray

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain::DomainArray> > domain_array;
        
}; // PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain


class PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain::DomainArray : public Entity
{
    public:
        DomainArray();
        ~DomainArray();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf domain_name; //type: string
        YLeaf format_name; //type: string

}; // PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain::DomainArray


class PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex : public Entity
{
    public:
        DomainRegex();
        ~DomainRegex();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class DomainArray; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::DomainArray

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::DomainArray> > domain_array;
        
}; // PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex


class PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::DomainArray : public Entity
{
    public:
        DomainArray();
        ~DomainArray();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf domain_name; //type: string
        YLeaf format_name; //type: string

}; // PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::DomainArray


class PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort : public Entity
{
    public:
        NasPort();
        ~NasPort();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class NasPortArray; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::NasPortArray

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::NasPortArray> > nas_port_array;
        
}; // PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort


class PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::NasPortArray : public Entity
{
    public:
        NasPortArray();
        ~NasPortArray();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sub_id; //type: MatchNasPortSubIdEnum
        YLeaf operator_; //type: MatchLogicalOperatorEnum
        YLeaf value_; //type: uint32

}; // PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::NasPortArray


class PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceName : public Entity
{
    public:
        ServiceName();
        ~ServiceName();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList string_array; //type: list of  string

}; // PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceName


class PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceNameRegex : public Entity
{
    public:
        ServiceNameRegex();
        ~ServiceNameRegex();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList string_array; //type: list of  string

}; // PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceNameRegex


class PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4 : public Entity
{
    public:
        SrcAddrIpv4();
        ~SrcAddrIpv4();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv4AddrArray; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::Ipv4AddrArray

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::Ipv4AddrArray> > ipv4_addr_array;
        
}; // PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4


class PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::Ipv4AddrArray : public Entity
{
    public:
        Ipv4AddrArray();
        ~Ipv4AddrArray();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prefix; //type: string
        YLeaf mask; //type: string

}; // PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::Ipv4AddrArray


class PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4 : public Entity
{
    public:
        DstAddrIpv4();
        ~DstAddrIpv4();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv4AddrArray; //type: PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::Ipv4AddrArray

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::Ipv4AddrArray> > ipv4_addr_array;
        
}; // PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4


}
}

#endif /* _CISCO_IOS_XR_INFRA_POLICYMGR_OPER_45_ */

