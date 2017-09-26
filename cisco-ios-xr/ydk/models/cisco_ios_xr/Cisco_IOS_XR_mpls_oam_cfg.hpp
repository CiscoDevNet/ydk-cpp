#ifndef _CISCO_IOS_XR_MPLS_OAM_CFG_
#define _CISCO_IOS_XR_MPLS_OAM_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_mpls_oam_cfg {

class MplsOam : public ydk::Entity
{
    public:
        MplsOam();
        ~MplsOam();

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

        ydk::YLeaf enable_oam; //type: empty
        ydk::YLeaf disable_vendor_extension; //type: empty
        class ReplyMode; //type: MplsOam::ReplyMode

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_oam_cfg::MplsOam::ReplyMode> reply_mode;
        
}; // MplsOam


class MplsOam::ReplyMode : public ydk::Entity
{
    public:
        ReplyMode();
        ~ReplyMode();

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

        class ControlChannel; //type: MplsOam::ReplyMode::ControlChannel

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_oam_cfg::MplsOam::ReplyMode::ControlChannel> control_channel;
        
}; // MplsOam::ReplyMode


class MplsOam::ReplyMode::ControlChannel : public ydk::Entity
{
    public:
        ControlChannel();
        ~ControlChannel();

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

        ydk::YLeaf allow_reverse_lsp; //type: empty

}; // MplsOam::ReplyMode::ControlChannel


}
}

#endif /* _CISCO_IOS_XR_MPLS_OAM_CFG_ */

