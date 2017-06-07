#ifndef _CISCO_IOS_XR_ASR9K_NP_OPER_
#define _CISCO_IOS_XR_ASR9K_NP_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_asr9k_np_oper {

class HardwareModuleNp : public Entity
{
    public:
        HardwareModuleNp();
        ~HardwareModuleNp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Nodes; //type: HardwareModuleNp::Nodes

        std::shared_ptr<Cisco_IOS_XR_asr9k_np_oper::HardwareModuleNp::Nodes> nodes;
        
}; // HardwareModuleNp


class HardwareModuleNp::Nodes : public Entity
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

        class Node; //type: HardwareModuleNp::Nodes::Node

        std::vector<std::shared_ptr<Cisco_IOS_XR_asr9k_np_oper::HardwareModuleNp::Nodes::Node> > node;
        
}; // HardwareModuleNp::Nodes


class HardwareModuleNp::Nodes::Node : public Entity
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
        class Nps; //type: HardwareModuleNp::Nodes::Node::Nps

        std::shared_ptr<Cisco_IOS_XR_asr9k_np_oper::HardwareModuleNp::Nodes::Node::Nps> nps;
        
}; // HardwareModuleNp::Nodes::Node


class HardwareModuleNp::Nodes::Node::Nps : public Entity
{
    public:
        Nps();
        ~Nps();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Np; //type: HardwareModuleNp::Nodes::Node::Nps::Np

        std::vector<std::shared_ptr<Cisco_IOS_XR_asr9k_np_oper::HardwareModuleNp::Nodes::Node::Nps::Np> > np;
        
}; // HardwareModuleNp::Nodes::Node::Nps


class HardwareModuleNp::Nodes::Node::Nps::Np : public Entity
{
    public:
        Np();
        ~Np();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf np_name; //type: string
        class ChnLoad; //type: HardwareModuleNp::Nodes::Node::Nps::Np::ChnLoad
        class TcamSummary; //type: HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary
        class Counters; //type: HardwareModuleNp::Nodes::Node::Nps::Np::Counters
        class FastDrop; //type: HardwareModuleNp::Nodes::Node::Nps::Np::FastDrop

        std::shared_ptr<Cisco_IOS_XR_asr9k_np_oper::HardwareModuleNp::Nodes::Node::Nps::Np::ChnLoad> chn_load;
        std::shared_ptr<Cisco_IOS_XR_asr9k_np_oper::HardwareModuleNp::Nodes::Node::Nps::Np::Counters> counters;
        std::shared_ptr<Cisco_IOS_XR_asr9k_np_oper::HardwareModuleNp::Nodes::Node::Nps::Np::FastDrop> fast_drop;
        std::shared_ptr<Cisco_IOS_XR_asr9k_np_oper::HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary> tcam_summary;
        
}; // HardwareModuleNp::Nodes::Node::Nps::Np


class HardwareModuleNp::Nodes::Node::Nps::Np::ChnLoad : public Entity
{
    public:
        ChnLoad();
        ~ChnLoad();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class NpChnLoad; //type: HardwareModuleNp::Nodes::Node::Nps::Np::ChnLoad::NpChnLoad

        std::vector<std::shared_ptr<Cisco_IOS_XR_asr9k_np_oper::HardwareModuleNp::Nodes::Node::Nps::Np::ChnLoad::NpChnLoad> > np_chn_load;
        
}; // HardwareModuleNp::Nodes::Node::Nps::Np::ChnLoad


class HardwareModuleNp::Nodes::Node::Nps::Np::ChnLoad::NpChnLoad : public Entity
{
    public:
        NpChnLoad();
        ~NpChnLoad();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf flow_ctr_counter; //type: uint32
        YLeaf avg_rfd_usage; //type: uint32
        YLeaf peak_rfd_usage; //type: uint32
        YLeaf avg_guar_rfd_usage; //type: uint32
        YLeaf peak_guar_rfd_usage; //type: uint32
        YLeaf interface_name; //type: string

}; // HardwareModuleNp::Nodes::Node::Nps::Np::ChnLoad::NpChnLoad


class HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary : public Entity
{
    public:
        TcamSummary();
        ~TcamSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class InternalTcamInfo; //type: HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo
        class TcamInfo; //type: HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo

        std::shared_ptr<Cisco_IOS_XR_asr9k_np_oper::HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo> internal_tcam_info;
        std::shared_ptr<Cisco_IOS_XR_asr9k_np_oper::HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo> tcam_info;
        
}; // HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary


class HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo : public Entity
{
    public:
        InternalTcamInfo();
        ~InternalTcamInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class TcamLtOds2; //type: HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2
        class TcamLtOds8; //type: HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8
        class TcamLtL2; //type: HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtL2

        std::vector<std::shared_ptr<Cisco_IOS_XR_asr9k_np_oper::HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtL2> > tcam_lt_l2;
        std::shared_ptr<Cisco_IOS_XR_asr9k_np_oper::HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2> tcam_lt_ods2;
        std::shared_ptr<Cisco_IOS_XR_asr9k_np_oper::HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8> tcam_lt_ods8;
        
}; // HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo


class HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2 : public Entity
{
    public:
        TcamLtOds2();
        ~TcamLtOds2();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max_entries; //type: uint32
        YLeaf free_entries; //type: uint32
        class AppIdIfib; //type: HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdIfib
        class AppIdQos; //type: HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdQos
        class AppIdAcl; //type: HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdAcl
        class AppIdAfmon; //type: HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdAfmon
        class AppIdLi; //type: HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdLi
        class AppIdPbr; //type: HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdPbr
        class ApplicationEdplEntry; //type: HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::ApplicationEdplEntry

        std::shared_ptr<Cisco_IOS_XR_asr9k_np_oper::HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdAcl> app_id_acl;
        std::shared_ptr<Cisco_IOS_XR_asr9k_np_oper::HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdAfmon> app_id_afmon;
        std::shared_ptr<Cisco_IOS_XR_asr9k_np_oper::HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdIfib> app_id_ifib;
        std::shared_ptr<Cisco_IOS_XR_asr9k_np_oper::HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdLi> app_id_li;
        std::shared_ptr<Cisco_IOS_XR_asr9k_np_oper::HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdPbr> app_id_pbr;
        std::shared_ptr<Cisco_IOS_XR_asr9k_np_oper::HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdQos> app_id_qos;
        std::shared_ptr<Cisco_IOS_XR_asr9k_np_oper::HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::ApplicationEdplEntry> application_edpl_entry;
        
}; // HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2


class HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdIfib : public Entity
{
    public:
        AppIdIfib();
        ~AppIdIfib();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf num_vmr_ids; //type: uint32
        YLeaf total_used_entries; //type: uint32
        YLeaf total_allocated_entries; //type: uint32

}; // HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdIfib


class HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdQos : public Entity
{
    public:
        AppIdQos();
        ~AppIdQos();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf num_vmr_ids; //type: uint32
        YLeaf total_used_entries; //type: uint32
        YLeaf total_allocated_entries; //type: uint32

}; // HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdQos


class HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdAcl : public Entity
{
    public:
        AppIdAcl();
        ~AppIdAcl();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf num_vmr_ids; //type: uint32
        YLeaf total_used_entries; //type: uint32
        YLeaf total_allocated_entries; //type: uint32

}; // HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdAcl


class HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdAfmon : public Entity
{
    public:
        AppIdAfmon();
        ~AppIdAfmon();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf num_vmr_ids; //type: uint32
        YLeaf total_used_entries; //type: uint32
        YLeaf total_allocated_entries; //type: uint32

}; // HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdAfmon


class HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdLi : public Entity
{
    public:
        AppIdLi();
        ~AppIdLi();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf num_vmr_ids; //type: uint32
        YLeaf total_used_entries; //type: uint32
        YLeaf total_allocated_entries; //type: uint32

}; // HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdLi


class HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdPbr : public Entity
{
    public:
        AppIdPbr();
        ~AppIdPbr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf num_vmr_ids; //type: uint32
        YLeaf total_used_entries; //type: uint32
        YLeaf total_allocated_entries; //type: uint32

}; // HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdPbr


class HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::ApplicationEdplEntry : public Entity
{
    public:
        ApplicationEdplEntry();
        ~ApplicationEdplEntry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf num_vmr_ids; //type: uint32
        YLeaf total_used_entries; //type: uint32
        YLeaf total_allocated_entries; //type: uint32

}; // HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::ApplicationEdplEntry


class HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8 : public Entity
{
    public:
        TcamLtOds8();
        ~TcamLtOds8();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max_entries; //type: uint32
        YLeaf free_entries; //type: uint32
        class AppIdIfib; //type: HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdIfib
        class AppIdQos; //type: HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdQos
        class AppIdAcl; //type: HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdAcl
        class AppIdAfmon; //type: HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdAfmon
        class AppIdLi; //type: HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdLi
        class AppIdPbr; //type: HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdPbr
        class ApplicationEdplEntry; //type: HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::ApplicationEdplEntry

        std::shared_ptr<Cisco_IOS_XR_asr9k_np_oper::HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdAcl> app_id_acl;
        std::shared_ptr<Cisco_IOS_XR_asr9k_np_oper::HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdAfmon> app_id_afmon;
        std::shared_ptr<Cisco_IOS_XR_asr9k_np_oper::HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdIfib> app_id_ifib;
        std::shared_ptr<Cisco_IOS_XR_asr9k_np_oper::HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdLi> app_id_li;
        std::shared_ptr<Cisco_IOS_XR_asr9k_np_oper::HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdPbr> app_id_pbr;
        std::shared_ptr<Cisco_IOS_XR_asr9k_np_oper::HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdQos> app_id_qos;
        std::shared_ptr<Cisco_IOS_XR_asr9k_np_oper::HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::ApplicationEdplEntry> application_edpl_entry;
        
}; // HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8


class HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdIfib : public Entity
{
    public:
        AppIdIfib();
        ~AppIdIfib();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf num_vmr_ids; //type: uint32
        YLeaf total_used_entries; //type: uint32
        YLeaf total_allocated_entries; //type: uint32

}; // HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdIfib


class HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdQos : public Entity
{
    public:
        AppIdQos();
        ~AppIdQos();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf num_vmr_ids; //type: uint32
        YLeaf total_used_entries; //type: uint32
        YLeaf total_allocated_entries; //type: uint32

}; // HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdQos


class HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdAcl : public Entity
{
    public:
        AppIdAcl();
        ~AppIdAcl();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf num_vmr_ids; //type: uint32
        YLeaf total_used_entries; //type: uint32
        YLeaf total_allocated_entries; //type: uint32

}; // HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdAcl


class HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdAfmon : public Entity
{
    public:
        AppIdAfmon();
        ~AppIdAfmon();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf num_vmr_ids; //type: uint32
        YLeaf total_used_entries; //type: uint32
        YLeaf total_allocated_entries; //type: uint32

}; // HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdAfmon


class HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdLi : public Entity
{
    public:
        AppIdLi();
        ~AppIdLi();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf num_vmr_ids; //type: uint32
        YLeaf total_used_entries; //type: uint32
        YLeaf total_allocated_entries; //type: uint32

}; // HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdLi


class HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdPbr : public Entity
{
    public:
        AppIdPbr();
        ~AppIdPbr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf num_vmr_ids; //type: uint32
        YLeaf total_used_entries; //type: uint32
        YLeaf total_allocated_entries; //type: uint32

}; // HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdPbr


class HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::ApplicationEdplEntry : public Entity
{
    public:
        ApplicationEdplEntry();
        ~ApplicationEdplEntry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf num_vmr_ids; //type: uint32
        YLeaf total_used_entries; //type: uint32
        YLeaf total_allocated_entries; //type: uint32

}; // HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::ApplicationEdplEntry


class HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtL2 : public Entity
{
    public:
        TcamLtL2();
        ~TcamLtL2();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf partition_id; //type: uint32
        YLeaf valid_entries; //type: uint32
        YLeaf free_entries; //type: uint32

}; // HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtL2


class HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo : public Entity
{
    public:
        TcamInfo();
        ~TcamInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class TcamLtOds2; //type: HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2
        class TcamLtOds8; //type: HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8
        class TcamLtL2; //type: HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtL2

        std::vector<std::shared_ptr<Cisco_IOS_XR_asr9k_np_oper::HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtL2> > tcam_lt_l2;
        std::shared_ptr<Cisco_IOS_XR_asr9k_np_oper::HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2> tcam_lt_ods2;
        std::shared_ptr<Cisco_IOS_XR_asr9k_np_oper::HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8> tcam_lt_ods8;
        
}; // HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo


class HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2 : public Entity
{
    public:
        TcamLtOds2();
        ~TcamLtOds2();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf free_entries; //type: uint32
        YLeaf reserved_entries; //type: uint32
        class AclCommon; //type: HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AclCommon
        class AppIdIfib; //type: HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdIfib
        class AppIdQos; //type: HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdQos
        class AppIdAcl; //type: HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdAcl
        class AppIdAfmon; //type: HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdAfmon
        class AppIdLi; //type: HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdLi
        class AppIdPbr; //type: HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdPbr
        class AppIdEdpl; //type: HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdEdpl

        std::shared_ptr<Cisco_IOS_XR_asr9k_np_oper::HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AclCommon> acl_common;
        std::shared_ptr<Cisco_IOS_XR_asr9k_np_oper::HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdAcl> app_id_acl;
        std::shared_ptr<Cisco_IOS_XR_asr9k_np_oper::HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdAfmon> app_id_afmon;
        std::shared_ptr<Cisco_IOS_XR_asr9k_np_oper::HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdEdpl> app_id_edpl;
        std::shared_ptr<Cisco_IOS_XR_asr9k_np_oper::HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdIfib> app_id_ifib;
        std::shared_ptr<Cisco_IOS_XR_asr9k_np_oper::HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdLi> app_id_li;
        std::shared_ptr<Cisco_IOS_XR_asr9k_np_oper::HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdPbr> app_id_pbr;
        std::shared_ptr<Cisco_IOS_XR_asr9k_np_oper::HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdQos> app_id_qos;
        
}; // HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2


class HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AclCommon : public Entity
{
    public:
        AclCommon();
        ~AclCommon();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf free_entries; //type: uint32
        YLeaf allocated_entries; //type: uint32

}; // HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AclCommon


class HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdIfib : public Entity
{
    public:
        AppIdIfib();
        ~AppIdIfib();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf num_vmr_ids; //type: uint32
        YLeaf num_active_entries; //type: uint32
        YLeaf num_allocated_entries; //type: uint32

}; // HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdIfib


class HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdQos : public Entity
{
    public:
        AppIdQos();
        ~AppIdQos();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf num_vmr_ids; //type: uint32
        YLeaf num_active_entries; //type: uint32
        YLeaf num_allocated_entries; //type: uint32

}; // HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdQos


class HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdAcl : public Entity
{
    public:
        AppIdAcl();
        ~AppIdAcl();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf num_vmr_ids; //type: uint32
        YLeaf num_active_entries; //type: uint32
        YLeaf num_allocated_entries; //type: uint32

}; // HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdAcl


class HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdAfmon : public Entity
{
    public:
        AppIdAfmon();
        ~AppIdAfmon();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf num_vmr_ids; //type: uint32
        YLeaf num_active_entries; //type: uint32
        YLeaf num_allocated_entries; //type: uint32

}; // HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdAfmon


class HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdLi : public Entity
{
    public:
        AppIdLi();
        ~AppIdLi();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf num_vmr_ids; //type: uint32
        YLeaf num_active_entries; //type: uint32
        YLeaf num_allocated_entries; //type: uint32

}; // HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdLi


class HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdPbr : public Entity
{
    public:
        AppIdPbr();
        ~AppIdPbr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf num_vmr_ids; //type: uint32
        YLeaf num_active_entries; //type: uint32
        YLeaf num_allocated_entries; //type: uint32

}; // HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdPbr


class HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdEdpl : public Entity
{
    public:
        AppIdEdpl();
        ~AppIdEdpl();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf num_vmr_ids; //type: uint32
        YLeaf num_active_entries; //type: uint32
        YLeaf num_allocated_entries; //type: uint32

}; // HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdEdpl


class HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8 : public Entity
{
    public:
        TcamLtOds8();
        ~TcamLtOds8();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf free_entries; //type: uint32
        YLeaf reserved_entries; //type: uint32
        class AclCommon; //type: HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AclCommon
        class AppIdIfib; //type: HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdIfib
        class AppIdQos; //type: HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdQos
        class AppIdAcl; //type: HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdAcl
        class AppIdAfmon; //type: HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdAfmon
        class AppIdLi; //type: HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdLi
        class AppIdPbr; //type: HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdPbr
        class AppIdEdpl; //type: HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdEdpl

        std::shared_ptr<Cisco_IOS_XR_asr9k_np_oper::HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AclCommon> acl_common;
        std::shared_ptr<Cisco_IOS_XR_asr9k_np_oper::HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdAcl> app_id_acl;
        std::shared_ptr<Cisco_IOS_XR_asr9k_np_oper::HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdAfmon> app_id_afmon;
        std::shared_ptr<Cisco_IOS_XR_asr9k_np_oper::HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdEdpl> app_id_edpl;
        std::shared_ptr<Cisco_IOS_XR_asr9k_np_oper::HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdIfib> app_id_ifib;
        std::shared_ptr<Cisco_IOS_XR_asr9k_np_oper::HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdLi> app_id_li;
        std::shared_ptr<Cisco_IOS_XR_asr9k_np_oper::HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdPbr> app_id_pbr;
        std::shared_ptr<Cisco_IOS_XR_asr9k_np_oper::HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdQos> app_id_qos;
        
}; // HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8


class HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AclCommon : public Entity
{
    public:
        AclCommon();
        ~AclCommon();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf free_entries; //type: uint32
        YLeaf allocated_entries; //type: uint32

}; // HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AclCommon


class HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdIfib : public Entity
{
    public:
        AppIdIfib();
        ~AppIdIfib();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf num_vmr_ids; //type: uint32
        YLeaf num_active_entries; //type: uint32
        YLeaf num_allocated_entries; //type: uint32

}; // HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdIfib


class HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdQos : public Entity
{
    public:
        AppIdQos();
        ~AppIdQos();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf num_vmr_ids; //type: uint32
        YLeaf num_active_entries; //type: uint32
        YLeaf num_allocated_entries; //type: uint32

}; // HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdQos


class HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdAcl : public Entity
{
    public:
        AppIdAcl();
        ~AppIdAcl();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf num_vmr_ids; //type: uint32
        YLeaf num_active_entries; //type: uint32
        YLeaf num_allocated_entries; //type: uint32

}; // HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdAcl


class HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdAfmon : public Entity
{
    public:
        AppIdAfmon();
        ~AppIdAfmon();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf num_vmr_ids; //type: uint32
        YLeaf num_active_entries; //type: uint32
        YLeaf num_allocated_entries; //type: uint32

}; // HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdAfmon


class HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdLi : public Entity
{
    public:
        AppIdLi();
        ~AppIdLi();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf num_vmr_ids; //type: uint32
        YLeaf num_active_entries; //type: uint32
        YLeaf num_allocated_entries; //type: uint32

}; // HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdLi


class HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdPbr : public Entity
{
    public:
        AppIdPbr();
        ~AppIdPbr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf num_vmr_ids; //type: uint32
        YLeaf num_active_entries; //type: uint32
        YLeaf num_allocated_entries; //type: uint32

}; // HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdPbr


class HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdEdpl : public Entity
{
    public:
        AppIdEdpl();
        ~AppIdEdpl();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf num_vmr_ids; //type: uint32
        YLeaf num_active_entries; //type: uint32
        YLeaf num_allocated_entries; //type: uint32

}; // HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdEdpl


class HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtL2 : public Entity
{
    public:
        TcamLtL2();
        ~TcamLtL2();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf partition_id; //type: uint32
        YLeaf priority; //type: uint32
        YLeaf valid_entries; //type: uint32
        YLeaf free_entries; //type: uint32

}; // HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtL2


class HardwareModuleNp::Nodes::Node::Nps::Np::Counters : public Entity
{
    public:
        Counters();
        ~Counters();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class NpCounter; //type: HardwareModuleNp::Nodes::Node::Nps::Np::Counters::NpCounter

        std::vector<std::shared_ptr<Cisco_IOS_XR_asr9k_np_oper::HardwareModuleNp::Nodes::Node::Nps::Np::Counters::NpCounter> > np_counter;
        
}; // HardwareModuleNp::Nodes::Node::Nps::Np::Counters


class HardwareModuleNp::Nodes::Node::Nps::Np::Counters::NpCounter : public Entity
{
    public:
        NpCounter();
        ~NpCounter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf counter_index; //type: uint32
        YLeaf counter_value; //type: uint64
        YLeaf rate; //type: uint32
        YLeaf counter_type; //type: string
        YLeaf counter_name; //type: string

}; // HardwareModuleNp::Nodes::Node::Nps::Np::Counters::NpCounter


class HardwareModuleNp::Nodes::Node::Nps::Np::FastDrop : public Entity
{
    public:
        FastDrop();
        ~FastDrop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class NpFastDrop; //type: HardwareModuleNp::Nodes::Node::Nps::Np::FastDrop::NpFastDrop

        std::vector<std::shared_ptr<Cisco_IOS_XR_asr9k_np_oper::HardwareModuleNp::Nodes::Node::Nps::Np::FastDrop::NpFastDrop> > np_fast_drop;
        
}; // HardwareModuleNp::Nodes::Node::Nps::Np::FastDrop


class HardwareModuleNp::Nodes::Node::Nps::Np::FastDrop::NpFastDrop : public Entity
{
    public:
        NpFastDrop();
        ~NpFastDrop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf counter_value; //type: uint64

}; // HardwareModuleNp::Nodes::Node::Nps::Np::FastDrop::NpFastDrop


}
}

#endif /* _CISCO_IOS_XR_ASR9K_NP_OPER_ */

