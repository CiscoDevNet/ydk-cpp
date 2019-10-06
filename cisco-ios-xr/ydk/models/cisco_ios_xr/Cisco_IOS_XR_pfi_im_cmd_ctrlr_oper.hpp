#ifndef _CISCO_IOS_XR_PFI_IM_CMD_CTRLR_OPER_
#define _CISCO_IOS_XR_PFI_IM_CMD_CTRLR_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_pfi_im_cmd_ctrlr_oper {

class Controllers : public ydk::Entity
{
    public:
        Controllers();
        ~Controllers();

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

        class Controllers_; //type: Controllers::Controllers_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pfi_im_cmd_ctrlr_oper::Controllers::Controllers_> controllers;
        
}; // Controllers


class Controllers::Controllers_ : public ydk::Entity
{
    public:
        Controllers_();
        ~Controllers_();

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

        class Controller; //type: Controllers::Controllers_::Controller

        ydk::YList controller;
        
}; // Controllers::Controllers_


class Controllers::Controllers_::Controller : public ydk::Entity
{
    public:
        Controller();
        ~Controller();

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

        ydk::YLeaf interafce_name; //type: string
        ydk::YLeaf controller; //type: string
        ydk::YLeaf state; //type: ImStateEnum
        ydk::YLeaf description; //type: string

}; // Controllers::Controllers_::Controller

class ImStateEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf im_state_not_ready;
        static const ydk::Enum::YLeaf im_state_admin_down;
        static const ydk::Enum::YLeaf im_state_down;
        static const ydk::Enum::YLeaf im_state_up;
        static const ydk::Enum::YLeaf im_state_shutdown;
        static const ydk::Enum::YLeaf im_state_err_disable;
        static const ydk::Enum::YLeaf im_state_down_immediate;
        static const ydk::Enum::YLeaf im_state_down_immediate_admin;
        static const ydk::Enum::YLeaf im_state_down_graceful;
        static const ydk::Enum::YLeaf im_state_begin_shutdown;
        static const ydk::Enum::YLeaf im_state_end_shutdown;
        static const ydk::Enum::YLeaf im_state_begin_error_disable;
        static const ydk::Enum::YLeaf im_state_end_error_disable;
        static const ydk::Enum::YLeaf im_state_begin_down_graceful;
        static const ydk::Enum::YLeaf im_state_reset;
        static const ydk::Enum::YLeaf im_state_operational;
        static const ydk::Enum::YLeaf im_state_not_operational;
        static const ydk::Enum::YLeaf im_state_unknown;
        static const ydk::Enum::YLeaf im_state_last;

        static int get_enum_value(const std::string & name) {
            if (name == "im-state-not-ready") return 0;
            if (name == "im-state-admin-down") return 1;
            if (name == "im-state-down") return 2;
            if (name == "im-state-up") return 3;
            if (name == "im-state-shutdown") return 4;
            if (name == "im-state-err-disable") return 5;
            if (name == "im-state-down-immediate") return 6;
            if (name == "im-state-down-immediate-admin") return 7;
            if (name == "im-state-down-graceful") return 8;
            if (name == "im-state-begin-shutdown") return 9;
            if (name == "im-state-end-shutdown") return 10;
            if (name == "im-state-begin-error-disable") return 11;
            if (name == "im-state-end-error-disable") return 12;
            if (name == "im-state-begin-down-graceful") return 13;
            if (name == "im-state-reset") return 14;
            if (name == "im-state-operational") return 15;
            if (name == "im-state-not-operational") return 16;
            if (name == "im-state-unknown") return 17;
            if (name == "im-state-last") return 18;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_PFI_IM_CMD_CTRLR_OPER_ */

