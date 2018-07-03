#ifndef _CISCO_IOS_XR_INFRA_FTI_OPER_
#define _CISCO_IOS_XR_INFRA_FTI_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_infra_fti_oper {

class DciFabricInterconnect : public ydk::Entity
{
    public:
        DciFabricInterconnect();
        ~DciFabricInterconnect();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::shared_ptr<ydk::Entity> clone_ptr() const override;
        ydk::augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;
        std::map<std::pair<std::string, std::string>, std::string> get_namespace_identity_lookup() const override;

        class OpflexSessionInfos; //type: DciFabricInterconnect::OpflexSessionInfos
        class FabricVrfDbs; //type: DciFabricInterconnect::FabricVrfDbs
        class DciVrfs; //type: DciFabricInterconnect::DciVrfs
        class Acp; //type: DciFabricInterconnect::Acp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_fti_oper::DciFabricInterconnect::OpflexSessionInfos> opflex_session_infos;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_fti_oper::DciFabricInterconnect::FabricVrfDbs> fabric_vrf_dbs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_fti_oper::DciFabricInterconnect::DciVrfs> dci_vrfs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_fti_oper::DciFabricInterconnect::Acp> acp;
        
}; // DciFabricInterconnect


class DciFabricInterconnect::OpflexSessionInfos : public ydk::Entity
{
    public:
        OpflexSessionInfos();
        ~OpflexSessionInfos();

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

        class OpflexSessionInfo; //type: DciFabricInterconnect::OpflexSessionInfos::OpflexSessionInfo

        ydk::YList opflex_session_info;
        
}; // DciFabricInterconnect::OpflexSessionInfos


class DciFabricInterconnect::OpflexSessionInfos::OpflexSessionInfo : public ydk::Entity
{
    public:
        OpflexSessionInfo();
        ~OpflexSessionInfo();

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

        ydk::YLeaf id1; //type: uint32
        ydk::YLeaf fabric_id; //type: uint32
        ydk::YLeaf config_state; //type: FtiBagFabricConfigState
        ydk::YLeaf last_upd_ts_config; //type: uint64
        ydk::YLeaf fabric_state; //type: FtiBagFabricState
        ydk::YLeaf last_upd_ts_fabric; //type: uint64
        class PeerInfo; //type: DciFabricInterconnect::OpflexSessionInfos::OpflexSessionInfo::PeerInfo

        ydk::YList peer_info;
        
}; // DciFabricInterconnect::OpflexSessionInfos::OpflexSessionInfo


class DciFabricInterconnect::OpflexSessionInfos::OpflexSessionInfo::PeerInfo : public ydk::Entity
{
    public:
        PeerInfo();
        ~PeerInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf peer_ip; //type: string
        ydk::YLeaf peer_port; //type: uint32
        ydk::YLeaf peer_state; //type: FtiBagFabricPeerState
        ydk::YLeaf last_upd_ts_peer_status; //type: uint64

}; // DciFabricInterconnect::OpflexSessionInfos::OpflexSessionInfo::PeerInfo


class DciFabricInterconnect::FabricVrfDbs : public ydk::Entity
{
    public:
        FabricVrfDbs();
        ~FabricVrfDbs();

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

        class FabricVrfDb; //type: DciFabricInterconnect::FabricVrfDbs::FabricVrfDb

        ydk::YList fabric_vrf_db;
        
}; // DciFabricInterconnect::FabricVrfDbs


class DciFabricInterconnect::FabricVrfDbs::FabricVrfDb : public ydk::Entity
{
    public:
        FabricVrfDb();
        ~FabricVrfDb();

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

        ydk::YLeaf id1; //type: uint32
        ydk::YLeaf fabric_id; //type: uint32
        class FabricVrf; //type: DciFabricInterconnect::FabricVrfDbs::FabricVrfDb::FabricVrf

        ydk::YList fabric_vrf;
        
}; // DciFabricInterconnect::FabricVrfDbs::FabricVrfDb


class DciFabricInterconnect::FabricVrfDbs::FabricVrfDb::FabricVrf : public ydk::Entity
{
    public:
        FabricVrf();
        ~FabricVrf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fabric_vrf; //type: string
        ydk::YLeaf dci_vrf; //type: string
        ydk::YLeaf fabric_vrf_flags; //type: string
        class V4ImportRt; //type: DciFabricInterconnect::FabricVrfDbs::FabricVrfDb::FabricVrf::V4ImportRt
        class V4ExportRt; //type: DciFabricInterconnect::FabricVrfDbs::FabricVrfDb::FabricVrf::V4ExportRt
        class V6ImportRt; //type: DciFabricInterconnect::FabricVrfDbs::FabricVrfDb::FabricVrf::V6ImportRt
        class V6ExportRt; //type: DciFabricInterconnect::FabricVrfDbs::FabricVrfDb::FabricVrf::V6ExportRt

        ydk::YList v4_import_rt;
        ydk::YList v4_export_rt;
        ydk::YList v6_import_rt;
        ydk::YList v6_export_rt;
        
}; // DciFabricInterconnect::FabricVrfDbs::FabricVrfDb::FabricVrf


class DciFabricInterconnect::FabricVrfDbs::FabricVrfDb::FabricVrf::V4ImportRt : public ydk::Entity
{
    public:
        V4ImportRt();
        ~V4ImportRt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rt_value; //type: string
        ydk::YLeaf rt_flags; //type: string

}; // DciFabricInterconnect::FabricVrfDbs::FabricVrfDb::FabricVrf::V4ImportRt


class DciFabricInterconnect::FabricVrfDbs::FabricVrfDb::FabricVrf::V4ExportRt : public ydk::Entity
{
    public:
        V4ExportRt();
        ~V4ExportRt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rt_value; //type: string
        ydk::YLeaf rt_flags; //type: string

}; // DciFabricInterconnect::FabricVrfDbs::FabricVrfDb::FabricVrf::V4ExportRt


class DciFabricInterconnect::FabricVrfDbs::FabricVrfDb::FabricVrf::V6ImportRt : public ydk::Entity
{
    public:
        V6ImportRt();
        ~V6ImportRt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rt_value; //type: string
        ydk::YLeaf rt_flags; //type: string

}; // DciFabricInterconnect::FabricVrfDbs::FabricVrfDb::FabricVrf::V6ImportRt


class DciFabricInterconnect::FabricVrfDbs::FabricVrfDb::FabricVrf::V6ExportRt : public ydk::Entity
{
    public:
        V6ExportRt();
        ~V6ExportRt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rt_value; //type: string
        ydk::YLeaf rt_flags; //type: string

}; // DciFabricInterconnect::FabricVrfDbs::FabricVrfDb::FabricVrf::V6ExportRt


class DciFabricInterconnect::DciVrfs : public ydk::Entity
{
    public:
        DciVrfs();
        ~DciVrfs();

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

        class DciVrf; //type: DciFabricInterconnect::DciVrfs::DciVrf

        ydk::YList dci_vrf;
        
}; // DciFabricInterconnect::DciVrfs


class DciFabricInterconnect::DciVrfs::DciVrf : public ydk::Entity
{
    public:
        DciVrf();
        ~DciVrf();

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

        ydk::YLeaf vrf1; //type: string
        ydk::YLeaf dci_vrf; //type: string
        ydk::YLeaf num_fabric_vrf; //type: uint32
        ydk::YLeaf faric_vrfs_id_name; //type: string
        ydk::YLeaf vni_id; //type: uint32
        ydk::YLeaf bd_name; //type: string
        ydk::YLeaf bvi_id; //type: uint32
        ydk::YLeaf bvi_ip; //type: string
        ydk::YLeaf bvi_ip_v6; //type: boolean
        ydk::YLeaf dci_vrf_flags; //type: string
        class V4ImportRt; //type: DciFabricInterconnect::DciVrfs::DciVrf::V4ImportRt
        class V4ExportRt; //type: DciFabricInterconnect::DciVrfs::DciVrf::V4ExportRt
        class V6ImportRt; //type: DciFabricInterconnect::DciVrfs::DciVrf::V6ImportRt
        class V6ExportRt; //type: DciFabricInterconnect::DciVrfs::DciVrf::V6ExportRt

        ydk::YList v4_import_rt;
        ydk::YList v4_export_rt;
        ydk::YList v6_import_rt;
        ydk::YList v6_export_rt;
        
}; // DciFabricInterconnect::DciVrfs::DciVrf


class DciFabricInterconnect::DciVrfs::DciVrf::V4ImportRt : public ydk::Entity
{
    public:
        V4ImportRt();
        ~V4ImportRt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rt_value; //type: string
        ydk::YLeaf rt_flags; //type: string

}; // DciFabricInterconnect::DciVrfs::DciVrf::V4ImportRt


class DciFabricInterconnect::DciVrfs::DciVrf::V4ExportRt : public ydk::Entity
{
    public:
        V4ExportRt();
        ~V4ExportRt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rt_value; //type: string
        ydk::YLeaf rt_flags; //type: string

}; // DciFabricInterconnect::DciVrfs::DciVrf::V4ExportRt


class DciFabricInterconnect::DciVrfs::DciVrf::V6ImportRt : public ydk::Entity
{
    public:
        V6ImportRt();
        ~V6ImportRt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rt_value; //type: string
        ydk::YLeaf rt_flags; //type: string

}; // DciFabricInterconnect::DciVrfs::DciVrf::V6ImportRt


class DciFabricInterconnect::DciVrfs::DciVrf::V6ExportRt : public ydk::Entity
{
    public:
        V6ExportRt();
        ~V6ExportRt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rt_value; //type: string
        ydk::YLeaf rt_flags; //type: string

}; // DciFabricInterconnect::DciVrfs::DciVrf::V6ExportRt


class DciFabricInterconnect::Acp : public ydk::Entity
{
    public:
        Acp();
        ~Acp();

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

        ydk::YLeaf vni_min; //type: uint32
        ydk::YLeaf vni_max; //type: uint32
        ydk::YLeaf vni_bits; //type: uint32
        ydk::YLeaf bvi_min; //type: uint32
        ydk::YLeaf bvi_max; //type: uint32
        ydk::YLeaf bvi_bits; //type: uint32
        ydk::YLeaf bd_min; //type: uint32
        ydk::YLeaf bd_max; //type: uint32
        ydk::YLeaf bd_bits; //type: uint32
        ydk::YLeaf vniused_range; //type: string
        ydk::YLeaf bviused_range; //type: string
        ydk::YLeaf bdused_range; //type: string

}; // DciFabricInterconnect::Acp

class FtiBagFabricState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf fti_bag_fabric_state_active_down;
        static const ydk::Enum::YLeaf fti_bag_fabric_state_active_degraded;
        static const ydk::Enum::YLeaf fti_bag_fabric_state_active_healthy;
        static const ydk::Enum::YLeaf fti_bag_fabric_state_inactive;

};

class FtiBagFabricConfigState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf fti_bag_config_complete;
        static const ydk::Enum::YLeaf fti_bag_config_incomplete;

};

class FtiBagFabricPeerState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf fti_bag_fabric_peer_status_disconnected;
        static const ydk::Enum::YLeaf fti_bag_fabric_peer_status_connecting;
        static const ydk::Enum::YLeaf fti_bag_fabric_peer_status_connected;
        static const ydk::Enum::YLeaf fti_bag_fabric_peer_status_ready;
        static const ydk::Enum::YLeaf fti_bag_fabric_peer_status_closing;

};


}
}

#endif /* _CISCO_IOS_XR_INFRA_FTI_OPER_ */

