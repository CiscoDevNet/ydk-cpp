#ifndef _CISCO_IOS_XR_ASR9K_LC_FCA_OPER_
#define _CISCO_IOS_XR_ASR9K_LC_FCA_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_asr9k_lc_fca_oper {

class MpaInternal : public ydk::Entity
{
    public:
        MpaInternal();
        ~MpaInternal();

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

        class Nodes; //type: MpaInternal::Nodes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_lc_fca_oper::MpaInternal::Nodes> nodes;
        
}; // MpaInternal


class MpaInternal::Nodes : public ydk::Entity
{
    public:
        Nodes();
        ~Nodes();

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

        class Node; //type: MpaInternal::Nodes::Node

        ydk::YList node;
        
}; // MpaInternal::Nodes


class MpaInternal::Nodes::Node : public ydk::Entity
{
    public:
        Node();
        ~Node();

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

        ydk::YLeaf node; //type: string
        class Bay; //type: MpaInternal::Nodes::Node::Bay

        ydk::YList bay;
        
}; // MpaInternal::Nodes::Node


class MpaInternal::Nodes::Node::Bay : public ydk::Entity
{
    public:
        Bay();
        ~Bay();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: uint32
        class Ifsubsies; //type: MpaInternal::Nodes::Node::Bay::Ifsubsies

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_lc_fca_oper::MpaInternal::Nodes::Node::Bay::Ifsubsies> ifsubsies;
        
}; // MpaInternal::Nodes::Node::Bay


class MpaInternal::Nodes::Node::Bay::Ifsubsies : public ydk::Entity
{
    public:
        Ifsubsies();
        ~Ifsubsies();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ifsubsy; //type: MpaInternal::Nodes::Node::Bay::Ifsubsies::Ifsubsy

        ydk::YList ifsubsy;
        
}; // MpaInternal::Nodes::Node::Bay::Ifsubsies


class MpaInternal::Nodes::Node::Bay::Ifsubsies::Ifsubsy : public ydk::Entity
{
    public:
        Ifsubsy();
        ~Ifsubsy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: string
        class MpaInternalInfo; //type: MpaInternal::Nodes::Node::Bay::Ifsubsies::Ifsubsy::MpaInternalInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_lc_fca_oper::MpaInternal::Nodes::Node::Bay::Ifsubsies::Ifsubsy::MpaInternalInfo> mpa_internal_info;
        
}; // MpaInternal::Nodes::Node::Bay::Ifsubsies::Ifsubsy


class MpaInternal::Nodes::Node::Bay::Ifsubsies::Ifsubsy::MpaInternalInfo : public ydk::Entity
{
    public:
        MpaInternalInfo();
        ~MpaInternalInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bay; //type: uint32
        ydk::YLeaf ifsubsys; //type: uint32
        ydk::YLeaf if_state; //type: uint8
        ydk::YLeaf if_event; //type: uint8
        ydk::YLeaf ep_type; //type: uint32
        ydk::YLeaf ep_state; //type: uint8
        ydk::YLeaf ep_presence; //type: uint8
        ydk::YLeaf ep_idprom_major; //type: uint8
        ydk::YLeaf ep_idprom_minor; //type: uint8
        ydk::YLeaf ep_idprom_data; //type: string

}; // MpaInternal::Nodes::Node::Bay::Ifsubsies::Ifsubsy::MpaInternalInfo

class Mpa : public ydk::Entity
{
    public:
        Mpa();
        ~Mpa();

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

        class Nodes; //type: Mpa::Nodes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_lc_fca_oper::Mpa::Nodes> nodes;
        
}; // Mpa


class Mpa::Nodes : public ydk::Entity
{
    public:
        Nodes();
        ~Nodes();

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

        class Node; //type: Mpa::Nodes::Node

        ydk::YList node;
        
}; // Mpa::Nodes


class Mpa::Nodes::Node : public ydk::Entity
{
    public:
        Node();
        ~Node();

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

        ydk::YLeaf node; //type: string
        class Bay; //type: Mpa::Nodes::Node::Bay

        ydk::YList bay;
        
}; // Mpa::Nodes::Node


class Mpa::Nodes::Node::Bay : public ydk::Entity
{
    public:
        Bay();
        ~Bay();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: uint32
        class MpaDetailTable; //type: Mpa::Nodes::Node::Bay::MpaDetailTable

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_lc_fca_oper::Mpa::Nodes::Node::Bay::MpaDetailTable> mpa_detail_table;
        
}; // Mpa::Nodes::Node::Bay


class Mpa::Nodes::Node::Bay::MpaDetailTable : public ydk::Entity
{
    public:
        MpaDetailTable();
        ~MpaDetailTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MpaDetail; //type: Mpa::Nodes::Node::Bay::MpaDetailTable::MpaDetail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_lc_fca_oper::Mpa::Nodes::Node::Bay::MpaDetailTable::MpaDetail> mpa_detail;
        
}; // Mpa::Nodes::Node::Bay::MpaDetailTable


class Mpa::Nodes::Node::Bay::MpaDetailTable::MpaDetail : public ydk::Entity
{
    public:
        MpaDetail();
        ~MpaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bay_number; //type: uint16
        ydk::YLeaf is_spa_inserted; //type: boolean
        ydk::YLeaf spa_type; //type: uint16
        ydk::YLeaf is_spa_admin_up; //type: boolean
        ydk::YLeaf spa_oper_state; //type: SpaOperState
        ydk::YLeaf is_spa_power_admin_up; //type: boolean
        ydk::YLeaf is_spa_powered; //type: boolean
        ydk::YLeaf is_spa_in_reset; //type: boolean
        ydk::YLeaf last_reset_reason; //type: SpaResetReason
        ydk::YLeaf last_failure_reason; //type: SpaFailureReason
        ydk::YLeaf insertion_time; //type: uint32
        ydk::YLeaf last_ready_time; //type: uint32
        ydk::YLeaf up_time; //type: uint32

}; // Mpa::Nodes::Node::Bay::MpaDetailTable::MpaDetail

class SpaResetReason : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf spa_reset_reason_unknown;
        static const ydk::Enum::YLeaf spa_reset_reason_manual;
        static const ydk::Enum::YLeaf spa_reset_reason_fpd_upgrade;
        static const ydk::Enum::YLeaf spa_reset_reason_audit_fail;
        static const ydk::Enum::YLeaf spa_reset_reason_failure;

        static int get_enum_value(const std::string & name) {
            if (name == "spa-reset-reason-unknown") return 1;
            if (name == "spa-reset-reason-manual") return 2;
            if (name == "spa-reset-reason-fpd-upgrade") return 3;
            if (name == "spa-reset-reason-audit-fail") return 4;
            if (name == "spa-reset-reason-failure") return 5;
            return -1;
        }
};

class SpaFailureReason : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf spa_failure_reason_unknown;
        static const ydk::Enum::YLeaf spa_failure_reason_spi_failure;
        static const ydk::Enum::YLeaf spa_failure_reason_boot;
        static const ydk::Enum::YLeaf spa_failure_reason_hw_failed;
        static const ydk::Enum::YLeaf spa_failure_reason_sw_failed;
        static const ydk::Enum::YLeaf spa_failure_reason_sw_restart;
        static const ydk::Enum::YLeaf spa_failure_reason_check_fpd;
        static const ydk::Enum::YLeaf spa_failure_reason_read_type;

        static int get_enum_value(const std::string & name) {
            if (name == "spa-failure-reason-unknown") return 1;
            if (name == "spa-failure-reason-spi-failure") return 2;
            if (name == "spa-failure-reason-boot") return 3;
            if (name == "spa-failure-reason-hw-failed") return 4;
            if (name == "spa-failure-reason-sw-failed") return 5;
            if (name == "spa-failure-reason-sw-restart") return 6;
            if (name == "spa-failure-reason-check-fpd") return 7;
            if (name == "spa-failure-reason-read-type") return 8;
            return -1;
        }
};

class SpaOperState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf spa_state_reset;
        static const ydk::Enum::YLeaf spa_state_failed;
        static const ydk::Enum::YLeaf spa_state_booting;
        static const ydk::Enum::YLeaf spa_state_ready;

        static int get_enum_value(const std::string & name) {
            if (name == "spa-state-reset") return 1;
            if (name == "spa-state-failed") return 2;
            if (name == "spa-state-booting") return 3;
            if (name == "spa-state-ready") return 4;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_ASR9K_LC_FCA_OPER_ */

