#ifndef _CISCO_IOS_XR_SYSADMIN_ALARM_MGR_
#define _CISCO_IOS_XR_SYSADMIN_ALARM_MGR_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_sysadmin_alarm_mgr {

class AlarmMgr : public ydk::Entity
{
    public:
        AlarmMgr();
        ~AlarmMgr();

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

        class Trace; //type: AlarmMgr::Trace
        class Brief; //type: AlarmMgr::Brief
        class Detail; //type: AlarmMgr::Detail

        ydk::YList trace;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_alarm_mgr::AlarmMgr::Brief> brief;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_alarm_mgr::AlarmMgr::Detail> detail;
        
}; // AlarmMgr


class AlarmMgr::Trace : public ydk::Entity
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
        class Location; //type: AlarmMgr::Trace::Location

        ydk::YList location;
        
}; // AlarmMgr::Trace


class AlarmMgr::Trace::Location : public ydk::Entity
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
        class AllOptions; //type: AlarmMgr::Trace::Location::AllOptions

        ydk::YList all_options;
        
}; // AlarmMgr::Trace::Location


class AlarmMgr::Trace::Location::AllOptions : public ydk::Entity
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
        class TraceBlocks; //type: AlarmMgr::Trace::Location::AllOptions::TraceBlocks

        ydk::YList trace_blocks;
        
}; // AlarmMgr::Trace::Location::AllOptions


class AlarmMgr::Trace::Location::AllOptions::TraceBlocks : public ydk::Entity
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

}; // AlarmMgr::Trace::Location::AllOptions::TraceBlocks


class AlarmMgr::Brief : public ydk::Entity
{
    public:
        Brief();
        ~Brief();

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

        class Card; //type: AlarmMgr::Brief::Card
        class Rack; //type: AlarmMgr::Brief::Rack
        class System; //type: AlarmMgr::Brief::System

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_alarm_mgr::AlarmMgr::Brief::Card> card;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_alarm_mgr::AlarmMgr::Brief::Rack> rack;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_alarm_mgr::AlarmMgr::Brief::System> system;
        
}; // AlarmMgr::Brief


class AlarmMgr::Brief::Card : public ydk::Entity
{
    public:
        Card();
        ~Card();

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

        class Location; //type: AlarmMgr::Brief::Card::Location

        ydk::YList location;
        
}; // AlarmMgr::Brief::Card


class AlarmMgr::Brief::Card::Location : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf locations; //type: string
        class Active; //type: AlarmMgr::Brief::Card::Location::Active
        class History; //type: AlarmMgr::Brief::Card::Location::History
        class Suppressed; //type: AlarmMgr::Brief::Card::Location::Suppressed

        ydk::YList active;
        ydk::YList history;
        ydk::YList suppressed;
        
}; // AlarmMgr::Brief::Card::Location


class AlarmMgr::Brief::Card::Location::Active : public ydk::Entity
{
    public:
        Active();
        ~Active();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf aid; //type: string
        ydk::YLeaf eid; //type: string
        ydk::YLeaf tag; //type: string
        ydk::YLeaf module; //type: string
        ydk::YLeaf gen_location; //type: string
        ydk::YLeaf severity; //type: SeverityTd
        ydk::YLeaf group; //type: GroupTd
        ydk::YLeaf description; //type: string
        ydk::YLeaf set_time; //type: string

}; // AlarmMgr::Brief::Card::Location::Active


class AlarmMgr::Brief::Card::Location::History : public ydk::Entity
{
    public:
        History();
        ~History();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf aid; //type: string
        ydk::YLeaf eid; //type: string
        ydk::YLeaf tag; //type: string
        ydk::YLeaf module; //type: string
        ydk::YLeaf gen_location; //type: string
        ydk::YLeaf severity; //type: SeverityTd
        ydk::YLeaf group; //type: GroupTd
        ydk::YLeaf description; //type: string
        ydk::YLeaf set_time; //type: string
        ydk::YLeaf clear_time; //type: string

}; // AlarmMgr::Brief::Card::Location::History


class AlarmMgr::Brief::Card::Location::Suppressed : public ydk::Entity
{
    public:
        Suppressed();
        ~Suppressed();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf aid; //type: string
        ydk::YLeaf eid; //type: string
        ydk::YLeaf tag; //type: string
        ydk::YLeaf module; //type: string
        ydk::YLeaf gen_location; //type: string
        ydk::YLeaf severity; //type: SeverityTd
        ydk::YLeaf group; //type: GroupTd
        ydk::YLeaf description; //type: string
        ydk::YLeaf set_time; //type: string
        ydk::YLeaf suppressed_time; //type: string

}; // AlarmMgr::Brief::Card::Location::Suppressed


class AlarmMgr::Brief::Rack : public ydk::Entity
{
    public:
        Rack();
        ~Rack();

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

        class RackLocations; //type: AlarmMgr::Brief::Rack::RackLocations

        ydk::YList rack_locations;
        
}; // AlarmMgr::Brief::Rack


class AlarmMgr::Brief::Rack::RackLocations : public ydk::Entity
{
    public:
        RackLocations();
        ~RackLocations();

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

        ydk::YLeaf rackid; //type: uint32
        class Active; //type: AlarmMgr::Brief::Rack::RackLocations::Active
        class History; //type: AlarmMgr::Brief::Rack::RackLocations::History
        class Suppressed; //type: AlarmMgr::Brief::Rack::RackLocations::Suppressed

        ydk::YList active;
        ydk::YList history;
        ydk::YList suppressed;
        
}; // AlarmMgr::Brief::Rack::RackLocations


class AlarmMgr::Brief::Rack::RackLocations::Active : public ydk::Entity
{
    public:
        Active();
        ~Active();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf aid; //type: string
        ydk::YLeaf eid; //type: string
        ydk::YLeaf tag; //type: string
        ydk::YLeaf module; //type: string
        ydk::YLeaf gen_location; //type: string
        ydk::YLeaf severity; //type: SeverityTd
        ydk::YLeaf group; //type: GroupTd
        ydk::YLeaf description; //type: string
        ydk::YLeaf set_time; //type: string

}; // AlarmMgr::Brief::Rack::RackLocations::Active


class AlarmMgr::Brief::Rack::RackLocations::History : public ydk::Entity
{
    public:
        History();
        ~History();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf aid; //type: string
        ydk::YLeaf eid; //type: string
        ydk::YLeaf tag; //type: string
        ydk::YLeaf module; //type: string
        ydk::YLeaf gen_location; //type: string
        ydk::YLeaf severity; //type: SeverityTd
        ydk::YLeaf group; //type: GroupTd
        ydk::YLeaf description; //type: string
        ydk::YLeaf set_time; //type: string
        ydk::YLeaf clear_time; //type: string

}; // AlarmMgr::Brief::Rack::RackLocations::History


class AlarmMgr::Brief::Rack::RackLocations::Suppressed : public ydk::Entity
{
    public:
        Suppressed();
        ~Suppressed();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf aid; //type: string
        ydk::YLeaf eid; //type: string
        ydk::YLeaf tag; //type: string
        ydk::YLeaf module; //type: string
        ydk::YLeaf gen_location; //type: string
        ydk::YLeaf severity; //type: SeverityTd
        ydk::YLeaf group; //type: GroupTd
        ydk::YLeaf description; //type: string
        ydk::YLeaf set_time; //type: string
        ydk::YLeaf suppressed_time; //type: string

}; // AlarmMgr::Brief::Rack::RackLocations::Suppressed


class AlarmMgr::Brief::System : public ydk::Entity
{
    public:
        System();
        ~System();

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

        class Active; //type: AlarmMgr::Brief::System::Active
        class History; //type: AlarmMgr::Brief::System::History
        class Suppressed; //type: AlarmMgr::Brief::System::Suppressed

        ydk::YList active;
        ydk::YList history;
        ydk::YList suppressed;
        
}; // AlarmMgr::Brief::System


class AlarmMgr::Brief::System::Active : public ydk::Entity
{
    public:
        Active();
        ~Active();

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

        ydk::YLeaf aid; //type: string
        ydk::YLeaf eid; //type: string
        ydk::YLeaf tag; //type: string
        ydk::YLeaf module; //type: string
        ydk::YLeaf gen_location; //type: string
        ydk::YLeaf severity; //type: SeverityTd
        ydk::YLeaf group; //type: GroupTd
        ydk::YLeaf description; //type: string
        ydk::YLeaf set_time; //type: string

}; // AlarmMgr::Brief::System::Active


class AlarmMgr::Brief::System::History : public ydk::Entity
{
    public:
        History();
        ~History();

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

        ydk::YLeaf aid; //type: string
        ydk::YLeaf eid; //type: string
        ydk::YLeaf tag; //type: string
        ydk::YLeaf module; //type: string
        ydk::YLeaf gen_location; //type: string
        ydk::YLeaf severity; //type: SeverityTd
        ydk::YLeaf group; //type: GroupTd
        ydk::YLeaf description; //type: string
        ydk::YLeaf set_time; //type: string
        ydk::YLeaf clear_time; //type: string

}; // AlarmMgr::Brief::System::History


class AlarmMgr::Brief::System::Suppressed : public ydk::Entity
{
    public:
        Suppressed();
        ~Suppressed();

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

        ydk::YLeaf aid; //type: string
        ydk::YLeaf eid; //type: string
        ydk::YLeaf tag; //type: string
        ydk::YLeaf module; //type: string
        ydk::YLeaf gen_location; //type: string
        ydk::YLeaf severity; //type: SeverityTd
        ydk::YLeaf group; //type: GroupTd
        ydk::YLeaf description; //type: string
        ydk::YLeaf set_time; //type: string
        ydk::YLeaf suppressed_time; //type: string

}; // AlarmMgr::Brief::System::Suppressed


class AlarmMgr::Detail : public ydk::Entity
{
    public:
        Detail();
        ~Detail();

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

        class Card; //type: AlarmMgr::Detail::Card
        class Rack; //type: AlarmMgr::Detail::Rack
        class System; //type: AlarmMgr::Detail::System

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_alarm_mgr::AlarmMgr::Detail::Card> card;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_alarm_mgr::AlarmMgr::Detail::Rack> rack;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_alarm_mgr::AlarmMgr::Detail::System> system;
        
}; // AlarmMgr::Detail


class AlarmMgr::Detail::Card : public ydk::Entity
{
    public:
        Card();
        ~Card();

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

        class Location; //type: AlarmMgr::Detail::Card::Location

        ydk::YList location;
        
}; // AlarmMgr::Detail::Card


class AlarmMgr::Detail::Card::Location : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf locations; //type: string
        class Active; //type: AlarmMgr::Detail::Card::Location::Active
        class History; //type: AlarmMgr::Detail::Card::Location::History
        class Stats; //type: AlarmMgr::Detail::Card::Location::Stats
        class Clients; //type: AlarmMgr::Detail::Card::Location::Clients
        class Suppressed; //type: AlarmMgr::Detail::Card::Location::Suppressed

        ydk::YList active;
        ydk::YList history;
        ydk::YList stats;
        ydk::YList clients;
        ydk::YList suppressed;
        
}; // AlarmMgr::Detail::Card::Location


class AlarmMgr::Detail::Card::Location::Active : public ydk::Entity
{
    public:
        Active();
        ~Active();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf aid; //type: string
        ydk::YLeaf eid; //type: string
        ydk::YLeaf tag; //type: string
        ydk::YLeaf module; //type: string
        ydk::YLeaf gen_location; //type: string
        ydk::YLeaf severity; //type: SeverityTd
        ydk::YLeaf group; //type: GroupTd
        ydk::YLeaf description; //type: string
        ydk::YLeaf set_time; //type: string
        ydk::YLeaf state; //type: StatusTd
        ydk::YLeaf reporting_agent_id; //type: uint32
        ydk::YLeaf resynced; //type: uint32
        ydk::YLeaf detail_desc; //type: string
        ydk::YLeaf clear_time; //type: string

}; // AlarmMgr::Detail::Card::Location::Active


class AlarmMgr::Detail::Card::Location::History : public ydk::Entity
{
    public:
        History();
        ~History();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf aid; //type: string
        ydk::YLeaf eid; //type: string
        ydk::YLeaf tag; //type: string
        ydk::YLeaf module; //type: string
        ydk::YLeaf gen_location; //type: string
        ydk::YLeaf severity; //type: SeverityTd
        ydk::YLeaf group; //type: GroupTd
        ydk::YLeaf description; //type: string
        ydk::YLeaf set_time; //type: string
        ydk::YLeaf state; //type: StatusTd
        ydk::YLeaf reporting_agent_id; //type: uint32
        ydk::YLeaf resynced; //type: uint32
        ydk::YLeaf detail_desc; //type: string
        ydk::YLeaf clear_time; //type: string

}; // AlarmMgr::Detail::Card::Location::History


class AlarmMgr::Detail::Card::Location::Stats : public ydk::Entity
{
    public:
        Stats();
        ~Stats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf attime; //type: string
        ydk::YLeaf reported; //type: uint64
        ydk::YLeaf dropped; //type: uint64
        ydk::YLeaf bi_set; //type: uint64
        ydk::YLeaf bi_clear; //type: uint64
        ydk::YLeaf suppressed; //type: uint64
        ydk::YLeaf drop_inv_aid; //type: uint64
        ydk::YLeaf drop_no_mem; //type: uint64
        ydk::YLeaf drop_db_error; //type: uint64
        ydk::YLeaf drop_clear_no_set; //type: uint64
        ydk::YLeaf drop_dup; //type: uint64
        ydk::YLeaf cache_hit; //type: uint64
        ydk::YLeaf cache_miss; //type: uint64

}; // AlarmMgr::Detail::Card::Location::Stats


class AlarmMgr::Detail::Card::Location::Clients : public ydk::Entity
{
    public:
        Clients();
        ~Clients();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf agent_handle; //type: string
        ydk::YLeaf agent_name; //type: string
        ydk::YLeaf agent_id; //type: uint32
        ydk::YLeaf agent_location; //type: string
        ydk::YLeaf agent_state; //type: AgentStateTd
        ydk::YLeaf agent_type; //type: AgentTypeTd
        ydk::YLeaf agent_filter_disp; //type: boolean
        ydk::YLeaf agent_subs_id; //type: uint32
        ydk::YLeaf agent_filter_state; //type: StatusTd
        ydk::YLeaf agent_filter_severity; //type: SeverityTd
        ydk::YLeaf agent_filter_group; //type: GroupTd
        ydk::YLeaf agent_sdr_id; //type: uint32
        ydk::YLeaf agent_connect_count; //type: uint64
        ydk::YLeaf agent_connect_time; //type: string
        ydk::YLeaf agent_get_count; //type: uint64
        ydk::YLeaf agent_subscribe_count; //type: uint64
        ydk::YLeaf agent_report_count; //type: uint64

}; // AlarmMgr::Detail::Card::Location::Clients


class AlarmMgr::Detail::Card::Location::Suppressed : public ydk::Entity
{
    public:
        Suppressed();
        ~Suppressed();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf aid; //type: string
        ydk::YLeaf eid; //type: string
        ydk::YLeaf tag; //type: string
        ydk::YLeaf module; //type: string
        ydk::YLeaf gen_location; //type: string
        ydk::YLeaf severity; //type: SeverityTd
        ydk::YLeaf group; //type: GroupTd
        ydk::YLeaf description; //type: string
        ydk::YLeaf set_time; //type: string
        ydk::YLeaf state; //type: StatusTd
        ydk::YLeaf reporting_agent_id; //type: uint32
        ydk::YLeaf resynced; //type: uint32
        ydk::YLeaf detail_desc; //type: string
        ydk::YLeaf suppressed_time; //type: string

}; // AlarmMgr::Detail::Card::Location::Suppressed


class AlarmMgr::Detail::Rack : public ydk::Entity
{
    public:
        Rack();
        ~Rack();

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

        class RackLocations; //type: AlarmMgr::Detail::Rack::RackLocations

        ydk::YList rack_locations;
        
}; // AlarmMgr::Detail::Rack


class AlarmMgr::Detail::Rack::RackLocations : public ydk::Entity
{
    public:
        RackLocations();
        ~RackLocations();

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

        ydk::YLeaf rackid; //type: uint32
        class Active; //type: AlarmMgr::Detail::Rack::RackLocations::Active
        class History; //type: AlarmMgr::Detail::Rack::RackLocations::History
        class Stats; //type: AlarmMgr::Detail::Rack::RackLocations::Stats
        class Clients; //type: AlarmMgr::Detail::Rack::RackLocations::Clients
        class Suppressed; //type: AlarmMgr::Detail::Rack::RackLocations::Suppressed

        ydk::YList active;
        ydk::YList history;
        ydk::YList stats;
        ydk::YList clients;
        ydk::YList suppressed;
        
}; // AlarmMgr::Detail::Rack::RackLocations


class AlarmMgr::Detail::Rack::RackLocations::Active : public ydk::Entity
{
    public:
        Active();
        ~Active();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf aid; //type: string
        ydk::YLeaf eid; //type: string
        ydk::YLeaf tag; //type: string
        ydk::YLeaf module; //type: string
        ydk::YLeaf gen_location; //type: string
        ydk::YLeaf severity; //type: SeverityTd
        ydk::YLeaf group; //type: GroupTd
        ydk::YLeaf description; //type: string
        ydk::YLeaf set_time; //type: string
        ydk::YLeaf state; //type: StatusTd
        ydk::YLeaf reporting_agent_id; //type: uint32
        ydk::YLeaf resynced; //type: uint32
        ydk::YLeaf detail_desc; //type: string
        ydk::YLeaf clear_time; //type: string

}; // AlarmMgr::Detail::Rack::RackLocations::Active


class AlarmMgr::Detail::Rack::RackLocations::History : public ydk::Entity
{
    public:
        History();
        ~History();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf aid; //type: string
        ydk::YLeaf eid; //type: string
        ydk::YLeaf tag; //type: string
        ydk::YLeaf module; //type: string
        ydk::YLeaf gen_location; //type: string
        ydk::YLeaf severity; //type: SeverityTd
        ydk::YLeaf group; //type: GroupTd
        ydk::YLeaf description; //type: string
        ydk::YLeaf set_time; //type: string
        ydk::YLeaf state; //type: StatusTd
        ydk::YLeaf reporting_agent_id; //type: uint32
        ydk::YLeaf resynced; //type: uint32
        ydk::YLeaf detail_desc; //type: string
        ydk::YLeaf clear_time; //type: string

}; // AlarmMgr::Detail::Rack::RackLocations::History


class AlarmMgr::Detail::Rack::RackLocations::Stats : public ydk::Entity
{
    public:
        Stats();
        ~Stats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf attime; //type: string
        ydk::YLeaf reported; //type: uint64
        ydk::YLeaf dropped; //type: uint64
        ydk::YLeaf bi_set; //type: uint64
        ydk::YLeaf bi_clear; //type: uint64
        ydk::YLeaf suppressed; //type: uint64
        ydk::YLeaf drop_inv_aid; //type: uint64
        ydk::YLeaf drop_no_mem; //type: uint64
        ydk::YLeaf drop_db_error; //type: uint64
        ydk::YLeaf drop_clear_no_set; //type: uint64
        ydk::YLeaf drop_dup; //type: uint64
        ydk::YLeaf cache_hit; //type: uint64
        ydk::YLeaf cache_miss; //type: uint64

}; // AlarmMgr::Detail::Rack::RackLocations::Stats


class AlarmMgr::Detail::Rack::RackLocations::Clients : public ydk::Entity
{
    public:
        Clients();
        ~Clients();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf agent_handle; //type: string
        ydk::YLeaf agent_name; //type: string
        ydk::YLeaf agent_id; //type: uint32
        ydk::YLeaf agent_location; //type: string
        ydk::YLeaf agent_state; //type: AgentStateTd
        ydk::YLeaf agent_type; //type: AgentTypeTd
        ydk::YLeaf agent_filter_disp; //type: boolean
        ydk::YLeaf agent_subs_id; //type: uint32
        ydk::YLeaf agent_filter_state; //type: StatusTd
        ydk::YLeaf agent_filter_severity; //type: SeverityTd
        ydk::YLeaf agent_filter_group; //type: GroupTd
        ydk::YLeaf agent_sdr_id; //type: uint32
        ydk::YLeaf agent_connect_count; //type: uint64
        ydk::YLeaf agent_connect_time; //type: string
        ydk::YLeaf agent_get_count; //type: uint64
        ydk::YLeaf agent_subscribe_count; //type: uint64
        ydk::YLeaf agent_report_count; //type: uint64

}; // AlarmMgr::Detail::Rack::RackLocations::Clients


class AlarmMgr::Detail::Rack::RackLocations::Suppressed : public ydk::Entity
{
    public:
        Suppressed();
        ~Suppressed();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf aid; //type: string
        ydk::YLeaf eid; //type: string
        ydk::YLeaf tag; //type: string
        ydk::YLeaf module; //type: string
        ydk::YLeaf gen_location; //type: string
        ydk::YLeaf severity; //type: SeverityTd
        ydk::YLeaf group; //type: GroupTd
        ydk::YLeaf description; //type: string
        ydk::YLeaf set_time; //type: string
        ydk::YLeaf state; //type: StatusTd
        ydk::YLeaf reporting_agent_id; //type: uint32
        ydk::YLeaf resynced; //type: uint32
        ydk::YLeaf detail_desc; //type: string
        ydk::YLeaf suppressed_time; //type: string

}; // AlarmMgr::Detail::Rack::RackLocations::Suppressed


class AlarmMgr::Detail::System : public ydk::Entity
{
    public:
        System();
        ~System();

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

        class Active; //type: AlarmMgr::Detail::System::Active
        class History; //type: AlarmMgr::Detail::System::History
        class Stats; //type: AlarmMgr::Detail::System::Stats
        class Clients; //type: AlarmMgr::Detail::System::Clients
        class Suppressed; //type: AlarmMgr::Detail::System::Suppressed

        ydk::YList active;
        ydk::YList history;
        ydk::YList stats;
        ydk::YList clients;
        ydk::YList suppressed;
        
}; // AlarmMgr::Detail::System


class AlarmMgr::Detail::System::Active : public ydk::Entity
{
    public:
        Active();
        ~Active();

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

        ydk::YLeaf aid; //type: string
        ydk::YLeaf eid; //type: string
        ydk::YLeaf tag; //type: string
        ydk::YLeaf module; //type: string
        ydk::YLeaf gen_location; //type: string
        ydk::YLeaf severity; //type: SeverityTd
        ydk::YLeaf group; //type: GroupTd
        ydk::YLeaf description; //type: string
        ydk::YLeaf set_time; //type: string
        ydk::YLeaf state; //type: StatusTd
        ydk::YLeaf reporting_agent_id; //type: uint32
        ydk::YLeaf resynced; //type: uint32
        ydk::YLeaf detail_desc; //type: string
        ydk::YLeaf clear_time; //type: string

}; // AlarmMgr::Detail::System::Active


class AlarmMgr::Detail::System::History : public ydk::Entity
{
    public:
        History();
        ~History();

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

        ydk::YLeaf aid; //type: string
        ydk::YLeaf eid; //type: string
        ydk::YLeaf tag; //type: string
        ydk::YLeaf module; //type: string
        ydk::YLeaf gen_location; //type: string
        ydk::YLeaf severity; //type: SeverityTd
        ydk::YLeaf group; //type: GroupTd
        ydk::YLeaf description; //type: string
        ydk::YLeaf set_time; //type: string
        ydk::YLeaf state; //type: StatusTd
        ydk::YLeaf reporting_agent_id; //type: uint32
        ydk::YLeaf resynced; //type: uint32
        ydk::YLeaf detail_desc; //type: string
        ydk::YLeaf clear_time; //type: string

}; // AlarmMgr::Detail::System::History


class AlarmMgr::Detail::System::Stats : public ydk::Entity
{
    public:
        Stats();
        ~Stats();

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

        ydk::YLeaf attime; //type: string
        ydk::YLeaf reported; //type: uint64
        ydk::YLeaf dropped; //type: uint64
        ydk::YLeaf bi_set; //type: uint64
        ydk::YLeaf bi_clear; //type: uint64
        ydk::YLeaf suppressed; //type: uint64
        ydk::YLeaf drop_inv_aid; //type: uint64
        ydk::YLeaf drop_no_mem; //type: uint64
        ydk::YLeaf drop_db_error; //type: uint64
        ydk::YLeaf drop_clear_no_set; //type: uint64
        ydk::YLeaf drop_dup; //type: uint64
        ydk::YLeaf cache_hit; //type: uint64
        ydk::YLeaf cache_miss; //type: uint64

}; // AlarmMgr::Detail::System::Stats


class AlarmMgr::Detail::System::Clients : public ydk::Entity
{
    public:
        Clients();
        ~Clients();

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

        ydk::YLeaf agent_handle; //type: string
        ydk::YLeaf agent_name; //type: string
        ydk::YLeaf agent_id; //type: uint32
        ydk::YLeaf agent_location; //type: string
        ydk::YLeaf agent_state; //type: AgentStateTd
        ydk::YLeaf agent_type; //type: AgentTypeTd
        ydk::YLeaf agent_filter_disp; //type: boolean
        ydk::YLeaf agent_subs_id; //type: uint32
        ydk::YLeaf agent_filter_state; //type: StatusTd
        ydk::YLeaf agent_filter_severity; //type: SeverityTd
        ydk::YLeaf agent_filter_group; //type: GroupTd
        ydk::YLeaf agent_sdr_id; //type: uint32
        ydk::YLeaf agent_connect_count; //type: uint64
        ydk::YLeaf agent_connect_time; //type: string
        ydk::YLeaf agent_get_count; //type: uint64
        ydk::YLeaf agent_subscribe_count; //type: uint64
        ydk::YLeaf agent_report_count; //type: uint64

}; // AlarmMgr::Detail::System::Clients


class AlarmMgr::Detail::System::Suppressed : public ydk::Entity
{
    public:
        Suppressed();
        ~Suppressed();

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

        ydk::YLeaf aid; //type: string
        ydk::YLeaf eid; //type: string
        ydk::YLeaf tag; //type: string
        ydk::YLeaf module; //type: string
        ydk::YLeaf gen_location; //type: string
        ydk::YLeaf severity; //type: SeverityTd
        ydk::YLeaf group; //type: GroupTd
        ydk::YLeaf description; //type: string
        ydk::YLeaf set_time; //type: string
        ydk::YLeaf state; //type: StatusTd
        ydk::YLeaf reporting_agent_id; //type: uint32
        ydk::YLeaf resynced; //type: uint32
        ydk::YLeaf detail_desc; //type: string
        ydk::YLeaf suppressed_time; //type: string

}; // AlarmMgr::Detail::System::Suppressed

class GroupTd : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf environ;
        static const ydk::Enum::YLeaf ethernet;
        static const ydk::Enum::YLeaf fabric;
        static const ydk::Enum::YLeaf power;
        static const ydk::Enum::YLeaf software;
        static const ydk::Enum::YLeaf slice;
        static const ydk::Enum::YLeaf cpu;
        static const ydk::Enum::YLeaf controller;
        static const ydk::Enum::YLeaf sonet;
        static const ydk::Enum::YLeaf otn;
        static const ydk::Enum::YLeaf sdh_controller;
        static const ydk::Enum::YLeaf asic;
        static const ydk::Enum::YLeaf fpd_infra;
        static const ydk::Enum::YLeaf shelf;
        static const ydk::Enum::YLeaf mpa;
        static const ydk::Enum::YLeaf ots;
        static const ydk::Enum::YLeaf timing;
        static const ydk::Enum::YLeaf last;

};

class StatusTd : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf set;
        static const ydk::Enum::YLeaf clear;
        static const ydk::Enum::YLeaf suppress;

};

class AgentStateTd : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf start;
        static const ydk::Enum::YLeaf init;
        static const ydk::Enum::YLeaf connecting;
        static const ydk::Enum::YLeaf connected;
        static const ydk::Enum::YLeaf registered;
        static const ydk::Enum::YLeaf disconnected;

};

class AgentTypeTd : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf producer;
        static const ydk::Enum::YLeaf consumer;
        static const ydk::Enum::YLeaf subscriber;

};

class SeverityTd : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf not_reported;
        static const ydk::Enum::YLeaf not_alarmed;
        static const ydk::Enum::YLeaf minor;
        static const ydk::Enum::YLeaf major_;
        static const ydk::Enum::YLeaf critical;

};


}
}

#endif /* _CISCO_IOS_XR_SYSADMIN_ALARM_MGR_ */

