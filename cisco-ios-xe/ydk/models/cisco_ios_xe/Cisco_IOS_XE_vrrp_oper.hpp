#ifndef _CISCO_IOS_XE_VRRP_OPER_
#define _CISCO_IOS_XE_VRRP_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace Cisco_IOS_XE_vrrp_oper {

class VrrpOperData : public ydk::Entity
{
    public:
        VrrpOperData();
        ~VrrpOperData();

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

        class VrrpOperState; //type: VrrpOperData::VrrpOperState

        ydk::YList vrrp_oper_state;
        
}; // VrrpOperData


class VrrpOperData::VrrpOperState : public ydk::Entity
{
    public:
        VrrpOperState();
        ~VrrpOperState();

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

        ydk::YLeaf if_number; //type: uint32
        ydk::YLeaf group_id; //type: uint32
        ydk::YLeaf addr_type; //type: AddrType
        ydk::YLeaf version; //type: ProtoVersion
        ydk::YLeaf virtual_ip; //type: string
        ydk::YLeaf if_name; //type: string
        ydk::YLeaf vrrp_state; //type: VrrpProtoState
        ydk::YLeaf virtual_mac; //type: string
        ydk::YLeaf master_ip; //type: string
        ydk::YLeaf is_owner; //type: boolean
        ydk::YLeaf priority; //type: uint32
        ydk::YLeaf advertisement_timer; //type: uint32
        ydk::YLeaf master_down_timer; //type: uint32
        ydk::YLeaf skew_time; //type: uint32
        ydk::YLeaf preempt; //type: boolean
        ydk::YLeaf master_transitions; //type: uint32
        ydk::YLeaf new_master_reason; //type: MasterReason
        ydk::YLeaf last_state_change_time; //type: string
        ydk::YLeaf adv_interval_errors; //type: uint32
        ydk::YLeaf ip_ttl_errors; //type: uint32
        ydk::YLeaf rcvd_pri_zero_pak; //type: uint32
        ydk::YLeaf sent_pri_zero_pak; //type: uint32
        ydk::YLeaf rcvd_invalid_type_pak; //type: uint32
        ydk::YLeaf addr_list_errors; //type: uint32
        ydk::YLeaf pak_len_errors; //type: uint32
        ydk::YLeaf discontinuity_time; //type: string
        ydk::YLeaf advertisement_sent; //type: uint32
        ydk::YLeaf advertisement_rcvd; //type: uint32
        ydk::YLeaf omp_state; //type: OmpStateUpdown
        ydk::YLeafList secondary_vip_addresses; //type: list of  string
        class TrackList; //type: VrrpOperData::VrrpOperState::TrackList

        ydk::YList track_list;
        
}; // VrrpOperData::VrrpOperState


class VrrpOperData::VrrpOperState::TrackList : public ydk::Entity
{
    public:
        TrackList();
        ~TrackList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf track_name; //type: string
        ydk::YLeaf track_obj_state; //type: TrackState

}; // VrrpOperData::VrrpOperState::TrackList

class MasterReason : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf reason_not_master;
        static const ydk::Enum::YLeaf reason_priority;
        static const ydk::Enum::YLeaf reason_preempt;
        static const ydk::Enum::YLeaf reason_master_no_response;

        static int get_enum_value(const std::string & name) {
            if (name == "reason-not-master") return 0;
            if (name == "reason-priority") return 1;
            if (name == "reason-preempt") return 2;
            if (name == "reason-master-no-response") return 3;
            return -1;
        }
};

class VrrpProtoState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf proto_state_init;
        static const ydk::Enum::YLeaf proto_state_backup;
        static const ydk::Enum::YLeaf proto_state_master;
        static const ydk::Enum::YLeaf proto_state_recover;

        static int get_enum_value(const std::string & name) {
            if (name == "proto-state-init") return 1;
            if (name == "proto-state-backup") return 2;
            if (name == "proto-state-master") return 3;
            if (name == "proto-state-recover") return 4;
            return -1;
        }
};

class ProtoVersion : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf vrrp_v3;

        static int get_enum_value(const std::string & name) {
            if (name == "vrrp-v3") return 1;
            return -1;
        }
};

class TrackState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf vrrp_track_state_resolved;
        static const ydk::Enum::YLeaf vrrp_track_state_unresolved;

        static int get_enum_value(const std::string & name) {
            if (name == "vrrp-track-state-resolved") return 0;
            if (name == "vrrp-track-state-unresolved") return 1;
            return -1;
        }
};

class OmpStateUpdown : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf omp_up;
        static const ydk::Enum::YLeaf omp_down;

        static int get_enum_value(const std::string & name) {
            if (name == "omp-up") return 0;
            if (name == "omp-down") return 1;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XE_VRRP_OPER_ */

