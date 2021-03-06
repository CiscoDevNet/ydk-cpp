#ifndef _CISCO_IOS_XR_MPLS_STATIC_OPER_
#define _CISCO_IOS_XR_MPLS_STATIC_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_mpls_static_oper {

class MplsStatic : public ydk::Entity
{
    public:
        MplsStatic();
        ~MplsStatic();

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

        class Vrfs; //type: MplsStatic::Vrfs
        class Summary; //type: MplsStatic::Summary
        class LocalLabels; //type: MplsStatic::LocalLabels

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_static_oper::MplsStatic::Vrfs> vrfs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_static_oper::MplsStatic::Summary> summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_static_oper::MplsStatic::LocalLabels> local_labels;
        
}; // MplsStatic


class MplsStatic::Vrfs : public ydk::Entity
{
    public:
        Vrfs();
        ~Vrfs();

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

        class Vrf; //type: MplsStatic::Vrfs::Vrf

        ydk::YList vrf;
        
}; // MplsStatic::Vrfs


class MplsStatic::Vrfs::Vrf : public ydk::Entity
{
    public:
        Vrf();
        ~Vrf();

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

        ydk::YLeaf vrf_name; //type: string
        class Lsps; //type: MplsStatic::Vrfs::Vrf::Lsps
        class LocalLabels; //type: MplsStatic::Vrfs::Vrf::LocalLabels

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_static_oper::MplsStatic::Vrfs::Vrf::Lsps> lsps;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_static_oper::MplsStatic::Vrfs::Vrf::LocalLabels> local_labels;
        
}; // MplsStatic::Vrfs::Vrf


class MplsStatic::Vrfs::Vrf::Lsps : public ydk::Entity
{
    public:
        Lsps();
        ~Lsps();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Lsp; //type: MplsStatic::Vrfs::Vrf::Lsps::Lsp

        ydk::YList lsp;
        
}; // MplsStatic::Vrfs::Vrf::Lsps


class MplsStatic::Vrfs::Vrf::Lsps::Lsp : public ydk::Entity
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

        ydk::YLeaf lsp_name; //type: string
        ydk::YLeaf lsp_name_xr; //type: string
        class Label; //type: MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_static_oper::MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label> label;
        
}; // MplsStatic::Vrfs::Vrf::Lsps::Lsp


class MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label : public ydk::Entity
{
    public:
        Label();
        ~Label();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label; //type: uint32
        ydk::YLeaf label_mode; //type: MgmtMplsStaticLabelMode
        ydk::YLeaf label_status; //type: MgmtMplsStaticLabelStatus
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf pathset_via_resolve; //type: boolean
        ydk::YLeaf backup_pathset_via_resolve; //type: boolean
        ydk::YLeaf address_family; //type: MgmtStaticAddr
        class Prefix; //type: MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::Prefix
        class PathsetResolveNh; //type: MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathsetResolveNh
        class BackupPathsetResolveNh; //type: MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathsetResolveNh
        class PathInfo; //type: MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathInfo
        class BackupPathInfo; //type: MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_static_oper::MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::Prefix> prefix;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_static_oper::MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathsetResolveNh> pathset_resolve_nh;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_static_oper::MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathsetResolveNh> backup_pathset_resolve_nh;
        ydk::YList path_info;
        ydk::YList backup_path_info;
        
}; // MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label


class MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::Prefix : public ydk::Entity
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

        ydk::YLeaf prefix_length; //type: uint8
        class Prefix_; //type: MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::Prefix::Prefix_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_static_oper::MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::Prefix::Prefix_> prefix;
        
}; // MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::Prefix


class MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::Prefix::Prefix_ : public ydk::Entity
{
    public:
        Prefix_();
        ~Prefix_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: MgmtStaticAddr
        ydk::YLeaf ipv4_prefix; //type: string
        ydk::YLeaf ipv6_prefix; //type: string

}; // MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::Prefix::Prefix_


class MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathsetResolveNh : public ydk::Entity
{
    public:
        PathsetResolveNh();
        ~PathsetResolveNh();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: MgmtStaticAddr
        ydk::YLeaf ipv4_prefix; //type: string
        ydk::YLeaf ipv6_prefix; //type: string

}; // MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathsetResolveNh


class MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathsetResolveNh : public ydk::Entity
{
    public:
        BackupPathsetResolveNh();
        ~BackupPathsetResolveNh();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: MgmtStaticAddr
        ydk::YLeaf ipv4_prefix; //type: string
        ydk::YLeaf ipv6_prefix; //type: string

}; // MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathsetResolveNh


class MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathInfo : public ydk::Entity
{
    public:
        PathInfo();
        ~PathInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf path_number; //type: uint32
        ydk::YLeaf type; //type: MgmtStaticPath
        ydk::YLeaf path_role; //type: MplsStaticPathRole
        ydk::YLeaf path_id; //type: uint8
        ydk::YLeaf backup_id; //type: uint8
        ydk::YLeaf status; //type: MgmtMplsStaticPathStatus
        class Nexthop; //type: MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathInfo::Nexthop

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_static_oper::MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathInfo::Nexthop> nexthop;
        
}; // MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathInfo


class MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathInfo::Nexthop : public ydk::Entity
{
    public:
        Nexthop();
        ~Nexthop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label; //type: uint32
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf afi; //type: MgmtStaticLspAfi
        class Address; //type: MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathInfo::Nexthop::Address

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_static_oper::MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathInfo::Nexthop::Address> address;
        
}; // MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathInfo::Nexthop


class MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathInfo::Nexthop::Address : public ydk::Entity
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

        ydk::YLeaf af_name; //type: MgmtStaticAddr
        ydk::YLeaf ipv4_prefix; //type: string
        ydk::YLeaf ipv6_prefix; //type: string

}; // MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathInfo::Nexthop::Address


class MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathInfo : public ydk::Entity
{
    public:
        BackupPathInfo();
        ~BackupPathInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf path_number; //type: uint32
        ydk::YLeaf type; //type: MgmtStaticPath
        ydk::YLeaf path_role; //type: MplsStaticPathRole
        ydk::YLeaf path_id; //type: uint8
        ydk::YLeaf backup_id; //type: uint8
        ydk::YLeaf status; //type: MgmtMplsStaticPathStatus
        class Nexthop; //type: MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathInfo::Nexthop

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_static_oper::MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathInfo::Nexthop> nexthop;
        
}; // MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathInfo


class MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathInfo::Nexthop : public ydk::Entity
{
    public:
        Nexthop();
        ~Nexthop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label; //type: uint32
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf afi; //type: MgmtStaticLspAfi
        class Address; //type: MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathInfo::Nexthop::Address

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_static_oper::MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathInfo::Nexthop::Address> address;
        
}; // MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathInfo::Nexthop


class MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathInfo::Nexthop::Address : public ydk::Entity
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

        ydk::YLeaf af_name; //type: MgmtStaticAddr
        ydk::YLeaf ipv4_prefix; //type: string
        ydk::YLeaf ipv6_prefix; //type: string

}; // MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathInfo::Nexthop::Address


class MplsStatic::Vrfs::Vrf::LocalLabels : public ydk::Entity
{
    public:
        LocalLabels();
        ~LocalLabels();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LocalLabel; //type: MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel

        ydk::YList local_label;
        
}; // MplsStatic::Vrfs::Vrf::LocalLabels


class MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel : public ydk::Entity
{
    public:
        LocalLabel();
        ~LocalLabel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf local_label_id; //type: uint32
        ydk::YLeaf label; //type: uint32
        ydk::YLeaf label_mode; //type: MgmtMplsStaticLabelMode
        ydk::YLeaf label_status; //type: MgmtMplsStaticLabelStatus
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf pathset_via_resolve; //type: boolean
        ydk::YLeaf backup_pathset_via_resolve; //type: boolean
        ydk::YLeaf address_family; //type: MgmtStaticAddr
        class Prefix; //type: MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::Prefix
        class PathsetResolveNh; //type: MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathsetResolveNh
        class BackupPathsetResolveNh; //type: MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathsetResolveNh
        class PathInfo; //type: MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathInfo
        class BackupPathInfo; //type: MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_static_oper::MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::Prefix> prefix;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_static_oper::MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathsetResolveNh> pathset_resolve_nh;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_static_oper::MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathsetResolveNh> backup_pathset_resolve_nh;
        ydk::YList path_info;
        ydk::YList backup_path_info;
        
}; // MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel


class MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::Prefix : public ydk::Entity
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

        ydk::YLeaf prefix_length; //type: uint8
        class Prefix_; //type: MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::Prefix::Prefix_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_static_oper::MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::Prefix::Prefix_> prefix;
        
}; // MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::Prefix


class MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::Prefix::Prefix_ : public ydk::Entity
{
    public:
        Prefix_();
        ~Prefix_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: MgmtStaticAddr
        ydk::YLeaf ipv4_prefix; //type: string
        ydk::YLeaf ipv6_prefix; //type: string

}; // MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::Prefix::Prefix_


class MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathsetResolveNh : public ydk::Entity
{
    public:
        PathsetResolveNh();
        ~PathsetResolveNh();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: MgmtStaticAddr
        ydk::YLeaf ipv4_prefix; //type: string
        ydk::YLeaf ipv6_prefix; //type: string

}; // MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathsetResolveNh


class MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathsetResolveNh : public ydk::Entity
{
    public:
        BackupPathsetResolveNh();
        ~BackupPathsetResolveNh();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: MgmtStaticAddr
        ydk::YLeaf ipv4_prefix; //type: string
        ydk::YLeaf ipv6_prefix; //type: string

}; // MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathsetResolveNh


class MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathInfo : public ydk::Entity
{
    public:
        PathInfo();
        ~PathInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf path_number; //type: uint32
        ydk::YLeaf type; //type: MgmtStaticPath
        ydk::YLeaf path_role; //type: MplsStaticPathRole
        ydk::YLeaf path_id; //type: uint8
        ydk::YLeaf backup_id; //type: uint8
        ydk::YLeaf status; //type: MgmtMplsStaticPathStatus
        class Nexthop; //type: MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathInfo::Nexthop

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_static_oper::MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathInfo::Nexthop> nexthop;
        
}; // MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathInfo


class MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathInfo::Nexthop : public ydk::Entity
{
    public:
        Nexthop();
        ~Nexthop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label; //type: uint32
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf afi; //type: MgmtStaticLspAfi
        class Address; //type: MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathInfo::Nexthop::Address

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_static_oper::MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathInfo::Nexthop::Address> address;
        
}; // MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathInfo::Nexthop


class MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathInfo::Nexthop::Address : public ydk::Entity
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

        ydk::YLeaf af_name; //type: MgmtStaticAddr
        ydk::YLeaf ipv4_prefix; //type: string
        ydk::YLeaf ipv6_prefix; //type: string

}; // MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathInfo::Nexthop::Address


class MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathInfo : public ydk::Entity
{
    public:
        BackupPathInfo();
        ~BackupPathInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf path_number; //type: uint32
        ydk::YLeaf type; //type: MgmtStaticPath
        ydk::YLeaf path_role; //type: MplsStaticPathRole
        ydk::YLeaf path_id; //type: uint8
        ydk::YLeaf backup_id; //type: uint8
        ydk::YLeaf status; //type: MgmtMplsStaticPathStatus
        class Nexthop; //type: MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathInfo::Nexthop

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_static_oper::MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathInfo::Nexthop> nexthop;
        
}; // MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathInfo


class MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathInfo::Nexthop : public ydk::Entity
{
    public:
        Nexthop();
        ~Nexthop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label; //type: uint32
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf afi; //type: MgmtStaticLspAfi
        class Address; //type: MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathInfo::Nexthop::Address

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_static_oper::MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathInfo::Nexthop::Address> address;
        
}; // MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathInfo::Nexthop


class MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathInfo::Nexthop::Address : public ydk::Entity
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

        ydk::YLeaf af_name; //type: MgmtStaticAddr
        ydk::YLeaf ipv4_prefix; //type: string
        ydk::YLeaf ipv6_prefix; //type: string

}; // MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathInfo::Nexthop::Address


class MplsStatic::Summary : public ydk::Entity
{
    public:
        Summary();
        ~Summary();

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

        ydk::YLeaf lsp_count; //type: uint32
        ydk::YLeaf label_count; //type: uint32
        ydk::YLeaf label_error_count; //type: uint32
        ydk::YLeaf label_discrepancy_count; //type: uint32
        ydk::YLeaf vrf_count; //type: uint32
        ydk::YLeaf active_vrf_count; //type: uint32
        ydk::YLeaf interface_count; //type: uint32
        ydk::YLeaf interface_foward_reference_count; //type: uint32
        ydk::YLeaf mpls_enabled_interface_count; //type: uint32
        ydk::YLeaf ipv4_res_nh_count; //type: uint32
        ydk::YLeaf ipv6_res_nh_count; //type: uint32
        ydk::YLeaf lsd_connected; //type: boolean
        ydk::YLeaf im_connected; //type: boolean
        ydk::YLeaf rsi_connected; //type: boolean
        ydk::YLeaf ribv4_connected; //type: boolean
        ydk::YLeaf ribv6_connected; //type: boolean

}; // MplsStatic::Summary


class MplsStatic::LocalLabels : public ydk::Entity
{
    public:
        LocalLabels();
        ~LocalLabels();

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

        class LocalLabel; //type: MplsStatic::LocalLabels::LocalLabel

        ydk::YList local_label;
        
}; // MplsStatic::LocalLabels


class MplsStatic::LocalLabels::LocalLabel : public ydk::Entity
{
    public:
        LocalLabel();
        ~LocalLabel();

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

        ydk::YLeaf local_label_id; //type: uint32
        ydk::YLeaf label; //type: uint32
        ydk::YLeaf label_mode; //type: MgmtMplsStaticLabelMode
        ydk::YLeaf label_status; //type: MgmtMplsStaticLabelStatus
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf pathset_via_resolve; //type: boolean
        ydk::YLeaf backup_pathset_via_resolve; //type: boolean
        ydk::YLeaf address_family; //type: MgmtStaticAddr
        class Prefix; //type: MplsStatic::LocalLabels::LocalLabel::Prefix
        class PathsetResolveNh; //type: MplsStatic::LocalLabels::LocalLabel::PathsetResolveNh
        class BackupPathsetResolveNh; //type: MplsStatic::LocalLabels::LocalLabel::BackupPathsetResolveNh
        class PathInfo; //type: MplsStatic::LocalLabels::LocalLabel::PathInfo
        class BackupPathInfo; //type: MplsStatic::LocalLabels::LocalLabel::BackupPathInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_static_oper::MplsStatic::LocalLabels::LocalLabel::Prefix> prefix;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_static_oper::MplsStatic::LocalLabels::LocalLabel::PathsetResolveNh> pathset_resolve_nh;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_static_oper::MplsStatic::LocalLabels::LocalLabel::BackupPathsetResolveNh> backup_pathset_resolve_nh;
        ydk::YList path_info;
        ydk::YList backup_path_info;
        
}; // MplsStatic::LocalLabels::LocalLabel


class MplsStatic::LocalLabels::LocalLabel::Prefix : public ydk::Entity
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

        ydk::YLeaf prefix_length; //type: uint8
        class Prefix_; //type: MplsStatic::LocalLabels::LocalLabel::Prefix::Prefix_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_static_oper::MplsStatic::LocalLabels::LocalLabel::Prefix::Prefix_> prefix;
        
}; // MplsStatic::LocalLabels::LocalLabel::Prefix


class MplsStatic::LocalLabels::LocalLabel::Prefix::Prefix_ : public ydk::Entity
{
    public:
        Prefix_();
        ~Prefix_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: MgmtStaticAddr
        ydk::YLeaf ipv4_prefix; //type: string
        ydk::YLeaf ipv6_prefix; //type: string

}; // MplsStatic::LocalLabels::LocalLabel::Prefix::Prefix_


class MplsStatic::LocalLabels::LocalLabel::PathsetResolveNh : public ydk::Entity
{
    public:
        PathsetResolveNh();
        ~PathsetResolveNh();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: MgmtStaticAddr
        ydk::YLeaf ipv4_prefix; //type: string
        ydk::YLeaf ipv6_prefix; //type: string

}; // MplsStatic::LocalLabels::LocalLabel::PathsetResolveNh


class MplsStatic::LocalLabels::LocalLabel::BackupPathsetResolveNh : public ydk::Entity
{
    public:
        BackupPathsetResolveNh();
        ~BackupPathsetResolveNh();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: MgmtStaticAddr
        ydk::YLeaf ipv4_prefix; //type: string
        ydk::YLeaf ipv6_prefix; //type: string

}; // MplsStatic::LocalLabels::LocalLabel::BackupPathsetResolveNh


class MplsStatic::LocalLabels::LocalLabel::PathInfo : public ydk::Entity
{
    public:
        PathInfo();
        ~PathInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf path_number; //type: uint32
        ydk::YLeaf type; //type: MgmtStaticPath
        ydk::YLeaf path_role; //type: MplsStaticPathRole
        ydk::YLeaf path_id; //type: uint8
        ydk::YLeaf backup_id; //type: uint8
        ydk::YLeaf status; //type: MgmtMplsStaticPathStatus
        class Nexthop; //type: MplsStatic::LocalLabels::LocalLabel::PathInfo::Nexthop

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_static_oper::MplsStatic::LocalLabels::LocalLabel::PathInfo::Nexthop> nexthop;
        
}; // MplsStatic::LocalLabels::LocalLabel::PathInfo


class MplsStatic::LocalLabels::LocalLabel::PathInfo::Nexthop : public ydk::Entity
{
    public:
        Nexthop();
        ~Nexthop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label; //type: uint32
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf afi; //type: MgmtStaticLspAfi
        class Address; //type: MplsStatic::LocalLabels::LocalLabel::PathInfo::Nexthop::Address

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_static_oper::MplsStatic::LocalLabels::LocalLabel::PathInfo::Nexthop::Address> address;
        
}; // MplsStatic::LocalLabels::LocalLabel::PathInfo::Nexthop


class MplsStatic::LocalLabels::LocalLabel::PathInfo::Nexthop::Address : public ydk::Entity
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

        ydk::YLeaf af_name; //type: MgmtStaticAddr
        ydk::YLeaf ipv4_prefix; //type: string
        ydk::YLeaf ipv6_prefix; //type: string

}; // MplsStatic::LocalLabels::LocalLabel::PathInfo::Nexthop::Address


class MplsStatic::LocalLabels::LocalLabel::BackupPathInfo : public ydk::Entity
{
    public:
        BackupPathInfo();
        ~BackupPathInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf path_number; //type: uint32
        ydk::YLeaf type; //type: MgmtStaticPath
        ydk::YLeaf path_role; //type: MplsStaticPathRole
        ydk::YLeaf path_id; //type: uint8
        ydk::YLeaf backup_id; //type: uint8
        ydk::YLeaf status; //type: MgmtMplsStaticPathStatus
        class Nexthop; //type: MplsStatic::LocalLabels::LocalLabel::BackupPathInfo::Nexthop

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_static_oper::MplsStatic::LocalLabels::LocalLabel::BackupPathInfo::Nexthop> nexthop;
        
}; // MplsStatic::LocalLabels::LocalLabel::BackupPathInfo


class MplsStatic::LocalLabels::LocalLabel::BackupPathInfo::Nexthop : public ydk::Entity
{
    public:
        Nexthop();
        ~Nexthop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label; //type: uint32
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf afi; //type: MgmtStaticLspAfi
        class Address; //type: MplsStatic::LocalLabels::LocalLabel::BackupPathInfo::Nexthop::Address

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_static_oper::MplsStatic::LocalLabels::LocalLabel::BackupPathInfo::Nexthop::Address> address;
        
}; // MplsStatic::LocalLabels::LocalLabel::BackupPathInfo::Nexthop


class MplsStatic::LocalLabels::LocalLabel::BackupPathInfo::Nexthop::Address : public ydk::Entity
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

        ydk::YLeaf af_name; //type: MgmtStaticAddr
        ydk::YLeaf ipv4_prefix; //type: string
        ydk::YLeaf ipv6_prefix; //type: string

}; // MplsStatic::LocalLabels::LocalLabel::BackupPathInfo::Nexthop::Address

class MgmtMplsStaticPathStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf path_next_hop_none;
        static const ydk::Enum::YLeaf path_next_hop_interface_down;
        static const ydk::Enum::YLeaf path_next_hop_valid;
        static const ydk::Enum::YLeaf resolve_failed;
        static const ydk::Enum::YLeaf frr_backup;
        static const ydk::Enum::YLeaf backup;

        static int get_enum_value(const std::string & name) {
            if (name == "path-next-hop-none") return 0;
            if (name == "path-next-hop-interface-down") return 1;
            if (name == "path-next-hop-valid") return 2;
            if (name == "resolve-failed") return 3;
            if (name == "frr-backup") return 4;
            if (name == "backup") return 5;
            return -1;
        }
};

class MgmtStaticPath : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf cross_connect_path;
        static const ydk::Enum::YLeaf pop_lookup_path;

        static int get_enum_value(const std::string & name) {
            if (name == "cross-connect-path") return 0;
            if (name == "pop-lookup-path") return 1;
            return -1;
        }
};

class MgmtMplsStaticLabelMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf per_prefix;
        static const ydk::Enum::YLeaf per_vrf;
        static const ydk::Enum::YLeaf cross_connect;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "per-prefix") return 1;
            if (name == "per-vrf") return 2;
            if (name == "cross-connect") return 3;
            return -1;
        }
};

class MgmtStaticLspAfi : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf not_applicable;
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv6;

        static int get_enum_value(const std::string & name) {
            if (name == "not-applicable") return 0;
            if (name == "ipv4") return 1;
            if (name == "ipv6") return 2;
            return -1;
        }
};

class MgmtMplsStaticLabelStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf not_created;
        static const ydk::Enum::YLeaf vrf_down;
        static const ydk::Enum::YLeaf rewrite_vrf_down;
        static const ydk::Enum::YLeaf lsd_disconnected;
        static const ydk::Enum::YLeaf lsd_failed;
        static const ydk::Enum::YLeaf wait_for_lsd_reply;
        static const ydk::Enum::YLeaf label_created;
        static const ydk::Enum::YLeaf label_create_failed;
        static const ydk::Enum::YLeaf label_rewrite_failed;
        static const ydk::Enum::YLeaf rewrite_next_hop_interface_down;
        static const ydk::Enum::YLeaf label_discrepancy;
        static const ydk::Enum::YLeaf rewrite_discrepancy;
        static const ydk::Enum::YLeaf rewrite_nexthop_unresolved;
        static const ydk::Enum::YLeaf label_status_unknown;

        static int get_enum_value(const std::string & name) {
            if (name == "not-created") return 0;
            if (name == "vrf-down") return 1;
            if (name == "rewrite-vrf-down") return 2;
            if (name == "lsd-disconnected") return 3;
            if (name == "lsd-failed") return 4;
            if (name == "wait-for-lsd-reply") return 5;
            if (name == "label-created") return 6;
            if (name == "label-create-failed") return 7;
            if (name == "label-rewrite-failed") return 8;
            if (name == "rewrite-next-hop-interface-down") return 9;
            if (name == "label-discrepancy") return 10;
            if (name == "rewrite-discrepancy") return 11;
            if (name == "rewrite-nexthop-unresolved") return 12;
            if (name == "label-status-unknown") return 13;
            return -1;
        }
};

class MgmtStaticAddr : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf not_applicable;
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv6;

        static int get_enum_value(const std::string & name) {
            if (name == "not-applicable") return 0;
            if (name == "ipv4") return 1;
            if (name == "ipv6") return 2;
            return -1;
        }
};

class MplsStaticPathRole : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf primary;
        static const ydk::Enum::YLeaf backup;
        static const ydk::Enum::YLeaf primary_and_backup;

        static int get_enum_value(const std::string & name) {
            if (name == "primary") return 0;
            if (name == "backup") return 1;
            if (name == "primary-and-backup") return 2;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_MPLS_STATIC_OPER_ */

