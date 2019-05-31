#ifndef _CISCO_IOS_XR_INFRA_XTC_OPER_1_
#define _CISCO_IOS_XR_INFRA_XTC_OPER_1_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_infra_xtc_oper_0.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_infra_xtc_oper {


class Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::Hops : public ydk::Entity
{
    public:
        Hops();
        ~Hops();

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

        ydk::YLeaf sid_type; //type: PceSrSid
        ydk::YLeaf mpls_label; //type: uint32
        class LocalAddr; //type: Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::Hops::LocalAddr
        class RemoteAddr; //type: Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::Hops::RemoteAddr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::Hops::LocalAddr> local_addr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::Hops::RemoteAddr> remote_addr;
        
}; // Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::Hops


class Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::Hops::LocalAddr : public ydk::Entity
{
    public:
        LocalAddr();
        ~LocalAddr();

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

        ydk::YLeaf af_name; //type: PceAfId
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::Hops::LocalAddr


class Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::Hops::RemoteAddr : public ydk::Entity
{
    public:
        RemoteAddr();
        ~RemoteAddr();

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

        ydk::YLeaf af_name; //type: PceAfId
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::Hops::RemoteAddr


class Pce::VerificationEvents : public ydk::Entity
{
    public:
        VerificationEvents();
        ~VerificationEvents();

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

        class VerificationEvent; //type: Pce::VerificationEvents::VerificationEvent

        ydk::YList verification_event;
        
}; // Pce::VerificationEvents


class Pce::VerificationEvents::VerificationEvent : public ydk::Entity
{
    public:
        VerificationEvent();
        ~VerificationEvent();

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

        ydk::YLeaf event_idx; //type: uint32
        ydk::YLeaf event_id; //type: uint32
        ydk::YLeaf event_message; //type: string
        ydk::YLeaf time_stamp; //type: uint32

}; // Pce::VerificationEvents::VerificationEvent


class Pce::PeerSummaries : public ydk::Entity
{
    public:
        PeerSummaries();
        ~PeerSummaries();

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

        class PeerSummary; //type: Pce::PeerSummaries::PeerSummary

        ydk::YList peer_summary;
        
}; // Pce::PeerSummaries


class Pce::PeerSummaries::PeerSummary : public ydk::Entity
{
    public:
        PeerSummary();
        ~PeerSummary();

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

        ydk::YLeaf af; //type: PceAddressFamily
        class PcepPeers; //type: Pce::PeerSummaries::PeerSummary::PcepPeers

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::PeerSummaries::PeerSummary::PcepPeers> pcep_peers;
        
}; // Pce::PeerSummaries::PeerSummary


class Pce::PeerSummaries::PeerSummary::PcepPeers : public ydk::Entity
{
    public:
        PcepPeers();
        ~PcepPeers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf peer_count_up; //type: uint32
        ydk::YLeaf peer_count_down; //type: uint32
        ydk::YLeaf peer_count_all; //type: uint32

}; // Pce::PeerSummaries::PeerSummary::PcepPeers


class Pce::AssociationInfos : public ydk::Entity
{
    public:
        AssociationInfos();
        ~AssociationInfos();

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

        class AssociationInfo; //type: Pce::AssociationInfos::AssociationInfo

        ydk::YList association_info;
        
}; // Pce::AssociationInfos


class Pce::AssociationInfos::AssociationInfo : public ydk::Entity
{
    public:
        AssociationInfo();
        ~AssociationInfo();

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

        ydk::YLeaf group_id; //type: uint32
        ydk::YLeaf type; //type: PceAsso
        ydk::YLeaf sub_id; //type: string
        ydk::YLeaf association_type; //type: uint32
        ydk::YLeaf association_id; //type: uint32
        ydk::YLeaf strict; //type: boolean
        ydk::YLeaf status; //type: uint32
        ydk::YLeaf headends_swapped; //type: uint32
        class AssociationSource; //type: Pce::AssociationInfos::AssociationInfo::AssociationSource
        class AssociationLsp; //type: Pce::AssociationInfos::AssociationInfo::AssociationLsp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::AssociationInfos::AssociationInfo::AssociationSource> association_source;
        ydk::YList association_lsp;
        
}; // Pce::AssociationInfos::AssociationInfo


class Pce::AssociationInfos::AssociationInfo::AssociationSource : public ydk::Entity
{
    public:
        AssociationSource();
        ~AssociationSource();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PceAfId
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Pce::AssociationInfos::AssociationInfo::AssociationSource


class Pce::AssociationInfos::AssociationInfo::AssociationLsp : public ydk::Entity
{
    public:
        AssociationLsp();
        ~AssociationLsp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel_id; //type: uint32
        ydk::YLeaf lspid; //type: uint32
        ydk::YLeaf tunnel_name; //type: string
        ydk::YLeaf pce_based; //type: boolean
        ydk::YLeaf plsp_id; //type: uint32
        class PccAddress; //type: Pce::AssociationInfos::AssociationInfo::AssociationLsp::PccAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::AssociationInfos::AssociationInfo::AssociationLsp::PccAddress> pcc_address;
        
}; // Pce::AssociationInfos::AssociationInfo::AssociationLsp


class Pce::AssociationInfos::AssociationInfo::AssociationLsp::PccAddress : public ydk::Entity
{
    public:
        PccAddress();
        ~PccAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PceAfId
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Pce::AssociationInfos::AssociationInfo::AssociationLsp::PccAddress


class Pce::Paths : public ydk::Entity
{
    public:
        Paths();
        ~Paths();

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

        class Path; //type: Pce::Paths::Path

        ydk::YList path;
        
}; // Pce::Paths


class Pce::Paths::Path : public ydk::Entity
{
    public:
        Path();
        ~Path();

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

        ydk::YLeaf af; //type: uint32
        ydk::YLeaf source; //type: string
        ydk::YLeaf destination; //type: string
        ydk::YLeaf cost; //type: uint64
        class SourceXr; //type: Pce::Paths::Path::SourceXr
        class DestinationXr; //type: Pce::Paths::Path::DestinationXr
        class Hops; //type: Pce::Paths::Path::Hops

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::Paths::Path::SourceXr> source_xr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::Paths::Path::DestinationXr> destination_xr;
        ydk::YList hops;
        
}; // Pce::Paths::Path


class Pce::Paths::Path::SourceXr : public ydk::Entity
{
    public:
        SourceXr();
        ~SourceXr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PceAfId
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Pce::Paths::Path::SourceXr


class Pce::Paths::Path::DestinationXr : public ydk::Entity
{
    public:
        DestinationXr();
        ~DestinationXr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PceAfId
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Pce::Paths::Path::DestinationXr


class Pce::Paths::Path::Hops : public ydk::Entity
{
    public:
        Hops();
        ~Hops();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_family; //type: uint8
        ydk::YLeaf ipv4_prefix; //type: string
        ydk::YLeaf ipv6_prefix; //type: string

}; // Pce::Paths::Path::Hops


class Pce::Cspf : public ydk::Entity
{
    public:
        Cspf();
        ~Cspf();

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

        class CspfPaths; //type: Pce::Cspf::CspfPaths

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::Cspf::CspfPaths> cspf_paths;
        
}; // Pce::Cspf


class Pce::Cspf::CspfPaths : public ydk::Entity
{
    public:
        CspfPaths();
        ~CspfPaths();

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

        class CspfPath; //type: Pce::Cspf::CspfPaths::CspfPath

        ydk::YList cspf_path;
        
}; // Pce::Cspf::CspfPaths


class Pce::Cspf::CspfPaths::CspfPath : public ydk::Entity
{
    public:
        CspfPath();
        ~CspfPath();

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

        ydk::YLeaf af; //type: uint32
        ydk::YLeaf source1; //type: string
        ydk::YLeaf destination1; //type: string
        ydk::YLeaf metric_type; //type: uint32
        ydk::YLeaf source2; //type: string
        ydk::YLeaf destination2; //type: string
        ydk::YLeaf disjoint_level; //type: uint32
        ydk::YLeaf disjoint_strict; //type: uint32
        ydk::YLeaf shortest_path; //type: uint32
        ydk::YLeaf headends_swapped; //type: PceHeadendSwap
        ydk::YLeaf cspf_result; //type: PceCspfRc
        ydk::YLeaf iterations_done; //type: uint32
        class OutputPath; //type: Pce::Cspf::CspfPaths::CspfPath::OutputPath

        ydk::YList output_path;
        
}; // Pce::Cspf::CspfPaths::CspfPath


class Pce::Cspf::CspfPaths::CspfPath::OutputPath : public ydk::Entity
{
    public:
        OutputPath();
        ~OutputPath();

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

        ydk::YLeaf cost; //type: uint64
        class SourceXr; //type: Pce::Cspf::CspfPaths::CspfPath::OutputPath::SourceXr
        class DestinationXr; //type: Pce::Cspf::CspfPaths::CspfPath::OutputPath::DestinationXr
        class Hops; //type: Pce::Cspf::CspfPaths::CspfPath::OutputPath::Hops

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::Cspf::CspfPaths::CspfPath::OutputPath::SourceXr> source_xr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::Cspf::CspfPaths::CspfPath::OutputPath::DestinationXr> destination_xr;
        ydk::YList hops;
        
}; // Pce::Cspf::CspfPaths::CspfPath::OutputPath


class Pce::Cspf::CspfPaths::CspfPath::OutputPath::SourceXr : public ydk::Entity
{
    public:
        SourceXr();
        ~SourceXr();

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

        ydk::YLeaf af_name; //type: PceAfId
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Pce::Cspf::CspfPaths::CspfPath::OutputPath::SourceXr


class Pce::Cspf::CspfPaths::CspfPath::OutputPath::DestinationXr : public ydk::Entity
{
    public:
        DestinationXr();
        ~DestinationXr();

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

        ydk::YLeaf af_name; //type: PceAfId
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Pce::Cspf::CspfPaths::CspfPath::OutputPath::DestinationXr


class Pce::Cspf::CspfPaths::CspfPath::OutputPath::Hops : public ydk::Entity
{
    public:
        Hops();
        ~Hops();

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

        ydk::YLeaf address_family; //type: uint8
        ydk::YLeaf ipv4_prefix; //type: string
        ydk::YLeaf ipv6_prefix; //type: string

}; // Pce::Cspf::CspfPaths::CspfPath::OutputPath::Hops


class Pce::TunnelInfos : public ydk::Entity
{
    public:
        TunnelInfos();
        ~TunnelInfos();

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

        class TunnelInfo; //type: Pce::TunnelInfos::TunnelInfo

        ydk::YList tunnel_info;
        
}; // Pce::TunnelInfos


class Pce::TunnelInfos::TunnelInfo : public ydk::Entity
{
    public:
        TunnelInfo();
        ~TunnelInfo();

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

        ydk::YLeaf peer_address; //type: string
        ydk::YLeaf plsp_id; //type: uint32
        ydk::YLeaf tunnel_name; //type: string
        ydk::YLeaf tunnel_name_xr; //type: string
        class PccAddress; //type: Pce::TunnelInfos::TunnelInfo::PccAddress
        class BriefLspInformation; //type: Pce::TunnelInfos::TunnelInfo::BriefLspInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TunnelInfos::TunnelInfo::PccAddress> pcc_address;
        ydk::YList brief_lsp_information;
        
}; // Pce::TunnelInfos::TunnelInfo


class Pce::TunnelInfos::TunnelInfo::PccAddress : public ydk::Entity
{
    public:
        PccAddress();
        ~PccAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PceAfId
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Pce::TunnelInfos::TunnelInfo::PccAddress


class Pce::TunnelInfos::TunnelInfo::BriefLspInformation : public ydk::Entity
{
    public:
        BriefLspInformation();
        ~BriefLspInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel_id; //type: uint32
        ydk::YLeaf lspid; //type: uint32
        ydk::YLeaf binding_sid; //type: uint32
        ydk::YLeaf lsp_setup_type; //type: LspSetup
        ydk::YLeaf operational_state; //type: PcepLspState
        ydk::YLeaf administrative_state; //type: LspState
        ydk::YLeaf msd; //type: uint32
        ydk::YLeaf absolute_margin; //type: uint32
        ydk::YLeaf relative_margin; //type: uint32
        class SourceAddress; //type: Pce::TunnelInfos::TunnelInfo::BriefLspInformation::SourceAddress
        class DestinationAddress; //type: Pce::TunnelInfos::TunnelInfo::BriefLspInformation::DestinationAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TunnelInfos::TunnelInfo::BriefLspInformation::SourceAddress> source_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TunnelInfos::TunnelInfo::BriefLspInformation::DestinationAddress> destination_address;
        
}; // Pce::TunnelInfos::TunnelInfo::BriefLspInformation


class Pce::TunnelInfos::TunnelInfo::BriefLspInformation::SourceAddress : public ydk::Entity
{
    public:
        SourceAddress();
        ~SourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PceAfId
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Pce::TunnelInfos::TunnelInfo::BriefLspInformation::SourceAddress


class Pce::TunnelInfos::TunnelInfo::BriefLspInformation::DestinationAddress : public ydk::Entity
{
    public:
        DestinationAddress();
        ~DestinationAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PceAfId
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Pce::TunnelInfos::TunnelInfo::BriefLspInformation::DestinationAddress


class Pce::PeerDetailInfos : public ydk::Entity
{
    public:
        PeerDetailInfos();
        ~PeerDetailInfos();

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

        class PeerDetailInfo; //type: Pce::PeerDetailInfos::PeerDetailInfo

        ydk::YList peer_detail_info;
        
}; // Pce::PeerDetailInfos


class Pce::PeerDetailInfos::PeerDetailInfo : public ydk::Entity
{
    public:
        PeerDetailInfo();
        ~PeerDetailInfo();

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

        ydk::YLeaf peer_address; //type: string
        ydk::YLeaf peer_protocol; //type: PceProto
        ydk::YLeaf max_sid_depth; //type: uint32
        class PeerAddressXr; //type: Pce::PeerDetailInfos::PeerDetailInfo::PeerAddressXr
        class DetailPcepInformation; //type: Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::PeerDetailInfos::PeerDetailInfo::PeerAddressXr> peer_address_xr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation> detail_pcep_information;
        
}; // Pce::PeerDetailInfos::PeerDetailInfo


class Pce::PeerDetailInfos::PeerDetailInfo::PeerAddressXr : public ydk::Entity
{
    public:
        PeerAddressXr();
        ~PeerAddressXr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PceAfId
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Pce::PeerDetailInfos::PeerDetailInfo::PeerAddressXr


class Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation : public ydk::Entity
{
    public:
        DetailPcepInformation();
        ~DetailPcepInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf error; //type: string
        ydk::YLeaf speaker_id; //type: string
        ydk::YLeaf pcep_up_time; //type: uint32
        ydk::YLeaf keepalives; //type: uint32
        ydk::YLeaf md5_enabled; //type: boolean
        ydk::YLeaf keychain_enabled; //type: boolean
        ydk::YLeaf negotiated_local_keepalive; //type: uint32
        ydk::YLeaf negotiated_remote_keepalive; //type: uint32
        ydk::YLeaf negotiated_dead_time; //type: uint32
        ydk::YLeaf pce_request_rx; //type: uint32
        ydk::YLeaf pce_request_tx; //type: uint32
        ydk::YLeaf pce_reply_rx; //type: uint32
        ydk::YLeaf pce_reply_tx; //type: uint32
        ydk::YLeaf pce_error_rx; //type: uint32
        ydk::YLeaf pce_error_tx; //type: uint32
        ydk::YLeaf pce_open_tx; //type: uint32
        ydk::YLeaf pce_open_rx; //type: uint32
        ydk::YLeaf pce_report_rx; //type: uint32
        ydk::YLeaf pce_report_tx; //type: uint32
        ydk::YLeaf pce_update_rx; //type: uint32
        ydk::YLeaf pce_update_tx; //type: uint32
        ydk::YLeaf pce_initiate_rx; //type: uint32
        ydk::YLeaf pce_initiate_tx; //type: uint32
        ydk::YLeaf pce_keepalive_tx; //type: uint64
        ydk::YLeaf pce_keepalive_rx; //type: uint64
        ydk::YLeaf local_session_id; //type: uint8
        ydk::YLeaf remote_session_id; //type: uint8
        ydk::YLeaf minimum_keepalive_interval; //type: uint8
        ydk::YLeaf maximum_dead_interval; //type: uint8
        ydk::YLeaf max_sid_depth; //type: uint8
        class BriefPcepInformation; //type: Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::BriefPcepInformation
        class LastErrorRx; //type: Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorRx
        class LastErrorTx; //type: Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorTx

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::BriefPcepInformation> brief_pcep_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorRx> last_error_rx;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorTx> last_error_tx;
        
}; // Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation


class Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::BriefPcepInformation : public ydk::Entity
{
    public:
        BriefPcepInformation();
        ~BriefPcepInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pcep_state; //type: PcepState
        ydk::YLeaf stateful; //type: boolean
        ydk::YLeaf capability_update; //type: boolean
        ydk::YLeaf capability_instantiate; //type: boolean
        ydk::YLeaf capability_segment_routing; //type: boolean
        ydk::YLeaf capability_triggered_sync; //type: boolean
        ydk::YLeaf capability_db_version; //type: boolean
        ydk::YLeaf capability_delta_sync; //type: boolean

}; // Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::BriefPcepInformation


class Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorRx : public ydk::Entity
{
    public:
        LastErrorRx();
        ~LastErrorRx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pc_error_type; //type: uint8
        ydk::YLeaf pc_error_value; //type: uint8

}; // Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorRx


class Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorTx : public ydk::Entity
{
    public:
        LastErrorTx();
        ~LastErrorTx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pc_error_type; //type: uint8
        ydk::YLeaf pc_error_value; //type: uint8

}; // Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorTx


class Pce::TopologyNodes : public ydk::Entity
{
    public:
        TopologyNodes();
        ~TopologyNodes();

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

        class TopologyNode; //type: Pce::TopologyNodes::TopologyNode

        ydk::YList topology_node;
        
}; // Pce::TopologyNodes


class Pce::TopologyNodes::TopologyNode : public ydk::Entity
{
    public:
        TopologyNode();
        ~TopologyNode();

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

        ydk::YLeaf node_identifier; //type: uint32
        ydk::YLeaf node_identifier_xr; //type: uint32
        ydk::YLeaf overload; //type: boolean
        class NodeProtocolIdentifier; //type: Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier
        class Prefixe; //type: Pce::TopologyNodes::TopologyNode::Prefixe
        class Ipv4Link; //type: Pce::TopologyNodes::TopologyNode::Ipv4Link
        class Ipv6Link; //type: Pce::TopologyNodes::TopologyNode::Ipv6Link

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier> node_protocol_identifier;
        ydk::YList prefixe;
        ydk::YList ipv4_link;
        ydk::YList ipv6_link;
        
}; // Pce::TopologyNodes::TopologyNode


class Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier : public ydk::Entity
{
    public:
        NodeProtocolIdentifier();
        ~NodeProtocolIdentifier();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_name; //type: string
        ydk::YLeaf ipv4_bgp_router_id_set; //type: boolean
        ydk::YLeaf ipv4_bgp_router_id; //type: string
        ydk::YLeaf ipv4te_router_id_set; //type: boolean
        ydk::YLeaf ipv4te_router_id; //type: string
        class IgpInformation; //type: Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation
        class SrgbInformation; //type: Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation

        ydk::YList igp_information;
        ydk::YList srgb_information;
        
}; // Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier


class Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation : public ydk::Entity
{
    public:
        IgpInformation();
        ~IgpInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf domain_identifier; //type: uint64
        class NodeId; //type: Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId> node_id;
        
}; // Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation


class Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId : public ydk::Entity
{
    public:
        NodeId();
        ~NodeId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf autonomous_system_number; //type: uint32
        ydk::YLeaf ls_identifier; //type: uint32
        class Igp; //type: Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp> igp;
        
}; // Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId


class Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp : public ydk::Entity
{
    public:
        Igp();
        ~Igp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf igp_id; //type: PceIgpInfoId
        class Isis; //type: Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis
        class Ospf; //type: Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf
        class Bgp; //type: Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis> isis;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf> ospf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp> bgp;
        
}; // Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp


class Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis : public ydk::Entity
{
    public:
        Isis();
        ~Isis();

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
        ydk::YLeaf level; //type: uint32

}; // Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis


class Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf : public ydk::Entity
{
    public:
        Ospf();
        ~Ospf();

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
        ydk::YLeaf area; //type: uint32

}; // Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf


class Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp : public ydk::Entity
{
    public:
        Bgp();
        ~Bgp();

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
        ydk::YLeaf confed_asn; //type: uint32

}; // Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp


class Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation : public ydk::Entity
{
    public:
        SrgbInformation();
        ~SrgbInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start; //type: uint32
        ydk::YLeaf size; //type: uint32
        ydk::YLeaf domain_identifier; //type: uint64
        class NodeId; //type: Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId> node_id;
        
}; // Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation


class Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId : public ydk::Entity
{
    public:
        NodeId();
        ~NodeId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf autonomous_system_number; //type: uint32
        ydk::YLeaf ls_identifier; //type: uint32
        class Igp; //type: Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp> igp;
        
}; // Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId


class Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp : public ydk::Entity
{
    public:
        Igp();
        ~Igp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf igp_id; //type: PceIgpInfoId
        class Isis; //type: Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis
        class Ospf; //type: Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf
        class Bgp; //type: Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis> isis;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf> ospf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp> bgp;
        
}; // Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp


class Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis : public ydk::Entity
{
    public:
        Isis();
        ~Isis();

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
        ydk::YLeaf level; //type: uint32

}; // Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis


class Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf : public ydk::Entity
{
    public:
        Ospf();
        ~Ospf();

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
        ydk::YLeaf area; //type: uint32

}; // Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf


class Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp : public ydk::Entity
{
    public:
        Bgp();
        ~Bgp();

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
        ydk::YLeaf confed_asn; //type: uint32

}; // Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp


class Pce::TopologyNodes::TopologyNode::Prefixe : public ydk::Entity
{
    public:
        Prefixe();
        ~Prefixe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf domain_identifier; //type: uint64
        class PfxSid; //type: Pce::TopologyNodes::TopologyNode::Prefixe::PfxSid
        class NodeId; //type: Pce::TopologyNodes::TopologyNode::Prefixe::NodeId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Prefixe::PfxSid> pfx_sid;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Prefixe::NodeId> node_id;
        
}; // Pce::TopologyNodes::TopologyNode::Prefixe


class Pce::TopologyNodes::TopologyNode::Prefixe::PfxSid : public ydk::Entity
{
    public:
        PfxSid();
        ~PfxSid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sid_type; //type: Sid
        ydk::YLeaf mpls_label; //type: uint32
        ydk::YLeaf rflag; //type: boolean
        ydk::YLeaf nflag; //type: boolean
        ydk::YLeaf pflag; //type: boolean
        ydk::YLeaf eflag; //type: boolean
        ydk::YLeaf vflag; //type: boolean
        ydk::YLeaf lflag; //type: boolean
        class SidPrefix; //type: Pce::TopologyNodes::TopologyNode::Prefixe::PfxSid::SidPrefix

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Prefixe::PfxSid::SidPrefix> sid_prefix;
        
}; // Pce::TopologyNodes::TopologyNode::Prefixe::PfxSid


class Pce::TopologyNodes::TopologyNode::Prefixe::PfxSid::SidPrefix : public ydk::Entity
{
    public:
        SidPrefix();
        ~SidPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PceAfId
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Pce::TopologyNodes::TopologyNode::Prefixe::PfxSid::SidPrefix


class Pce::TopologyNodes::TopologyNode::Prefixe::NodeId : public ydk::Entity
{
    public:
        NodeId();
        ~NodeId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf autonomous_system_number; //type: uint32
        ydk::YLeaf ls_identifier; //type: uint32
        class Igp; //type: Pce::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp> igp;
        
}; // Pce::TopologyNodes::TopologyNode::Prefixe::NodeId


class Pce::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp : public ydk::Entity
{
    public:
        Igp();
        ~Igp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf igp_id; //type: PceIgpInfoId
        class Isis; //type: Pce::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::Isis
        class Ospf; //type: Pce::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::Ospf
        class Bgp; //type: Pce::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::Bgp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::Isis> isis;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::Ospf> ospf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::Bgp> bgp;
        
}; // Pce::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp


class Pce::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::Isis : public ydk::Entity
{
    public:
        Isis();
        ~Isis();

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
        ydk::YLeaf level; //type: uint32

}; // Pce::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::Isis


class Pce::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::Ospf : public ydk::Entity
{
    public:
        Ospf();
        ~Ospf();

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
        ydk::YLeaf area; //type: uint32

}; // Pce::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::Ospf


class Pce::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::Bgp : public ydk::Entity
{
    public:
        Bgp();
        ~Bgp();

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
        ydk::YLeaf confed_asn; //type: uint32

}; // Pce::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::Bgp


class Pce::TopologyNodes::TopologyNode::Ipv4Link : public ydk::Entity
{
    public:
        Ipv4Link();
        ~Ipv4Link();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf local_ipv4_address; //type: string
        ydk::YLeaf remote_ipv4_address; //type: string
        ydk::YLeaf igp_metric; //type: uint32
        ydk::YLeaf te_metric; //type: uint32
        ydk::YLeaf maximum_link_bandwidth; //type: uint64
        ydk::YLeaf max_reservable_bandwidth; //type: uint64
        ydk::YLeaf administrative_groups; //type: uint32
        ydk::YLeafList srlgs; //type: list of  uint32
        class LocalIgpInformation; //type: Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation
        class RemoteNodeProtocolIdentifier; //type: Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier
        class PerformanceMetrics; //type: Pce::TopologyNodes::TopologyNode::Ipv4Link::PerformanceMetrics
        class AdjacencySid; //type: Pce::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation> local_igp_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier> remote_node_protocol_identifier;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv4Link::PerformanceMetrics> performance_metrics;
        ydk::YList adjacency_sid;
        
}; // Pce::TopologyNodes::TopologyNode::Ipv4Link


class Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation : public ydk::Entity
{
    public:
        LocalIgpInformation();
        ~LocalIgpInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf domain_identifier; //type: uint64
        class NodeId; //type: Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId> node_id;
        
}; // Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation


class Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId : public ydk::Entity
{
    public:
        NodeId();
        ~NodeId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf autonomous_system_number; //type: uint32
        ydk::YLeaf ls_identifier; //type: uint32
        class Igp; //type: Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp> igp;
        
}; // Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId


class Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp : public ydk::Entity
{
    public:
        Igp();
        ~Igp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf igp_id; //type: PceIgpInfoId
        class Isis; //type: Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::Isis
        class Ospf; //type: Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::Ospf
        class Bgp; //type: Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::Bgp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::Isis> isis;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::Ospf> ospf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::Bgp> bgp;
        
}; // Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp


class Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::Isis : public ydk::Entity
{
    public:
        Isis();
        ~Isis();

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
        ydk::YLeaf level; //type: uint32

}; // Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::Isis


class Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::Ospf : public ydk::Entity
{
    public:
        Ospf();
        ~Ospf();

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
        ydk::YLeaf area; //type: uint32

}; // Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::Ospf


class Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::Bgp : public ydk::Entity
{
    public:
        Bgp();
        ~Bgp();

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
        ydk::YLeaf confed_asn; //type: uint32

}; // Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::Bgp


class Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier : public ydk::Entity
{
    public:
        RemoteNodeProtocolIdentifier();
        ~RemoteNodeProtocolIdentifier();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_name; //type: string
        ydk::YLeaf ipv4_bgp_router_id_set; //type: boolean
        ydk::YLeaf ipv4_bgp_router_id; //type: string
        ydk::YLeaf ipv4te_router_id_set; //type: boolean
        ydk::YLeaf ipv4te_router_id; //type: string
        class IgpInformation; //type: Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation
        class SrgbInformation; //type: Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation

        ydk::YList igp_information;
        ydk::YList srgb_information;
        
}; // Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier


class Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation : public ydk::Entity
{
    public:
        IgpInformation();
        ~IgpInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf domain_identifier; //type: uint64
        class NodeId; //type: Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId> node_id;
        
}; // Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation


class Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId : public ydk::Entity
{
    public:
        NodeId();
        ~NodeId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf autonomous_system_number; //type: uint32
        ydk::YLeaf ls_identifier; //type: uint32
        class Igp; //type: Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp> igp;
        
}; // Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId


class Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp : public ydk::Entity
{
    public:
        Igp();
        ~Igp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf igp_id; //type: PceIgpInfoId
        class Isis; //type: Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis
        class Ospf; //type: Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf
        class Bgp; //type: Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis> isis;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf> ospf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp> bgp;
        
}; // Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp


class Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis : public ydk::Entity
{
    public:
        Isis();
        ~Isis();

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
        ydk::YLeaf level; //type: uint32

}; // Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis


class Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf : public ydk::Entity
{
    public:
        Ospf();
        ~Ospf();

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
        ydk::YLeaf area; //type: uint32

}; // Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf


class Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp : public ydk::Entity
{
    public:
        Bgp();
        ~Bgp();

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
        ydk::YLeaf confed_asn; //type: uint32

}; // Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp


class Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation : public ydk::Entity
{
    public:
        SrgbInformation();
        ~SrgbInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start; //type: uint32
        ydk::YLeaf size; //type: uint32
        ydk::YLeaf domain_identifier; //type: uint64
        class NodeId; //type: Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId> node_id;
        
}; // Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation


class Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId : public ydk::Entity
{
    public:
        NodeId();
        ~NodeId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf autonomous_system_number; //type: uint32
        ydk::YLeaf ls_identifier; //type: uint32
        class Igp; //type: Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp> igp;
        
}; // Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId


class Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp : public ydk::Entity
{
    public:
        Igp();
        ~Igp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf igp_id; //type: PceIgpInfoId
        class Isis; //type: Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis
        class Ospf; //type: Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf
        class Bgp; //type: Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis> isis;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf> ospf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp> bgp;
        
}; // Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp


class Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis : public ydk::Entity
{
    public:
        Isis();
        ~Isis();

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
        ydk::YLeaf level; //type: uint32

}; // Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis


class Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf : public ydk::Entity
{
    public:
        Ospf();
        ~Ospf();

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
        ydk::YLeaf area; //type: uint32

}; // Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf


class Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp : public ydk::Entity
{
    public:
        Bgp();
        ~Bgp();

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
        ydk::YLeaf confed_asn; //type: uint32

}; // Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp


class Pce::TopologyNodes::TopologyNode::Ipv4Link::PerformanceMetrics : public ydk::Entity
{
    public:
        PerformanceMetrics();
        ~PerformanceMetrics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf unidirectional_minimum_delay_microseconds; //type: uint32

}; // Pce::TopologyNodes::TopologyNode::Ipv4Link::PerformanceMetrics


class Pce::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid : public ydk::Entity
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

        ydk::YLeaf sid_type; //type: Sid
        ydk::YLeaf mpls_label; //type: uint32
        ydk::YLeaf rflag; //type: boolean
        ydk::YLeaf nflag; //type: boolean
        ydk::YLeaf pflag; //type: boolean
        ydk::YLeaf eflag; //type: boolean
        ydk::YLeaf vflag; //type: boolean
        ydk::YLeaf lflag; //type: boolean
        class SidPrefix; //type: Pce::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::SidPrefix

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::SidPrefix> sid_prefix;
        
}; // Pce::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid


class Pce::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::SidPrefix : public ydk::Entity
{
    public:
        SidPrefix();
        ~SidPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PceAfId
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Pce::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::SidPrefix


class Pce::TopologyNodes::TopologyNode::Ipv6Link : public ydk::Entity
{
    public:
        Ipv6Link();
        ~Ipv6Link();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf local_ipv6_address; //type: string
        ydk::YLeaf remote_ipv6_address; //type: string
        ydk::YLeaf igp_metric; //type: uint32
        ydk::YLeaf te_metric; //type: uint32
        ydk::YLeaf maximum_link_bandwidth; //type: uint64
        ydk::YLeaf max_reservable_bandwidth; //type: uint64
        class LocalIgpInformation; //type: Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation
        class RemoteNodeProtocolIdentifier; //type: Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier
        class AdjacencySid; //type: Pce::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation> local_igp_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier> remote_node_protocol_identifier;
        ydk::YList adjacency_sid;
        
}; // Pce::TopologyNodes::TopologyNode::Ipv6Link


class Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation : public ydk::Entity
{
    public:
        LocalIgpInformation();
        ~LocalIgpInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf domain_identifier; //type: uint64
        class NodeId; //type: Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId> node_id;
        
}; // Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation


class Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId : public ydk::Entity
{
    public:
        NodeId();
        ~NodeId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf autonomous_system_number; //type: uint32
        ydk::YLeaf ls_identifier; //type: uint32
        class Igp; //type: Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp> igp;
        
}; // Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId


class Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp : public ydk::Entity
{
    public:
        Igp();
        ~Igp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf igp_id; //type: PceIgpInfoId
        class Isis; //type: Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::Isis
        class Ospf; //type: Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::Ospf
        class Bgp; //type: Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::Bgp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::Isis> isis;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::Ospf> ospf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::Bgp> bgp;
        
}; // Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp


class Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::Isis : public ydk::Entity
{
    public:
        Isis();
        ~Isis();

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
        ydk::YLeaf level; //type: uint32

}; // Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::Isis


class Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::Ospf : public ydk::Entity
{
    public:
        Ospf();
        ~Ospf();

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
        ydk::YLeaf area; //type: uint32

}; // Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::Ospf


class Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::Bgp : public ydk::Entity
{
    public:
        Bgp();
        ~Bgp();

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
        ydk::YLeaf confed_asn; //type: uint32

}; // Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::Bgp


class Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier : public ydk::Entity
{
    public:
        RemoteNodeProtocolIdentifier();
        ~RemoteNodeProtocolIdentifier();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_name; //type: string
        ydk::YLeaf ipv4_bgp_router_id_set; //type: boolean
        ydk::YLeaf ipv4_bgp_router_id; //type: string
        ydk::YLeaf ipv4te_router_id_set; //type: boolean
        ydk::YLeaf ipv4te_router_id; //type: string
        class IgpInformation; //type: Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation
        class SrgbInformation; //type: Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation

        ydk::YList igp_information;
        ydk::YList srgb_information;
        
}; // Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier


class Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation : public ydk::Entity
{
    public:
        IgpInformation();
        ~IgpInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf domain_identifier; //type: uint64
        class NodeId; //type: Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId> node_id;
        
}; // Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation


class Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId : public ydk::Entity
{
    public:
        NodeId();
        ~NodeId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf autonomous_system_number; //type: uint32
        ydk::YLeaf ls_identifier; //type: uint32
        class Igp; //type: Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp> igp;
        
}; // Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId


class Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp : public ydk::Entity
{
    public:
        Igp();
        ~Igp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf igp_id; //type: PceIgpInfoId
        class Isis; //type: Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis
        class Ospf; //type: Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf
        class Bgp; //type: Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis> isis;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf> ospf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp> bgp;
        
}; // Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp


class Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis : public ydk::Entity
{
    public:
        Isis();
        ~Isis();

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
        ydk::YLeaf level; //type: uint32

}; // Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis


class Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf : public ydk::Entity
{
    public:
        Ospf();
        ~Ospf();

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
        ydk::YLeaf area; //type: uint32

}; // Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf


class Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp : public ydk::Entity
{
    public:
        Bgp();
        ~Bgp();

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
        ydk::YLeaf confed_asn; //type: uint32

}; // Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp


class Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation : public ydk::Entity
{
    public:
        SrgbInformation();
        ~SrgbInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start; //type: uint32
        ydk::YLeaf size; //type: uint32
        ydk::YLeaf domain_identifier; //type: uint64
        class NodeId; //type: Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId> node_id;
        
}; // Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation


class Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId : public ydk::Entity
{
    public:
        NodeId();
        ~NodeId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf autonomous_system_number; //type: uint32
        ydk::YLeaf ls_identifier; //type: uint32
        class Igp; //type: Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp> igp;
        
}; // Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId


class Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp : public ydk::Entity
{
    public:
        Igp();
        ~Igp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf igp_id; //type: PceIgpInfoId
        class Isis; //type: Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis
        class Ospf; //type: Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf
        class Bgp; //type: Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis> isis;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf> ospf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp> bgp;
        
}; // Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp


class Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis : public ydk::Entity
{
    public:
        Isis();
        ~Isis();

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
        ydk::YLeaf level; //type: uint32

}; // Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis


class Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf : public ydk::Entity
{
    public:
        Ospf();
        ~Ospf();

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
        ydk::YLeaf area; //type: uint32

}; // Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf


class Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp : public ydk::Entity
{
    public:
        Bgp();
        ~Bgp();

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
        ydk::YLeaf confed_asn; //type: uint32

}; // Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp


class Pce::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid : public ydk::Entity
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

        ydk::YLeaf sid_type; //type: Sid
        ydk::YLeaf mpls_label; //type: uint32
        ydk::YLeaf rflag; //type: boolean
        ydk::YLeaf nflag; //type: boolean
        ydk::YLeaf pflag; //type: boolean
        ydk::YLeaf eflag; //type: boolean
        ydk::YLeaf vflag; //type: boolean
        ydk::YLeaf lflag; //type: boolean
        class SidPrefix; //type: Pce::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::SidPrefix

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::SidPrefix> sid_prefix;
        
}; // Pce::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid


class Pce::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::SidPrefix : public ydk::Entity
{
    public:
        SidPrefix();
        ~SidPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PceAfId
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Pce::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::SidPrefix


class Pce::TopologySummaries : public ydk::Entity
{
    public:
        TopologySummaries();
        ~TopologySummaries();

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

        class TopologySummary; //type: Pce::TopologySummaries::TopologySummary

        ydk::YList topology_summary;
        
}; // Pce::TopologySummaries


class Pce::TopologySummaries::TopologySummary : public ydk::Entity
{
    public:
        TopologySummary();
        ~TopologySummary();

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

        ydk::YLeaf af; //type: PceAddressFamily
        ydk::YLeaf protocol; //type: PceigpProtocol
        ydk::YLeaf nodes; //type: uint32
        ydk::YLeaf lookup_nodes; //type: uint32
        ydk::YLeaf prefixes; //type: uint32
        ydk::YLeaf prefix_sids; //type: uint32
        ydk::YLeaf regular_prefix_sids; //type: uint32
        ydk::YLeaf strict_prefix_sids; //type: uint32
        ydk::YLeaf links; //type: uint32
        ydk::YLeaf epe_links; //type: uint32
        ydk::YLeaf adjacency_sids; //type: uint32
        ydk::YLeaf epesids; //type: uint32
        ydk::YLeaf protected_adjacency_sids; //type: uint32
        ydk::YLeaf un_protected_adjacency_sids; //type: uint32
        ydk::YLeaf topology_consistent; //type: boolean
        class StatsTopologyUpdate; //type: Pce::TopologySummaries::TopologySummary::StatsTopologyUpdate

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TopologySummaries::TopologySummary::StatsTopologyUpdate> stats_topology_update;
        
}; // Pce::TopologySummaries::TopologySummary


class Pce::TopologySummaries::TopologySummary::StatsTopologyUpdate : public ydk::Entity
{
    public:
        StatsTopologyUpdate();
        ~StatsTopologyUpdate();

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

        ydk::YLeaf num_nodes_added; //type: uint32
        ydk::YLeaf num_nodes_deleted; //type: uint32
        ydk::YLeaf num_links_added; //type: uint32
        ydk::YLeaf num_links_deleted; //type: uint32
        ydk::YLeaf num_prefixes_added; //type: uint32
        ydk::YLeaf num_prefixes_deleted; //type: uint32

}; // Pce::TopologySummaries::TopologySummary::StatsTopologyUpdate


class Pce::PrefixInfos : public ydk::Entity
{
    public:
        PrefixInfos();
        ~PrefixInfos();

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

        class PrefixInfo; //type: Pce::PrefixInfos::PrefixInfo

        ydk::YList prefix_info;
        
}; // Pce::PrefixInfos


class Pce::PrefixInfos::PrefixInfo : public ydk::Entity
{
    public:
        PrefixInfo();
        ~PrefixInfo();

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

        ydk::YLeaf node_identifier; //type: uint32
        ydk::YLeaf node_identifier_xr; //type: uint32
        class NodeProtocolIdentifier; //type: Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier
        class Address; //type: Pce::PrefixInfos::PrefixInfo::Address

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier> node_protocol_identifier;
        ydk::YList address;
        
}; // Pce::PrefixInfos::PrefixInfo


class Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier : public ydk::Entity
{
    public:
        NodeProtocolIdentifier();
        ~NodeProtocolIdentifier();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_name; //type: string
        ydk::YLeaf ipv4_bgp_router_id_set; //type: boolean
        ydk::YLeaf ipv4_bgp_router_id; //type: string
        ydk::YLeaf ipv4te_router_id_set; //type: boolean
        ydk::YLeaf ipv4te_router_id; //type: string
        class IgpInformation; //type: Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation
        class SrgbInformation; //type: Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation

        ydk::YList igp_information;
        ydk::YList srgb_information;
        
}; // Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier


class Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation : public ydk::Entity
{
    public:
        IgpInformation();
        ~IgpInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf domain_identifier; //type: uint64
        class NodeId; //type: Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId> node_id;
        
}; // Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation


class Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId : public ydk::Entity
{
    public:
        NodeId();
        ~NodeId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf autonomous_system_number; //type: uint32
        ydk::YLeaf ls_identifier; //type: uint32
        class Igp; //type: Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp> igp;
        
}; // Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId


class Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp : public ydk::Entity
{
    public:
        Igp();
        ~Igp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf igp_id; //type: PceIgpInfoId
        class Isis; //type: Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis
        class Ospf; //type: Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf
        class Bgp; //type: Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis> isis;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf> ospf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp> bgp;
        
}; // Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp


class Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis : public ydk::Entity
{
    public:
        Isis();
        ~Isis();

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
        ydk::YLeaf level; //type: uint32

}; // Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis


class Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf : public ydk::Entity
{
    public:
        Ospf();
        ~Ospf();

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
        ydk::YLeaf area; //type: uint32

}; // Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf


class Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp : public ydk::Entity
{
    public:
        Bgp();
        ~Bgp();

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
        ydk::YLeaf confed_asn; //type: uint32

}; // Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp


class Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation : public ydk::Entity
{
    public:
        SrgbInformation();
        ~SrgbInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start; //type: uint32
        ydk::YLeaf size; //type: uint32
        ydk::YLeaf domain_identifier; //type: uint64
        class NodeId; //type: Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId> node_id;
        
}; // Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation


class Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId : public ydk::Entity
{
    public:
        NodeId();
        ~NodeId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf autonomous_system_number; //type: uint32
        ydk::YLeaf ls_identifier; //type: uint32
        class Igp; //type: Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp> igp;
        
}; // Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId


class Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp : public ydk::Entity
{
    public:
        Igp();
        ~Igp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf igp_id; //type: PceIgpInfoId
        class Isis; //type: Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis
        class Ospf; //type: Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf
        class Bgp; //type: Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis> isis;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf> ospf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp> bgp;
        
}; // Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp


class Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis : public ydk::Entity
{
    public:
        Isis();
        ~Isis();

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
        ydk::YLeaf level; //type: uint32

}; // Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis


class Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf : public ydk::Entity
{
    public:
        Ospf();
        ~Ospf();

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
        ydk::YLeaf area; //type: uint32

}; // Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf


class Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp : public ydk::Entity
{
    public:
        Bgp();
        ~Bgp();

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
        ydk::YLeaf confed_asn; //type: uint32

}; // Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp


class Pce::PrefixInfos::PrefixInfo::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ip; //type: Pce::PrefixInfos::PrefixInfo::Address::Ip

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::PrefixInfos::PrefixInfo::Address::Ip> ip;
        
}; // Pce::PrefixInfos::PrefixInfo::Address


class Pce::PrefixInfos::PrefixInfo::Address::Ip : public ydk::Entity
{
    public:
        Ip();
        ~Ip();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PceAfId
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Pce::PrefixInfos::PrefixInfo::Address::Ip


class Pce::LspSummary : public ydk::Entity
{
    public:
        LspSummary();
        ~LspSummary();

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

        class AllLsPs; //type: Pce::LspSummary::AllLsPs
        class PeerLsPsInfo; //type: Pce::LspSummary::PeerLsPsInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::LspSummary::AllLsPs> all_ls_ps;
        ydk::YList peer_ls_ps_info;
        
}; // Pce::LspSummary


class Pce::LspSummary::AllLsPs : public ydk::Entity
{
    public:
        AllLsPs();
        ~AllLsPs();

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

        ydk::YLeaf all_ls_ps; //type: uint32
        ydk::YLeaf up_ls_ps; //type: uint32
        ydk::YLeaf admin_up_ls_ps; //type: uint32
        ydk::YLeaf sr_ls_ps; //type: uint32
        ydk::YLeaf rsvp_ls_ps; //type: uint32

}; // Pce::LspSummary::AllLsPs


class Pce::LspSummary::PeerLsPsInfo : public ydk::Entity
{
    public:
        PeerLsPsInfo();
        ~PeerLsPsInfo();

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

        class LspSummary_; //type: Pce::LspSummary::PeerLsPsInfo::LspSummary_
        class PeerAddress; //type: Pce::LspSummary::PeerLsPsInfo::PeerAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::LspSummary::PeerLsPsInfo::LspSummary_> lsp_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::LspSummary::PeerLsPsInfo::PeerAddress> peer_address;
        
}; // Pce::LspSummary::PeerLsPsInfo


class Pce::LspSummary::PeerLsPsInfo::LspSummary_ : public ydk::Entity
{
    public:
        LspSummary_();
        ~LspSummary_();

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

        ydk::YLeaf all_ls_ps; //type: uint32
        ydk::YLeaf up_ls_ps; //type: uint32
        ydk::YLeaf admin_up_ls_ps; //type: uint32
        ydk::YLeaf sr_ls_ps; //type: uint32
        ydk::YLeaf rsvp_ls_ps; //type: uint32

}; // Pce::LspSummary::PeerLsPsInfo::LspSummary_


class Pce::LspSummary::PeerLsPsInfo::PeerAddress : public ydk::Entity
{
    public:
        PeerAddress();
        ~PeerAddress();

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

        ydk::YLeaf af_name; //type: PceAfId
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Pce::LspSummary::PeerLsPsInfo::PeerAddress


class Pce::PeerInfos : public ydk::Entity
{
    public:
        PeerInfos();
        ~PeerInfos();

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

        class PeerInfo; //type: Pce::PeerInfos::PeerInfo

        ydk::YList peer_info;
        
}; // Pce::PeerInfos


class Pce::PeerInfos::PeerInfo : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf peer_address; //type: string
        ydk::YLeaf peer_protocol; //type: PceProto
        class PeerAddressXr; //type: Pce::PeerInfos::PeerInfo::PeerAddressXr
        class BriefPcepInformation; //type: Pce::PeerInfos::PeerInfo::BriefPcepInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::PeerInfos::PeerInfo::PeerAddressXr> peer_address_xr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::PeerInfos::PeerInfo::BriefPcepInformation> brief_pcep_information;
        
}; // Pce::PeerInfos::PeerInfo


class Pce::PeerInfos::PeerInfo::PeerAddressXr : public ydk::Entity
{
    public:
        PeerAddressXr();
        ~PeerAddressXr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PceAfId
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Pce::PeerInfos::PeerInfo::PeerAddressXr


class Pce::PeerInfos::PeerInfo::BriefPcepInformation : public ydk::Entity
{
    public:
        BriefPcepInformation();
        ~BriefPcepInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pcep_state; //type: PcepState
        ydk::YLeaf stateful; //type: boolean
        ydk::YLeaf capability_update; //type: boolean
        ydk::YLeaf capability_instantiate; //type: boolean
        ydk::YLeaf capability_segment_routing; //type: boolean
        ydk::YLeaf capability_triggered_sync; //type: boolean
        ydk::YLeaf capability_db_version; //type: boolean
        ydk::YLeaf capability_delta_sync; //type: boolean

}; // Pce::PeerInfos::PeerInfo::BriefPcepInformation


class Pce::TunnelDetailInfos : public ydk::Entity
{
    public:
        TunnelDetailInfos();
        ~TunnelDetailInfos();

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

        class TunnelDetailInfo; //type: Pce::TunnelDetailInfos::TunnelDetailInfo

        ydk::YList tunnel_detail_info;
        
}; // Pce::TunnelDetailInfos


class Pce::TunnelDetailInfos::TunnelDetailInfo : public ydk::Entity
{
    public:
        TunnelDetailInfo();
        ~TunnelDetailInfo();

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

        ydk::YLeaf peer_address; //type: string
        ydk::YLeaf plsp_id; //type: uint32
        ydk::YLeaf tunnel_name; //type: string
        ydk::YLeaf tunnel_name_xr; //type: string
        ydk::YLeaf xtc_controlled; //type: boolean
        ydk::YLeaf color; //type: uint32
        class PccAddress; //type: Pce::TunnelDetailInfos::TunnelDetailInfo::PccAddress
        class PrivateLspInformation; //type: Pce::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation
        class DetailLspInformation; //type: Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TunnelDetailInfos::TunnelDetailInfo::PccAddress> pcc_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation> private_lsp_information;
        ydk::YList detail_lsp_information;
        
}; // Pce::TunnelDetailInfos::TunnelDetailInfo


class Pce::TunnelDetailInfos::TunnelDetailInfo::PccAddress : public ydk::Entity
{
    public:
        PccAddress();
        ~PccAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PceAfId
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Pce::TunnelDetailInfos::TunnelDetailInfo::PccAddress


class Pce::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation : public ydk::Entity
{
    public:
        PrivateLspInformation();
        ~PrivateLspInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class EventBuffer; //type: Pce::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation::EventBuffer

        ydk::YList event_buffer;
        
}; // Pce::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation


class Pce::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation::EventBuffer : public ydk::Entity
{
    public:
        EventBuffer();
        ~EventBuffer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf event_id; //type: uint32
        ydk::YLeaf event_message; //type: string
        ydk::YLeaf time_stamp; //type: uint32

}; // Pce::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation::EventBuffer


class Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation : public ydk::Entity
{
    public:
        DetailLspInformation();
        ~DetailLspInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf signaled_bandwidth_specified; //type: boolean
        ydk::YLeaf signaled_bandwidth; //type: uint64
        ydk::YLeaf actual_bandwidth_specified; //type: boolean
        ydk::YLeaf actual_bandwidth; //type: uint64
        ydk::YLeaf lsp_role; //type: uint32
        ydk::YLeaf computing_pce; //type: uint32
        ydk::YLeafList srlg_info; //type: list of  uint32
        class BriefLspInformation; //type: Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation
        class ErOs; //type: Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs
        class LsppcepInformation; //type: Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation
        class LspAssociationInfo; //type: Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAssociationInfo
        class LspAttributes; //type: Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAttributes
        class SubDelegatedPce; //type: Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::SubDelegatedPce
        class StateSyncPce; //type: Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::StateSyncPce
        class ReportingPccAddress; //type: Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ReportingPccAddress
        class Rro; //type: Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation> brief_lsp_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs> er_os;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation> lsppcep_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAssociationInfo> lsp_association_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAttributes> lsp_attributes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::SubDelegatedPce> sub_delegated_pce;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::StateSyncPce> state_sync_pce;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ReportingPccAddress> reporting_pcc_address;
        ydk::YList rro;
        
}; // Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation


class Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation : public ydk::Entity
{
    public:
        BriefLspInformation();
        ~BriefLspInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel_id; //type: uint32
        ydk::YLeaf lspid; //type: uint32
        ydk::YLeaf binding_sid; //type: uint32
        ydk::YLeaf lsp_setup_type; //type: LspSetup
        ydk::YLeaf operational_state; //type: PcepLspState
        ydk::YLeaf administrative_state; //type: LspState
        ydk::YLeaf msd; //type: uint32
        ydk::YLeaf absolute_margin; //type: uint32
        ydk::YLeaf relative_margin; //type: uint32
        class SourceAddress; //type: Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation::SourceAddress
        class DestinationAddress; //type: Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation::DestinationAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation::SourceAddress> source_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation::DestinationAddress> destination_address;
        
}; // Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation


class Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation::SourceAddress : public ydk::Entity
{
    public:
        SourceAddress();
        ~SourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PceAfId
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation::SourceAddress


class Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation::DestinationAddress : public ydk::Entity
{
    public:
        DestinationAddress();
        ~DestinationAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PceAfId
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation::DestinationAddress


class Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs : public ydk::Entity
{
    public:
        ErOs();
        ~ErOs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reported_metric_type; //type: uint32
        ydk::YLeaf reported_metric_value; //type: uint32
        ydk::YLeaf computed_metric_type; //type: uint32
        ydk::YLeaf computed_metric_value; //type: uint32
        ydk::YLeaf computed_hop_list_time; //type: uint32
        class ReportedRsvpPath; //type: Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedRsvpPath
        class ReportedSrPath; //type: Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath
        class ComputedRsvpPath; //type: Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedRsvpPath
        class ComputedSrPath; //type: Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath

        ydk::YList reported_rsvp_path;
        ydk::YList reported_sr_path;
        ydk::YList computed_rsvp_path;
        ydk::YList computed_sr_path;
        
}; // Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs


class Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedRsvpPath : public ydk::Entity
{
    public:
        ReportedRsvpPath();
        ~ReportedRsvpPath();

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

}; // Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedRsvpPath


class Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath : public ydk::Entity
{
    public:
        ReportedSrPath();
        ~ReportedSrPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sid_type; //type: PceSrSid
        ydk::YLeaf mpls_label; //type: uint32
        class LocalAddr; //type: Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath::LocalAddr
        class RemoteAddr; //type: Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath::RemoteAddr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath::LocalAddr> local_addr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath::RemoteAddr> remote_addr;
        
}; // Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath


class Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath::LocalAddr : public ydk::Entity
{
    public:
        LocalAddr();
        ~LocalAddr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PceAfId
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath::LocalAddr


class Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath::RemoteAddr : public ydk::Entity
{
    public:
        RemoteAddr();
        ~RemoteAddr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PceAfId
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath::RemoteAddr


class Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedRsvpPath : public ydk::Entity
{
    public:
        ComputedRsvpPath();
        ~ComputedRsvpPath();

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

}; // Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedRsvpPath


}
}

#endif /* _CISCO_IOS_XR_INFRA_XTC_OPER_1_ */

