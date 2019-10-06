#ifndef _CISCO_IOS_XE_SPANNING_TREE_OPER_
#define _CISCO_IOS_XE_SPANNING_TREE_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_spanning_tree_oper {

class StpDetails : public ydk::Entity
{
    public:
        StpDetails();
        ~StpDetails();

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

        class StpDetail; //type: StpDetails::StpDetail
        class StpGlobal; //type: StpDetails::StpGlobal

        ydk::YList stp_detail;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_spanning_tree_oper::StpDetails::StpGlobal> stp_global; // presence node
        
}; // StpDetails


class StpDetails::StpDetail : public ydk::Entity
{
    public:
        StpDetail();
        ~StpDetail();

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

        ydk::YLeaf instance; //type: string
        ydk::YLeaf hello_time; //type: int32
        ydk::YLeaf max_age; //type: int32
        ydk::YLeaf forwarding_delay; //type: int32
        ydk::YLeaf hold_count; //type: uint32
        ydk::YLeaf bridge_priority; //type: uint16
        ydk::YLeaf bridge_address; //type: string
        ydk::YLeaf designated_root_priority; //type: uint32
        ydk::YLeaf designated_root_address; //type: string
        ydk::YLeaf root_port; //type: uint16
        ydk::YLeaf root_cost; //type: uint64
        ydk::YLeaf hold_time; //type: uint64
        ydk::YLeaf topology_changes; //type: uint64
        ydk::YLeaf time_of_last_topology_change; //type: string
        class Interfaces; //type: StpDetails::StpDetail::Interfaces

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_spanning_tree_oper::StpDetails::StpDetail::Interfaces> interfaces;
        
}; // StpDetails::StpDetail


class StpDetails::StpDetail::Interfaces : public ydk::Entity
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

        class Interface; //type: StpDetails::StpDetail::Interfaces::Interface

        ydk::YList interface;
        
}; // StpDetails::StpDetail::Interfaces


class StpDetails::StpDetail::Interfaces::Interface : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf cost; //type: uint64
        ydk::YLeaf port_priority; //type: uint16
        ydk::YLeaf port_num; //type: uint16
        ydk::YLeaf role; //type: StpPortRole
        ydk::YLeaf state; //type: StpPortState
        ydk::YLeaf designated_root_priority; //type: uint32
        ydk::YLeaf designated_root_address; //type: string
        ydk::YLeaf designated_cost; //type: uint32
        ydk::YLeaf designated_bridge_priority; //type: uint32
        ydk::YLeaf designated_bridge_address; //type: string
        ydk::YLeaf designated_port_priority; //type: uint16
        ydk::YLeaf designated_port_num; //type: uint16
        ydk::YLeaf forward_transitions; //type: uint64
        ydk::YLeaf link_type; //type: StpLinkRole
        ydk::YLeaf guard; //type: StpPortGuard
        ydk::YLeaf bpdu_guard; //type: StpPortBpduguard
        ydk::YLeaf bpdu_filter; //type: StpPortBpdufilter
        ydk::YLeaf bpdu_sent; //type: uint64
        ydk::YLeaf bpdu_received; //type: uint64

}; // StpDetails::StpDetail::Interfaces::Interface


class StpDetails::StpGlobal : public ydk::Entity
{
    public:
        StpGlobal();
        ~StpGlobal();

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

        ydk::YLeaf mode; //type: StpMode
        ydk::YLeaf bridge_assurance; //type: empty
        ydk::YLeaf loop_guard; //type: empty
        ydk::YLeaf bpdu_guard; //type: empty
        ydk::YLeaf bpdu_filter; //type: empty
        ydk::YLeaf etherchannel_misconfig_guard; //type: empty
        class MstOnly; //type: StpDetails::StpGlobal::MstOnly

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_spanning_tree_oper::StpDetails::StpGlobal::MstOnly> mst_only;
        
}; // StpDetails::StpGlobal


class StpDetails::StpGlobal::MstOnly : public ydk::Entity
{
    public:
        MstOnly();
        ~MstOnly();

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

        ydk::YLeaf mst_config_revision; //type: uint16
        ydk::YLeaf mst_config_name; //type: string
        ydk::YLeaf max_hops; //type: uint16

}; // StpDetails::StpGlobal::MstOnly

class StpPortBpduguard : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf stp_port_bpduguard_disable;
        static const ydk::Enum::YLeaf stp_port_bpduguard_enable;
        static const ydk::Enum::YLeaf stp_port_bpduguard_default;

        static int get_enum_value(const std::string & name) {
            if (name == "stp-port-bpduguard-disable") return 0;
            if (name == "stp-port-bpduguard-enable") return 1;
            if (name == "stp-port-bpduguard-default") return 2;
            return -1;
        }
};

class StpLinkRole : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf stp_auto;
        static const ydk::Enum::YLeaf stp_point_to_point;
        static const ydk::Enum::YLeaf stp_shared;

        static int get_enum_value(const std::string & name) {
            if (name == "stp-auto") return 0;
            if (name == "stp-point-to-point") return 1;
            if (name == "stp-shared") return 2;
            return -1;
        }
};

class StpMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf stp_mode_pvst;
        static const ydk::Enum::YLeaf stp_mode_rapid_pvst;
        static const ydk::Enum::YLeaf stp_mode_mst;

        static int get_enum_value(const std::string & name) {
            if (name == "stp-mode-pvst") return 0;
            if (name == "stp-mode-rapid-pvst") return 1;
            if (name == "stp-mode-mst") return 2;
            return -1;
        }
};

class StpPortRole : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf stp_master;
        static const ydk::Enum::YLeaf stp_alternate;
        static const ydk::Enum::YLeaf stp_root;
        static const ydk::Enum::YLeaf stp_designated;
        static const ydk::Enum::YLeaf stp_backup;

        static int get_enum_value(const std::string & name) {
            if (name == "stp-master") return 0;
            if (name == "stp-alternate") return 1;
            if (name == "stp-root") return 2;
            if (name == "stp-designated") return 3;
            if (name == "stp-backup") return 4;
            return -1;
        }
};

class StpPortState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf stp_disabled;
        static const ydk::Enum::YLeaf stp_blocking;
        static const ydk::Enum::YLeaf stp_listening;
        static const ydk::Enum::YLeaf stp_learning;
        static const ydk::Enum::YLeaf stp_forwarding;
        static const ydk::Enum::YLeaf stp_broken;
        static const ydk::Enum::YLeaf stp_invalid;

        static int get_enum_value(const std::string & name) {
            if (name == "stp-disabled") return 0;
            if (name == "stp-blocking") return 1;
            if (name == "stp-listening") return 2;
            if (name == "stp-learning") return 3;
            if (name == "stp-forwarding") return 4;
            if (name == "stp-broken") return 5;
            if (name == "stp-invalid") return 6;
            return -1;
        }
};

class StpPortBpdufilter : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf stp_port_bpdufilter_disable;
        static const ydk::Enum::YLeaf stp_port_bpdufilter_enable;
        static const ydk::Enum::YLeaf stp_port_bpdufilter_default;

        static int get_enum_value(const std::string & name) {
            if (name == "stp-port-bpdufilter-disable") return 0;
            if (name == "stp-port-bpdufilter-enable") return 1;
            if (name == "stp-port-bpdufilter-default") return 2;
            return -1;
        }
};

class StpPortGuard : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf stp_port_guard_default;
        static const ydk::Enum::YLeaf stp_port_guard_root;
        static const ydk::Enum::YLeaf stp_port_guard_loop;
        static const ydk::Enum::YLeaf stp_port_guard_none;

        static int get_enum_value(const std::string & name) {
            if (name == "stp-port-guard-default") return 0;
            if (name == "stp-port-guard-root") return 1;
            if (name == "stp-port-guard-loop") return 2;
            if (name == "stp-port-guard-none") return 3;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XE_SPANNING_TREE_OPER_ */

