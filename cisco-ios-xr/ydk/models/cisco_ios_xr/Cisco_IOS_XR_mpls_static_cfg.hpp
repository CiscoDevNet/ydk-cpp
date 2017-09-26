#ifndef _CISCO_IOS_XR_MPLS_STATIC_CFG_
#define _CISCO_IOS_XR_MPLS_STATIC_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_mpls_static_cfg {

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

        ydk::YLeaf enable; //type: empty
        class Vrfs; //type: MplsStatic::Vrfs
        class Interfaces; //type: MplsStatic::Interfaces
        class DefaultVrf; //type: MplsStatic::DefaultVrf

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_static_cfg::MplsStatic::DefaultVrf> default_vrf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_static_cfg::MplsStatic::Interfaces> interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_static_cfg::MplsStatic::Vrfs> vrfs;
        
}; // MplsStatic


class MplsStatic::DefaultVrf : public ydk::Entity
{
    public:
        DefaultVrf();
        ~DefaultVrf();

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

        ydk::YLeaf enable; //type: empty
        class LabelSwitchedPaths; //type: MplsStatic::DefaultVrf::LabelSwitchedPaths
        class Afs; //type: MplsStatic::DefaultVrf::Afs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_static_cfg::MplsStatic::DefaultVrf::Afs> afs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_static_cfg::MplsStatic::DefaultVrf::LabelSwitchedPaths> label_switched_paths;
        
}; // MplsStatic::DefaultVrf


class MplsStatic::DefaultVrf::Afs : public ydk::Entity
{
    public:
        Afs();
        ~Afs();

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

        class Af; //type: MplsStatic::DefaultVrf::Afs::Af

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_static_cfg::MplsStatic::DefaultVrf::Afs::Af> > af;
        
}; // MplsStatic::DefaultVrf::Afs


class MplsStatic::DefaultVrf::Afs::Af : public ydk::Entity
{
    public:
        Af();
        ~Af();

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

        ydk::YLeaf afi; //type: MplsStaticAddressFamily
        ydk::YLeaf enable; //type: empty
        class TopLabelHash; //type: MplsStatic::DefaultVrf::Afs::Af::TopLabelHash
        class LocalLabels; //type: MplsStatic::DefaultVrf::Afs::Af::LocalLabels

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_static_cfg::MplsStatic::DefaultVrf::Afs::Af::LocalLabels> local_labels;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_static_cfg::MplsStatic::DefaultVrf::Afs::Af::TopLabelHash> top_label_hash;
        
}; // MplsStatic::DefaultVrf::Afs::Af


class MplsStatic::DefaultVrf::Afs::Af::LocalLabels : public ydk::Entity
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

        class LocalLabel; //type: MplsStatic::DefaultVrf::Afs::Af::LocalLabels::LocalLabel

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_static_cfg::MplsStatic::DefaultVrf::Afs::Af::LocalLabels::LocalLabel> > local_label;
        
}; // MplsStatic::DefaultVrf::Afs::Af::LocalLabels


class MplsStatic::DefaultVrf::Afs::Af::LocalLabels::LocalLabel : public ydk::Entity
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
        class LabelType; //type: MplsStatic::DefaultVrf::Afs::Af::LocalLabels::LocalLabel::LabelType
        class Paths; //type: MplsStatic::DefaultVrf::Afs::Af::LocalLabels::LocalLabel::Paths

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_static_cfg::MplsStatic::DefaultVrf::Afs::Af::LocalLabels::LocalLabel::LabelType> label_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_static_cfg::MplsStatic::DefaultVrf::Afs::Af::LocalLabels::LocalLabel::Paths> paths;
        
}; // MplsStatic::DefaultVrf::Afs::Af::LocalLabels::LocalLabel


class MplsStatic::DefaultVrf::Afs::Af::LocalLabels::LocalLabel::LabelType : public ydk::Entity
{
    public:
        LabelType();
        ~LabelType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label_mode; //type: MplsStaticLabelMode
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_length; //type: int32

}; // MplsStatic::DefaultVrf::Afs::Af::LocalLabels::LocalLabel::LabelType


class MplsStatic::DefaultVrf::Afs::Af::LocalLabels::LocalLabel::Paths : public ydk::Entity
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

        class Path; //type: MplsStatic::DefaultVrf::Afs::Af::LocalLabels::LocalLabel::Paths::Path

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_static_cfg::MplsStatic::DefaultVrf::Afs::Af::LocalLabels::LocalLabel::Paths::Path> > path;
        
}; // MplsStatic::DefaultVrf::Afs::Af::LocalLabels::LocalLabel::Paths


class MplsStatic::DefaultVrf::Afs::Af::LocalLabels::LocalLabel::Paths::Path : public ydk::Entity
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

        ydk::YLeaf path_id; //type: uint32
        ydk::YLeaf path_type; //type: MplsStaticPath
        ydk::YLeaf label_type; //type: MplsStaticOutLabelTypes
        ydk::YLeaf next_hop_label; //type: uint32
        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf afi; //type: MplsStaticNhAddressFamily
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf nh_mode; //type: MplsStaticNhMode
        ydk::YLeaf path_role; //type: MplsStaticPathRole
        ydk::YLeaf backup_id; //type: uint32

}; // MplsStatic::DefaultVrf::Afs::Af::LocalLabels::LocalLabel::Paths::Path


class MplsStatic::DefaultVrf::Afs::Af::TopLabelHash : public ydk::Entity
{
    public:
        TopLabelHash();
        ~TopLabelHash();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LocalLabels; //type: MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_static_cfg::MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels> local_labels;
        
}; // MplsStatic::DefaultVrf::Afs::Af::TopLabelHash


class MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels : public ydk::Entity
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

        class LocalLabel; //type: MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_static_cfg::MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel> > local_label;
        
}; // MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels


class MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel : public ydk::Entity
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
        class LabelType; //type: MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::LabelType
        class Paths; //type: MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::Paths

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_static_cfg::MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::LabelType> label_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_static_cfg::MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::Paths> paths;
        
}; // MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel


class MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::LabelType : public ydk::Entity
{
    public:
        LabelType();
        ~LabelType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label_mode; //type: MplsStaticLabelMode
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_length; //type: int32

}; // MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::LabelType


class MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::Paths : public ydk::Entity
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

        class Path; //type: MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::Paths::Path

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_static_cfg::MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::Paths::Path> > path;
        
}; // MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::Paths


class MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::Paths::Path : public ydk::Entity
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

        ydk::YLeaf path_id; //type: uint32
        ydk::YLeaf path_type; //type: MplsStaticPath
        ydk::YLeaf label_type; //type: MplsStaticOutLabelTypes
        ydk::YLeaf next_hop_label; //type: uint32
        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf afi; //type: MplsStaticNhAddressFamily
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf nh_mode; //type: MplsStaticNhMode
        ydk::YLeaf path_role; //type: MplsStaticPathRole
        ydk::YLeaf backup_id; //type: uint32

}; // MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::Paths::Path


class MplsStatic::DefaultVrf::LabelSwitchedPaths : public ydk::Entity
{
    public:
        LabelSwitchedPaths();
        ~LabelSwitchedPaths();

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

        class LabelSwitchedPath; //type: MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_static_cfg::MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath> > label_switched_path;
        
}; // MplsStatic::DefaultVrf::LabelSwitchedPaths


class MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath : public ydk::Entity
{
    public:
        LabelSwitchedPath();
        ~LabelSwitchedPath();

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

        ydk::YLeaf lsp_name; //type: string
        ydk::YLeaf enable; //type: empty
        class BackupPaths; //type: MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::BackupPaths
        class InLabel; //type: MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::InLabel
        class Paths; //type: MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::Paths

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_static_cfg::MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::BackupPaths> backup_paths;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_static_cfg::MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::InLabel> in_label;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_static_cfg::MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::Paths> paths;
        
}; // MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath


class MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::BackupPaths : public ydk::Entity
{
    public:
        BackupPaths();
        ~BackupPaths();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Path; //type: MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::BackupPaths::Path

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_static_cfg::MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::BackupPaths::Path> > path;
        
}; // MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::BackupPaths


class MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::BackupPaths::Path : public ydk::Entity
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

        ydk::YLeaf path_id; //type: uint32
        ydk::YLeaf path_type; //type: MplsStaticPath
        ydk::YLeaf label_type; //type: MplsStaticOutLabelTypes
        ydk::YLeaf next_hop_label; //type: uint32
        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf afi; //type: MplsStaticNhAddressFamily
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf nh_mode; //type: MplsStaticNhMode
        ydk::YLeaf path_role; //type: MplsStaticPathRole
        ydk::YLeaf backup_id; //type: uint32

}; // MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::BackupPaths::Path


class MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::InLabel : public ydk::Entity
{
    public:
        InLabel();
        ~InLabel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in_label_value; //type: uint32
        ydk::YLeaf label_mode; //type: MplsStaticLabelMode
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_length; //type: int32
        ydk::YLeaf tlh_mode; //type: boolean

}; // MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::InLabel


class MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::Paths : public ydk::Entity
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

        class Path; //type: MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::Paths::Path

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_static_cfg::MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::Paths::Path> > path;
        
}; // MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::Paths


class MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::Paths::Path : public ydk::Entity
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

        ydk::YLeaf path_id; //type: uint32
        ydk::YLeaf path_type; //type: MplsStaticPath
        ydk::YLeaf label_type; //type: MplsStaticOutLabelTypes
        ydk::YLeaf next_hop_label; //type: uint32
        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf afi; //type: MplsStaticNhAddressFamily
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf nh_mode; //type: MplsStaticNhMode
        ydk::YLeaf path_role; //type: MplsStaticPathRole
        ydk::YLeaf backup_id; //type: uint32

}; // MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::Paths::Path


class MplsStatic::Interfaces : public ydk::Entity
{
    public:
        Interfaces();
        ~Interfaces();

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

        class Interface; //type: MplsStatic::Interfaces::Interface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_static_cfg::MplsStatic::Interfaces::Interface> > interface;
        
}; // MplsStatic::Interfaces


class MplsStatic::Interfaces::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

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

        ydk::YLeaf interface_name; //type: string

}; // MplsStatic::Interfaces::Interface


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

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_static_cfg::MplsStatic::Vrfs::Vrf> > vrf;
        
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
        ydk::YLeaf enable; //type: empty
        class LabelSwitchedPaths; //type: MplsStatic::Vrfs::Vrf::LabelSwitchedPaths
        class Afs; //type: MplsStatic::Vrfs::Vrf::Afs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_static_cfg::MplsStatic::Vrfs::Vrf::Afs> afs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_static_cfg::MplsStatic::Vrfs::Vrf::LabelSwitchedPaths> label_switched_paths;
        
}; // MplsStatic::Vrfs::Vrf


class MplsStatic::Vrfs::Vrf::Afs : public ydk::Entity
{
    public:
        Afs();
        ~Afs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Af; //type: MplsStatic::Vrfs::Vrf::Afs::Af

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_static_cfg::MplsStatic::Vrfs::Vrf::Afs::Af> > af;
        
}; // MplsStatic::Vrfs::Vrf::Afs


class MplsStatic::Vrfs::Vrf::Afs::Af : public ydk::Entity
{
    public:
        Af();
        ~Af();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: MplsStaticAddressFamily
        ydk::YLeaf enable; //type: empty
        class TopLabelHash; //type: MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash
        class LocalLabels; //type: MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_static_cfg::MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels> local_labels;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_static_cfg::MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash> top_label_hash;
        
}; // MplsStatic::Vrfs::Vrf::Afs::Af


class MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels : public ydk::Entity
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

        class LocalLabel; //type: MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::LocalLabel

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_static_cfg::MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::LocalLabel> > local_label;
        
}; // MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels


class MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::LocalLabel : public ydk::Entity
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
        class LabelType; //type: MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::LocalLabel::LabelType
        class Paths; //type: MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::LocalLabel::Paths

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_static_cfg::MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::LocalLabel::LabelType> label_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_static_cfg::MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::LocalLabel::Paths> paths;
        
}; // MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::LocalLabel


class MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::LocalLabel::LabelType : public ydk::Entity
{
    public:
        LabelType();
        ~LabelType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label_mode; //type: MplsStaticLabelMode
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_length; //type: int32

}; // MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::LocalLabel::LabelType


class MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::LocalLabel::Paths : public ydk::Entity
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

        class Path; //type: MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::LocalLabel::Paths::Path

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_static_cfg::MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::LocalLabel::Paths::Path> > path;
        
}; // MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::LocalLabel::Paths


class MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::LocalLabel::Paths::Path : public ydk::Entity
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

        ydk::YLeaf path_id; //type: uint32
        ydk::YLeaf path_type; //type: MplsStaticPath
        ydk::YLeaf label_type; //type: MplsStaticOutLabelTypes
        ydk::YLeaf next_hop_label; //type: uint32
        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf afi; //type: MplsStaticNhAddressFamily
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf nh_mode; //type: MplsStaticNhMode
        ydk::YLeaf path_role; //type: MplsStaticPathRole
        ydk::YLeaf backup_id; //type: uint32

}; // MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::LocalLabel::Paths::Path


class MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash : public ydk::Entity
{
    public:
        TopLabelHash();
        ~TopLabelHash();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LocalLabels; //type: MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_static_cfg::MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels> local_labels;
        
}; // MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash


class MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels : public ydk::Entity
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

        class LocalLabel; //type: MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_static_cfg::MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel> > local_label;
        
}; // MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels


class MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel : public ydk::Entity
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
        class LabelType; //type: MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::LabelType
        class Paths; //type: MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::Paths

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_static_cfg::MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::LabelType> label_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_static_cfg::MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::Paths> paths;
        
}; // MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel


class MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::LabelType : public ydk::Entity
{
    public:
        LabelType();
        ~LabelType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label_mode; //type: MplsStaticLabelMode
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_length; //type: int32

}; // MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::LabelType


class MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::Paths : public ydk::Entity
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

        class Path; //type: MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::Paths::Path

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_static_cfg::MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::Paths::Path> > path;
        
}; // MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::Paths


class MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::Paths::Path : public ydk::Entity
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

        ydk::YLeaf path_id; //type: uint32
        ydk::YLeaf path_type; //type: MplsStaticPath
        ydk::YLeaf label_type; //type: MplsStaticOutLabelTypes
        ydk::YLeaf next_hop_label; //type: uint32
        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf afi; //type: MplsStaticNhAddressFamily
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf nh_mode; //type: MplsStaticNhMode
        ydk::YLeaf path_role; //type: MplsStaticPathRole
        ydk::YLeaf backup_id; //type: uint32

}; // MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::Paths::Path


class MplsStatic::Vrfs::Vrf::LabelSwitchedPaths : public ydk::Entity
{
    public:
        LabelSwitchedPaths();
        ~LabelSwitchedPaths();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LabelSwitchedPath; //type: MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_static_cfg::MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath> > label_switched_path;
        
}; // MplsStatic::Vrfs::Vrf::LabelSwitchedPaths


class MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath : public ydk::Entity
{
    public:
        LabelSwitchedPath();
        ~LabelSwitchedPath();

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
        ydk::YLeaf enable; //type: empty
        class BackupPaths; //type: MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::BackupPaths
        class InLabel; //type: MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::InLabel
        class Paths; //type: MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::Paths

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_static_cfg::MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::BackupPaths> backup_paths;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_static_cfg::MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::InLabel> in_label;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_static_cfg::MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::Paths> paths;
        
}; // MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath


class MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::BackupPaths : public ydk::Entity
{
    public:
        BackupPaths();
        ~BackupPaths();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Path; //type: MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::BackupPaths::Path

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_static_cfg::MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::BackupPaths::Path> > path;
        
}; // MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::BackupPaths


class MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::BackupPaths::Path : public ydk::Entity
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

        ydk::YLeaf path_id; //type: uint32
        ydk::YLeaf path_type; //type: MplsStaticPath
        ydk::YLeaf label_type; //type: MplsStaticOutLabelTypes
        ydk::YLeaf next_hop_label; //type: uint32
        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf afi; //type: MplsStaticNhAddressFamily
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf nh_mode; //type: MplsStaticNhMode
        ydk::YLeaf path_role; //type: MplsStaticPathRole
        ydk::YLeaf backup_id; //type: uint32

}; // MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::BackupPaths::Path


class MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::InLabel : public ydk::Entity
{
    public:
        InLabel();
        ~InLabel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in_label_value; //type: uint32
        ydk::YLeaf label_mode; //type: MplsStaticLabelMode
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_length; //type: int32
        ydk::YLeaf tlh_mode; //type: boolean

}; // MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::InLabel


class MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::Paths : public ydk::Entity
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

        class Path; //type: MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::Paths::Path

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_static_cfg::MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::Paths::Path> > path;
        
}; // MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::Paths


class MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::Paths::Path : public ydk::Entity
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

        ydk::YLeaf path_id; //type: uint32
        ydk::YLeaf path_type; //type: MplsStaticPath
        ydk::YLeaf label_type; //type: MplsStaticOutLabelTypes
        ydk::YLeaf next_hop_label; //type: uint32
        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf afi; //type: MplsStaticNhAddressFamily
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf nh_mode; //type: MplsStaticNhMode
        ydk::YLeaf path_role; //type: MplsStaticPathRole
        ydk::YLeaf backup_id; //type: uint32

}; // MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::Paths::Path

class MplsStaticPath : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf pop_and_lookup;
        static const ydk::Enum::YLeaf cross_connect;

};

class MplsStaticNhAddressFamily : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv6;

};

class MplsStaticAddressFamily : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4_unicast;

};

class MplsStaticOutLabelTypes : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf out_label;
        static const ydk::Enum::YLeaf pop;
        static const ydk::Enum::YLeaf exp_null;
        static const ydk::Enum::YLeaf ipv6_explicit_null;

};

class MplsStaticLabelMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf per_vrf;
        static const ydk::Enum::YLeaf per_prefix;
        static const ydk::Enum::YLeaf lsp;

};

class MplsStaticPathRole : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf primary;
        static const ydk::Enum::YLeaf backup;
        static const ydk::Enum::YLeaf primary_backup;

};

class MplsStaticNhMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf configured;
        static const ydk::Enum::YLeaf resolve;

};


}
}

#endif /* _CISCO_IOS_XR_MPLS_STATIC_CFG_ */

