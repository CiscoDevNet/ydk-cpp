#ifndef _CISCO_IOS_XR_SYSADMIN_WDMON_
#define _CISCO_IOS_XR_SYSADMIN_WDMON_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_sysadmin_wdmon {

class Wdmon : public ydk::Entity
{
    public:
        Wdmon();
        ~Wdmon();

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

        class Trace; //type: Wdmon::Trace

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_wdmon::Wdmon::Trace> > trace;
        
}; // Wdmon


class Wdmon::Trace : public ydk::Entity
{
    public:
        Trace();
        ~Trace();

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

        ydk::YLeaf buffer; //type: string
        class Location; //type: Wdmon::Trace::Location

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_wdmon::Wdmon::Trace::Location> > location;
        
}; // Wdmon::Trace


class Wdmon::Trace::Location : public ydk::Entity
{
    public:
        Location();
        ~Location();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf location_name; //type: string
        class AllOptions; //type: Wdmon::Trace::Location::AllOptions

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_wdmon::Wdmon::Trace::Location::AllOptions> > all_options;
        
}; // Wdmon::Trace::Location


class Wdmon::Trace::Location::AllOptions : public ydk::Entity
{
    public:
        AllOptions();
        ~AllOptions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf option; //type: string
        class TraceBlocks; //type: Wdmon::Trace::Location::AllOptions::TraceBlocks

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_wdmon::Wdmon::Trace::Location::AllOptions::TraceBlocks> > trace_blocks;
        
}; // Wdmon::Trace::Location::AllOptions


class Wdmon::Trace::Location::AllOptions::TraceBlocks : public ydk::Entity
{
    public:
        TraceBlocks();
        ~TraceBlocks();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: string

}; // Wdmon::Trace::Location::AllOptions::TraceBlocks

class WdmonInfo : public ydk::Entity
{
    public:
        WdmonInfo();
        ~WdmonInfo();

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

        class AllLocations; //type: WdmonInfo::AllLocations

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_wdmon::WdmonInfo::AllLocations> > all_locations;
        
}; // WdmonInfo


class WdmonInfo::AllLocations : public ydk::Entity
{
    public:
        AllLocations();
        ~AllLocations();

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

        ydk::YLeaf location; //type: string
        ydk::YLeaf start_timestamp; //type: string
        ydk::YLeaf hushd_timeout; //type: string
        ydk::YLeaf calv_restart_timeout; //type: uint32
        ydk::YLeaf hushd_wd_action_disable; //type: boolean
        ydk::YLeaf hushd_wd_action_timestamp; //type: string
        ydk::YLeaf hushd_capi_up; //type: boolean
        ydk::YLeaf hushd_pending_resp; //type: boolean
        ydk::YLeaf hushd_stop_punching; //type: boolean
        ydk::YLeaf hushd_capi_up_timestamp; //type: string
        ydk::YLeaf hushd_last_hb_resp; //type: string
        ydk::YLeaf hushd_num_capi_connects; //type: uint32
        ydk::YLeaf wds_action_disable; //type: boolean
        ydk::YLeaf wds_action_timestamp; //type: string
        ydk::YLeaf wds_restart_timeout; //type: uint32
        ydk::YLeaf wds_liveness_timeout; //type: uint32
        ydk::YLeaf wds_client_up; //type: boolean
        ydk::YLeaf wds_client_pid; //type: uint32
        ydk::YLeaf wds_client_up_timestamp; //type: string
        ydk::YLeaf wds_client_last_hb; //type: string
        ydk::YLeaf wds_client_num_connects; //type: uint32
        ydk::YLeaf wds_num_liveness_timeout; //type: uint32
        ydk::YLeaf wds_num_restart_timeout; //type: uint32
        ydk::YLeaf wds_client_reported_status; //type: string

}; // WdmonInfo::AllLocations


}
}

#endif /* _CISCO_IOS_XR_SYSADMIN_WDMON_ */

