#ifndef _CISCO_IOS_XR_INFRA_XTC_OPER_2_
#define _CISCO_IOS_XR_INFRA_XTC_OPER_2_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_infra_xtc_oper_0.hpp"
#include "Cisco_IOS_XR_infra_xtc_oper_1.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_infra_xtc_oper {


class Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath : public ydk::Entity
{
    public:
        ComputedSrPath();
        ~ComputedSrPath();

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
        class LocalAddr; //type: Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath::LocalAddr
        class RemoteAddr; //type: Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath::RemoteAddr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath::LocalAddr> local_addr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath::RemoteAddr> remote_addr;
        
}; // Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath


class Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath::LocalAddr : public ydk::Entity
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

}; // Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath::LocalAddr


class Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath::RemoteAddr : public ydk::Entity
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

}; // Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath::RemoteAddr


class Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation : public ydk::Entity
{
    public:
        LsppcepInformation();
        ~LsppcepInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pcepid; //type: uint32
        ydk::YLeaf pcep_flag_d; //type: boolean
        ydk::YLeaf pcep_flag_s; //type: boolean
        ydk::YLeaf pcep_flag_r; //type: boolean
        ydk::YLeaf pcep_flag_a; //type: boolean
        ydk::YLeaf pcep_flag_o; //type: uint8
        ydk::YLeaf pcep_flag_c; //type: uint8
        class RsvpError; //type: Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation::RsvpError

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation::RsvpError> rsvp_error;
        
}; // Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation


class Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation::RsvpError : public ydk::Entity
{
    public:
        RsvpError();
        ~RsvpError();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_address; //type: string
        ydk::YLeaf error_flags; //type: uint8
        ydk::YLeaf error_code; //type: uint8
        ydk::YLeaf error_value; //type: uint16

}; // Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation::RsvpError


class Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAssociationInfo : public ydk::Entity
{
    public:
        LspAssociationInfo();
        ~LspAssociationInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf association_type; //type: uint32
        ydk::YLeaf association_id; //type: uint32
        class AssociationSource; //type: Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAssociationInfo::AssociationSource

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAssociationInfo::AssociationSource> association_source;
        
}; // Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAssociationInfo


class Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAssociationInfo::AssociationSource : public ydk::Entity
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

}; // Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAssociationInfo::AssociationSource


class Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAttributes : public ydk::Entity
{
    public:
        LspAttributes();
        ~LspAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf affinity_exclude_any; //type: uint32
        ydk::YLeaf affinity_include_any; //type: uint32
        ydk::YLeaf affinity_include_all; //type: uint32
        ydk::YLeaf setup_priority; //type: uint8
        ydk::YLeaf hold_priority; //type: uint8
        ydk::YLeaf local_protection; //type: boolean

}; // Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAttributes


class Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::SubDelegatedPce : public ydk::Entity
{
    public:
        SubDelegatedPce();
        ~SubDelegatedPce();

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

}; // Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::SubDelegatedPce


class Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::StateSyncPce : public ydk::Entity
{
    public:
        StateSyncPce();
        ~StateSyncPce();

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

}; // Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::StateSyncPce


class Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ReportingPccAddress : public ydk::Entity
{
    public:
        ReportingPccAddress();
        ~ReportingPccAddress();

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

}; // Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ReportingPccAddress


class Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro : public ydk::Entity
{
    public:
        Rro();
        ~Rro();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rro_type; //type: PceRro
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf mpls_label; //type: uint32
        ydk::YLeaf flags; //type: uint8
        class SrRro; //type: Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro> sr_rro;
        
}; // Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro


class Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro : public ydk::Entity
{
    public:
        SrRro();
        ~SrRro();

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
        class LocalAddr; //type: Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro::LocalAddr
        class RemoteAddr; //type: Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro::RemoteAddr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro::LocalAddr> local_addr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro::RemoteAddr> remote_addr;
        
}; // Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro


class Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro::LocalAddr : public ydk::Entity
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

}; // Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro::LocalAddr


class Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro::RemoteAddr : public ydk::Entity
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

}; // Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro::RemoteAddr


}
}

#endif /* _CISCO_IOS_XR_INFRA_XTC_OPER_2_ */

